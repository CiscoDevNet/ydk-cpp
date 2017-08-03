
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DISMAN_EXPRESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DISMAN_EXPRESSION_MIB {

DismanExpressionMib::DismanExpressionMib()
    :
    experrortable(std::make_shared<DismanExpressionMib::Experrortable>())
	,expexpressiontable(std::make_shared<DismanExpressionMib::Expexpressiontable>())
	,expobjecttable(std::make_shared<DismanExpressionMib::Expobjecttable>())
	,expresource(std::make_shared<DismanExpressionMib::Expresource>())
	,expvaluetable(std::make_shared<DismanExpressionMib::Expvaluetable>())
{
    experrortable->parent = this;

    expexpressiontable->parent = this;

    expobjecttable->parent = this;

    expresource->parent = this;

    expvaluetable->parent = this;

    yang_name = "DISMAN-EXPRESSION-MIB"; yang_parent_name = "DISMAN-EXPRESSION-MIB";
}

DismanExpressionMib::~DismanExpressionMib()
{
}

bool DismanExpressionMib::has_data() const
{
    return (experrortable !=  nullptr && experrortable->has_data())
	|| (expexpressiontable !=  nullptr && expexpressiontable->has_data())
	|| (expobjecttable !=  nullptr && expobjecttable->has_data())
	|| (expresource !=  nullptr && expresource->has_data())
	|| (expvaluetable !=  nullptr && expvaluetable->has_data());
}

bool DismanExpressionMib::has_operation() const
{
    return is_set(yfilter)
	|| (experrortable !=  nullptr && experrortable->has_operation())
	|| (expexpressiontable !=  nullptr && expexpressiontable->has_operation())
	|| (expobjecttable !=  nullptr && expobjecttable->has_operation())
	|| (expresource !=  nullptr && expresource->has_operation())
	|| (expvaluetable !=  nullptr && expvaluetable->has_operation());
}

std::string DismanExpressionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DismanExpressionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expErrorTable")
    {
        if(experrortable == nullptr)
        {
            experrortable = std::make_shared<DismanExpressionMib::Experrortable>();
        }
        return experrortable;
    }

    if(child_yang_name == "expExpressionTable")
    {
        if(expexpressiontable == nullptr)
        {
            expexpressiontable = std::make_shared<DismanExpressionMib::Expexpressiontable>();
        }
        return expexpressiontable;
    }

    if(child_yang_name == "expObjectTable")
    {
        if(expobjecttable == nullptr)
        {
            expobjecttable = std::make_shared<DismanExpressionMib::Expobjecttable>();
        }
        return expobjecttable;
    }

    if(child_yang_name == "expResource")
    {
        if(expresource == nullptr)
        {
            expresource = std::make_shared<DismanExpressionMib::Expresource>();
        }
        return expresource;
    }

    if(child_yang_name == "expValueTable")
    {
        if(expvaluetable == nullptr)
        {
            expvaluetable = std::make_shared<DismanExpressionMib::Expvaluetable>();
        }
        return expvaluetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experrortable != nullptr)
    {
        children["expErrorTable"] = experrortable;
    }

    if(expexpressiontable != nullptr)
    {
        children["expExpressionTable"] = expexpressiontable;
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

void DismanExpressionMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanExpressionMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DismanExpressionMib::clone_ptr() const
{
    return std::make_shared<DismanExpressionMib>();
}

std::string DismanExpressionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DismanExpressionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DismanExpressionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DismanExpressionMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DismanExpressionMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expErrorTable" || name == "expExpressionTable" || name == "expObjectTable" || name == "expResource" || name == "expValueTable")
        return true;
    return false;
}

DismanExpressionMib::Expresource::Expresource()
    :
    expresourcedeltaminimum{YType::int32, "expResourceDeltaMinimum"},
    expresourcedeltawildcardinstancemaximum{YType::uint32, "expResourceDeltaWildcardInstanceMaximum"},
    expresourcedeltawildcardinstanceresourcelacks{YType::uint32, "expResourceDeltaWildcardInstanceResourceLacks"},
    expresourcedeltawildcardinstances{YType::uint32, "expResourceDeltaWildcardInstances"},
    expresourcedeltawildcardinstanceshigh{YType::uint32, "expResourceDeltaWildcardInstancesHigh"}
{
    yang_name = "expResource"; yang_parent_name = "DISMAN-EXPRESSION-MIB";
}

DismanExpressionMib::Expresource::~Expresource()
{
}

bool DismanExpressionMib::Expresource::has_data() const
{
    return expresourcedeltaminimum.is_set
	|| expresourcedeltawildcardinstancemaximum.is_set
	|| expresourcedeltawildcardinstanceresourcelacks.is_set
	|| expresourcedeltawildcardinstances.is_set
	|| expresourcedeltawildcardinstanceshigh.is_set;
}

bool DismanExpressionMib::Expresource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expresourcedeltaminimum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstancemaximum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceresourcelacks.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstances.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceshigh.yfilter);
}

