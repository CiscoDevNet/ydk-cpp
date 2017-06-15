
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DISMAN_EVENT_MIB.hpp"

namespace ydk {
namespace DISMAN_EVENT_MIB {

DismanEventMib::DismanEventMib()
    :
    mteevent_(std::make_shared<DismanEventMib::Mteevent>())
	,mteeventnotificationtable_(std::make_shared<DismanEventMib::Mteeventnotificationtable>())
	,mteeventsettable_(std::make_shared<DismanEventMib::Mteeventsettable>())
	,mteeventtable_(std::make_shared<DismanEventMib::Mteeventtable>())
	,mteobjectstable_(std::make_shared<DismanEventMib::Mteobjectstable>())
	,mteresource_(std::make_shared<DismanEventMib::Mteresource>())
	,mtetrigger_(std::make_shared<DismanEventMib::Mtetrigger>())
	,mtetriggerbooleantable_(std::make_shared<DismanEventMib::Mtetriggerbooleantable>())
	,mtetriggerdeltatable_(std::make_shared<DismanEventMib::Mtetriggerdeltatable>())
	,mtetriggerexistencetable_(std::make_shared<DismanEventMib::Mtetriggerexistencetable>())
	,mtetriggertable_(std::make_shared<DismanEventMib::Mtetriggertable>())
	,mtetriggerthresholdtable_(std::make_shared<DismanEventMib::Mtetriggerthresholdtable>())
{
    mteevent_->parent = this;

    mteeventnotificationtable_->parent = this;

    mteeventsettable_->parent = this;

    mteeventtable_->parent = this;

    mteobjectstable_->parent = this;

    mteresource_->parent = this;

    mtetrigger_->parent = this;

    mtetriggerbooleantable_->parent = this;

    mtetriggerdeltatable_->parent = this;

    mtetriggerexistencetable_->parent = this;

    mtetriggertable_->parent = this;

    mtetriggerthresholdtable_->parent = this;

    yang_name = "DISMAN-EVENT-MIB"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::~DismanEventMib()
{
}

bool DismanEventMib::has_data() const
{
    return (mteevent_ !=  nullptr && mteevent_->has_data())
	|| (mteeventnotificationtable_ !=  nullptr && mteeventnotificationtable_->has_data())
	|| (mteeventsettable_ !=  nullptr && mteeventsettable_->has_data())
	|| (mteeventtable_ !=  nullptr && mteeventtable_->has_data())
	|| (mteobjectstable_ !=  nullptr && mteobjectstable_->has_data())
	|| (mteresource_ !=  nullptr && mteresource_->has_data())
	|| (mtetrigger_ !=  nullptr && mtetrigger_->has_data())
	|| (mtetriggerbooleantable_ !=  nullptr && mtetriggerbooleantable_->has_data())
	|| (mtetriggerdeltatable_ !=  nullptr && mtetriggerdeltatable_->has_data())
	|| (mtetriggerexistencetable_ !=  nullptr && mtetriggerexistencetable_->has_data())
	|| (mtetriggertable_ !=  nullptr && mtetriggertable_->has_data())
	|| (mtetriggerthresholdtable_ !=  nullptr && mtetriggerthresholdtable_->has_data());
}

bool DismanEventMib::has_operation() const
{
    return is_set(operation)
	|| (mteevent_ !=  nullptr && mteevent_->has_operation())
	|| (mteeventnotificationtable_ !=  nullptr && mteeventnotificationtable_->has_operation())
	|| (mteeventsettable_ !=  nullptr && mteeventsettable_->has_operation())
	|| (mteeventtable_ !=  nullptr && mteeventtable_->has_operation())
	|| (mteobjectstable_ !=  nullptr && mteobjectstable_->has_operation())
	|| (mteresource_ !=  nullptr && mteresource_->has_operation())
	|| (mtetrigger_ !=  nullptr && mtetrigger_->has_operation())
	|| (mtetriggerbooleantable_ !=  nullptr && mtetriggerbooleantable_->has_operation())
	|| (mtetriggerdeltatable_ !=  nullptr && mtetriggerdeltatable_->has_operation())
	|| (mtetriggerexistencetable_ !=  nullptr && mtetriggerexistencetable_->has_operation())
	|| (mtetriggertable_ !=  nullptr && mtetriggertable_->has_operation())
	|| (mtetriggerthresholdtable_ !=  nullptr && mtetriggerthresholdtable_->has_operation());
}

std::string DismanEventMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB";

    return path_buffer.str();

}

const EntityPath DismanEventMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DismanEventMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteEvent")
    {
        if(mteevent_ == nullptr)
        {
            mteevent_ = std::make_shared<DismanEventMib::Mteevent>();
        }
        return mteevent_;
    }

    if(child_yang_name == "mteEventNotificationTable")
    {
        if(mteeventnotificationtable_ == nullptr)
        {
            mteeventnotificationtable_ = std::make_shared<DismanEventMib::Mteeventnotificationtable>();
        }
        return mteeventnotificationtable_;
    }

    if(child_yang_name == "mteEventSetTable")
    {
        if(mteeventsettable_ == nullptr)
        {
            mteeventsettable_ = std::make_shared<DismanEventMib::Mteeventsettable>();
        }
        return mteeventsettable_;
    }

    if(child_yang_name == "mteEventTable")
    {
        if(mteeventtable_ == nullptr)
        {
            mteeventtable_ = std::make_shared<DismanEventMib::Mteeventtable>();
        }
        return mteeventtable_;
    }

    if(child_yang_name == "mteObjectsTable")
    {
        if(mteobjectstable_ == nullptr)
        {
            mteobjectstable_ = std::make_shared<DismanEventMib::Mteobjectstable>();
        }
        return mteobjectstable_;
    }

    if(child_yang_name == "mteResource")
    {
        if(mteresource_ == nullptr)
        {
            mteresource_ = std::make_shared<DismanEventMib::Mteresource>();
        }
        return mteresource_;
    }

    if(child_yang_name == "mteTrigger")
    {
        if(mtetrigger_ == nullptr)
        {
            mtetrigger_ = std::make_shared<DismanEventMib::Mtetrigger>();
        }
        return mtetrigger_;
    }

    if(child_yang_name == "mteTriggerBooleanTable")
    {
        if(mtetriggerbooleantable_ == nullptr)
        {
            mtetriggerbooleantable_ = std::make_shared<DismanEventMib::Mtetriggerbooleantable>();
        }
        return mtetriggerbooleantable_;
    }

    if(child_yang_name == "mteTriggerDeltaTable")
    {
        if(mtetriggerdeltatable_ == nullptr)
        {
            mtetriggerdeltatable_ = std::make_shared<DismanEventMib::Mtetriggerdeltatable>();
        }
        return mtetriggerdeltatable_;
    }

    if(child_yang_name == "mteTriggerExistenceTable")
    {
        if(mtetriggerexistencetable_ == nullptr)
        {
            mtetriggerexistencetable_ = std::make_shared<DismanEventMib::Mtetriggerexistencetable>();
        }
        return mtetriggerexistencetable_;
    }

    if(child_yang_name == "mteTriggerTable")
    {
        if(mtetriggertable_ == nullptr)
        {
            mtetriggertable_ = std::make_shared<DismanEventMib::Mtetriggertable>();
        }
        return mtetriggertable_;
    }

    if(child_yang_name == "mteTriggerThresholdTable")
    {
        if(mtetriggerthresholdtable_ == nullptr)
        {
            mtetriggerthresholdtable_ = std::make_shared<DismanEventMib::Mtetriggerthresholdtable>();
        }
        return mtetriggerthresholdtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mteevent_ != nullptr)
    {
        children["mteEvent"] = mteevent_;
    }

