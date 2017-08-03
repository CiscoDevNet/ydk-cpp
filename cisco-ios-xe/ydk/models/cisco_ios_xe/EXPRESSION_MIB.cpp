
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "EXPRESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace EXPRESSION_MIB {

ExpressionMib::ExpressionMib()
    :
    expexpressiontable(std::make_shared<ExpressionMib::Expexpressiontable>())
	,expnames(std::make_shared<ExpressionMib::Expnames>())
	,expnametable(std::make_shared<ExpressionMib::Expnametable>())
	,expobjecttable(std::make_shared<ExpressionMib::Expobjecttable>())
	,expresource(std::make_shared<ExpressionMib::Expresource>())
	,expvaluetable(std::make_shared<ExpressionMib::Expvaluetable>())
{
    expexpressiontable->parent = this;

    expnames->parent = this;

    expnametable->parent = this;

    expobjecttable->parent = this;

    expresource->parent = this;

    expvaluetable->parent = this;

    yang_name = "EXPRESSION-MIB"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::~ExpressionMib()
{
}

bool ExpressionMib::has_data() const
{
    return (expexpressiontable !=  nullptr && expexpressiontable->has_data())
	|| (expnames !=  nullptr && expnames->has_data())
	|| (expnametable !=  nullptr && expnametable->has_data())
	|| (expobjecttable !=  nullptr && expobjecttable->has_data())
	|| (expresource !=  nullptr && expresource->has_data())
	|| (expvaluetable !=  nullptr && expvaluetable->has_data());
}

bool ExpressionMib::has_operation() const
{
    return is_set(yfilter)
	|| (expexpressiontable !=  nullptr && expexpressiontable->has_operation())
	|| (expnames !=  nullptr && expnames->has_operation())
	|| (expnametable !=  nullptr && expnametable->has_operation())
	|| (expobjecttable !=  nullptr && expobjecttable->has_operation())
	|| (expresource !=  nullptr && expresource->has_operation())
	|| (expvaluetable !=  nullptr && expvaluetable->has_operation());
}

std::string ExpressionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB";

    return path_buffer.str();

}

const EntityPath ExpressionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ExpressionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expExpressionTable")
    {
        if(expexpressiontable == nullptr)
        {
            expexpressiontable = std::make_shared<ExpressionMib::Expexpressiontable>();
        }
        return expexpressiontable;
    }

    if(child_yang_name == "expNames")
    {
        if(expnames == nullptr)
        {
            expnames = std::make_shared<ExpressionMib::Expnames>();
        }
        return expnames;
    }

    if(child_yang_name == "expNameTable")
    {
        if(expnametable == nullptr)
        {
            expnametable = std::make_shared<ExpressionMib::Expnametable>();
        }
        return expnametable;
    }

    if(child_yang_name == "expObjectTable")
    {
        if(expobjecttable == nullptr)
        {
            expobjecttable = std::make_shared<ExpressionMib::Expobjecttable>();
        }
        return expobjecttable;
    }

    if(child_yang_name == "expResource")
    {
        if(expresource == nullptr)
        {
            expresource = std::make_shared<ExpressionMib::Expresource>();
        }
        return expresource;
    }

    if(child_yang_name == "expValueTable")
    {
        if(expvaluetable == nullptr)
        {
            expvaluetable = std::make_shared<ExpressionMib::Expvaluetable>();
        }
        return expvaluetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(expexpressiontable != nullptr)
    {
        children["expExpressionTable"] = expexpressiontable;
    }

    if(expnames != nullptr)
    {
        children["expNames"] = expnames;
    }

    if(expnametable != nullptr)
    {
        children["expNameTable"] = expnametable;
    }

    if(expobjecttable != nullptr)
    {
        children["expObjectTable"] = expobjecttable;
    }

    if(expresource != nullptr)
    {
        children["expResource"] = expresource;
    }

    if(expvaluetable != nullptr)
    {
        children["expValueTable"] = expvaluetable;
    }

    return children;
}

void ExpressionMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExpressionMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ExpressionMib::clone_ptr() const
{
    return std::make_shared<ExpressionMib>();
}

