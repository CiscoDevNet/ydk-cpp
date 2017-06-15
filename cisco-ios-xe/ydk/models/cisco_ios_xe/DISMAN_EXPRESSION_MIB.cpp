
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DISMAN_EXPRESSION_MIB.hpp"

namespace ydk {
namespace DISMAN_EXPRESSION_MIB {

DismanExpressionMib::DismanExpressionMib()
    :
    experrortable_(std::make_shared<DismanExpressionMib::Experrortable>())
	,expexpressiontable_(std::make_shared<DismanExpressionMib::Expexpressiontable>())
	,expobjecttable_(std::make_shared<DismanExpressionMib::Expobjecttable>())
	,expresource_(std::make_shared<DismanExpressionMib::Expresource>())
	,expvaluetable_(std::make_shared<DismanExpressionMib::Expvaluetable>())
{
    experrortable_->parent = this;

    expexpressiontable_->parent = this;

    expobjecttable_->parent = this;

    expresource_->parent = this;

    expvaluetable_->parent = this;

    yang_name = "DISMAN-EXPRESSION-MIB"; yang_parent_name = "DISMAN-EXPRESSION-MIB";
}

DismanExpressionMib::~DismanExpressionMib()
{
}

bool DismanExpressionMib::has_data() const
{
    return (experrortable_ !=  nullptr && experrortable_->has_data())
	|| (expexpressiontable_ !=  nullptr && expexpressiontable_->has_data())
	|| (expobjecttable_ !=  nullptr && expobjecttable_->has_data())
	|| (expresource_ !=  nullptr && expresource_->has_data())
	|| (expvaluetable_ !=  nullptr && expvaluetable_->has_data());
}

bool DismanExpressionMib::has_operation() const
{
    return is_set(operation)
	|| (experrortable_ !=  nullptr && experrortable_->has_operation())
	|| (expexpressiontable_ !=  nullptr && expexpressiontable_->has_operation())
	|| (expobjecttable_ !=  nullptr && expobjecttable_->has_operation())
	|| (expresource_ !=  nullptr && expresource_->has_operation())
	|| (expvaluetable_ !=  nullptr && expvaluetable_->has_operation());
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
        if(experrortable_ == nullptr)
        {
            experrortable_ = std::make_shared<DismanExpressionMib::Experrortable>();
        }
        return experrortable_;
    }

    if(child_yang_name == "expExpressionTable")
    {
        if(expexpressiontable_ == nullptr)
        {
            expexpressiontable_ = std::make_shared<DismanExpressionMib::Expexpressiontable>();
        }
        return expexpressiontable_;
    }

    if(child_yang_name == "expObjectTable")
    {
        if(expobjecttable_ == nullptr)
        {
            expobjecttable_ = std::make_shared<DismanExpressionMib::Expobjecttable>();
        }
        return expobjecttable_;
    }

    if(child_yang_name == "expResource")
    {
        if(expresource_ == nullptr)
        {
            expresource_ = std::make_shared<DismanExpressionMib::Expresource>();
        }
        return expresource_;
    }

    if(child_yang_name == "expValueTable")
    {
        if(expvaluetable_ == nullptr)
        {
            expvaluetable_ = std::make_shared<DismanExpressionMib::Expvaluetable>();
        }
        return expvaluetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experrortable_ != nullptr)
    {
        children["expErrorTable"] = experrortable_;
    }

    if(expexpressiontable_ != nullptr)
    {
        children["expExpressionTable"] = expexpressiontable_;
    }

    if(expobjecttable_ != nullptr)
    {
        children["expObjectTable"] = expobjecttable_;
    }

    if(expresource_ != nullptr)
    {
        children["expResource"] = expresource_;
    }

    if(expvaluetable_ != nullptr)
    {
        children["expValueTable"] = expvaluetable_;
    }