std::string DismanExpressionMib::Expresource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expResource";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Expresource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
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

std::shared_ptr<Entity> DismanExpressionMib::Expresource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expresource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanExpressionMib::Expresource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void DismanExpressionMib::Expresource::set_filter(const std::string & value_path, YFilter yfilter)
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

bool DismanExpressionMib::Expresource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expResourceDeltaMinimum" || name == "expResourceDeltaWildcardInstanceMaximum" || name == "expResourceDeltaWildcardInstanceResourceLacks" || name == "expResourceDeltaWildcardInstances" || name == "expResourceDeltaWildcardInstancesHigh")
        return true;
    return false;
}

DismanExpressionMib::Expexpressiontable::Expexpressiontable()
{
    yang_name = "expExpressionTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB";
}

DismanExpressionMib::Expexpressiontable::~Expexpressiontable()
{
}

bool DismanExpressionMib::Expexpressiontable::has_data() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Expexpressiontable::has_operation() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DismanExpressionMib::Expexpressiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionTable";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Expexpressiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Expexpressiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DismanExpressionMib::Expexpressiontable::Expexpressionentry>();
        c->parent = this;
        expexpressionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expexpressiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expexpressionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Expexpressiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanExpressionMib::Expexpressiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanExpressionMib::Expexpressiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionEntry")
        return true;
    return false;
}

DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    expexpression{YType::str, "expExpression"},
    expexpressioncomment{YType::str, "expExpressionComment"},
    expexpressiondeltainterval{YType::int32, "expExpressionDeltaInterval"},
    expexpressionentrystatus{YType::enumeration, "expExpressionEntryStatus"},
    expexpressionerrors{YType::uint32, "expExpressionErrors"},
    expexpressionprefix{YType::str, "expExpressionPrefix"},
    expexpressionvaluetype{YType::enumeration, "expExpressionValueType"}
{
    yang_name = "expExpressionEntry"; yang_parent_name = "expExpressionTable";
}

DismanExpressionMib::Expexpressiontable::Expexpressionentry::~Expexpressionentry()
{
}

bool DismanExpressionMib::Expexpressiontable::Expexpressionentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| expexpression.is_set
	|| expexpressioncomment.is_set
	|| expexpressiondeltainterval.is_set
	|| expexpressionentrystatus.is_set
	|| expexpressionerrors.is_set
	|| expexpressionprefix.is_set
	|| expexpressionvaluetype.is_set;
}

bool DismanExpressionMib::Expexpressiontable::Expexpressionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expexpression.yfilter)
	|| ydk::is_set(expexpressioncomment.yfilter)
	|| ydk::is_set(expexpressiondeltainterval.yfilter)
	|| ydk::is_set(expexpressionentrystatus.yfilter)
	|| ydk::is_set(expexpressionerrors.yfilter)
	|| ydk::is_set(expexpressionprefix.yfilter)
	|| ydk::is_set(expexpressionvaluetype.yfilter);
}