    if(mteeventnotificationtable_ != nullptr)
    {
        children["mteEventNotificationTable"] = mteeventnotificationtable_;
    }

    if(mteeventsettable_ != nullptr)
    {
        children["mteEventSetTable"] = mteeventsettable_;
    }

    if(mteeventtable_ != nullptr)
    {
        children["mteEventTable"] = mteeventtable_;
    }

    if(mteobjectstable_ != nullptr)
    {
        children["mteObjectsTable"] = mteobjectstable_;
    }

    if(mteresource_ != nullptr)
    {
        children["mteResource"] = mteresource_;
    }

    if(mtetrigger_ != nullptr)
    {
        children["mteTrigger"] = mtetrigger_;
    }

    if(mtetriggerbooleantable_ != nullptr)
    {
        children["mteTriggerBooleanTable"] = mtetriggerbooleantable_;
    }

    if(mtetriggerdeltatable_ != nullptr)
    {
        children["mteTriggerDeltaTable"] = mtetriggerdeltatable_;
    }

    if(mtetriggerexistencetable_ != nullptr)
    {
        children["mteTriggerExistenceTable"] = mtetriggerexistencetable_;
    }

    if(mtetriggertable_ != nullptr)
    {
        children["mteTriggerTable"] = mtetriggertable_;
    }

    if(mtetriggerthresholdtable_ != nullptr)
    {
        children["mteTriggerThresholdTable"] = mtetriggerthresholdtable_;
    }

    return children;
}

void DismanEventMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DismanEventMib::clone_ptr() const
{
    return std::make_shared<DismanEventMib>();
}

std::string DismanEventMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DismanEventMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DismanEventMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

DismanEventMib::Mteresource::Mteresource()
    :
    mteresourcesampleinstancelacks{YType::uint32, "mteResourceSampleInstanceLacks"},
    mteresourcesampleinstancemaximum{YType::uint32, "mteResourceSampleInstanceMaximum"},
    mteresourcesampleinstances{YType::uint32, "mteResourceSampleInstances"},
    mteresourcesampleinstanceshigh{YType::uint32, "mteResourceSampleInstancesHigh"},
    mteresourcesampleminimum{YType::int32, "mteResourceSampleMinimum"}
{
    yang_name = "mteResource"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mteresource::~Mteresource()
{
}

bool DismanEventMib::Mteresource::has_data() const
{
    return mteresourcesampleinstancelacks.is_set
	|| mteresourcesampleinstancemaximum.is_set
	|| mteresourcesampleinstances.is_set
	|| mteresourcesampleinstanceshigh.is_set
	|| mteresourcesampleminimum.is_set;
}

bool DismanEventMib::Mteresource::has_operation() const
{
    return is_set(operation)
	|| is_set(mteresourcesampleinstancelacks.operation)
	|| is_set(mteresourcesampleinstancemaximum.operation)
	|| is_set(mteresourcesampleinstances.operation)
	|| is_set(mteresourcesampleinstanceshigh.operation)
	|| is_set(mteresourcesampleminimum.operation);
}

std::string DismanEventMib::Mteresource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteResource";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteresource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteresourcesampleinstancelacks.is_set || is_set(mteresourcesampleinstancelacks.operation)) leaf_name_data.push_back(mteresourcesampleinstancelacks.get_name_leafdata());
    if (mteresourcesampleinstancemaximum.is_set || is_set(mteresourcesampleinstancemaximum.operation)) leaf_name_data.push_back(mteresourcesampleinstancemaximum.get_name_leafdata());
    if (mteresourcesampleinstances.is_set || is_set(mteresourcesampleinstances.operation)) leaf_name_data.push_back(mteresourcesampleinstances.get_name_leafdata());
    if (mteresourcesampleinstanceshigh.is_set || is_set(mteresourcesampleinstanceshigh.operation)) leaf_name_data.push_back(mteresourcesampleinstanceshigh.get_name_leafdata());
    if (mteresourcesampleminimum.is_set || is_set(mteresourcesampleminimum.operation)) leaf_name_data.push_back(mteresourcesampleminimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteresource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteresource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mteresource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteResourceSampleInstanceLacks")
    {
        mteresourcesampleinstancelacks = value;
    }
    if(value_path == "mteResourceSampleInstanceMaximum")
    {
        mteresourcesampleinstancemaximum = value;
    }
    if(value_path == "mteResourceSampleInstances")
    {
        mteresourcesampleinstances = value;
    }
    if(value_path == "mteResourceSampleInstancesHigh")
    {
        mteresourcesampleinstanceshigh = value;
    }
    if(value_path == "mteResourceSampleMinimum")
    {
        mteresourcesampleminimum = value;
    }
}

DismanEventMib::Mtetrigger::Mtetrigger()
    :
    mtetriggerfailures{YType::uint32, "mteTriggerFailures"}
{
    yang_name = "mteTrigger"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mtetrigger::~Mtetrigger()
{
}

bool DismanEventMib::Mtetrigger::has_data() const
{
    return mtetriggerfailures.is_set;
}

bool DismanEventMib::Mtetrigger::has_operation() const
{
    return is_set(operation)
	|| is_set(mtetriggerfailures.operation);
}

std::string DismanEventMib::Mtetrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTrigger";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetrigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtetriggerfailures.is_set || is_set(mtetriggerfailures.operation)) leaf_name_data.push_back(mtetriggerfailures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mtetrigger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteTriggerFailures")
    {
        mtetriggerfailures = value;
    }
}

DismanEventMib::Mteevent::Mteevent()
    :
    mteeventfailures{YType::uint32, "mteEventFailures"}
{
    yang_name = "mteEvent"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mteevent::~Mteevent()
{
}

bool DismanEventMib::Mteevent::has_data() const
{
    return mteeventfailures.is_set;
}

bool DismanEventMib::Mteevent::has_operation() const
{
    return is_set(operation)
	|| is_set(mteeventfailures.operation);
}

std::string DismanEventMib::Mteevent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEvent";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteevent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteeventfailures.is_set || is_set(mteeventfailures.operation)) leaf_name_data.push_back(mteeventfailures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteevent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteevent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mteevent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteEventFailures")
    {
        mteeventfailures = value;
    }
}

