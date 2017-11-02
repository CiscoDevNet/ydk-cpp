
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DISMAN_EXPRESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DISMAN_EXPRESSION_MIB {

DISMANEXPRESSIONMIB::DISMANEXPRESSIONMIB()
    :
    expresource(std::make_shared<DISMANEXPRESSIONMIB::Expresource>())
	,expexpressiontable(std::make_shared<DISMANEXPRESSIONMIB::Expexpressiontable>())
	,experrortable(std::make_shared<DISMANEXPRESSIONMIB::Experrortable>())
	,expobjecttable(std::make_shared<DISMANEXPRESSIONMIB::Expobjecttable>())
	,expvaluetable(std::make_shared<DISMANEXPRESSIONMIB::Expvaluetable>())
{
    expresource->parent = this;
    expexpressiontable->parent = this;
    experrortable->parent = this;
    expobjecttable->parent = this;
    expvaluetable->parent = this;

    yang_name = "DISMAN-EXPRESSION-MIB"; yang_parent_name = "DISMAN-EXPRESSION-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::~DISMANEXPRESSIONMIB()
{
}

bool DISMANEXPRESSIONMIB::has_data() const
{
    return (expresource !=  nullptr && expresource->has_data())
	|| (expexpressiontable !=  nullptr && expexpressiontable->has_data())
	|| (experrortable !=  nullptr && experrortable->has_data())
	|| (expobjecttable !=  nullptr && expobjecttable->has_data())
	|| (expvaluetable !=  nullptr && expvaluetable->has_data());
}

bool DISMANEXPRESSIONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (expresource !=  nullptr && expresource->has_operation())
	|| (expexpressiontable !=  nullptr && expexpressiontable->has_operation())
	|| (experrortable !=  nullptr && experrortable->has_operation())
	|| (expobjecttable !=  nullptr && expobjecttable->has_operation())
	|| (expvaluetable !=  nullptr && expvaluetable->has_operation());
}

std::string DISMANEXPRESSIONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expResource")
    {
        if(expresource == nullptr)
        {
            expresource = std::make_shared<DISMANEXPRESSIONMIB::Expresource>();
        }
        return expresource;
    }

    if(child_yang_name == "expExpressionTable")
    {
        if(expexpressiontable == nullptr)
        {
            expexpressiontable = std::make_shared<DISMANEXPRESSIONMIB::Expexpressiontable>();
        }
        return expexpressiontable;
    }

    if(child_yang_name == "expErrorTable")
    {
        if(experrortable == nullptr)
        {
            experrortable = std::make_shared<DISMANEXPRESSIONMIB::Experrortable>();
        }
        return experrortable;
    }

    if(child_yang_name == "expObjectTable")
    {
        if(expobjecttable == nullptr)
        {
            expobjecttable = std::make_shared<DISMANEXPRESSIONMIB::Expobjecttable>();
        }
        return expobjecttable;
    }

    if(child_yang_name == "expValueTable")
    {
        if(expvaluetable == nullptr)
        {
            expvaluetable = std::make_shared<DISMANEXPRESSIONMIB::Expvaluetable>();
        }
        return expvaluetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(expresource != nullptr)
    {
        children["expResource"] = expresource;
    }

    if(expexpressiontable != nullptr)
    {
        children["expExpressionTable"] = expexpressiontable;
    }

    if(experrortable != nullptr)
    {
        children["expErrorTable"] = experrortable;
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

void DISMANEXPRESSIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEXPRESSIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::clone_ptr() const
{
    return std::make_shared<DISMANEXPRESSIONMIB>();
}

std::string DISMANEXPRESSIONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DISMANEXPRESSIONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DISMANEXPRESSIONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DISMANEXPRESSIONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DISMANEXPRESSIONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expResource" || name == "expExpressionTable" || name == "expErrorTable" || name == "expObjectTable" || name == "expValueTable")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Expresource::Expresource()
    :
    expresourcedeltaminimum{YType::int32, "expResourceDeltaMinimum"},
    expresourcedeltawildcardinstancemaximum{YType::uint32, "expResourceDeltaWildcardInstanceMaximum"},
    expresourcedeltawildcardinstances{YType::uint32, "expResourceDeltaWildcardInstances"},
    expresourcedeltawildcardinstanceshigh{YType::uint32, "expResourceDeltaWildcardInstancesHigh"},
    expresourcedeltawildcardinstanceresourcelacks{YType::uint32, "expResourceDeltaWildcardInstanceResourceLacks"}
{

    yang_name = "expResource"; yang_parent_name = "DISMAN-EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Expresource::~Expresource()
{
}

bool DISMANEXPRESSIONMIB::Expresource::has_data() const
{
    return expresourcedeltaminimum.is_set
	|| expresourcedeltawildcardinstancemaximum.is_set
	|| expresourcedeltawildcardinstances.is_set
	|| expresourcedeltawildcardinstanceshigh.is_set
	|| expresourcedeltawildcardinstanceresourcelacks.is_set;
}

bool DISMANEXPRESSIONMIB::Expresource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expresourcedeltaminimum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstancemaximum.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstances.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceshigh.yfilter)
	|| ydk::is_set(expresourcedeltawildcardinstanceresourcelacks.yfilter);
}

std::string DISMANEXPRESSIONMIB::Expresource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Expresource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expResource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Expresource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expresourcedeltaminimum.is_set || is_set(expresourcedeltaminimum.yfilter)) leaf_name_data.push_back(expresourcedeltaminimum.get_name_leafdata());
    if (expresourcedeltawildcardinstancemaximum.is_set || is_set(expresourcedeltawildcardinstancemaximum.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstancemaximum.get_name_leafdata());
    if (expresourcedeltawildcardinstances.is_set || is_set(expresourcedeltawildcardinstances.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstances.get_name_leafdata());
    if (expresourcedeltawildcardinstanceshigh.is_set || is_set(expresourcedeltawildcardinstanceshigh.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstanceshigh.get_name_leafdata());
    if (expresourcedeltawildcardinstanceresourcelacks.is_set || is_set(expresourcedeltawildcardinstanceresourcelacks.yfilter)) leaf_name_data.push_back(expresourcedeltawildcardinstanceresourcelacks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Expresource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Expresource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DISMANEXPRESSIONMIB::Expresource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void DISMANEXPRESSIONMIB::Expresource::set_filter(const std::string & value_path, YFilter yfilter)
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

bool DISMANEXPRESSIONMIB::Expresource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expResourceDeltaMinimum" || name == "expResourceDeltaWildcardInstanceMaximum" || name == "expResourceDeltaWildcardInstances" || name == "expResourceDeltaWildcardInstancesHigh" || name == "expResourceDeltaWildcardInstanceResourceLacks")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressiontable()
{

    yang_name = "expExpressionTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Expexpressiontable::~Expexpressiontable()
{
}

bool DISMANEXPRESSIONMIB::Expexpressiontable::has_data() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEXPRESSIONMIB::Expexpressiontable::has_operation() const
{
    for (std::size_t index=0; index<expexpressionentry.size(); index++)
    {
        if(expexpressionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEXPRESSIONMIB::Expexpressiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Expexpressiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Expexpressiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Expexpressiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry>();
        c->parent = this;
        expexpressionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Expexpressiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expexpressionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DISMANEXPRESSIONMIB::Expexpressiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEXPRESSIONMIB::Expexpressiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEXPRESSIONMIB::Expexpressiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionEntry")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    expexpression{YType::str, "expExpression"},
    expexpressionvaluetype{YType::enumeration, "expExpressionValueType"},
    expexpressioncomment{YType::str, "expExpressionComment"},
    expexpressiondeltainterval{YType::int32, "expExpressionDeltaInterval"},
    expexpressionprefix{YType::str, "expExpressionPrefix"},
    expexpressionerrors{YType::uint32, "expExpressionErrors"},
    expexpressionentrystatus{YType::enumeration, "expExpressionEntryStatus"}
{

    yang_name = "expExpressionEntry"; yang_parent_name = "expExpressionTable"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::~Expexpressionentry()
{
}

bool DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| expexpression.is_set
	|| expexpressionvaluetype.is_set
	|| expexpressioncomment.is_set
	|| expexpressiondeltainterval.is_set
	|| expexpressionprefix.is_set
	|| expexpressionerrors.is_set
	|| expexpressionentrystatus.is_set;
}

bool DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expexpression.yfilter)
	|| ydk::is_set(expexpressionvaluetype.yfilter)
	|| ydk::is_set(expexpressioncomment.yfilter)
	|| ydk::is_set(expexpressiondeltainterval.yfilter)
	|| ydk::is_set(expexpressionprefix.yfilter)
	|| ydk::is_set(expexpressionerrors.yfilter)
	|| ydk::is_set(expexpressionentrystatus.yfilter);
}

std::string DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expExpressionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expExpressionEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expexpression.is_set || is_set(expexpression.yfilter)) leaf_name_data.push_back(expexpression.get_name_leafdata());
    if (expexpressionvaluetype.is_set || is_set(expexpressionvaluetype.yfilter)) leaf_name_data.push_back(expexpressionvaluetype.get_name_leafdata());
    if (expexpressioncomment.is_set || is_set(expexpressioncomment.yfilter)) leaf_name_data.push_back(expexpressioncomment.get_name_leafdata());
    if (expexpressiondeltainterval.is_set || is_set(expexpressiondeltainterval.yfilter)) leaf_name_data.push_back(expexpressiondeltainterval.get_name_leafdata());
    if (expexpressionprefix.is_set || is_set(expexpressionprefix.yfilter)) leaf_name_data.push_back(expexpressionprefix.get_name_leafdata());
    if (expexpressionerrors.is_set || is_set(expexpressionerrors.yfilter)) leaf_name_data.push_back(expexpressionerrors.get_name_leafdata());
    if (expexpressionentrystatus.is_set || is_set(expexpressionentrystatus.yfilter)) leaf_name_data.push_back(expexpressionentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expExpressionEntryStatus")
    {
        expexpressionentrystatus = value;
        expexpressionentrystatus.value_namespace = name_space;
        expexpressionentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "expExpressionEntryStatus")
    {
        expexpressionentrystatus.yfilter = yfilter;
    }
}

bool DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expExpression" || name == "expExpressionValueType" || name == "expExpressionComment" || name == "expExpressionDeltaInterval" || name == "expExpressionPrefix" || name == "expExpressionErrors" || name == "expExpressionEntryStatus")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Experrortable::Experrortable()
{

    yang_name = "expErrorTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Experrortable::~Experrortable()
{
}

bool DISMANEXPRESSIONMIB::Experrortable::has_data() const
{
    for (std::size_t index=0; index<experrorentry.size(); index++)
    {
        if(experrorentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEXPRESSIONMIB::Experrortable::has_operation() const
{
    for (std::size_t index=0; index<experrorentry.size(); index++)
    {
        if(experrorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEXPRESSIONMIB::Experrortable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Experrortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expErrorTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Experrortable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Experrortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DISMANEXPRESSIONMIB::Experrortable::Experrorentry>();
        c->parent = this;
        experrorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Experrortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : experrorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DISMANEXPRESSIONMIB::Experrortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEXPRESSIONMIB::Experrortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEXPRESSIONMIB::Experrortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expErrorEntry")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    experrortime{YType::uint32, "expErrorTime"},
    experrorindex{YType::int32, "expErrorIndex"},
    experrorcode{YType::enumeration, "expErrorCode"},
    experrorinstance{YType::str, "expErrorInstance"}
{

    yang_name = "expErrorEntry"; yang_parent_name = "expErrorTable"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Experrortable::Experrorentry::~Experrorentry()
{
}

bool DISMANEXPRESSIONMIB::Experrortable::Experrorentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| experrortime.is_set
	|| experrorindex.is_set
	|| experrorcode.is_set
	|| experrorinstance.is_set;
}

bool DISMANEXPRESSIONMIB::Experrortable::Experrorentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(experrortime.yfilter)
	|| ydk::is_set(experrorindex.yfilter)
	|| ydk::is_set(experrorcode.yfilter)
	|| ydk::is_set(experrorinstance.yfilter);
}

std::string DISMANEXPRESSIONMIB::Experrortable::Experrorentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expErrorTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Experrortable::Experrorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expErrorEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Experrortable::Experrorentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (experrortime.is_set || is_set(experrortime.yfilter)) leaf_name_data.push_back(experrortime.get_name_leafdata());
    if (experrorindex.is_set || is_set(experrorindex.yfilter)) leaf_name_data.push_back(experrorindex.get_name_leafdata());
    if (experrorcode.is_set || is_set(experrorcode.yfilter)) leaf_name_data.push_back(experrorcode.get_name_leafdata());
    if (experrorinstance.is_set || is_set(experrorinstance.yfilter)) leaf_name_data.push_back(experrorinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Experrortable::Experrorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Experrortable::Experrorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DISMANEXPRESSIONMIB::Experrortable::Experrorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expErrorTime")
    {
        experrortime = value;
        experrortime.value_namespace = name_space;
        experrortime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expErrorIndex")
    {
        experrorindex = value;
        experrorindex.value_namespace = name_space;
        experrorindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expErrorCode")
    {
        experrorcode = value;
        experrorcode.value_namespace = name_space;
        experrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expErrorInstance")
    {
        experrorinstance = value;
        experrorinstance.value_namespace = name_space;
        experrorinstance.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEXPRESSIONMIB::Experrortable::Experrorentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner.yfilter = yfilter;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname.yfilter = yfilter;
    }
    if(value_path == "expErrorTime")
    {
        experrortime.yfilter = yfilter;
    }
    if(value_path == "expErrorIndex")
    {
        experrorindex.yfilter = yfilter;
    }
    if(value_path == "expErrorCode")
    {
        experrorcode.yfilter = yfilter;
    }
    if(value_path == "expErrorInstance")
    {
        experrorinstance.yfilter = yfilter;
    }
}

bool DISMANEXPRESSIONMIB::Experrortable::Experrorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expErrorTime" || name == "expErrorIndex" || name == "expErrorCode" || name == "expErrorInstance")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Expobjecttable::Expobjecttable()
{

    yang_name = "expObjectTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Expobjecttable::~Expobjecttable()
{
}

bool DISMANEXPRESSIONMIB::Expobjecttable::has_data() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEXPRESSIONMIB::Expobjecttable::has_operation() const
{
    for (std::size_t index=0; index<expobjectentry.size(); index++)
    {
        if(expobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEXPRESSIONMIB::Expobjecttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Expobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Expobjecttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Expobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry>();
        c->parent = this;
        expobjectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Expobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expobjectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DISMANEXPRESSIONMIB::Expobjecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEXPRESSIONMIB::Expobjecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEXPRESSIONMIB::Expobjecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expObjectEntry")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    expobjectindex{YType::uint32, "expObjectIndex"},
    expobjectid{YType::str, "expObjectID"},
    expobjectidwildcard{YType::boolean, "expObjectIDWildcard"},
    expobjectsampletype{YType::enumeration, "expObjectSampleType"},
    expobjectdeltadiscontinuityid{YType::str, "expObjectDeltaDiscontinuityID"},
    expobjectdiscontinuityidwildcard{YType::boolean, "expObjectDiscontinuityIDWildcard"},
    expobjectdiscontinuityidtype{YType::enumeration, "expObjectDiscontinuityIDType"},
    expobjectconditional{YType::str, "expObjectConditional"},
    expobjectconditionalwildcard{YType::boolean, "expObjectConditionalWildcard"},
    expobjectentrystatus{YType::enumeration, "expObjectEntryStatus"}
{

    yang_name = "expObjectEntry"; yang_parent_name = "expObjectTable"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::~Expobjectentry()
{
}

bool DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| expobjectindex.is_set
	|| expobjectid.is_set
	|| expobjectidwildcard.is_set
	|| expobjectsampletype.is_set
	|| expobjectdeltadiscontinuityid.is_set
	|| expobjectdiscontinuityidwildcard.is_set
	|| expobjectdiscontinuityidtype.is_set
	|| expobjectconditional.is_set
	|| expobjectconditionalwildcard.is_set
	|| expobjectentrystatus.is_set;
}

bool DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expobjectindex.yfilter)
	|| ydk::is_set(expobjectid.yfilter)
	|| ydk::is_set(expobjectidwildcard.yfilter)
	|| ydk::is_set(expobjectsampletype.yfilter)
	|| ydk::is_set(expobjectdeltadiscontinuityid.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidwildcard.yfilter)
	|| ydk::is_set(expobjectdiscontinuityidtype.yfilter)
	|| ydk::is_set(expobjectconditional.yfilter)
	|| ydk::is_set(expobjectconditionalwildcard.yfilter)
	|| ydk::is_set(expobjectentrystatus.yfilter);
}

std::string DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expObjectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expObjectEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']" <<"[expObjectIndex='" <<expobjectindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expobjectindex.is_set || is_set(expobjectindex.yfilter)) leaf_name_data.push_back(expobjectindex.get_name_leafdata());
    if (expobjectid.is_set || is_set(expobjectid.yfilter)) leaf_name_data.push_back(expobjectid.get_name_leafdata());
    if (expobjectidwildcard.is_set || is_set(expobjectidwildcard.yfilter)) leaf_name_data.push_back(expobjectidwildcard.get_name_leafdata());
    if (expobjectsampletype.is_set || is_set(expobjectsampletype.yfilter)) leaf_name_data.push_back(expobjectsampletype.get_name_leafdata());
    if (expobjectdeltadiscontinuityid.is_set || is_set(expobjectdeltadiscontinuityid.yfilter)) leaf_name_data.push_back(expobjectdeltadiscontinuityid.get_name_leafdata());
    if (expobjectdiscontinuityidwildcard.is_set || is_set(expobjectdiscontinuityidwildcard.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidwildcard.get_name_leafdata());
    if (expobjectdiscontinuityidtype.is_set || is_set(expobjectdiscontinuityidtype.yfilter)) leaf_name_data.push_back(expobjectdiscontinuityidtype.get_name_leafdata());
    if (expobjectconditional.is_set || is_set(expobjectconditional.yfilter)) leaf_name_data.push_back(expobjectconditional.get_name_leafdata());
    if (expobjectconditionalwildcard.is_set || is_set(expobjectconditionalwildcard.yfilter)) leaf_name_data.push_back(expobjectconditionalwildcard.get_name_leafdata());
    if (expobjectentrystatus.is_set || is_set(expobjectentrystatus.yfilter)) leaf_name_data.push_back(expobjectentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expObjectEntryStatus")
    {
        expobjectentrystatus = value;
        expobjectentrystatus.value_namespace = name_space;
        expobjectentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "expObjectEntryStatus")
    {
        expobjectentrystatus.yfilter = yfilter;
    }
}

bool DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expObjectIndex" || name == "expObjectID" || name == "expObjectIDWildcard" || name == "expObjectSampleType" || name == "expObjectDeltaDiscontinuityID" || name == "expObjectDiscontinuityIDWildcard" || name == "expObjectDiscontinuityIDType" || name == "expObjectConditional" || name == "expObjectConditionalWildcard" || name == "expObjectEntryStatus")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Expvaluetable::Expvaluetable()
{

    yang_name = "expValueTable"; yang_parent_name = "DISMAN-EXPRESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Expvaluetable::~Expvaluetable()
{
}

bool DISMANEXPRESSIONMIB::Expvaluetable::has_data() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEXPRESSIONMIB::Expvaluetable::has_operation() const
{
    for (std::size_t index=0; index<expvalueentry.size(); index++)
    {
        if(expvalueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEXPRESSIONMIB::Expvaluetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Expvaluetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Expvaluetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Expvaluetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry>();
        c->parent = this;
        expvalueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Expvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expvalueentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DISMANEXPRESSIONMIB::Expvaluetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEXPRESSIONMIB::Expvaluetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEXPRESSIONMIB::Expvaluetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expValueEntry")
        return true;
    return false;
}

DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::Expvalueentry()
    :
    expexpressionowner{YType::str, "expExpressionOwner"},
    expexpressionname{YType::str, "expExpressionName"},
    expvalueinstance{YType::str, "expValueInstance"},
    expvaluecounter32val{YType::uint32, "expValueCounter32Val"},
    expvalueunsigned32val{YType::uint32, "expValueUnsigned32Val"},
    expvaluetimeticksval{YType::uint32, "expValueTimeTicksVal"},
    expvalueinteger32val{YType::int32, "expValueInteger32Val"},
    expvalueipaddressval{YType::str, "expValueIpAddressVal"},
    expvalueoctetstringval{YType::str, "expValueOctetStringVal"},
    expvalueoidval{YType::str, "expValueOidVal"},
    expvaluecounter64val{YType::uint64, "expValueCounter64Val"}
{

    yang_name = "expValueEntry"; yang_parent_name = "expValueTable"; is_top_level_class = false; has_list_ancestor = false;
}

DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::~Expvalueentry()
{
}

bool DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::has_data() const
{
    return expexpressionowner.is_set
	|| expexpressionname.is_set
	|| expvalueinstance.is_set
	|| expvaluecounter32val.is_set
	|| expvalueunsigned32val.is_set
	|| expvaluetimeticksval.is_set
	|| expvalueinteger32val.is_set
	|| expvalueipaddressval.is_set
	|| expvalueoctetstringval.is_set
	|| expvalueoidval.is_set
	|| expvaluecounter64val.is_set;
}

bool DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expexpressionowner.yfilter)
	|| ydk::is_set(expexpressionname.yfilter)
	|| ydk::is_set(expvalueinstance.yfilter)
	|| ydk::is_set(expvaluecounter32val.yfilter)
	|| ydk::is_set(expvalueunsigned32val.yfilter)
	|| ydk::is_set(expvaluetimeticksval.yfilter)
	|| ydk::is_set(expvalueinteger32val.yfilter)
	|| ydk::is_set(expvalueipaddressval.yfilter)
	|| ydk::is_set(expvalueoctetstringval.yfilter)
	|| ydk::is_set(expvalueoidval.yfilter)
	|| ydk::is_set(expvaluecounter64val.yfilter);
}

std::string DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EXPRESSION-MIB:DISMAN-EXPRESSION-MIB/expValueTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expValueEntry" <<"[expExpressionOwner='" <<expexpressionowner <<"']" <<"[expExpressionName='" <<expexpressionname <<"']" <<"[expValueInstance='" <<expvalueinstance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expexpressionowner.is_set || is_set(expexpressionowner.yfilter)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.yfilter)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expvalueinstance.is_set || is_set(expvalueinstance.yfilter)) leaf_name_data.push_back(expvalueinstance.get_name_leafdata());
    if (expvaluecounter32val.is_set || is_set(expvaluecounter32val.yfilter)) leaf_name_data.push_back(expvaluecounter32val.get_name_leafdata());
    if (expvalueunsigned32val.is_set || is_set(expvalueunsigned32val.yfilter)) leaf_name_data.push_back(expvalueunsigned32val.get_name_leafdata());
    if (expvaluetimeticksval.is_set || is_set(expvaluetimeticksval.yfilter)) leaf_name_data.push_back(expvaluetimeticksval.get_name_leafdata());
    if (expvalueinteger32val.is_set || is_set(expvalueinteger32val.yfilter)) leaf_name_data.push_back(expvalueinteger32val.get_name_leafdata());
    if (expvalueipaddressval.is_set || is_set(expvalueipaddressval.yfilter)) leaf_name_data.push_back(expvalueipaddressval.get_name_leafdata());
    if (expvalueoctetstringval.is_set || is_set(expvalueoctetstringval.yfilter)) leaf_name_data.push_back(expvalueoctetstringval.get_name_leafdata());
    if (expvalueoidval.is_set || is_set(expvalueoidval.yfilter)) leaf_name_data.push_back(expvalueoidval.get_name_leafdata());
    if (expvaluecounter64val.is_set || is_set(expvaluecounter64val.yfilter)) leaf_name_data.push_back(expvaluecounter64val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val = value;
        expvalueunsigned32val.value_namespace = name_space;
        expvalueunsigned32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expValueTimeTicksVal")
    {
        expvaluetimeticksval = value;
        expvaluetimeticksval.value_namespace = name_space;
        expvaluetimeticksval.value_namespace_prefix = name_space_prefix;
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

void DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val.yfilter = yfilter;
    }
    if(value_path == "expValueTimeTicksVal")
    {
        expvaluetimeticksval.yfilter = yfilter;
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

bool DISMANEXPRESSIONMIB::Expvaluetable::Expvalueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expExpressionOwner" || name == "expExpressionName" || name == "expValueInstance" || name == "expValueCounter32Val" || name == "expValueUnsigned32Val" || name == "expValueTimeTicksVal" || name == "expValueInteger32Val" || name == "expValueIpAddressVal" || name == "expValueOctetStringVal" || name == "expValueOidVal" || name == "expValueCounter64Val")
        return true;
    return false;
}

const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter32 {1, "counter32"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::unsigned32 {2, "unsigned32"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::timeTicks {3, "timeTicks"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::integer32 {4, "integer32"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::ipAddress {5, "ipAddress"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::octetString {6, "octetString"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::objectId {7, "objectId"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expexpressiontable::Expexpressionentry::Expexpressionvaluetype::counter64 {8, "counter64"};

const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::invalidSyntax {1, "invalidSyntax"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::undefinedObjectIndex {2, "undefinedObjectIndex"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::unrecognizedOperator {3, "unrecognizedOperator"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::unrecognizedFunction {4, "unrecognizedFunction"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::invalidOperandType {5, "invalidOperandType"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::unmatchedParenthesis {6, "unmatchedParenthesis"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::tooManyWildcardValues {7, "tooManyWildcardValues"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::recursion {8, "recursion"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::deltaTooShort {9, "deltaTooShort"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::resourceUnavailable {10, "resourceUnavailable"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Experrortable::Experrorentry::Experrorcode::divideByZero {11, "divideByZero"};

const Enum::YLeaf DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectsampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectsampletype::deltaValue {2, "deltaValue"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectsampletype::changedValue {3, "changedValue"};

const Enum::YLeaf DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeTicks {1, "timeTicks"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::timeStamp {2, "timeStamp"};
const Enum::YLeaf DISMANEXPRESSIONMIB::Expobjecttable::Expobjectentry::Expobjectdiscontinuityidtype::dateAndTime {3, "dateAndTime"};


}
}