std::string DismanExpressionMib::Expexpressiontable::Expexpressionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Expexpressiontable::Expexpressionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expExpressionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expexpression.is_set || is_set(expexpression.yfilter)) leaf_name_data.push_back(expexpression.get_name_leafdata());
    if (expexpressioncomment.is_set || is_set(expexpressioncomment.yfilter)) leaf_name_data.push_back(expexpressioncomment.get_name_leafdata());
    if (expexpressiondeltainterval.is_set || is_set(expexpressiondeltainterval.yfilter)) leaf_name_data.push_back(expexpressiondeltainterval.get_name_leafdata());
    if (expexpressionentrystatus.is_set || is_set(expexpressionentrystatus.yfilter)) leaf_name_data.push_back(expexpressionentrystatus.get_name_leafdata());
    if (expexpressionerrors.is_set || is_set(expexpressionerrors.yfilter)) leaf_name_data.push_back(expexpressionerrors.get_name_leafdata());
    if (expexpressionprefix.is_set || is_set(expexpressionprefix.yfilter)) leaf_name_data.push_back(expexpressionprefix.get_name_leafdata());
    if (expexpressionvaluetype.is_set || is_set(expexpressionvaluetype.yfilter)) leaf_name_data.push_back(expexpressionvaluetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Expexpressiontable::Expexpressionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expexpressiontable::Expexpressionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanExpressionMib::Expexpressiontable::Expexpressionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
        expexpressionowner.value_namespace = name_space;
        expexpressionowner.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "expExpressionEntryStatus")
    {
        expexpressionentrystatus = value;
        expexpressionentrystatus.value_namespace = name_space;
        expexpressionentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionErrors")
    {
        expexpressionerrors = value;
        expexpressionerrors.value_namespace = name_space;
        expexpressionerrors.value_namespace_prefix = name_space_prefix;
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

void DismanExpressionMib::Expexpressiontable::Expexpressionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner.yfilter = yfilter;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname.yfilter = yfilter;
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
    if(value_path == "expExpressionEntryStatus")
    {
        expexpressionentrystatus.yfilter = yfilter;
    }
    if(value_path == "expExpressionErrors")
    {
        expexpressionerrors.yfilter = yfilter;
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

bool DismanExpressionMib::Expexpressiontable::Expexpressionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expExpression" || name == "expExpressionComment" || name == "expExpressionDeltaInterval" || name == "expExpressionEntryStatus" || name == "expExpressionErrors" || name == "expExpressionPrefix" || name == "expExpressionValueType")
        return true;
    return false;
}

DismanExpressionMib::Experrortable::Experrortable()
{
    yang_name = "expErrorTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB";
}

DismanExpressionMib::Experrortable::~Experrortable()
{
}

bool DismanExpressionMib::Experrortable::has_data() const
{
    for (std::size_t index=0; index<experrorentry.size(); index++)
    {
        if(experrorentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Experrortable::has_operation() const
{
    for (std::size_t index=0; index<experrorentry.size(); index++)
    {
        if(experrorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DismanExpressionMib::Experrortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expErrorTable";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Experrortable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Experrortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expErrorEntry")
    {
        for(auto const & c : experrorentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanExpressionMib::Experrortable::Experrorentry>();
        c->parent = this;
        experrorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Experrortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : experrorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Experrortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanExpressionMib::Experrortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanExpressionMib::Experrortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expErrorEntry")
        return true;
    return false;
}

DismanExpressionMib::Experrortable::Experrorentry::Experrorentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    experrorcode{YType::enumeration, "expErrorCode"},
    experrorindex{YType::int32, "expErrorIndex"},
    experrorinstance{YType::str, "expErrorInstance"},
    experrortime{YType::uint32, "expErrorTime"}
{
    yang_name = "expErrorEntry"; yang_parent_name = "expErrorTable";
}

DismanExpressionMib::Experrortable::Experrorentry::~Experrorentry()
{
}

bool DismanExpressionMib::Experrortable::Experrorentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| experrorcode.is_set
	|| experrorindex.is_set
	|| experrorinstance.is_set
	|| experrortime.is_set;
}

bool DismanExpressionMib::Experrortable::Experrorentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(experrorcode.yfilter)
	|| ydk::is_set(experrorindex.yfilter)
	|| ydk::is_set(experrorinstance.yfilter)
	|| ydk::is_set(experrortime.yfilter);
}

std::string DismanExpressionMib::Experrortable::Experrorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expErrorEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Experrortable::Experrorentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expErrorTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (experrorcode.is_set || is_set(experrorcode.yfilter)) leaf_name_data.push_back(experrorcode.get_name_leafdata());
    if (experrorindex.is_set || is_set(experrorindex.yfilter)) leaf_name_data.push_back(experrorindex.get_name_leafdata());
    if (experrorinstance.is_set || is_set(experrorinstance.yfilter)) leaf_name_data.push_back(experrorinstance.get_name_leafdata());
    if (experrortime.is_set || is_set(experrortime.yfilter)) leaf_name_data.push_back(experrortime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Experrortable::Experrorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Experrortable::Experrorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanExpressionMib::Experrortable::Experrorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
        expexpressionowner.value_namespace = name_space;
        expexpressionowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
        expexpressionname.value_namespace = name_space;
        expexpressionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expErrorCode")
    {
        experrorcode = value;
        experrorcode.value_namespace = name_space;
        experrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expErrorIndex")
    {
        experrorindex = value;
        experrorindex.value_namespace = name_space;
        experrorindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expErrorInstance")
    {
        experrorinstance = value;
        experrorinstance.value_namespace = name_space;
        experrorinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expErrorTime")
    {
        experrortime = value;
        experrortime.value_namespace = name_space;
        experrortime.value_namespace_prefix = name_space_prefix;
    }
}

void DismanExpressionMib::Experrortable::Experrorentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner.yfilter = yfilter;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname.yfilter = yfilter;
    }
    if(value_path == "expErrorCode")
    {
        experrorcode.yfilter = yfilter;
    }
    if(value_path == "expErrorIndex")
    {
        experrorindex.yfilter = yfilter;
    }
    if(value_path == "expErrorInstance")
    {
        experrorinstance.yfilter = yfilter;
    }
    if(value_path == "expErrorTime")
    {
        experrortime.yfilter = yfilter;
    }
}

bool DismanExpressionMib::Experrortable::Experrorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expErrorCode" || name == "expErrorIndex" || name == "expErrorInstance" || name == "expErrorTime")
        return true;
    return false;
}

DismanExpressionMib::Expobjecttable::Expobjecttable()
{
    yang_name = "expObjectTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB";
}

DismanExpressionMib::Expobjecttable::~Expobjecttable()
{
}

bool DismanExpressionMib::Expobjecttable::has_data() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Expobjecttable::has_operation() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DismanExpressionMib::Expobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectTable";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Expobjecttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Expobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DismanExpressionMib::Expobjecttable::Expobjectentry>();
        c->parent = this;
        expobjectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expobjectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Expobjecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanExpressionMib::Expobjecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanExpressionMib::Expobjecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expObjectEntry")
        return true;
    return false;
}

DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    expobjectindex{YType::uint32, "expObjectIndex"},
    expobjectconditional{YType::str, "expObjectConditional"},
    expobjectconditionalwildcard{YType::boolean, "expObjectConditionalWildcard"},
    expobjectdeltadiscontinuityid{YType::str, "expObjectDeltaDiscontinuityID"},
    expobjectdiscontinuityidtype{YType::enumeration, "expObjectDiscontinuityIDType"},
    expobjectdiscontinuityidwildcard{YType::boolean, "expObjectDiscontinuityIDWildcard"},
    expobjectentrystatus{YType::enumeration, "expObjectEntryStatus"},
    expobjectid{YType::str, "expObjectID"},
    expobjectidwildcard{YType::boolean, "expObjectIDWildcard"},
    expobjectsampletype{YType::enumeration, "expObjectSampleType"}
{
    yang_name = "expObjectEntry"; yang_parent_name = "expObjectTable";
}

DismanExpressionMib::Expobjecttable::Expobjectentry::~Expobjectentry()
{
}

bool DismanExpressionMib::Expobjecttable::Expobjectentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| expobjectindex.is_set
	|| expobjectconditional.is_set
	|| expobjectconditionalwildcard.is_set
	|| expobjectdeltadiscontinuityid.is_set
	|| expobjectdiscontinuityidtype.is_set
	|| expobjectdiscontinuityidwildcard.is_set
	|| expobjectentrystatus.is_set
	|| expobjectid.is_set
	|| expobjectidwildcard.is_set
	|| expobjectsampletype.is_set;
}

bool DismanExpressionMib::Expobjecttable::Expobjectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expobjectindex.yfilter)
	|| ydk::is_set(expobjectconditional.yfilter)
	|| ydk::is_set(expobjectconditionalwildcard.yfilter)
	|| ydk::is_set(expobjectdeltadiscontinuityid.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidtype.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidwildcard.yfilter)
	|| ydk::is_set(expobjectentrystatus.yfilter)
	|| ydk::is_set(expobjectid.yfilter)
	|| ydk::is_set(expobjectidwildcard.yfilter)
	|| ydk::is_set(expobjectsampletype.yfilter);
}

std::string DismanExpressionMib::Expobjecttable::Expobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']" <<"[expObjectIndex='" <<expobjectindex <<"']";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Expobjecttable::Expobjectentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expObjectTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expobjectindex.is_set || is_set(expobjectindex.yfilter)) leaf_name_data.push_back(expobjectindex.get_name_leafdata());
    if (expobjectconditional.is_set || is_set(expobjectconditional.yfilter)) leaf_name_data.push_back(expobjectconditional.get_name_leafdata());
    if (expobjectconditionalwildcard.is_set || is_set(expobjectconditionalwildcard.yfilter)) leaf_name_data.push_back(expobjectconditionalwildcard.get_name_leafdata());
    if (expobjectdeltadiscontinuityid.is_set || is_set(expobjectdeltadiscontinuityid.yfilter)) leaf_name_data.push_back(expobjectdeltadiscontinuityid.get_name_leafdata());
    if (expobjectdiscontinuityidtype.is_set || is_set(expobjectdiscontinuityidtype.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidtype.get_name_leafdata());
    if (expobjectdiscontinuityidwildcard.is_set || is_set(expobjectdiscontinuityidwildcard.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidwildcard.get_name_leafdata());
    if (expobjectentrystatus.is_set || is_set(expobjectentrystatus.yfilter)) leaf_name_data.push_back(expobjectentrystatus.get_name_leafdata());
    if (expobjectid.is_set || is_set(expobjectid.yfilter)) leaf_name_data.push_back(expobjectid.get_name_leafdata());
    if (expobjectidwildcard.is_set || is_set(expobjectidwildcard.yfilter)) leaf_name_data.push_back(expobjectidwildcard.get_name_leafdata());
    if (expobjectsampletype.is_set || is_set(expobjectsampletype.yfilter)) leaf_name_data.push_back(expobjectsampletype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Expobjecttable::Expobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expobjecttable::Expobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanExpressionMib::Expobjecttable::Expobjectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
        expexpressionowner.value_namespace = name_space;
        expexpressionowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
        expexpressionname.value_namespace = name_space;
        expexpressionname.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "expObjectEntryStatus")
    {
        expobjectentrystatus = value;
        expobjectentrystatus.value_namespace = name_space;
        expobjectentrystatus.value_namespace_prefix = name_space_prefix;
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
}

void DismanExpressionMib::Expobjecttable::Expobjectentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner.yfilter = yfilter;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname.yfilter = yfilter;
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
    if(value_path == "expObjectEntryStatus")
    {
        expobjectentrystatus.yfilter = yfilter;
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
}

bool DismanExpressionMib::Expobjecttable::Expobjectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expObjectIndex" || name == "expObjectConditional" || name == "expObjectConditionalWildcard" || name == "expObjectDeltaDiscontinuityID" || name == "expObjectDiscontinuityIDType" || name == "expObjectDiscontinuityIDWildcard" || name == "expObjectEntryStatus" || name == "expObjectID" || name == "expObjectIDWildcard" || name == "expObjectSampleType")
        return true;
    return false;
}

DismanExpressionMib::Expvaluetable::Expvaluetable()
{
    yang_name = "expValueTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB";
}

DismanExpressionMib::Expvaluetable::~Expvaluetable()
{
}

bool DismanExpressionMib::Expvaluetable::has_data() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Expvaluetable::has_operation() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DismanExpressionMib::Expvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueTable";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Expvaluetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Expvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DismanExpressionMib::Expvaluetable::Expvalueentry>();
        c->parent = this;
        expvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expvalueentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Expvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanExpressionMib::Expvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanExpressionMib::Expvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expValueEntry")
        return true;
    return false;
}

DismanExpressionMib::Expvaluetable::Expvalueentry::Expvalueentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    expvalueinstance{YType::str, "expValueInstance"},
    expvaluecounter32val{YType::uint32, "expValueCounter32Val"},
    expvaluecounter64val{YType::uint64, "expValueCounter64Val"},
    expvalueinteger32val{YType::int32, "expValueInteger32Val"},
    expvalueipaddressval{YType::str, "expValueIpAddressVal"},
    expvalueoctetstringval{YType::str, "expValueOctetStringVal"},
    expvalueoidval{YType::str, "expValueOidVal"},
    expvaluetimeticksval{YType::uint32, "expValueTimeTicksVal"},
    expvalueunsigned32val{YType::uint32, "expValueUnsigned32Val"}
{
    yang_name = "expValueEntry"; yang_parent_name = "expValueTable";
}

DismanExpressionMib::Expvaluetable::Expvalueentry::~Expvalueentry()
{
}

bool DismanExpressionMib::Expvaluetable::Expvalueentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| expvalueinstance.is_set
	|| expvaluecounter32val.is_set
	|| expvaluecounter64val.is_set
	|| expvalueinteger32val.is_set
	|| expvalueipaddressval.is_set
	|| expvalueoctetstringval.is_set
	|| expvalueoidval.is_set
	|| expvaluetimeticksval.is_set
	|| expvalueunsigned32val.is_set;
}

bool DismanExpressionMib::Expvaluetable::Expvalueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expvalueinstance.yfilter)
	|| ydk::is_set(expvaluecounter32val.yfilter)
	|| ydk::is_set(expvaluecounter64val.yfilter)
	|| ydk::is_set(expvalueinteger32val.yfilter)
	|| ydk::is_set(expvalueipaddressval.yfilter)
	|| ydk::is_set(expvalueoctetstringval.yfilter)
	|| ydk::is_set(expvalueoidval.yfilter)
	|| ydk::is_set(expvaluetimeticksval.yfilter)
	|| ydk::is_set(expvalueunsigned32val.yfilter);
}