DismanEventMib::Mtetriggertable::Mtetriggertable()
{
    yang_name = "mteTriggerTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mtetriggertable::~Mtetriggertable()
{
}

bool DismanEventMib::Mtetriggertable::has_data() const
{
    for (std::size_t index=0; index<mtetriggerentry_.size(); index++)
    {
        if(mtetriggerentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggertable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerentry_.size(); index++)
    {
        if(mtetriggerentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mtetriggertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerEntry")
    {
        for(auto const & c : mtetriggerentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggertable::Mtetriggerentry>();
        c->parent = this;
        mtetriggerentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggertable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mtetriggertable::Mtetriggerentry::Mtetriggerentry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggercomment{YType::str, "mteTriggerComment"},
    mtetriggercontextname{YType::str, "mteTriggerContextName"},
    mtetriggercontextnamewildcard{YType::boolean, "mteTriggerContextNameWildcard"},
    mtetriggerenabled{YType::boolean, "mteTriggerEnabled"},
    mtetriggerentrystatus{YType::enumeration, "mteTriggerEntryStatus"},
    mtetriggerfrequency{YType::uint32, "mteTriggerFrequency"},
    mtetriggerobjects{YType::str, "mteTriggerObjects"},
    mtetriggerobjectsowner{YType::str, "mteTriggerObjectsOwner"},
    mtetriggersampletype{YType::enumeration, "mteTriggerSampleType"},
    mtetriggertargettag{YType::str, "mteTriggerTargetTag"},
    mtetriggertest{YType::bits, "mteTriggerTest"},
    mtetriggervalueid{YType::str, "mteTriggerValueID"},
    mtetriggervalueidwildcard{YType::boolean, "mteTriggerValueIDWildcard"}
{
    yang_name = "mteTriggerEntry"; yang_parent_name = "mteTriggerTable";
}

DismanEventMib::Mtetriggertable::Mtetriggerentry::~Mtetriggerentry()
{
}

bool DismanEventMib::Mtetriggertable::Mtetriggerentry::has_data() const
{
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggercomment.is_set
	|| mtetriggercontextname.is_set
	|| mtetriggercontextnamewildcard.is_set
	|| mtetriggerenabled.is_set
	|| mtetriggerentrystatus.is_set
	|| mtetriggerfrequency.is_set
	|| mtetriggerobjects.is_set
	|| mtetriggerobjectsowner.is_set
	|| mtetriggersampletype.is_set
	|| mtetriggertargettag.is_set
	|| mtetriggertest.is_set
	|| mtetriggervalueid.is_set
	|| mtetriggervalueidwildcard.is_set;
}

bool DismanEventMib::Mtetriggertable::Mtetriggerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mtetriggername.operation)
	|| is_set(mtetriggercomment.operation)
	|| is_set(mtetriggercontextname.operation)
	|| is_set(mtetriggercontextnamewildcard.operation)
	|| is_set(mtetriggerenabled.operation)
	|| is_set(mtetriggerentrystatus.operation)
	|| is_set(mtetriggerfrequency.operation)
	|| is_set(mtetriggerobjects.operation)
	|| is_set(mtetriggerobjectsowner.operation)
	|| is_set(mtetriggersampletype.operation)
	|| is_set(mtetriggertargettag.operation)
	|| is_set(mtetriggertest.operation)
	|| is_set(mtetriggervalueid.operation)
	|| is_set(mtetriggervalueidwildcard.operation);
}

std::string DismanEventMib::Mtetriggertable::Mtetriggerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteTriggerName='" <<mtetriggername <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggertable::Mtetriggerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.operation)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggercomment.is_set || is_set(mtetriggercomment.operation)) leaf_name_data.push_back(mtetriggercomment.get_name_leafdata());
    if (mtetriggercontextname.is_set || is_set(mtetriggercontextname.operation)) leaf_name_data.push_back(mtetriggercontextname.get_name_leafdata());
    if (mtetriggercontextnamewildcard.is_set || is_set(mtetriggercontextnamewildcard.operation)) leaf_name_data.push_back(mtetriggercontextnamewildcard.get_name_leafdata());
    if (mtetriggerenabled.is_set || is_set(mtetriggerenabled.operation)) leaf_name_data.push_back(mtetriggerenabled.get_name_leafdata());
    if (mtetriggerentrystatus.is_set || is_set(mtetriggerentrystatus.operation)) leaf_name_data.push_back(mtetriggerentrystatus.get_name_leafdata());
    if (mtetriggerfrequency.is_set || is_set(mtetriggerfrequency.operation)) leaf_name_data.push_back(mtetriggerfrequency.get_name_leafdata());
    if (mtetriggerobjects.is_set || is_set(mtetriggerobjects.operation)) leaf_name_data.push_back(mtetriggerobjects.get_name_leafdata());
    if (mtetriggerobjectsowner.is_set || is_set(mtetriggerobjectsowner.operation)) leaf_name_data.push_back(mtetriggerobjectsowner.get_name_leafdata());
    if (mtetriggersampletype.is_set || is_set(mtetriggersampletype.operation)) leaf_name_data.push_back(mtetriggersampletype.get_name_leafdata());
    if (mtetriggertargettag.is_set || is_set(mtetriggertargettag.operation)) leaf_name_data.push_back(mtetriggertargettag.get_name_leafdata());
    if (mtetriggertest.is_set || is_set(mtetriggertest.operation)) leaf_name_data.push_back(mtetriggertest.get_name_leafdata());
    if (mtetriggervalueid.is_set || is_set(mtetriggervalueid.operation)) leaf_name_data.push_back(mtetriggervalueid.get_name_leafdata());
    if (mtetriggervalueidwildcard.is_set || is_set(mtetriggervalueidwildcard.operation)) leaf_name_data.push_back(mtetriggervalueidwildcard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggertable::Mtetriggerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggertable::Mtetriggerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mtetriggertable::Mtetriggerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
    }
    if(value_path == "mteTriggerComment")
    {
        mtetriggercomment = value;
    }
    if(value_path == "mteTriggerContextName")
    {
        mtetriggercontextname = value;
    }
    if(value_path == "mteTriggerContextNameWildcard")
    {
        mtetriggercontextnamewildcard = value;
    }
    if(value_path == "mteTriggerEnabled")
    {
        mtetriggerenabled = value;
    }
    if(value_path == "mteTriggerEntryStatus")
    {
        mtetriggerentrystatus = value;
    }
    if(value_path == "mteTriggerFrequency")
    {
        mtetriggerfrequency = value;
    }
    if(value_path == "mteTriggerObjects")
    {
        mtetriggerobjects = value;
    }
    if(value_path == "mteTriggerObjectsOwner")
    {
        mtetriggerobjectsowner = value;
    }
    if(value_path == "mteTriggerSampleType")
    {
        mtetriggersampletype = value;
    }
    if(value_path == "mteTriggerTargetTag")
    {
        mtetriggertargettag = value;
    }
    if(value_path == "mteTriggerTest")
    {
        mtetriggertest[value] = true;
    }
    if(value_path == "mteTriggerValueID")
    {
        mtetriggervalueid = value;
    }
    if(value_path == "mteTriggerValueIDWildcard")
    {
        mtetriggervalueidwildcard = value;
    }
}

DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltatable()
{
    yang_name = "mteTriggerDeltaTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mtetriggerdeltatable::~Mtetriggerdeltatable()
{
}

bool DismanEventMib::Mtetriggerdeltatable::has_data() const
{
    for (std::size_t index=0; index<mtetriggerdeltaentry_.size(); index++)
    {
        if(mtetriggerdeltaentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerdeltatable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerdeltaentry_.size(); index++)
    {
        if(mtetriggerdeltaentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mtetriggerdeltatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerDeltaTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerdeltatable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerdeltatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerDeltaEntry")
    {
        for(auto const & c : mtetriggerdeltaentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry>();
        c->parent = this;
        mtetriggerdeltaentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerdeltatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerdeltaentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerdeltatable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::Mtetriggerdeltaentry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerdeltadiscontinuityid{YType::str, "mteTriggerDeltaDiscontinuityID"},
    mtetriggerdeltadiscontinuityidtype{YType::enumeration, "mteTriggerDeltaDiscontinuityIDType"},
    mtetriggerdeltadiscontinuityidwildcard{YType::boolean, "mteTriggerDeltaDiscontinuityIDWildcard"}
{
    yang_name = "mteTriggerDeltaEntry"; yang_parent_name = "mteTriggerDeltaTable";
}

DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::~Mtetriggerdeltaentry()
{
}

bool DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::has_data() const
{
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerdeltadiscontinuityid.is_set
	|| mtetriggerdeltadiscontinuityidtype.is_set
	|| mtetriggerdeltadiscontinuityidwildcard.is_set;
}

bool DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mtetriggername.operation)
	|| is_set(mtetriggerdeltadiscontinuityid.operation)
	|| is_set(mtetriggerdeltadiscontinuityidtype.operation)
	|| is_set(mtetriggerdeltadiscontinuityidwildcard.operation);
}

std::string DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerDeltaEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteTriggerName='" <<mtetriggername <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerDeltaTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.operation)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityid.is_set || is_set(mtetriggerdeltadiscontinuityid.operation)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityid.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityidtype.is_set || is_set(mtetriggerdeltadiscontinuityidtype.operation)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityidtype.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityidwildcard.is_set || is_set(mtetriggerdeltadiscontinuityidwildcard.operation)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityidwildcard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityID")
    {
        mtetriggerdeltadiscontinuityid = value;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDType")
    {
        mtetriggerdeltadiscontinuityidtype = value;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDWildcard")
    {
        mtetriggerdeltadiscontinuityidwildcard = value;
    }
}

DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistencetable()
{
    yang_name = "mteTriggerExistenceTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mtetriggerexistencetable::~Mtetriggerexistencetable()
{
}

bool DismanEventMib::Mtetriggerexistencetable::has_data() const
{
    for (std::size_t index=0; index<mtetriggerexistenceentry_.size(); index++)
    {
        if(mtetriggerexistenceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerexistencetable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerexistenceentry_.size(); index++)
    {
        if(mtetriggerexistenceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mtetriggerexistencetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerExistenceTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerexistencetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerexistencetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerExistenceEntry")
    {
        for(auto const & c : mtetriggerexistenceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry>();
        c->parent = this;
        mtetriggerexistenceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerexistencetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerexistenceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerexistencetable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::Mtetriggerexistenceentry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerexistenceevent{YType::str, "mteTriggerExistenceEvent"},
    mtetriggerexistenceeventowner{YType::str, "mteTriggerExistenceEventOwner"},
    mtetriggerexistenceobjects{YType::str, "mteTriggerExistenceObjects"},
    mtetriggerexistenceobjectsowner{YType::str, "mteTriggerExistenceObjectsOwner"},
    mtetriggerexistencestartup{YType::bits, "mteTriggerExistenceStartup"},
    mtetriggerexistencetest{YType::bits, "mteTriggerExistenceTest"}
{
    yang_name = "mteTriggerExistenceEntry"; yang_parent_name = "mteTriggerExistenceTable";
}

DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::~Mtetriggerexistenceentry()
{
}

bool DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::has_data() const
{
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerexistenceevent.is_set
	|| mtetriggerexistenceeventowner.is_set
	|| mtetriggerexistenceobjects.is_set
	|| mtetriggerexistenceobjectsowner.is_set
	|| mtetriggerexistencestartup.is_set
	|| mtetriggerexistencetest.is_set;
}

bool DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mtetriggername.operation)
	|| is_set(mtetriggerexistenceevent.operation)
	|| is_set(mtetriggerexistenceeventowner.operation)
	|| is_set(mtetriggerexistenceobjects.operation)
	|| is_set(mtetriggerexistenceobjectsowner.operation)
	|| is_set(mtetriggerexistencestartup.operation)
	|| is_set(mtetriggerexistencetest.operation);
}

std::string DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerExistenceEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteTriggerName='" <<mtetriggername <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerExistenceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.operation)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerexistenceevent.is_set || is_set(mtetriggerexistenceevent.operation)) leaf_name_data.push_back(mtetriggerexistenceevent.get_name_leafdata());
    if (mtetriggerexistenceeventowner.is_set || is_set(mtetriggerexistenceeventowner.operation)) leaf_name_data.push_back(mtetriggerexistenceeventowner.get_name_leafdata());
    if (mtetriggerexistenceobjects.is_set || is_set(mtetriggerexistenceobjects.operation)) leaf_name_data.push_back(mtetriggerexistenceobjects.get_name_leafdata());
    if (mtetriggerexistenceobjectsowner.is_set || is_set(mtetriggerexistenceobjectsowner.operation)) leaf_name_data.push_back(mtetriggerexistenceobjectsowner.get_name_leafdata());
    if (mtetriggerexistencestartup.is_set || is_set(mtetriggerexistencestartup.operation)) leaf_name_data.push_back(mtetriggerexistencestartup.get_name_leafdata());
    if (mtetriggerexistencetest.is_set || is_set(mtetriggerexistencetest.operation)) leaf_name_data.push_back(mtetriggerexistencetest.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
    }
    if(value_path == "mteTriggerExistenceEvent")
    {
        mtetriggerexistenceevent = value;
    }
    if(value_path == "mteTriggerExistenceEventOwner")
    {
        mtetriggerexistenceeventowner = value;
    }
    if(value_path == "mteTriggerExistenceObjects")
    {
        mtetriggerexistenceobjects = value;
    }
    if(value_path == "mteTriggerExistenceObjectsOwner")
    {
        mtetriggerexistenceobjectsowner = value;
    }
    if(value_path == "mteTriggerExistenceStartup")
    {
        mtetriggerexistencestartup[value] = true;
    }
    if(value_path == "mteTriggerExistenceTest")
    {
        mtetriggerexistencetest[value] = true;
    }
}

DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleantable()
{
    yang_name = "mteTriggerBooleanTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mtetriggerbooleantable::~Mtetriggerbooleantable()
{
}

bool DismanEventMib::Mtetriggerbooleantable::has_data() const
{
    for (std::size_t index=0; index<mtetriggerbooleanentry_.size(); index++)
    {
        if(mtetriggerbooleanentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerbooleantable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerbooleanentry_.size(); index++)
    {
        if(mtetriggerbooleanentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mtetriggerbooleantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerBooleanTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerbooleantable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerbooleantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerBooleanEntry")
    {
        for(auto const & c : mtetriggerbooleanentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry>();
        c->parent = this;
        mtetriggerbooleanentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerbooleantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerbooleanentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerbooleantable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleanentry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerbooleancomparison{YType::enumeration, "mteTriggerBooleanComparison"},
    mtetriggerbooleanevent{YType::str, "mteTriggerBooleanEvent"},
    mtetriggerbooleaneventowner{YType::str, "mteTriggerBooleanEventOwner"},
    mtetriggerbooleanobjects{YType::str, "mteTriggerBooleanObjects"},
    mtetriggerbooleanobjectsowner{YType::str, "mteTriggerBooleanObjectsOwner"},
    mtetriggerbooleanstartup{YType::boolean, "mteTriggerBooleanStartup"},
    mtetriggerbooleanvalue{YType::int32, "mteTriggerBooleanValue"}
{
    yang_name = "mteTriggerBooleanEntry"; yang_parent_name = "mteTriggerBooleanTable";
}

DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::~Mtetriggerbooleanentry()
{
}

bool DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::has_data() const
{
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerbooleancomparison.is_set
	|| mtetriggerbooleanevent.is_set
	|| mtetriggerbooleaneventowner.is_set
	|| mtetriggerbooleanobjects.is_set
	|| mtetriggerbooleanobjectsowner.is_set
	|| mtetriggerbooleanstartup.is_set
	|| mtetriggerbooleanvalue.is_set;
}

bool DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mtetriggername.operation)
	|| is_set(mtetriggerbooleancomparison.operation)
	|| is_set(mtetriggerbooleanevent.operation)
	|| is_set(mtetriggerbooleaneventowner.operation)
	|| is_set(mtetriggerbooleanobjects.operation)
	|| is_set(mtetriggerbooleanobjectsowner.operation)
	|| is_set(mtetriggerbooleanstartup.operation)
	|| is_set(mtetriggerbooleanvalue.operation);
}

std::string DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerBooleanEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteTriggerName='" <<mtetriggername <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerBooleanTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.operation)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerbooleancomparison.is_set || is_set(mtetriggerbooleancomparison.operation)) leaf_name_data.push_back(mtetriggerbooleancomparison.get_name_leafdata());
    if (mtetriggerbooleanevent.is_set || is_set(mtetriggerbooleanevent.operation)) leaf_name_data.push_back(mtetriggerbooleanevent.get_name_leafdata());
    if (mtetriggerbooleaneventowner.is_set || is_set(mtetriggerbooleaneventowner.operation)) leaf_name_data.push_back(mtetriggerbooleaneventowner.get_name_leafdata());
    if (mtetriggerbooleanobjects.is_set || is_set(mtetriggerbooleanobjects.operation)) leaf_name_data.push_back(mtetriggerbooleanobjects.get_name_leafdata());
    if (mtetriggerbooleanobjectsowner.is_set || is_set(mtetriggerbooleanobjectsowner.operation)) leaf_name_data.push_back(mtetriggerbooleanobjectsowner.get_name_leafdata());
    if (mtetriggerbooleanstartup.is_set || is_set(mtetriggerbooleanstartup.operation)) leaf_name_data.push_back(mtetriggerbooleanstartup.get_name_leafdata());
    if (mtetriggerbooleanvalue.is_set || is_set(mtetriggerbooleanvalue.operation)) leaf_name_data.push_back(mtetriggerbooleanvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
    }
    if(value_path == "mteTriggerBooleanComparison")
    {
        mtetriggerbooleancomparison = value;
    }
    if(value_path == "mteTriggerBooleanEvent")
    {
        mtetriggerbooleanevent = value;
    }
    if(value_path == "mteTriggerBooleanEventOwner")
    {
        mtetriggerbooleaneventowner = value;
    }
    if(value_path == "mteTriggerBooleanObjects")
    {
        mtetriggerbooleanobjects = value;
    }
    if(value_path == "mteTriggerBooleanObjectsOwner")
    {
        mtetriggerbooleanobjectsowner = value;
    }
    if(value_path == "mteTriggerBooleanStartup")
    {
        mtetriggerbooleanstartup = value;
    }
    if(value_path == "mteTriggerBooleanValue")
    {
        mtetriggerbooleanvalue = value;
    }
}

DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdtable()
{
    yang_name = "mteTriggerThresholdTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mtetriggerthresholdtable::~Mtetriggerthresholdtable()
{
}

bool DismanEventMib::Mtetriggerthresholdtable::has_data() const
{
    for (std::size_t index=0; index<mtetriggerthresholdentry_.size(); index++)
    {
        if(mtetriggerthresholdentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerthresholdtable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerthresholdentry_.size(); index++)
    {
        if(mtetriggerthresholdentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mtetriggerthresholdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerThresholdTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerthresholdtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerthresholdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerThresholdEntry")
    {
        for(auto const & c : mtetriggerthresholdentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry>();
        c->parent = this;
        mtetriggerthresholdentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerthresholdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerthresholdentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerthresholdtable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::Mtetriggerthresholdentry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerthresholddeltafalling{YType::int32, "mteTriggerThresholdDeltaFalling"},
    mtetriggerthresholddeltafallingevent{YType::str, "mteTriggerThresholdDeltaFallingEvent"},
    mtetriggerthresholddeltafallingeventowner{YType::str, "mteTriggerThresholdDeltaFallingEventOwner"},
    mtetriggerthresholddeltarising{YType::int32, "mteTriggerThresholdDeltaRising"},
    mtetriggerthresholddeltarisingevent{YType::str, "mteTriggerThresholdDeltaRisingEvent"},
    mtetriggerthresholddeltarisingeventowner{YType::str, "mteTriggerThresholdDeltaRisingEventOwner"},
    mtetriggerthresholdfalling{YType::int32, "mteTriggerThresholdFalling"},
    mtetriggerthresholdfallingevent{YType::str, "mteTriggerThresholdFallingEvent"},
    mtetriggerthresholdfallingeventowner{YType::str, "mteTriggerThresholdFallingEventOwner"},
    mtetriggerthresholdobjects{YType::str, "mteTriggerThresholdObjects"},
    mtetriggerthresholdobjectsowner{YType::str, "mteTriggerThresholdObjectsOwner"},
    mtetriggerthresholdrising{YType::int32, "mteTriggerThresholdRising"},
    mtetriggerthresholdrisingevent{YType::str, "mteTriggerThresholdRisingEvent"},
    mtetriggerthresholdrisingeventowner{YType::str, "mteTriggerThresholdRisingEventOwner"},
    mtetriggerthresholdstartup{YType::enumeration, "mteTriggerThresholdStartup"}
{
    yang_name = "mteTriggerThresholdEntry"; yang_parent_name = "mteTriggerThresholdTable";
}

DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::~Mtetriggerthresholdentry()
{
}

bool DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::has_data() const
{
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerthresholddeltafalling.is_set
	|| mtetriggerthresholddeltafallingevent.is_set
	|| mtetriggerthresholddeltafallingeventowner.is_set
	|| mtetriggerthresholddeltarising.is_set
	|| mtetriggerthresholddeltarisingevent.is_set
	|| mtetriggerthresholddeltarisingeventowner.is_set
	|| mtetriggerthresholdfalling.is_set
	|| mtetriggerthresholdfallingevent.is_set
	|| mtetriggerthresholdfallingeventowner.is_set
	|| mtetriggerthresholdobjects.is_set
	|| mtetriggerthresholdobjectsowner.is_set
	|| mtetriggerthresholdrising.is_set
	|| mtetriggerthresholdrisingevent.is_set
	|| mtetriggerthresholdrisingeventowner.is_set
	|| mtetriggerthresholdstartup.is_set;
}

bool DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mtetriggername.operation)
	|| is_set(mtetriggerthresholddeltafalling.operation)
	|| is_set(mtetriggerthresholddeltafallingevent.operation)
	|| is_set(mtetriggerthresholddeltafallingeventowner.operation)
	|| is_set(mtetriggerthresholddeltarising.operation)
	|| is_set(mtetriggerthresholddeltarisingevent.operation)
	|| is_set(mtetriggerthresholddeltarisingeventowner.operation)
	|| is_set(mtetriggerthresholdfalling.operation)
	|| is_set(mtetriggerthresholdfallingevent.operation)
	|| is_set(mtetriggerthresholdfallingeventowner.operation)
	|| is_set(mtetriggerthresholdobjects.operation)
	|| is_set(mtetriggerthresholdobjectsowner.operation)
	|| is_set(mtetriggerthresholdrising.operation)
	|| is_set(mtetriggerthresholdrisingevent.operation)
	|| is_set(mtetriggerthresholdrisingeventowner.operation)
	|| is_set(mtetriggerthresholdstartup.operation);
}

std::string DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerThresholdEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteTriggerName='" <<mtetriggername <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerThresholdTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.operation)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerthresholddeltafalling.is_set || is_set(mtetriggerthresholddeltafalling.operation)) leaf_name_data.push_back(mtetriggerthresholddeltafalling.get_name_leafdata());
    if (mtetriggerthresholddeltafallingevent.is_set || is_set(mtetriggerthresholddeltafallingevent.operation)) leaf_name_data.push_back(mtetriggerthresholddeltafallingevent.get_name_leafdata());
    if (mtetriggerthresholddeltafallingeventowner.is_set || is_set(mtetriggerthresholddeltafallingeventowner.operation)) leaf_name_data.push_back(mtetriggerthresholddeltafallingeventowner.get_name_leafdata());
    if (mtetriggerthresholddeltarising.is_set || is_set(mtetriggerthresholddeltarising.operation)) leaf_name_data.push_back(mtetriggerthresholddeltarising.get_name_leafdata());
    if (mtetriggerthresholddeltarisingevent.is_set || is_set(mtetriggerthresholddeltarisingevent.operation)) leaf_name_data.push_back(mtetriggerthresholddeltarisingevent.get_name_leafdata());
    if (mtetriggerthresholddeltarisingeventowner.is_set || is_set(mtetriggerthresholddeltarisingeventowner.operation)) leaf_name_data.push_back(mtetriggerthresholddeltarisingeventowner.get_name_leafdata());
    if (mtetriggerthresholdfalling.is_set || is_set(mtetriggerthresholdfalling.operation)) leaf_name_data.push_back(mtetriggerthresholdfalling.get_name_leafdata());
    if (mtetriggerthresholdfallingevent.is_set || is_set(mtetriggerthresholdfallingevent.operation)) leaf_name_data.push_back(mtetriggerthresholdfallingevent.get_name_leafdata());
    if (mtetriggerthresholdfallingeventowner.is_set || is_set(mtetriggerthresholdfallingeventowner.operation)) leaf_name_data.push_back(mtetriggerthresholdfallingeventowner.get_name_leafdata());
    if (mtetriggerthresholdobjects.is_set || is_set(mtetriggerthresholdobjects.operation)) leaf_name_data.push_back(mtetriggerthresholdobjects.get_name_leafdata());
    if (mtetriggerthresholdobjectsowner.is_set || is_set(mtetriggerthresholdobjectsowner.operation)) leaf_name_data.push_back(mtetriggerthresholdobjectsowner.get_name_leafdata());
    if (mtetriggerthresholdrising.is_set || is_set(mtetriggerthresholdrising.operation)) leaf_name_data.push_back(mtetriggerthresholdrising.get_name_leafdata());
    if (mtetriggerthresholdrisingevent.is_set || is_set(mtetriggerthresholdrisingevent.operation)) leaf_name_data.push_back(mtetriggerthresholdrisingevent.get_name_leafdata());
    if (mtetriggerthresholdrisingeventowner.is_set || is_set(mtetriggerthresholdrisingeventowner.operation)) leaf_name_data.push_back(mtetriggerthresholdrisingeventowner.get_name_leafdata());
    if (mtetriggerthresholdstartup.is_set || is_set(mtetriggerthresholdstartup.operation)) leaf_name_data.push_back(mtetriggerthresholdstartup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
    }
    if(value_path == "mteTriggerThresholdDeltaFalling")
    {
        mtetriggerthresholddeltafalling = value;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEvent")
    {
        mtetriggerthresholddeltafallingevent = value;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEventOwner")
    {
        mtetriggerthresholddeltafallingeventowner = value;
    }
    if(value_path == "mteTriggerThresholdDeltaRising")
    {
        mtetriggerthresholddeltarising = value;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEvent")
    {
        mtetriggerthresholddeltarisingevent = value;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEventOwner")
    {
        mtetriggerthresholddeltarisingeventowner = value;
    }
    if(value_path == "mteTriggerThresholdFalling")
    {
        mtetriggerthresholdfalling = value;
    }
    if(value_path == "mteTriggerThresholdFallingEvent")
    {
        mtetriggerthresholdfallingevent = value;
    }
    if(value_path == "mteTriggerThresholdFallingEventOwner")
    {
        mtetriggerthresholdfallingeventowner = value;
    }
    if(value_path == "mteTriggerThresholdObjects")
    {
        mtetriggerthresholdobjects = value;
    }
    if(value_path == "mteTriggerThresholdObjectsOwner")
    {
        mtetriggerthresholdobjectsowner = value;
    }
    if(value_path == "mteTriggerThresholdRising")
    {
        mtetriggerthresholdrising = value;
    }
    if(value_path == "mteTriggerThresholdRisingEvent")
    {
        mtetriggerthresholdrisingevent = value;
    }
    if(value_path == "mteTriggerThresholdRisingEventOwner")
    {
        mtetriggerthresholdrisingeventowner = value;
    }
    if(value_path == "mteTriggerThresholdStartup")
    {
        mtetriggerthresholdstartup = value;
    }
}

DismanEventMib::Mteobjectstable::Mteobjectstable()
{
    yang_name = "mteObjectsTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mteobjectstable::~Mteobjectstable()
{
}

bool DismanEventMib::Mteobjectstable::has_data() const
{
    for (std::size_t index=0; index<mteobjectsentry_.size(); index++)
    {
        if(mteobjectsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteobjectstable::has_operation() const
{
    for (std::size_t index=0; index<mteobjectsentry_.size(); index++)
    {
        if(mteobjectsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mteobjectstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteObjectsTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteobjectstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteobjectstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteObjectsEntry")
    {
        for(auto const & c : mteobjectsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteobjectstable::Mteobjectsentry>();
        c->parent = this;
        mteobjectsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteobjectstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteobjectsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteobjectstable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mteobjectstable::Mteobjectsentry::Mteobjectsentry()
    :
    mteowner{YType::str, "mteOwner"},
    mteobjectsname{YType::str, "mteObjectsName"},
    mteobjectsindex{YType::uint32, "mteObjectsIndex"},
    mteobjectsentrystatus{YType::enumeration, "mteObjectsEntryStatus"},
    mteobjectsid{YType::str, "mteObjectsID"},
    mteobjectsidwildcard{YType::boolean, "mteObjectsIDWildcard"}
{
    yang_name = "mteObjectsEntry"; yang_parent_name = "mteObjectsTable";
}

DismanEventMib::Mteobjectstable::Mteobjectsentry::~Mteobjectsentry()
{
}

bool DismanEventMib::Mteobjectstable::Mteobjectsentry::has_data() const
{
    return mteowner.is_set
	|| mteobjectsname.is_set
	|| mteobjectsindex.is_set
	|| mteobjectsentrystatus.is_set
	|| mteobjectsid.is_set
	|| mteobjectsidwildcard.is_set;
}

bool DismanEventMib::Mteobjectstable::Mteobjectsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mteobjectsname.operation)
	|| is_set(mteobjectsindex.operation)
	|| is_set(mteobjectsentrystatus.operation)
	|| is_set(mteobjectsid.operation)
	|| is_set(mteobjectsidwildcard.operation);
}

std::string DismanEventMib::Mteobjectstable::Mteobjectsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteObjectsEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteObjectsName='" <<mteobjectsname <<"']" <<"[mteObjectsIndex='" <<mteobjectsindex <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteobjectstable::Mteobjectsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteObjectsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteobjectsname.is_set || is_set(mteobjectsname.operation)) leaf_name_data.push_back(mteobjectsname.get_name_leafdata());
    if (mteobjectsindex.is_set || is_set(mteobjectsindex.operation)) leaf_name_data.push_back(mteobjectsindex.get_name_leafdata());
    if (mteobjectsentrystatus.is_set || is_set(mteobjectsentrystatus.operation)) leaf_name_data.push_back(mteobjectsentrystatus.get_name_leafdata());
    if (mteobjectsid.is_set || is_set(mteobjectsid.operation)) leaf_name_data.push_back(mteobjectsid.get_name_leafdata());
    if (mteobjectsidwildcard.is_set || is_set(mteobjectsidwildcard.operation)) leaf_name_data.push_back(mteobjectsidwildcard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteobjectstable::Mteobjectsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteobjectstable::Mteobjectsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mteobjectstable::Mteobjectsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteObjectsName")
    {
        mteobjectsname = value;
    }
    if(value_path == "mteObjectsIndex")
    {
        mteobjectsindex = value;
    }
    if(value_path == "mteObjectsEntryStatus")
    {
        mteobjectsentrystatus = value;
    }
    if(value_path == "mteObjectsID")
    {
        mteobjectsid = value;
    }
    if(value_path == "mteObjectsIDWildcard")
    {
        mteobjectsidwildcard = value;
    }
}

DismanEventMib::Mteeventtable::Mteeventtable()
{
    yang_name = "mteEventTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mteeventtable::~Mteeventtable()
{
}

bool DismanEventMib::Mteeventtable::has_data() const
{
    for (std::size_t index=0; index<mteevententry_.size(); index++)
    {
        if(mteevententry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteeventtable::has_operation() const
{
    for (std::size_t index=0; index<mteevententry_.size(); index++)
    {
        if(mteevententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mteeventtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteeventtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteeventtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteEventEntry")
    {
        for(auto const & c : mteevententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteeventtable::Mteevententry>();
        c->parent = this;
        mteevententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteevententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteeventtable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mteeventtable::Mteevententry::Mteevententry()
    :
    mteowner{YType::str, "mteOwner"},
    mteeventname{YType::str, "mteEventName"},
    mteeventactions{YType::bits, "mteEventActions"},
    mteeventcomment{YType::str, "mteEventComment"},
    mteeventenabled{YType::boolean, "mteEventEnabled"},
    mteevententrystatus{YType::enumeration, "mteEventEntryStatus"}
{
    yang_name = "mteEventEntry"; yang_parent_name = "mteEventTable";
}

DismanEventMib::Mteeventtable::Mteevententry::~Mteevententry()
{
}

bool DismanEventMib::Mteeventtable::Mteevententry::has_data() const
{
    return mteowner.is_set
	|| mteeventname.is_set
	|| mteeventactions.is_set
	|| mteeventcomment.is_set
	|| mteeventenabled.is_set
	|| mteevententrystatus.is_set;
}

bool DismanEventMib::Mteeventtable::Mteevententry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mteeventname.operation)
	|| is_set(mteeventactions.operation)
	|| is_set(mteeventcomment.operation)
	|| is_set(mteeventenabled.operation)
	|| is_set(mteevententrystatus.operation);
}

std::string DismanEventMib::Mteeventtable::Mteevententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteEventName='" <<mteeventname <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteeventtable::Mteevententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteEventTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.operation)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventactions.is_set || is_set(mteeventactions.operation)) leaf_name_data.push_back(mteeventactions.get_name_leafdata());
    if (mteeventcomment.is_set || is_set(mteeventcomment.operation)) leaf_name_data.push_back(mteeventcomment.get_name_leafdata());
    if (mteeventenabled.is_set || is_set(mteeventenabled.operation)) leaf_name_data.push_back(mteeventenabled.get_name_leafdata());
    if (mteevententrystatus.is_set || is_set(mteevententrystatus.operation)) leaf_name_data.push_back(mteevententrystatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteeventtable::Mteevententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventtable::Mteevententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mteeventtable::Mteevententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteEventName")
    {
        mteeventname = value;
    }
    if(value_path == "mteEventActions")
    {
        mteeventactions[value] = true;
    }
    if(value_path == "mteEventComment")
    {
        mteeventcomment = value;
    }
    if(value_path == "mteEventEnabled")
    {
        mteeventenabled = value;
    }
    if(value_path == "mteEventEntryStatus")
    {
        mteevententrystatus = value;
    }
}

DismanEventMib::Mteeventnotificationtable::Mteeventnotificationtable()
{
    yang_name = "mteEventNotificationTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mteeventnotificationtable::~Mteeventnotificationtable()
{
}

bool DismanEventMib::Mteeventnotificationtable::has_data() const
{
    for (std::size_t index=0; index<mteeventnotificationentry_.size(); index++)
    {
        if(mteeventnotificationentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteeventnotificationtable::has_operation() const
{
    for (std::size_t index=0; index<mteeventnotificationentry_.size(); index++)
    {
        if(mteeventnotificationentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mteeventnotificationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventNotificationTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteeventnotificationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteeventnotificationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteEventNotificationEntry")
    {
        for(auto const & c : mteeventnotificationentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry>();
        c->parent = this;
        mteeventnotificationentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventnotificationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteeventnotificationentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteeventnotificationtable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::Mteeventnotificationentry()
    :
    mteowner{YType::str, "mteOwner"},
    mteeventname{YType::str, "mteEventName"},
    mteeventnotification{YType::str, "mteEventNotification"},
    mteeventnotificationobjects{YType::str, "mteEventNotificationObjects"},
    mteeventnotificationobjectsowner{YType::str, "mteEventNotificationObjectsOwner"}
{
    yang_name = "mteEventNotificationEntry"; yang_parent_name = "mteEventNotificationTable";
}

DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::~Mteeventnotificationentry()
{
}

bool DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::has_data() const
{
    return mteowner.is_set
	|| mteeventname.is_set
	|| mteeventnotification.is_set
	|| mteeventnotificationobjects.is_set
	|| mteeventnotificationobjectsowner.is_set;
}

bool DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mteeventname.operation)
	|| is_set(mteeventnotification.operation)
	|| is_set(mteeventnotificationobjects.operation)
	|| is_set(mteeventnotificationobjectsowner.operation);
}

std::string DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventNotificationEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteEventName='" <<mteeventname <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteEventNotificationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.operation)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventnotification.is_set || is_set(mteeventnotification.operation)) leaf_name_data.push_back(mteeventnotification.get_name_leafdata());
    if (mteeventnotificationobjects.is_set || is_set(mteeventnotificationobjects.operation)) leaf_name_data.push_back(mteeventnotificationobjects.get_name_leafdata());
    if (mteeventnotificationobjectsowner.is_set || is_set(mteeventnotificationobjectsowner.operation)) leaf_name_data.push_back(mteeventnotificationobjectsowner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteEventName")
    {
        mteeventname = value;
    }
    if(value_path == "mteEventNotification")
    {
        mteeventnotification = value;
    }
    if(value_path == "mteEventNotificationObjects")
    {
        mteeventnotificationobjects = value;
    }
    if(value_path == "mteEventNotificationObjectsOwner")
    {
        mteeventnotificationobjectsowner = value;
    }
}

DismanEventMib::Mteeventsettable::Mteeventsettable()
{
    yang_name = "mteEventSetTable"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::Mteeventsettable::~Mteeventsettable()
{
}

bool DismanEventMib::Mteeventsettable::has_data() const
{
    for (std::size_t index=0; index<mteeventsetentry_.size(); index++)
    {
        if(mteeventsetentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteeventsettable::has_operation() const
{
    for (std::size_t index=0; index<mteeventsetentry_.size(); index++)
    {
        if(mteeventsetentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DismanEventMib::Mteeventsettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventSetTable";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteeventsettable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteeventsettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteEventSetEntry")
    {
        for(auto const & c : mteeventsetentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteeventsettable::Mteeventsetentry>();
        c->parent = this;
        mteeventsetentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventsettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteeventsetentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteeventsettable::set_value(const std::string & value_path, std::string value)
{
}

DismanEventMib::Mteeventsettable::Mteeventsetentry::Mteeventsetentry()
    :
    mteowner{YType::str, "mteOwner"},
    mteeventname{YType::str, "mteEventName"},
    mteeventsetcontextname{YType::str, "mteEventSetContextName"},
    mteeventsetcontextnamewildcard{YType::boolean, "mteEventSetContextNameWildcard"},
    mteeventsetobject{YType::str, "mteEventSetObject"},
    mteeventsetobjectwildcard{YType::boolean, "mteEventSetObjectWildcard"},
    mteeventsettargettag{YType::str, "mteEventSetTargetTag"},
    mteeventsetvalue{YType::int32, "mteEventSetValue"}
{
    yang_name = "mteEventSetEntry"; yang_parent_name = "mteEventSetTable";
}

DismanEventMib::Mteeventsettable::Mteeventsetentry::~Mteeventsetentry()
{
}

bool DismanEventMib::Mteeventsettable::Mteeventsetentry::has_data() const
{
    return mteowner.is_set
	|| mteeventname.is_set
	|| mteeventsetcontextname.is_set
	|| mteeventsetcontextnamewildcard.is_set
	|| mteeventsetobject.is_set
	|| mteeventsetobjectwildcard.is_set
	|| mteeventsettargettag.is_set
	|| mteeventsetvalue.is_set;
}

bool DismanEventMib::Mteeventsettable::Mteeventsetentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mteowner.operation)
	|| is_set(mteeventname.operation)
	|| is_set(mteeventsetcontextname.operation)
	|| is_set(mteeventsetcontextnamewildcard.operation)
	|| is_set(mteeventsetobject.operation)
	|| is_set(mteeventsetobjectwildcard.operation)
	|| is_set(mteeventsettargettag.operation)
	|| is_set(mteeventsetvalue.operation);
}

std::string DismanEventMib::Mteeventsettable::Mteeventsetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventSetEntry" <<"[mteOwner='" <<mteowner <<"']" <<"[mteEventName='" <<mteeventname <<"']";

    return path_buffer.str();

}

const EntityPath DismanEventMib::Mteeventsettable::Mteeventsetentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteEventSetTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.operation)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.operation)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventsetcontextname.is_set || is_set(mteeventsetcontextname.operation)) leaf_name_data.push_back(mteeventsetcontextname.get_name_leafdata());
    if (mteeventsetcontextnamewildcard.is_set || is_set(mteeventsetcontextnamewildcard.operation)) leaf_name_data.push_back(mteeventsetcontextnamewildcard.get_name_leafdata());
    if (mteeventsetobject.is_set || is_set(mteeventsetobject.operation)) leaf_name_data.push_back(mteeventsetobject.get_name_leafdata());
    if (mteeventsetobjectwildcard.is_set || is_set(mteeventsetobjectwildcard.operation)) leaf_name_data.push_back(mteeventsetobjectwildcard.get_name_leafdata());
    if (mteeventsettargettag.is_set || is_set(mteeventsettargettag.operation)) leaf_name_data.push_back(mteeventsettargettag.get_name_leafdata());
    if (mteeventsetvalue.is_set || is_set(mteeventsetvalue.operation)) leaf_name_data.push_back(mteeventsetvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DismanEventMib::Mteeventsettable::Mteeventsetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventsettable::Mteeventsetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DismanEventMib::Mteeventsettable::Mteeventsetentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
    }
    if(value_path == "mteEventName")
    {
        mteeventname = value;
    }
    if(value_path == "mteEventSetContextName")
    {
        mteeventsetcontextname = value;
    }
    if(value_path == "mteEventSetContextNameWildcard")
    {
        mteeventsetcontextnamewildcard = value;
    }
    if(value_path == "mteEventSetObject")
    {
        mteeventsetobject = value;
    }
    if(value_path == "mteEventSetObjectWildcard")
    {
        mteeventsetobjectwildcard = value;
    }
    if(value_path == "mteEventSetTargetTag")
    {
        mteeventsettargettag = value;
    }
    if(value_path == "mteEventSetValue")
    {
        mteeventsetvalue = value;
    }
}

const Enum::YLeaf FailurereasonEnum::sampleOverrun {-6, "sampleOverrun"};
const Enum::YLeaf FailurereasonEnum::badType {-5, "badType"};
const Enum::YLeaf FailurereasonEnum::noResponse {-4, "noResponse"};
const Enum::YLeaf FailurereasonEnum::destinationUnreachable {-3, "destinationUnreachable"};
const Enum::YLeaf FailurereasonEnum::badDestination {-2, "badDestination"};
const Enum::YLeaf FailurereasonEnum::localResourceLack {-1, "localResourceLack"};
const Enum::YLeaf FailurereasonEnum::noError {0, "noError"};
const Enum::YLeaf FailurereasonEnum::tooBig {1, "tooBig"};
const Enum::YLeaf FailurereasonEnum::noSuchName {2, "noSuchName"};
const Enum::YLeaf FailurereasonEnum::badValue {3, "badValue"};
const Enum::YLeaf FailurereasonEnum::readOnly {4, "readOnly"};
const Enum::YLeaf FailurereasonEnum::genErr {5, "genErr"};
const Enum::YLeaf FailurereasonEnum::noAccess {6, "noAccess"};
const Enum::YLeaf FailurereasonEnum::wrongType {7, "wrongType"};
const Enum::YLeaf FailurereasonEnum::wrongLength {8, "wrongLength"};
const Enum::YLeaf FailurereasonEnum::wrongEncoding {9, "wrongEncoding"};
const Enum::YLeaf FailurereasonEnum::wrongValue {10, "wrongValue"};
const Enum::YLeaf FailurereasonEnum::noCreation {11, "noCreation"};
const Enum::YLeaf FailurereasonEnum::inconsistentValue {12, "inconsistentValue"};
const Enum::YLeaf FailurereasonEnum::resourceUnavailable {13, "resourceUnavailable"};
const Enum::YLeaf FailurereasonEnum::commitFailed {14, "commitFailed"};
const Enum::YLeaf FailurereasonEnum::undoFailed {15, "undoFailed"};
const Enum::YLeaf FailurereasonEnum::authorizationError {16, "authorizationError"};
const Enum::YLeaf FailurereasonEnum::notWritable {17, "notWritable"};
const Enum::YLeaf FailurereasonEnum::inconsistentName {18, "inconsistentName"};

const Enum::YLeaf DismanEventMib::Mtetriggertable::Mtetriggerentry::MtetriggersampletypeEnum::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf DismanEventMib::Mtetriggertable::Mtetriggerentry::MtetriggersampletypeEnum::deltaValue {2, "deltaValue"};

const Enum::YLeaf DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::MtetriggerdeltadiscontinuityidtypeEnum::timeTicks {1, "timeTicks"};
const Enum::YLeaf DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::MtetriggerdeltadiscontinuityidtypeEnum::timeStamp {2, "timeStamp"};
const Enum::YLeaf DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::MtetriggerdeltadiscontinuityidtypeEnum::dateAndTime {3, "dateAndTime"};

const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::MtetriggerbooleancomparisonEnum::unequal {1, "unequal"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::MtetriggerbooleancomparisonEnum::equal {2, "equal"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::MtetriggerbooleancomparisonEnum::less {3, "less"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::MtetriggerbooleancomparisonEnum::lessOrEqual {4, "lessOrEqual"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::MtetriggerbooleancomparisonEnum::greater {5, "greater"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::MtetriggerbooleancomparisonEnum::greaterOrEqual {6, "greaterOrEqual"};

const Enum::YLeaf DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::MtetriggerthresholdstartupEnum::rising {1, "rising"};
const Enum::YLeaf DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::MtetriggerthresholdstartupEnum::falling {2, "falling"};
const Enum::YLeaf DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::MtetriggerthresholdstartupEnum::risingOrFalling {3, "risingOrFalling"};


}
}

