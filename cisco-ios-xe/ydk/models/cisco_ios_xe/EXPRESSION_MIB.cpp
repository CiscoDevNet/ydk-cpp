
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "EXPRESSION_MIB.hpp"

namespace ydk {
namespace EXPRESSION_MIB {

ExpressionMib::ExpressionMib()
    :
    expexpressiontable_(std::make_shared<ExpressionMib::Expexpressiontable>())
	,expnames_(std::make_shared<ExpressionMib::Expnames>())
	,expnametable_(std::make_shared<ExpressionMib::Expnametable>())
	,expobjecttable_(std::make_shared<ExpressionMib::Expobjecttable>())
	,expresource_(std::make_shared<ExpressionMib::Expresource>())
	,expvaluetable_(std::make_shared<ExpressionMib::Expvaluetable>())
{
    expexpressiontable_->parent = this;

    expnames_->parent = this;

    expnametable_->parent = this;

    expobjecttable_->parent = this;

    expresource_->parent = this;

    expvaluetable_->parent = this;

    yang_name = "EXPRESSION-MIB"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::~ExpressionMib()
{
}

bool ExpressionMib::has_data() const
{
    return (expexpressiontable_ !=  nullptr && expexpressiontable_->has_data())
	|| (expnames_ !=  nullptr && expnames_->has_data())
	|| (expnametable_ !=  nullptr && expnametable_->has_data())
	|| (expobjecttable_ !=  nullptr && expobjecttable_->has_data())
	|| (expresource_ !=  nullptr && expresource_->has_data())
	|| (expvaluetable_ !=  nullptr && expvaluetable_->has_data());
}

bool ExpressionMib::has_operation() const
{
    return is_set(operation)
	|| (expexpressiontable_ !=  nullptr && expexpressiontable_->has_operation())
	|| (expnames_ !=  nullptr && expnames_->has_operation())
	|| (expnametable_ !=  nullptr && expnametable_->has_operation())
	|| (expobjecttable_ !=  nullptr && expobjecttable_->has_operation())
	|| (expresource_ !=  nullptr && expresource_->has_operation())
	|| (expvaluetable_ !=  nullptr && expvaluetable_->has_operation());
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
        if(expexpressiontable_ == nullptr)
        {
            expexpressiontable_ = std::make_shared<ExpressionMib::Expexpressiontable>();
        }
        return expexpressiontable_;
    }

    if(child_yang_name == "expNames")
    {
        if(expnames_ == nullptr)
        {
            expnames_ = std::make_shared<ExpressionMib::Expnames>();
        }
        return expnames_;
    }

    if(child_yang_name == "expNameTable")
    {
        if(expnametable_ == nullptr)
        {
            expnametable_ = std::make_shared<ExpressionMib::Expnametable>();
        }
        return expnametable_;
    }

    if(child_yang_name == "expObjectTable")
    {
        if(expobjecttable_ == nullptr)
        {
            expobjecttable_ = std::make_shared<ExpressionMib::Expobjecttable>();
        }
        return expobjecttable_;
    }

    if(child_yang_name == "expResource")
    {
        if(expresource_ == nullptr)
        {
            expresource_ = std::make_shared<ExpressionMib::Expresource>();
        }
        return expresource_;
    }

    if(child_yang_name == "expValueTable")
    {
        if(expvaluetable_ == nullptr)
        {
            expvaluetable_ = std::make_shared<ExpressionMib::Expvaluetable>();
        }
        return expvaluetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(expexpressiontable_ != nullptr)
    {
        children["expExpressionTable"] = expexpressiontable_;
    }

    if(expnames_ != nullptr)
    {
        children["expNames"] = expnames_;
    }

    if(expnametable_ != nullptr)
    {
        children["expNameTable"] = expnametable_;
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

void ExpressionMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(expresourcedeltaminimum.operation)
	|| is_set(expresourcedeltawildcardinstancemaximum.operation)
	|| is_set(expresourcedeltawildcardinstanceresourcelacks.operation)
	|| is_set(expresourcedeltawildcardinstances.operation)
	|| is_set(expresourcedeltawildcardinstanceshigh.operation);
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

    if (expresourcedeltaminimum.is_set || is_set(expresourcedeltaminimum.operation)) leaf_name_data.push_back(expresourcedeltaminimum.get_name_leafdata());
    if (expresourcedeltawildcardinstancemaximum.is_set || is_set(expresourcedeltawildcardinstancemaximum.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstancemaximum.get_name_leafdata());
    if (expresourcedeltawildcardinstanceresourcelacks.is_set || is_set(expresourcedeltawildcardinstanceresourcelacks.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstanceresourcelacks.get_name_leafdata());
    if (expresourcedeltawildcardinstances.is_set || is_set(expresourcedeltawildcardinstances.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstances.get_name_leafdata());
    if (expresourcedeltawildcardinstanceshigh.is_set || is_set(expresourcedeltawildcardinstanceshigh.operation)) leaf_name_data.push_back(expresourcedeltawildcardinstanceshigh.get_name_leafdata());


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

void ExpressionMib::Expresource::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(expnamehighestindex.operation)
	|| is_set(expnamelastchange.operation);
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

    if (expnamehighestindex.is_set || is_set(expnamehighestindex.operation)) leaf_name_data.push_back(expnamehighestindex.get_name_leafdata());
    if (expnamelastchange.is_set || is_set(expnamelastchange.operation)) leaf_name_data.push_back(expnamelastchange.get_name_leafdata());


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

void ExpressionMib::Expnames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expNameHighestIndex")
    {
        expnamehighestindex = value;
    }
    if(value_path == "expNameLastChange")
    {
        expnamelastchange = value;
    }
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
    for (std::size_t index=0; index<expnameentry_.size(); index++)
    {
        if(expnameentry_[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expnametable::has_operation() const
{
    for (std::size_t index=0; index<expnameentry_.size(); index++)
    {
        if(expnameentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : expnameentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expnametable::Expnameentry>();
        c->parent = this;
        expnameentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expnametable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expnameentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expnametable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expname.operation)
	|| is_set(expexpressionindex.operation)
	|| is_set(expnamestatus.operation);
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

    if (expname.is_set || is_set(expname.operation)) leaf_name_data.push_back(expname.get_name_leafdata());
    if (expexpressionindex.is_set || is_set(expexpressionindex.operation)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expnamestatus.is_set || is_set(expnamestatus.operation)) leaf_name_data.push_back(expnamestatus.get_name_leafdata());


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

void ExpressionMib::Expnametable::Expnameentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expName")
    {
        expname = value;
    }
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
    }
    if(value_path == "expNameStatus")
    {
        expnamestatus = value;
    }
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
    for (std::size_t index=0; index<expexpressionentry_.size(); index++)
    {
        if(expexpressionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expexpressiontable::has_operation() const
{
    for (std::size_t index=0; index<expexpressionentry_.size(); index++)
    {
        if(expexpressionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : expexpressionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expexpressiontable::Expexpressionentry>();
        c->parent = this;
        expexpressionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expexpressiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expexpressionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expexpressiontable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expexpressionindex.operation)
	|| is_set(expexpression.operation)
	|| is_set(expexpressioncomment.operation)
	|| is_set(expexpressiondeltainterval.operation)
	|| is_set(expexpressionerror.operation)
	|| is_set(expexpressionerrorindex.operation)
	|| is_set(expexpressionerrors.operation)
	|| is_set(expexpressionerrortime.operation)
	|| is_set(expexpressioninstance.operation)
	|| is_set(expexpressionname.operation)
	|| is_set(expexpressionowner.operation)
	|| is_set(expexpressionprefix.operation)
	|| is_set(expexpressionvaluetype.operation);
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

    if (expexpressionindex.is_set || is_set(expexpressionindex.operation)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expexpression.is_set || is_set(expexpression.operation)) leaf_name_data.push_back(expexpression.get_name_leafdata());
    if (expexpressioncomment.is_set || is_set(expexpressioncomment.operation)) leaf_name_data.push_back(expexpressioncomment.get_name_leafdata());
    if (expexpressiondeltainterval.is_set || is_set(expexpressiondeltainterval.operation)) leaf_name_data.push_back(expexpressiondeltainterval.get_name_leafdata());
    if (expexpressionerror.is_set || is_set(expexpressionerror.operation)) leaf_name_data.push_back(expexpressionerror.get_name_leafdata());
    if (expexpressionerrorindex.is_set || is_set(expexpressionerrorindex.operation)) leaf_name_data.push_back(expexpressionerrorindex.get_name_leafdata());
    if (expexpressionerrors.is_set || is_set(expexpressionerrors.operation)) leaf_name_data.push_back(expexpressionerrors.get_name_leafdata());
    if (expexpressionerrortime.is_set || is_set(expexpressionerrortime.operation)) leaf_name_data.push_back(expexpressionerrortime.get_name_leafdata());
    if (expexpressioninstance.is_set || is_set(expexpressioninstance.operation)) leaf_name_data.push_back(expexpressioninstance.get_name_leafdata());
    if (expexpressionname.is_set || is_set(expexpressionname.operation)) leaf_name_data.push_back(expexpressionname.get_name_leafdata());
    if (expexpressionowner.is_set || is_set(expexpressionowner.operation)) leaf_name_data.push_back(expexpressionowner.get_name_leafdata());
    if (expexpressionprefix.is_set || is_set(expexpressionprefix.operation)) leaf_name_data.push_back(expexpressionprefix.get_name_leafdata());
    if (expexpressionvaluetype.is_set || is_set(expexpressionvaluetype.operation)) leaf_name_data.push_back(expexpressionvaluetype.get_name_leafdata());


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

void ExpressionMib::Expexpressiontable::Expexpressionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
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
    if(value_path == "expExpressionError")
    {
        expexpressionerror = value;
    }
    if(value_path == "expExpressionErrorIndex")
    {
        expexpressionerrorindex = value;
    }
    if(value_path == "expExpressionErrors")
    {
        expexpressionerrors = value;
    }
    if(value_path == "expExpressionErrorTime")
    {
        expexpressionerrortime = value;
    }
    if(value_path == "expExpressionInstance")
    {
        expexpressioninstance = value;
    }
    if(value_path == "expExpressionName")
    {
        expexpressionname = value;
    }
    if(value_path == "expExpressionOwner")
    {
        expexpressionowner = value;
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

ExpressionMib::Expobjecttable::Expobjecttable()
{
    yang_name = "expObjectTable"; yang_parent_name = "EXPRESSION-MIB";
}

ExpressionMib::Expobjecttable::~Expobjecttable()
{
}

bool ExpressionMib::Expobjecttable::has_data() const
{
    for (std::size_t index=0; index<expobjectentry_.size(); index++)
    {
        if(expobjectentry_[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expobjecttable::has_operation() const
{
    for (std::size_t index=0; index<expobjectentry_.size(); index++)
    {
        if(expobjectentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : expobjectentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expobjecttable::Expobjectentry>();
        c->parent = this;
        expobjectentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expobjectentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expobjecttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expexpressionindex.operation)
	|| is_set(expobjectindex.operation)
	|| is_set(expobjectconditional.operation)
	|| is_set(expobjectconditionalwildcard.operation)
	|| is_set(expobjectdeltadiscontinuityid.operation)
	|| is_set(expobjectdiscontinuityidtype.operation)
	|| is_set(expobjectdiscontinuityidwildcard.operation)
	|| is_set(expobjectid.operation)
	|| is_set(expobjectidwildcard.operation)
	|| is_set(expobjectsampletype.operation)
	|| is_set(expobjectstatus.operation);
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

    if (expexpressionindex.is_set || is_set(expexpressionindex.operation)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expobjectindex.is_set || is_set(expobjectindex.operation)) leaf_name_data.push_back(expobjectindex.get_name_leafdata());
    if (expobjectconditional.is_set || is_set(expobjectconditional.operation)) leaf_name_data.push_back(expobjectconditional.get_name_leafdata());
    if (expobjectconditionalwildcard.is_set || is_set(expobjectconditionalwildcard.operation)) leaf_name_data.push_back(expobjectconditionalwildcard.get_name_leafdata());
    if (expobjectdeltadiscontinuityid.is_set || is_set(expobjectdeltadiscontinuityid.operation)) leaf_name_data.push_back(expobjectdeltadiscontinuityid.get_name_leafdata());
    if (expobjectdiscontinuityidtype.is_set || is_set(expobjectdiscontinuityidtype.operation)) leaf_name_data.push_back(expobjectdiscontinuityidtype.get_name_leafdata());
    if (expobjectdiscontinuityidwildcard.is_set || is_set(expobjectdiscontinuityidwildcard.operation)) leaf_name_data.push_back(expobjectdiscontinuityidwildcard.get_name_leafdata());
    if (expobjectid.is_set || is_set(expobjectid.operation)) leaf_name_data.push_back(expobjectid.get_name_leafdata());
    if (expobjectidwildcard.is_set || is_set(expobjectidwildcard.operation)) leaf_name_data.push_back(expobjectidwildcard.get_name_leafdata());
    if (expobjectsampletype.is_set || is_set(expobjectsampletype.operation)) leaf_name_data.push_back(expobjectsampletype.get_name_leafdata());
    if (expobjectstatus.is_set || is_set(expobjectstatus.operation)) leaf_name_data.push_back(expobjectstatus.get_name_leafdata());


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

void ExpressionMib::Expobjecttable::Expobjectentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
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
    if(value_path == "expObjectStatus")
    {
        expobjectstatus = value;
    }
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
    for (std::size_t index=0; index<expvalueentry_.size(); index++)
    {
        if(expvalueentry_[index]->has_data())
            return true;
    }
    return false;
}

bool ExpressionMib::Expvaluetable::has_operation() const
{
    for (std::size_t index=0; index<expvalueentry_.size(); index++)
    {
        if(expvalueentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : expvalueentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExpressionMib::Expvaluetable::Expvalueentry>();
        c->parent = this;
        expvalueentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExpressionMib::Expvaluetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expvalueentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExpressionMib::Expvaluetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(expexpressionindex.operation)
	|| is_set(expvalueinstance.operation)
	|| is_set(expvaluecounter32val.operation)
	|| is_set(expvaluecounter64val.operation)
	|| is_set(expvalueinteger32val.operation)
	|| is_set(expvalueipaddressval.operation)
	|| is_set(expvalueoctetstringval.operation)
	|| is_set(expvalueoidval.operation)
	|| is_set(expvalueunsigned32val.operation);
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

    if (expexpressionindex.is_set || is_set(expexpressionindex.operation)) leaf_name_data.push_back(expexpressionindex.get_name_leafdata());
    if (expvalueinstance.is_set || is_set(expvalueinstance.operation)) leaf_name_data.push_back(expvalueinstance.get_name_leafdata());
    if (expvaluecounter32val.is_set || is_set(expvaluecounter32val.operation)) leaf_name_data.push_back(expvaluecounter32val.get_name_leafdata());
    if (expvaluecounter64val.is_set || is_set(expvaluecounter64val.operation)) leaf_name_data.push_back(expvaluecounter64val.get_name_leafdata());
    if (expvalueinteger32val.is_set || is_set(expvalueinteger32val.operation)) leaf_name_data.push_back(expvalueinteger32val.get_name_leafdata());
    if (expvalueipaddressval.is_set || is_set(expvalueipaddressval.operation)) leaf_name_data.push_back(expvalueipaddressval.get_name_leafdata());
    if (expvalueoctetstringval.is_set || is_set(expvalueoctetstringval.operation)) leaf_name_data.push_back(expvalueoctetstringval.get_name_leafdata());
    if (expvalueoidval.is_set || is_set(expvalueoidval.operation)) leaf_name_data.push_back(expvalueoidval.get_name_leafdata());
    if (expvalueunsigned32val.is_set || is_set(expvalueunsigned32val.operation)) leaf_name_data.push_back(expvalueunsigned32val.get_name_leafdata());


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

void ExpressionMib::Expvaluetable::Expvalueentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expExpressionIndex")
    {
        expexpressionindex = value;
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
    if(value_path == "expValueUnsigned32Val")
    {
        expvalueunsigned32val = value;
    }
}

const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::counter32 {1, "counter32"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::unsignedOrGauge32 {2, "unsignedOrGauge32"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::timeTicks {3, "timeTicks"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::integer32 {4, "integer32"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::ipAddress {5, "ipAddress"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::octetString {6, "octetString"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::objectId {7, "objectId"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionvaluetypeEnum::counter64 {8, "counter64"};

const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::invalidSyntax {1, "invalidSyntax"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::undefinedObjectIndex {2, "undefinedObjectIndex"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::unrecognizedOperator {3, "unrecognizedOperator"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::unrecognizedFunction {4, "unrecognizedFunction"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::invalidOperandType {5, "invalidOperandType"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::unmatchedParenthesis {6, "unmatchedParenthesis"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::tooManyWildcardValues {7, "tooManyWildcardValues"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::recursion {8, "recursion"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::deltaTooShort {9, "deltaTooShort"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::resourceUnavailable {10, "resourceUnavailable"};
const Enum::YLeaf ExpressionMib::Expexpressiontable::Expexpressionentry::ExpexpressionerrorEnum::divideByZero {11, "divideByZero"};

const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::ExpobjectsampletypeEnum::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::ExpobjectsampletypeEnum::deltaValue {2, "deltaValue"};

const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::ExpobjectdiscontinuityidtypeEnum::timeTicks {1, "timeTicks"};
const Enum::YLeaf ExpressionMib::Expobjecttable::Expobjectentry::ExpobjectdiscontinuityidtypeEnum::timeStamp {2, "timeStamp"};


}
}