std::string DismanExpressionMib::Expvaluetable::Expvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']" <<"[expValueInstance='" <<expvalueinstance <<"']";

    return path_buffer.str();

}

const EntityPath DismanExpressionMib::Expvaluetable::Expvalueentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expValueTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expvalueinstance.is_set || is_set(expvalueinstance.yfilter)) leaf_name_data.push_back(expvalueinstance.get_name_leafdata());
    if (expvaluecounter32val.is_set || is_set(expvaluecounter32val.yfilter)) leaf_name_data.push_back(expvaluecounter32val.get_name_leafdata());
    if (expvaluecounter64val.is_set || is_set(expvaluecounter64val.yfilter)) leaf_name_data.push_back(expvaluecounter64val.get_name_leafdata());
    if (expvalueinteger32val.is_set || is_set(expvalueinteger32val.yfilter)) leaf_name_data.push_back(expvalueinteger32val.get_name_leafdata());
    if (expvalueipaddressval.is_set || is_set(expvalueipaddressval.yfilter)) leaf_name_data.push_back(expvalueipaddressval.get_name_leafdata());
    if (expvalueoctetstringval.is_set || is_set(expvalueoctetstringval.yfilter)) leaf_name_data.push_back(expvalueoctetstringval.get_name_leafdata());
    if (expvalueoidval.is_set || is_set(expvalueoidval.yfilter)) leaf_name_data.push_back(expvalueoidval.get_name_leafdata());
    if (expvaluetimeticksval.is_set || is_set(expvaluetimeticksval.yfilter)) leaf_name_data.push_back(expvaluetimeticksval.get_name_leafdata());
    if (expvalueunsigned32val.is_set || is_set(expvalueunsigned32val.yfilter)) leaf_name_data.push_back(expvalueunsigned32val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanExpressionMib::Expvaluetable::Expvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expvaluetable::Expvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanExpressionMib::Expvaluetable::Expvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
        expexpressionowner.value_namespace = name_space;
        expexpressionowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
        expexpressionname.value_namespace = name_space;
        expexpressionname.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "expValueTimeTicksVal")
    {
        expvaluetimeticksval = value;
        expvaluetimeticksval.value_namespace = name_space;
        expvaluetimeticksval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val = value;
        expvalueunsigned32val.value_namespace = name_space;
        expvalueunsigned32val.value_namespace_prefix = name_space_prefix;
    }
}