    return children;
}

void DismanExpressionMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(expresourcedeltaminimum.operation)
	|| is_set(expresourcedeltawildcardinstancemaximum.operation)
	|| is_set(expresourcedeltawildcardinstanceresourcelacks.operation)
	|| is_set(expresourcedeltawildcardinstances.operation)
	|| is_set(expresourcedeltawildcardinstanceshigh.operation);
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

    if (expresourcedeltaminimum.is_set || is_set(expresourcedeltaminimum.operation)) leaf_name_data.push_back(expresourcedeltaminimum.get_name_leafdata());
    if (expresourcedeltawildcardinstancemaximum.is_set || is_set(expresourcedeltawildcardinstancemaximum.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstancemaximum.get_name_leafdata());
    if (expresourcedeltawildcardinstanceresourcelacks.is_set || is_set(expresourcedeltawildcardinstanceresourcelacks.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstanceresourcelacks.get_name_leafdata());
    if (expresourcedeltawildcardinstances.is_set || is_set(expresourcedeltawildcardinstances.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstances.get_name_leafdata());
    if (expresourcedeltawildcardinstanceshigh.is_set || is_set(expresourcedeltawildcardinstanceshigh.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstanceshigh.get_name_leafdata());


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

void DismanExpressionMib::Expresource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expResourceDeltaMinimum")
    {
        expresourcedeltaminimum = value;
    }
    if(value_path == "expResourceDeltaWildcardInstanceMaximum")
    {
        expresourcedeltawildcardinstancemaximum = value;
    }
    if(value_path == "expResourceDeltaWildcardInstanceResourceLacks")
    {
        expresourcedeltawildcardinstanceresourcelacks = value;
    }
    if(value_path == "expResourceDeltaWildcardInstances")
    {
        expresourcedeltawildcardinstances = value;
    }
    if(value_path == "expResourceDeltaWildcardInstancesHigh")
    {
        expresourcedeltawildcardinstanceshigh = value;
    }
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
    for (std::size_t index=0; index<expexpressionentry_.size(); index++)
    {
        if(expexpressionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Expexpressiontable::has_operation() const
{
    for (std::size_t index=0; index<expexpressionentry_.size(); index++)
    {
        if(expexpressionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : expexpressionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanExpressionMib::Expexpressiontable::Expexpressionentry>();
        c->parent = this;
        expexpressionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expexpressiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expexpressionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Expexpressiontable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expexpressionowner.operation)
	|| is_set(expexpressionname.operation)
	|| is_set(expexpression.operation)
	|| is_set(expexpressioncomment.operation)
	|| is_set(expexpressiondeltainterval.operation)
	|| is_set(expexpressionentrystatus.operation)
	|| is_set(expexpressionerrors.operation)
	|| is_set(expexpressionprefix.operation)
	|| is_set(expexpressionvaluetype.operation);
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

    if (expexpressionowner.is_set || is_set(expexpressionowner.operation)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.operation)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expexpression.is_set || is_set(expexpression.operation)) leaf_name_data.push_back(expexpression.get_name_leafdata());
    if (expexpressioncomment.is_set || is_set(expexpressioncomment.operation)) leaf_name_data.push_back(expexpressioncomment.get_name_leafdata());
    if (expexpressiondeltainterval.is_set || is_set(expexpressiondeltainterval.operation)) leaf_name_data.push_back(expexpressiondeltainterval.get_name_leafdata());
    if (expexpressionentrystatus.is_set || is_set(expexpressionentrystatus.operation)) leaf_name_data.push_back(expexpressionentrystatus.get_name_leafdata());
    if (expexpressionerrors.is_set || is_set(expexpressionerrors.operation)) leaf_name_data.push_back(expexpressionerrors.get_name_leafdata());
    if (expexpressionprefix.is_set || is_set(expexpressionprefix.operation)) leaf_name_data.push_back(expexpressionprefix.get_name_leafdata());
    if (expexpressionvaluetype.is_set || is_set(expexpressionvaluetype.operation)) leaf_name_data.push_back(expexpressionvaluetype.get_name_leafdata());


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

void DismanExpressionMib::Expexpressiontable::Expexpressionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
    }
    if(value_path == "expExpression")
    {
        expexpression = value;
    }
    if(value_path == "expExpressionComment")
    {
        expexpressioncomment = value;
    }
    if(value_path == "expExpressionDeltaInterval")
    {
        expexpressiondeltainterval = value;
    }
    if(value_path == "expExpressionEntryStatus")
    {
        expexpressionentrystatus = value;
    }
    if(value_path == "expExpressionErrors")
    {
        expexpressionerrors = value;
    }
    if(value_path == "expExpressionPrefix")
    {
        expexpressionprefix = value;
    }
    if(value_path == "expExpressionValueType")
    {
        expexpressionvaluetype = value;
    }
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
    for (std::size_t index=0; index<experrorentry_.size(); index++)
    {
        if(experrorentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Experrortable::has_operation() const
{
    for (std::size_t index=0; index<experrorentry_.size(); index++)
    {
        if(experrorentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : experrorentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanExpressionMib::Experrortable::Experrorentry>();
        c->parent = this;
        experrorentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Experrortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : experrorentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Experrortable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expexpressionowner.operation)
	|| is_set(expexpressionname.operation)
	|| is_set(experrorcode.operation)
	|| is_set(experrorindex.operation)
	|| is_set(experrorinstance.operation)
	|| is_set(experrortime.operation);
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

    if (expexpressionowner.is_set || is_set(expexpressionowner.operation)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.operation)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (experrorcode.is_set || is_set(experrorcode.operation)) leaf_name_data.push_back(experrorcode.get_name_leafdata());
    if (experrorindex.is_set || is_set(experrorindex.operation)) leaf_name_data.push_back(experrorindex.get_name_leafdata());
    if (experrorinstance.is_set || is_set(experrorinstance.operation)) leaf_name_data.push_back(experrorinstance.get_name_leafdata());
    if (experrortime.is_set || is_set(experrortime.operation)) leaf_name_data.push_back(experrortime.get_name_leafdata());


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

void DismanExpressionMib::Experrortable::Experrorentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
    }
    if(value_path == "expErrorCode")
    {
        experrorcode = value;
    }
    if(value_path == "expErrorIndex")
    {
        experrorindex = value;
    }
    if(value_path == "expErrorInstance")
    {
        experrorinstance = value;
    }
    if(value_path == "expErrorTime")
    {
        experrortime = value;
    }
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
    for (std::size_t index=0; index<expobjectentry_.size(); index++)
    {
        if(expobjectentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Expobjecttable::has_operation() const
{
    for (std::size_t index=0; index<expobjectentry_.size(); index++)
    {
        if(expobjectentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : expobjectentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanExpressionMib::Expobjecttable::Expobjectentry>();
        c->parent = this;
        expobjectentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expobjectentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Expobjecttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expexpressionowner.operation)
	|| is_set(expexpressionname.operation)
	|| is_set(expobjectindex.operation)
	|| is_set(expobjectconditional.operation)
	|| is_set(expobjectconditionalwildcard.operation)
	|| is_set(expobjectdeltadiscontinuityid.operation)
	|| is_set(expobjectdiscontinuityidtype.operation)
	|| is_set(expobjectdiscontinuityidwildcard.operation)
	|| is_set(expobjectentrystatus.operation)
	|| is_set(expobjectid.operation)
	|| is_set(expobjectidwildcard.operation)
	|| is_set(expobjectsampletype.operation);
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

    if (expexpressionowner.is_set || is_set(expexpressionowner.operation)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.operation)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expobjectindex.is_set || is_set(expobjectindex.operation)) leaf_name_data.push_back(expobjectindex.get_name_leafdata());
    if (expobjectconditional.is_set || is_set(expobjectconditional.operation)) leaf_name_data.push_back(expobjectconditional.get_name_leafdata());
    if (expobjectconditionalwildcard.is_set || is_set(expobjectconditionalwildcard.operation)) leaf_name_data.push_back(expobjectconditionalwildcard.get_name_leafdata());
    if (expobjectdeltadiscontinuityid.is_set || is_set(expobjectdeltadiscontinuityid.operation)) leaf_name_data.push_back(expobjectdeltadiscontinuityid.get_name_leafdata());
    if (expobjectdiscontinuityidtype.is_set || is_set(expobjectdiscontinuityidtype.operation)) leaf_name_data.push_back(expobjectdiscontinuityidtype.get_name_leafdata());
    if (expobjectdiscontinuityidwildcard.is_set || is_set(expobjectdiscontinuityidwildcard.operation)) leaf_name_data.push_back(expobjectdiscontinuityidwildcard.get_name_leafdata());
    if (expobjectentrystatus.is_set || is_set(expobjectentrystatus.operation)) leaf_name_data.push_back(expobjectentrystatus.get_name_leafdata());
    if (expobjectid.is_set || is_set(expobjectid.operation)) leaf_name_data.push_back(expobjectid.get_name_leafdata());
    if (expobjectidwildcard.is_set || is_set(expobjectidwildcard.operation)) leaf_name_data.push_back(expobjectidwildcard.get_name_leafdata());
    if (expobjectsampletype.is_set || is_set(expobjectsampletype.operation)) leaf_name_data.push_back(expobjectsampletype.get_name_leafdata());


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

void DismanExpressionMib::Expobjecttable::Expobjectentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
    }
    if(value_path == "expObjectIndex")
    {
        expobjectindex = value;
    }
    if(value_path == "expObjectConditional")
    {
        expobjectconditional = value;
    }
    if(value_path == "expObjectConditionalWildcard")
    {
        expobjectconditionalwildcard = value;
    }
    if(value_path == "expObjectDeltaDiscontinuityID")
    {
        expobjectdeltadiscontinuityid = value;
    }
    if(value_path == "expObjectDiscontinuityIDType")
    {
        expobjectdiscontinuityidtype = value;
    }
    if(value_path == "expObjectDiscontinuityIDWildcard")
    {
        expobjectdiscontinuityidwildcard = value;
    }
    if(value_path == "expObjectEntryStatus")
    {
        expobjectentrystatus = value;
    }
    if(value_path == "expObjectID")
    {
        expobjectid = value;
    }
    if(value_path == "expObjectIDWildcard")
    {
        expobjectidwildcard = value;
    }
    if(value_path == "expObjectSampleType")
    {
        expobjectsampletype = value;
    }
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
    for (std::size_t index=0; index<expvalueentry_.size(); index++)
    {
        if(expvalueentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanExpressionMib::Expvaluetable::has_operation() const
{
    for (std::size_t index=0; index<expvalueentry_.size(); index++)
    {
        if(expvalueentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : expvalueentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanExpressionMib::Expvaluetable::Expvalueentry>();
        c->parent = this;
        expvalueentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanExpressionMib::Expvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expvalueentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanExpressionMib::Expvaluetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expexpressionowner.operation)
	|| is_set(expexpressionname.operation)
	|| is_set(expvalueinstance.operation)
	|| is_set(expvaluecounter32val.operation)
	|| is_set(expvaluecounter64val.operation)
	|| is_set(expvalueinteger32val.operation)
	|| is_set(expvalueipaddressval.operation)
	|| is_set(expvalueoctetstringval.operation)
	|| is_set(expvalueoidval.operation)
	|| is_set(expvaluetimeticksval.operation)
	|| is_set(expvalueunsigned32val.operation);
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

    if (expexpressionowner.is_set || is_set(expexpressionowner.operation)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.operation)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expvalueinstance.is_set || is_set(expvalueinstance.operation)) leaf_name_data.push_back(expvalueinstance.get_name_leafdata());
    if (expvaluecounter32val.is_set || is_set(expvaluecounter32val.operation)) leaf_name_data.push_back(expvaluecounter32val.get_name_leafdata());
    if (expvaluecounter64val.is_set || is_set(expvaluecounter64val.operation)) leaf_name_data.push_back(expvaluecounter64val.get_name_leafdata());
    if (expvalueinteger32val.is_set || is_set(expvalueinteger32val.operation)) leaf_name_data.push_back(expvalueinteger32val.get_name_leafdata());
    if (expvalueipaddressval.is_set || is_set(expvalueipaddressval.operation)) leaf_name_data.push_back(expvalueipaddressval.get_name_leafdata());
    if (expvalueoctetstringval.is_set || is_set(expvalueoctetstringval.operation)) leaf_name_data.push_back(expvalueoctetstringval.get_name_leafdata());
    if (expvalueoidval.is_set || is_set(expvalueoidval.operation)) leaf_name_data.push_back(expvalueoidval.get_name_leafdata());
    if (expvaluetimeticksval.is_set || is_set(expvaluetimeticksval.operation)) leaf_name_data.push_back(expvaluetimeticksval.get_name_leafdata());
    if (expvalueunsigned32val.is_set || is_set(expvalueunsigned32val.operation)) leaf_name_data.push_back(expvalueunsigned32val.get_name_leafdata());


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

void DismanExpressionMib::Expvaluetable::Expvalueentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
    }
    if(value_path == "expValueInstance")
    {
        expvalueinstance = value;
    }
    if(value_path == "expValueCounter32Val")
    {
        expvaluecounter32val = value;
    }
    if(value_path == "expValueCounter64Val")
    {
        expvaluecounter64val = value;
    }
    if(value_path == "expValueInteger32Val")
    {
        expvalueinteger32val = value;
    }
    if(value_path == "expValueIpAddressVal")
    {
        expvalueipaddressval = value;
    }
    if(value_path == "expValueOctetStringVal")
    {
        expvalueoctetstringval = value;
    }
    if(value_path == "expValueOidVal")
    {
        expvalueoidval = value;
    }
    if(value_path == "expValueTimeTicksVal")
    {
        expvaluetimeticksval = value;
    }
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val = value;
    }
}

const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::counter32 {1, "counter32"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::unsigned32 {2, "unsigned32"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::timeTicks {3, "timeTicks"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::integer32 {4, "integer32"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::ipAddress {5, "ipAddress"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::octetString {6, "octetString"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::objectId {7, "objectId"};
const Enum::YLeaf DismanExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::counter64 {8, "counter64"};

const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::invalidSyntax {1, "invalidSyntax"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::undefinedObjectIndex {2, "undefinedObjectIndex"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::unrecognizedOperator {3, "unrecognizedOperator"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::unrecognizedFunction {4, "unrecognizedFunction"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::invalidOperandType {5, "invalidOperandType"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::unmatchedParenthesis {6, "unmatchedParenthesis"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::tooManyWildcardValues {7, "tooManyWildcardValues"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::recursion {8, "recursion"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::deltaTooShort {9, "deltaTooShort"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::resourceUnavailable {10, "resourceUnavailable"};
const Enum::YLeaf DismanExpressionMib::Experrortable::Experrorentry::ExperrorcodeEnum::divideByZero {11, "divideByZero"};

const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectsampletypeEnum::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectsampletypeEnum::deltaValue {2, "deltaValue"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectsampletypeEnum::changedValue {3, "changedValue"};

const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectdiscontinuityidtypeEnum::timeTicks {1, "timeTicks"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectdiscontinuityidtypeEnum::timeStamp {2, "timeStamp"};
const Enum::YLeaf DismanExpressionMib::Expobjecttable::Expobjectentry::ExpobjectdiscontinuityidtypeEnum::dateAndTime {3, "dateAndTime"};


}
}