std::string ExpressionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ExpressionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ExpressionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ExpressionMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ExpressionMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionTable" || name == "expNames" || name == "expNameTable" || name == "expObjectTable" || name == "expResource" || name == "expValueTable")
        return true;
    return false;
}

ExpressionMib::Expresource::Expresource()
    :
    expresourcedeltaminimum{YType::int32, "expResourceDeltaMinimum"},
    expresourcedeltawildcardinstancemaximum{YType::uint32, "expResourceDeltaWildcardInstanceMaximum"},
    expresourcedeltawildcardinstanceresourcelacks{YType::uint32, "expResourceDeltaWildcardInstanceResourceLacks"},
    expresourcedeltawildcardinstances{YType::uint32, "expResourceDeltaWildcardInstances"},
    expresourcedeltawildcardinstanceshigh{YType::uint32, "expResourceDeltaWildcardInstancesHigh"}
{
    yang_name = "expResource"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::Expresource::~Expresource()
{
}

bool ExpressionMib::Expresource::has_data() const
{
    return expresourcedeltaminimum.is_set
	|| expresourcedeltawildcardinstancemaximum.is_set
	|| expresourcedeltawildcardinstanceresourcelacks.is_set
	|| expresourcedeltawildcardinstances.is_set
	|| expresourcedeltawildcardinstanceshigh.is_set;
}

bool ExpressionMib::Expresource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expresourcedeltaminimum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstancemaximum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceresourcelacks.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstances.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceshigh.yfilter);
}