void DismanExpressionMib::Expvaluetable::Expvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner.yfilter = yfilter;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname.yfilter = yfilter;
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
    if(value_path == "expValueTimeTicksVal")
    {
        expvaluetimeticksval.yfilter = yfilter;
    }
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val.yfilter = yfilter;
    }
}

bool DismanExpressionMib::Expvaluetable::Expvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expValueInstance" || name == "expValueCounter32Val" || name == "expValueCounter64Val" || name == "expValueInteger32Val" || name == "expValueIpAddressVal" || name == "expValueOctetStringVal" || name == "expValueOidVal" || name == "expValueTimeTicksVal" || name == "expValueUnsigned32Val")
        return true;
    return false;
}

const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter32 {1, "counter32"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::unsigned32 {2, "unsigned32"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::timeTicks {3, "timeTicks"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::integer32 {4, "integer32"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::ipAddress {5, "ipAddress"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::octetString {6, "octetString"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::objectId {7, "objectId"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter64 {8, "counter64"};

const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::invalidSyntax {1, "invalidSyntax"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::undefinedObjectIndex {2, "undefinedObjectIndex"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::unrecognizedOperator {3, "unrecognizedOperator"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::unrecognizedFunction {4, "unrecognizedFunction"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::invalidOperandType {5, "invalidOperandType"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::unmatchedParenthesis {6, "unmatchedParenthesis"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::tooManyWildcardValues {7, "tooManyWildcardValues"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::recursion {8, "recursion"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::deltaTooShort {9, "deltaTooShort"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::resourceUnavailable {10, "resourceUnavailable"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::Experrorcode::divideByZero {11, "divideByZero"};

const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectsampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectsampletype::deltaValue {2, "deltaValue"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectsampletype::changedValue {3, "changedValue"};

const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeTicks {1, "timeTicks"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeStamp {2, "timeStamp"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::dateAndTime {3, "dateAndTime"};


}
}