std::string ExpressionMib::Expresource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expResource";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expresource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expresourcedeltaminimum.is_set || is_set(expresourcedeltaminimum.yfilter)) leaf_name_data.push_back(expresourcedeltaminimum.get_name_leafdata());
    if (expresourcedeltawildcardinstancemaximum.is_set || is_set(expresourcedeltawildcardinstancemaximum.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstancemaximum.get_name_leafdata());
    if (expresourcedeltawildcardinstanceresourcelacks.is_set || is_set(expresourcedeltawildcardinstanceresourcelacks.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstanceresourcelacks.get_name_leafdata());
    if (expresourcedeltawildcardinstances.is_set || is_set(expresourcedeltawildcardinstances.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstances.get_name_leafdata());
    if (expresourcedeltawildcardinstanceshigh.is_set || is_set(expresourcedeltawildcardinstanceshigh.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstanceshigh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expresource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expresource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExpressionMib::Expresource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expResourceDeltaWildcardInstanceResourceLacks")
    {
        expresourcedeltawildcardinstanceresourcelacks = value;
        expresourcedeltawildcardinstanceresourcelacks.value_namespace = name_space;
        expresourcedeltawildcardinstanceresourcelacks.value_namespace_prefix = name_space_prefix;
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
}

void ExpressionMib::Expresource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expResourceDeltaMinimum")
    {
        expresourcedeltaminimum.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstanceMaximum")
    {
        expresourcedeltawildcardinstancemaximum.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstanceResourceLacks")
    {
        expresourcedeltawildcardinstanceresourcelacks.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstances")
    {
        expresourcedeltawildcardinstances.yfilter = yfilter;
    }
    if(value_path == "expResourceDeltaWildcardInstancesHigh")
    {
        expresourcedeltawildcardinstanceshigh.yfilter = yfilter;
    }
}

bool ExpressionMib::Expresource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expResourceDeltaMinimum" || name == "expResourceDeltaWildcardInstanceMaximum" || name == "expResourceDeltaWildcardInstanceResourceLacks" || name == "expResourceDeltaWildcardInstances" || name == "expResourceDeltaWildcardInstancesHigh")
        return true;
    return false;
}

ExpressionMib::Expnames::Expnames()
    :
    expnamehighestindex{YType::uint32, "expNameHighestIndex"},
    expnamelastchange{YType::uint32, "expNameLastChange"}
{
    yang_name = "expNames"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::Expnames::~Expnames()
{
}

bool ExpressionMib::Expnames::has_data() const
{
    return expnamehighestindex.is_set
	|| expnamelastchange.is_set;
}

bool ExpressionMib::Expnames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expnamehighestindex.yfilter)
	|| ydk::is_set(expnamelastchange.yfilter);
}

std::string ExpressionMib::Expnames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expNames";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expnames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expnamehighestindex.is_set || is_set(expnamehighestindex.yfilter)) leaf_name_data.push_back(expnamehighestindex.get_name_leafdata());
    if (expnamelastchange.is_set || is_set(expnamelastchange.yfilter)) leaf_name_data.push_back(expnamelastchange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expnames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expnames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExpressionMib::Expnames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expNameHighestIndex")
    {
        expnamehighestindex = value;
        expnamehighestindex.value_namespace = name_space;
        expnamehighestindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expNameLastChange")
    {
        expnamelastchange = value;
        expnamelastchange.value_namespace = name_space;
        expnamelastchange.value_namespace_prefix = name_space_prefix;
    }
}

void ExpressionMib::Expnames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expNameHighestIndex")
    {
        expnamehighestindex.yfilter = yfilter;
    }
    if(value_path == "expNameLastChange")
    {
        expnamelastchange.yfilter = yfilter;
    }
}

bool ExpressionMib::Expnames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expNameHighestIndex" || name == "expNameLastChange")
        return true;
    return false;
}

ExpressionMib::Expnametable::Expnametable()
{
    yang_name = "expNameTable"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::Expnametable::~Expnametable()
{
}

bool ExpressionMib::Expnametable::has_data() const
{
    for (std::size_t index=0; index<expnameentry.size(); index++)
    {
        if(expnameentry[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expnametable::has_operation() const
{
    for (std::size_t index=0; index<expnameentry.size(); index++)
    {
        if(expnameentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ExpressionMib::Expnametable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expNameTable";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expnametable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expnametable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expNameEntry")
    {
        for(auto const & c : expnameentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expnametable::Expnameentry>();
        c->parent = this;
        expnameentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expnametable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expnameentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expnametable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExpressionMib::Expnametable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ExpressionMib::Expnametable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expNameEntry")
        return true;
    return false;
}

ExpressionMib::Expnametable::Expnameentry::Expnameentry()
    :
    expname{YType::str, "expName"},
    expexpressionindex{YType::uint32, "expExpressionIndex"},
    expnamestatus{YType::enumeration, "expNameStatus"}
{
    yang_name = "expNameEntry"; yang_parent_name = "expNameTable";
}

ExpressionMib::Expnametable::Expnameentry::~Expnameentry()
{
}

bool ExpressionMib::Expnametable::Expnameentry::has_data() const
{
    return expname.is_set
	|| expexpressionindex.is_set
	|| expnamestatus.is_set;
}

bool ExpressionMib::Expnametable::Expnameentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expname.yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expnamestatus.yfilter);
}

std::string ExpressionMib::Expnametable::Expnameentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expNameEntry" <<"[expName='" <<expname <<"']";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expnametable::Expnameentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expNameTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expname.is_set || is_set(expname.yfilter)) leaf_name_data.push_back(expname.get_name_leafdata());
    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expnamestatus.is_set || is_set(expnamestatus.yfilter)) leaf_name_data.push_back(expnamestatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expnametable::Expnameentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expnametable::Expnameentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExpressionMib::Expnametable::Expnameentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ExpressionMib::Expnametable::Expnameentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ExpressionMib::Expnametable::Expnameentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expName" || name == "expExpressionIndex" || name == "expNameStatus")
        return true;
    return false;
}

ExpressionMib::Expexpressiontable::Expexpressiontable()
{
    yang_name = "expExpressionTable"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::Expexpressiontable::~Expexpressiontable()
{
}

bool ExpressionMib::Expexpressiontable::has_data() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expexpressiontable::has_operation() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ExpressionMib::Expexpressiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionTable";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expexpressiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expexpressiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expExpressionEntry")
    {
        for(auto const & c : expexpressionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expexpressiontable::Expexpressionentry>();
        c->parent = this;
        expexpressionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expexpressiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expexpressionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expexpressiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExpressionMib::Expexpressiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ExpressionMib::Expexpressiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionEntry")
        return true;
    return false;
}

ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionentry()
    :
    expexpressionindex{YType::str, "expExpressionIndex"},
    expexpression{YType::str, "expExpression"},
    expexpressioncomment{YType::str, "expExpressionComment"},
    expexpressiondeltainterval{YType::int32, "expExpressionDeltaInterval"},
    expexpressionerror{YType::enumeration, "expExpressionError"},
    expexpressionerrorindex{YType::int32, "expExpressionErrorIndex"},
    expexpressionerrors{YType::uint32, "expExpressionErrors"},
    expexpressionerrortime{YType::uint32, "expExpressionErrorTime"},
    expexpressioninstance{YType::str, "expExpressionInstance"},
    expexpressionname{YType::str, "expExpressionName"},
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionprefix{YType::str, "expExpressionPrefix"},
    expexpressionvaluetype{YType::enumeration, "expExpressionValueType"}
{
    yang_name = "expExpressionEntry"; yang_parent_name = "expExpressionTable";
}

ExpressionMib::Expexpressiontable::Expexpressionentry::~Expexpressionentry()
{
}

bool ExpressionMib::Expexpressiontable::Expexpressionentry::has_data() const
{
    return expexpressionindex.is_set
	|| expexpression.is_set
	|| expexpressioncomment.is_set
	|| expexpressiondeltainterval.is_set
	|| expexpressionerror.is_set
	|| expexpressionerrorindex.is_set
	|| expexpressionerrors.is_set
	|| expexpressionerrortime.is_set
	|| expexpressioninstance.is_set
	|| expexpressionname.is_set
	|| expexpressionowner.is_set
	|| expexpressionprefix.is_set
	|| expexpressionvaluetype.is_set;
}

bool ExpressionMib::Expexpressiontable::Expexpressionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expexpression.yfilter)
	|| ydk::is_set(expexpressioncomment.yfilter)
	|| ydk::is_set(expexpressiondeltainterval.yfilter)
	|| ydk::is_set(expexpressionerror.yfilter)
	|| ydk::is_set(expexpressionerrorindex.yfilter)
	|| ydk::is_set(expexpressionerrors.yfilter)
	|| ydk::is_set(expexpressionerrortime.yfilter)
	|| ydk::is_set(expexpressioninstance.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionprefix.yfilter)
	|| ydk::is_set(expexpressionvaluetype.yfilter);
}

std::string ExpressionMib::Expexpressiontable::Expexpressionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionEntry" <<"[expExpressionIndex='" <<expexpressionindex <<"']";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expexpressiontable::Expexpressionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expExpressionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expexpression.is_set || is_set(expexpression.yfilter)) leaf_name_data.push_back(expexpression.get_name_leafdata());
    if (expexpressioncomment.is_set || is_set(expexpressioncomment.yfilter)) leaf_name_data.push_back(expexpressioncomment.get_name_leafdata());
    if (expexpressiondeltainterval.is_set || is_set(expexpressiondeltainterval.yfilter)) leaf_name_data.push_back(expexpressiondeltainterval.get_name_leafdata());
    if (expexpressionerror.is_set || is_set(expexpressionerror.yfilter)) leaf_name_data.push_back(expexpressionerror.get_name_leafdata());
    if (expexpressionerrorindex.is_set || is_set(expexpressionerrorindex.yfilter)) leaf_name_data.push_back(expexpressionerrorindex.get_name_leafdata());
    if (expexpressionerrors.is_set || is_set(expexpressionerrors.yfilter)) leaf_name_data.push_back(expexpressionerrors.get_name_leafdata());
    if (expexpressionerrortime.is_set || is_set(expexpressionerrortime.yfilter)) leaf_name_data.push_back(expexpressionerrortime.get_name_leafdata());
    if (expexpressioninstance.is_set || is_set(expexpressioninstance.yfilter)) leaf_name_data.push_back(expexpressioninstance.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionprefix.is_set || is_set(expexpressionprefix.yfilter)) leaf_name_data.push_back(expexpressionprefix.get_name_leafdata());
    if (expexpressionvaluetype.is_set || is_set(expexpressionvaluetype.yfilter)) leaf_name_data.push_back(expexpressionvaluetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expexpressiontable::Expexpressionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expexpressiontable::Expexpressionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExpressionMib::Expexpressiontable::Expexpressionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
        expexpressionindex.value_namespace = name_space;
        expexpressionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpression")
    {
        expexpression = value;
        expexpression.value_namespace = name_space;
        expexpression.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "expExpressionError")
    {
        expexpressionerror = value;
        expexpressionerror.value_namespace = name_space;
        expexpressionerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionErrorIndex")
    {
        expexpressionerrorindex = value;
        expexpressionerrorindex.value_namespace = name_space;
        expexpressionerrorindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "expExpressionInstance")
    {
        expexpressioninstance = value;
        expexpressioninstance.value_namespace = name_space;
        expexpressioninstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
        expexpressionname.value_namespace = name_space;
        expexpressionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
        expexpressionowner.value_namespace = name_space;
        expexpressionowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionPrefix")
    {
        expexpressionprefix = value;
        expexpressionprefix.value_namespace = name_space;
        expexpressionprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionValueType")
    {
        expexpressionvaluetype = value;
        expexpressionvaluetype.value_namespace = name_space;
        expexpressionvaluetype.value_namespace_prefix = name_space_prefix;
    }
}

void ExpressionMib::Expexpressiontable::Expexpressionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex.yfilter = yfilter;
    }
    if(value_path == "expExpression")
    {
        expexpression.yfilter = yfilter;
    }
    if(value_path == "expExpressionComment")
    {
        expexpressioncomment.yfilter = yfilter;
    }
    if(value_path == "expExpressionDeltaInterval")
    {
        expexpressiondeltainterval.yfilter = yfilter;
    }
    if(value_path == "expExpressionError")
    {
        expexpressionerror.yfilter = yfilter;
    }
    if(value_path == "expExpressionErrorIndex")
    {
        expexpressionerrorindex.yfilter = yfilter;
    }
    if(value_path == "expExpressionErrors")
    {
        expexpressionerrors.yfilter = yfilter;
    }
    if(value_path == "expExpressionErrorTime")
    {
        expexpressionerrortime.yfilter = yfilter;
    }
    if(value_path == "expExpressionInstance")
    {
        expexpressioninstance.yfilter = yfilter;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname.yfilter = yfilter;
    }
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner.yfilter = yfilter;
    }
    if(value_path == "expExpressionPrefix")
    {
        expexpressionprefix.yfilter = yfilter;
    }
    if(value_path == "expExpressionValueType")
    {
        expexpressionvaluetype.yfilter = yfilter;
    }
}

bool ExpressionMib::Expexpressiontable::Expexpressionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionIndex" || name == "expExpression" || name == "expExpressionComment" || name == "expExpressionDeltaInterval" || name == "expExpressionError" || name == "expExpressionErrorIndex" || name == "expExpressionErrors" || name == "expExpressionErrorTime" || name == "expExpressionInstance" || name == "expExpressionName" || name == "expExpressionOwner" || name == "expExpressionPrefix" || name == "expExpressionValueType")
        return true;
    return false;
}

ExpressionMib::Expobjecttable::Expobjecttable()
{
    yang_name = "expObjectTable"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::Expobjecttable::~Expobjecttable()
{
}

bool ExpressionMib::Expobjecttable::has_data() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expobjecttable::has_operation() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ExpressionMib::Expobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectTable";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expobjecttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expObjectEntry")
    {
        for(auto const & c : expobjectentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expobjecttable::Expobjectentry>();
        c->parent = this;
        expobjectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expobjectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expobjecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExpressionMib::Expobjecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ExpressionMib::Expobjecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expObjectEntry")
        return true;
    return false;
}

ExpressionMib::Expobjecttable::Expobjectentry::Expobjectentry()
    :
    expexpressionindex{YType::str, "expExpressionIndex"},
    expobjectindex{YType::uint32, "expObjectIndex"},
    expobjectconditional{YType::str, "expObjectConditional"},
    expobjectconditionalwildcard{YType::boolean, "expObjectConditionalWildcard"},
    expobjectdeltadiscontinuityid{YType::str, "expObjectDeltaDiscontinuityID"},
    expobjectdiscontinuityidtype{YType::enumeration, "expObjectDiscontinuityIDType"},
    expobjectdiscontinuityidwildcard{YType::boolean, "expObjectDiscontinuityIDWildcard"},
    expobjectid{YType::str, "expObjectID"},
    expobjectidwildcard{YType::boolean, "expObjectIDWildcard"},
    expobjectsampletype{YType::enumeration, "expObjectSampleType"},
    expobjectstatus{YType::enumeration, "expObjectStatus"}
{
    yang_name = "expObjectEntry"; yang_parent_name = "expObjectTable";
}

ExpressionMib::Expobjecttable::Expobjectentry::~Expobjectentry()
{
}

bool ExpressionMib::Expobjecttable::Expobjectentry::has_data() const
{
    return expexpressionindex.is_set
	|| expobjectindex.is_set
	|| expobjectconditional.is_set
	|| expobjectconditionalwildcard.is_set
	|| expobjectdeltadiscontinuityid.is_set
	|| expobjectdiscontinuityidtype.is_set
	|| expobjectdiscontinuityidwildcard.is_set
	|| expobjectid.is_set
	|| expobjectidwildcard.is_set
	|| expobjectsampletype.is_set
	|| expobjectstatus.is_set;
}

bool ExpressionMib::Expobjecttable::Expobjectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expobjectindex.yfilter)
	|| ydk::is_set(expobjectconditional.yfilter)
	|| ydk::is_set(expobjectconditionalwildcard.yfilter)
	|| ydk::is_set(expobjectdeltadiscontinuityid.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidtype.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidwildcard.yfilter)
	|| ydk::is_set(expobjectid.yfilter)
	|| ydk::is_set(expobjectidwildcard.yfilter)
	|| ydk::is_set(expobjectsampletype.yfilter)
	|| ydk::is_set(expobjectstatus.yfilter);
}

std::string ExpressionMib::Expobjecttable::Expobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectEntry" <<"[expExpressionIndex='" <<expexpressionindex <<"']" <<"[expObjectIndex='" <<expobjectindex <<"']";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expobjecttable::Expobjectentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expObjectTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expobjectindex.is_set || is_set(expobjectindex.yfilter)) leaf_name_data.push_back(expobjectindex.get_name_leafdata());
    if (expobjectconditional.is_set || is_set(expobjectconditional.yfilter)) leaf_name_data.push_back(expobjectconditional.get_name_leafdata());
    if (expobjectconditionalwildcard.is_set || is_set(expobjectconditionalwildcard.yfilter)) leaf_name_data.push_back(expobjectconditionalwildcard.get_name_leafdata());
    if (expobjectdeltadiscontinuityid.is_set || is_set(expobjectdeltadiscontinuityid.yfilter)) leaf_name_data.push_back(expobjectdeltadiscontinuityid.get_name_leafdata());
    if (expobjectdiscontinuityidtype.is_set || is_set(expobjectdiscontinuityidtype.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidtype.get_name_leafdata());
    if (expobjectdiscontinuityidwildcard.is_set || is_set(expobjectdiscontinuityidwildcard.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidwildcard.get_name_leafdata());
    if (expobjectid.is_set || is_set(expobjectid.yfilter)) leaf_name_data.push_back(expobjectid.get_name_leafdata());
    if (expobjectidwildcard.is_set || is_set(expobjectidwildcard.yfilter)) leaf_name_data.push_back(expobjectidwildcard.get_name_leafdata());
    if (expobjectsampletype.is_set || is_set(expobjectsampletype.yfilter)) leaf_name_data.push_back(expobjectsampletype.get_name_leafdata());
    if (expobjectstatus.is_set || is_set(expobjectstatus.yfilter)) leaf_name_data.push_back(expobjectstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expobjecttable::Expobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expobjecttable::Expobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExpressionMib::Expobjecttable::Expobjectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expObjectDeltaDiscontinuityID")
    {
        expobjectdeltadiscontinuityid = value;
        expobjectdeltadiscontinuityid.value_namespace = name_space;
        expobjectdeltadiscontinuityid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectDiscontinuityIDType")
    {
        expobjectdiscontinuityidtype = value;
        expobjectdiscontinuityidtype.value_namespace = name_space;
        expobjectdiscontinuityidtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expObjectDiscontinuityIDWildcard")
    {
        expobjectdiscontinuityidwildcard = value;
        expobjectdiscontinuityidwildcard.value_namespace = name_space;
        expobjectdiscontinuityidwildcard.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "expObjectStatus")
    {
        expobjectstatus = value;
        expobjectstatus.value_namespace = name_space;
        expobjectstatus.value_namespace_prefix = name_space_prefix;
    }
}

void ExpressionMib::Expobjecttable::Expobjectentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex.yfilter = yfilter;
    }
    if(value_path == "expObjectIndex")
    {
        expobjectindex.yfilter = yfilter;
    }
    if(value_path == "expObjectConditional")
    {
        expobjectconditional.yfilter = yfilter;
    }
    if(value_path == "expObjectConditionalWildcard")
    {
        expobjectconditionalwildcard.yfilter = yfilter;
    }
    if(value_path == "expObjectDeltaDiscontinuityID")
    {
        expobjectdeltadiscontinuityid.yfilter = yfilter;
    }
    if(value_path == "expObjectDiscontinuityIDType")
    {
        expobjectdiscontinuityidtype.yfilter = yfilter;
    }
    if(value_path == "expObjectDiscontinuityIDWildcard")
    {
        expobjectdiscontinuityidwildcard.yfilter = yfilter;
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
    if(value_path == "expObjectStatus")
    {
        expobjectstatus.yfilter = yfilter;
    }
}

bool ExpressionMib::Expobjecttable::Expobjectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionIndex" || name == "expObjectIndex" || name == "expObjectConditional" || name == "expObjectConditionalWildcard" || name == "expObjectDeltaDiscontinuityID" || name == "expObjectDiscontinuityIDType" || name == "expObjectDiscontinuityIDWildcard" || name == "expObjectID" || name == "expObjectIDWildcard" || name == "expObjectSampleType" || name == "expObjectStatus")
        return true;
    return false;
}

ExpressionMib::Expvaluetable::Expvaluetable()
{
    yang_name = "expValueTable"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::Expvaluetable::~Expvaluetable()
{
}

bool ExpressionMib::Expvaluetable::has_data() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expvaluetable::has_operation() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ExpressionMib::Expvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueTable";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expvaluetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expValueEntry")
    {
        for(auto const & c : expvalueentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expvaluetable::Expvalueentry>();
        c->parent = this;
        expvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expvalueentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExpressionMib::Expvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ExpressionMib::Expvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expValueEntry")
        return true;
    return false;
}

ExpressionMib::Expvaluetable::Expvalueentry::Expvalueentry()
    :
    expexpressionindex{YType::str, "expExpressionIndex"},
    expvalueinstance{YType::str, "expValueInstance"},
    expvaluecounter32val{YType::uint32, "expValueCounter32Val"},
    expvaluecounter64val{YType::uint64, "expValueCounter64Val"},
    expvalueinteger32val{YType::int32, "expValueInteger32Val"},
    expvalueipaddressval{YType::str, "expValueIpAddressVal"},
    expvalueoctetstringval{YType::str, "expValueOctetStringVal"},
    expvalueoidval{YType::str, "expValueOidVal"},
    expvalueunsigned32val{YType::uint32, "expValueUnsigned32Val"}
{
    yang_name = "expValueEntry"; yang_parent_name = "expValueTable";
}

ExpressionMib::Expvaluetable::Expvalueentry::~Expvalueentry()
{
}

bool ExpressionMib::Expvaluetable::Expvalueentry::has_data() const
{
    return expexpressionindex.is_set
	|| expvalueinstance.is_set
	|| expvaluecounter32val.is_set
	|| expvaluecounter64val.is_set
	|| expvalueinteger32val.is_set
	|| expvalueipaddressval.is_set
	|| expvalueoctetstringval.is_set
	|| expvalueoidval.is_set
	|| expvalueunsigned32val.is_set;
}

bool ExpressionMib::Expvaluetable::Expvalueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionindex.yfilter)
	|| ydk::is_set(expvalueinstance.yfilter)
	|| ydk::is_set(expvaluecounter32val.yfilter)
	|| ydk::is_set(expvaluecounter64val.yfilter)
	|| ydk::is_set(expvalueinteger32val.yfilter)
	|| ydk::is_set(expvalueipaddressval.yfilter)
	|| ydk::is_set(expvalueoctetstringval.yfilter)
	|| ydk::is_set(expvalueoidval.yfilter)
	|| ydk::is_set(expvalueunsigned32val.yfilter);
}

std::string ExpressionMib::Expvaluetable::Expvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueEntry" <<"[expExpressionIndex='" <<expexpressionindex <<"']" <<"[expValueInstance='" <<expvalueinstance <<"']";

    return path_buffer.str();

}

const EntityPath ExpressionMib::Expvaluetable::Expvalueentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EXPRESSION-MIB:EXPRESSION-MIB/expValueTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionindex.is_set || is_set(expexpressionindex.yfilter)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expvalueinstance.is_set || is_set(expvalueinstance.yfilter)) leaf_name_data.push_back(expvalueinstance.get_name_leafdata());
    if (expvaluecounter32val.is_set || is_set(expvaluecounter32val.yfilter)) leaf_name_data.push_back(expvaluecounter32val.get_name_leafdata());
    if (expvaluecounter64val.is_set || is_set(expvaluecounter64val.yfilter)) leaf_name_data.push_back(expvaluecounter64val.get_name_leafdata());
    if (expvalueinteger32val.is_set || is_set(expvalueinteger32val.yfilter)) leaf_name_data.push_back(expvalueinteger32val.get_name_leafdata());
    if (expvalueipaddressval.is_set || is_set(expvalueipaddressval.yfilter)) leaf_name_data.push_back(expvalueipaddressval.get_name_leafdata());
    if (expvalueoctetstringval.is_set || is_set(expvalueoctetstringval.yfilter)) leaf_name_data.push_back(expvalueoctetstringval.get_name_leafdata());
    if (expvalueoidval.is_set || is_set(expvalueoidval.yfilter)) leaf_name_data.push_back(expvalueoidval.get_name_leafdata());
    if (expvalueunsigned32val.is_set || is_set(expvalueunsigned32val.yfilter)) leaf_name_data.push_back(expvalueunsigned32val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExpressionMib::Expvaluetable::Expvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expvaluetable::Expvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExpressionMib::Expvaluetable::Expvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expValueCounter64Val")
    {
        expvaluecounter64val = value;
        expvaluecounter64val.value_namespace = name_space;
        expvaluecounter64val.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val = value;
        expvalueunsigned32val.value_namespace = name_space;
        expvalueunsigned32val.value_namespace_prefix = name_space_prefix;
    }
}

void ExpressionMib::Expvaluetable::Expvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "expValueCounter64Val")
    {
        expvaluecounter64val.yfilter = yfilter;
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
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val.yfilter = yfilter;
    }
}

bool ExpressionMib::Expvaluetable::Expvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionIndex" || name == "expValueInstance" || name == "expValueCounter32Val" || name == "expValueCounter64Val" || name == "expValueInteger32Val" || name == "expValueIpAddressVal" || name == "expValueOctetStringVal" || name == "expValueOidVal" || name == "expValueUnsigned32Val")
        return true;
    return false;
}

const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter32 {1, "counter32"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::unsignedOrGauge32 {2, "unsignedOrGauge32"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::timeTicks {3, "timeTicks"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::integer32 {4, "integer32"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::ipAddress {5, "ipAddress"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::octetString {6, "octetString"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::objectId {7, "objectId"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter64 {8, "counter64"};

const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::invalidSyntax {1, "invalidSyntax"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::undefinedObjectIndex {2, "undefinedObjectIndex"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::unrecognizedOperator {3, "unrecognizedOperator"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::unrecognizedFunction {4, "unrecognizedFunction"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::invalidOperandType {5, "invalidOperandType"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::unmatchedParenthesis {6, "unmatchedParenthesis"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::tooManyWildcardValues {7, "tooManyWildcardValues"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::recursion {8, "recursion"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::deltaTooShort {9, "deltaTooShort"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::resourceUnavailable {10, "resourceUnavailable"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionerror::divideByZero {11, "divideByZero"};

const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::Expobjectsampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::Expobjectsampletype::deltaValue {2, "deltaValue"};

const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeTicks {1, "timeTicks"};
const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeStamp {2, "timeStamp"};


}
}

