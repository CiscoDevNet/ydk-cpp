
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DISMAN_EVENT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DISMAN_EVENT_MIB {

DismanEventMib::DismanEventMib()
    :
    mteevent(std::make_shared<DismanEventMib::Mteevent>())
	,mteeventnotificationtable(std::make_shared<DismanEventMib::Mteeventnotificationtable>())
	,mteeventsettable(std::make_shared<DismanEventMib::Mteeventsettable>())
	,mteeventtable(std::make_shared<DismanEventMib::Mteeventtable>())
	,mteobjectstable(std::make_shared<DismanEventMib::Mteobjectstable>())
	,mteresource(std::make_shared<DismanEventMib::Mteresource>())
	,mtetrigger(std::make_shared<DismanEventMib::Mtetrigger>())
	,mtetriggerbooleantable(std::make_shared<DismanEventMib::Mtetriggerbooleantable>())
	,mtetriggerdeltatable(std::make_shared<DismanEventMib::Mtetriggerdeltatable>())
	,mtetriggerexistencetable(std::make_shared<DismanEventMib::Mtetriggerexistencetable>())
	,mtetriggertable(std::make_shared<DismanEventMib::Mtetriggertable>())
	,mtetriggerthresholdtable(std::make_shared<DismanEventMib::Mtetriggerthresholdtable>())
{
    mteevent->parent = this;

    mteeventnotificationtable->parent = this;

    mteeventsettable->parent = this;

    mteeventtable->parent = this;

    mteobjectstable->parent = this;

    mteresource->parent = this;

    mtetrigger->parent = this;

    mtetriggerbooleantable->parent = this;

    mtetriggerdeltatable->parent = this;

    mtetriggerexistencetable->parent = this;

    mtetriggertable->parent = this;

    mtetriggerthresholdtable->parent = this;

    yang_name = "DISMAN-EVENT-MIB"; yang_parent_name = "DISMAN-EVENT-MIB";
}

DismanEventMib::~DismanEventMib()
{
}

bool DismanEventMib::has_data() const
{
    return (mteevent !=  nullptr && mteevent->has_data())
	|| (mteeventnotificationtable !=  nullptr && mteeventnotificationtable->has_data())
	|| (mteeventsettable !=  nullptr && mteeventsettable->has_data())
	|| (mteeventtable !=  nullptr && mteeventtable->has_data())
	|| (mteobjectstable !=  nullptr && mteobjectstable->has_data())
	|| (mteresource !=  nullptr && mteresource->has_data())
	|| (mtetrigger !=  nullptr && mtetrigger->has_data())
	|| (mtetriggerbooleantable !=  nullptr && mtetriggerbooleantable->has_data())
	|| (mtetriggerdeltatable !=  nullptr && mtetriggerdeltatable->has_data())
	|| (mtetriggerexistencetable !=  nullptr && mtetriggerexistencetable->has_data())
	|| (mtetriggertable !=  nullptr && mtetriggertable->has_data())
	|| (mtetriggerthresholdtable !=  nullptr && mtetriggerthresholdtable->has_data());
}

bool DismanEventMib::has_operation() const
{
    return is_set(yfilter)
	|| (mteevent !=  nullptr && mteevent->has_operation())
	|| (mteeventnotificationtable !=  nullptr && mteeventnotificationtable->has_operation())
	|| (mteeventsettable !=  nullptr && mteeventsettable->has_operation())
	|| (mteeventtable !=  nullptr && mteeventtable->has_operation())
	|| (mteobjectstable !=  nullptr && mteobjectstable->has_operation())
	|| (mteresource !=  nullptr && mteresource->has_operation())
	|| (mtetrigger !=  nullptr && mtetrigger->has_operation())
	|| (mtetriggerbooleantable !=  nullptr && mtetriggerbooleantable->has_operation())
	|| (mtetriggerdeltatable !=  nullptr && mtetriggerdeltatable->has_operation())
	|| (mtetriggerexistencetable !=  nullptr && mtetriggerexistencetable->has_operation())
	|| (mtetriggertable !=  nullptr && mtetriggertable->has_operation())
	|| (mtetriggerthresholdtable !=  nullptr && mtetriggerthresholdtable->has_operation());
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
        if(mteevent == nullptr)
        {
            mteevent = std::make_shared<DismanEventMib::Mteevent>();
        }
        return mteevent;
    }

    if(child_yang_name == "mteEventNotificationTable")
    {
        if(mteeventnotificationtable == nullptr)
        {
            mteeventnotificationtable = std::make_shared<DismanEventMib::Mteeventnotificationtable>();
        }
        return mteeventnotificationtable;
    }

    if(child_yang_name == "mteEventSetTable")
    {
        if(mteeventsettable == nullptr)
        {
            mteeventsettable = std::make_shared<DismanEventMib::Mteeventsettable>();
        }
        return mteeventsettable;
    }

    if(child_yang_name == "mteEventTable")
    {
        if(mteeventtable == nullptr)
        {
            mteeventtable = std::make_shared<DismanEventMib::Mteeventtable>();
        }
        return mteeventtable;
    }

    if(child_yang_name == "mteObjectsTable")
    {
        if(mteobjectstable == nullptr)
        {
            mteobjectstable = std::make_shared<DismanEventMib::Mteobjectstable>();
        }
        return mteobjectstable;
    }

    if(child_yang_name == "mteResource")
    {
        if(mteresource == nullptr)
        {
            mteresource = std::make_shared<DismanEventMib::Mteresource>();
        }
        return mteresource;
    }

    if(child_yang_name == "mteTrigger")
    {
        if(mtetrigger == nullptr)
        {
            mtetrigger = std::make_shared<DismanEventMib::Mtetrigger>();
        }
        return mtetrigger;
    }

    if(child_yang_name == "mteTriggerBooleanTable")
    {
        if(mtetriggerbooleantable == nullptr)
        {
            mtetriggerbooleantable = std::make_shared<DismanEventMib::Mtetriggerbooleantable>();
        }
        return mtetriggerbooleantable;
    }

    if(child_yang_name == "mteTriggerDeltaTable")
    {
        if(mtetriggerdeltatable == nullptr)
        {
            mtetriggerdeltatable = std::make_shared<DismanEventMib::Mtetriggerdeltatable>();
        }
        return mtetriggerdeltatable;
    }

    if(child_yang_name == "mteTriggerExistenceTable")
    {
        if(mtetriggerexistencetable == nullptr)
        {
            mtetriggerexistencetable = std::make_shared<DismanEventMib::Mtetriggerexistencetable>();
        }
        return mtetriggerexistencetable;
    }

    if(child_yang_name == "mteTriggerTable")
    {
        if(mtetriggertable == nullptr)
        {
            mtetriggertable = std::make_shared<DismanEventMib::Mtetriggertable>();
        }
        return mtetriggertable;
    }

    if(child_yang_name == "mteTriggerThresholdTable")
    {
        if(mtetriggerthresholdtable == nullptr)
        {
            mtetriggerthresholdtable = std::make_shared<DismanEventMib::Mtetriggerthresholdtable>();
        }
        return mtetriggerthresholdtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mteevent != nullptr)
    {
        children["mteEvent"] = mteevent;
    }

    if(mteeventnotificationtable != nullptr)
    {
        children["mteEventNotificationTable"] = mteeventnotificationtable;
    }

    if(mteeventsettable != nullptr)
    {
        children["mteEventSetTable"] = mteeventsettable;
    }

    if(mteeventtable != nullptr)
    {
        children["mteEventTable"] = mteeventtable;
    }

    if(mteobjectstable != nullptr)
    {
        children["mteObjectsTable"] = mteobjectstable;
    }

    if(mteresource != nullptr)
    {
        children["mteResource"] = mteresource;
    }

    if(mtetrigger != nullptr)
    {
        children["mteTrigger"] = mtetrigger;
    }

    if(mtetriggerbooleantable != nullptr)
    {
        children["mteTriggerBooleanTable"] = mtetriggerbooleantable;
    }

    if(mtetriggerdeltatable != nullptr)
    {
        children["mteTriggerDeltaTable"] = mtetriggerdeltatable;
    }

    if(mtetriggerexistencetable != nullptr)
    {
        children["mteTriggerExistenceTable"] = mtetriggerexistencetable;
    }

    if(mtetriggertable != nullptr)
    {
        children["mteTriggerTable"] = mtetriggertable;
    }

    if(mtetriggerthresholdtable != nullptr)
    {
        children["mteTriggerThresholdTable"] = mtetriggerthresholdtable;
    }

    return children;
}

void DismanEventMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> DismanEventMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DismanEventMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEvent" || name == "mteEventNotificationTable" || name == "mteEventSetTable" || name == "mteEventTable" || name == "mteObjectsTable" || name == "mteResource" || name == "mteTrigger" || name == "mteTriggerBooleanTable" || name == "mteTriggerDeltaTable" || name == "mteTriggerExistenceTable" || name == "mteTriggerTable" || name == "mteTriggerThresholdTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteresourcesampleinstancelacks.yfilter)
	|| ydk::is_set(mteresourcesampleinstancemaximum.yfilter)
	|| ydk::is_set(mteresourcesampleinstances.yfilter)
	|| ydk::is_set(mteresourcesampleinstanceshigh.yfilter)
	|| ydk::is_set(mteresourcesampleminimum.yfilter);
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

    if (mteresourcesampleinstancelacks.is_set || is_set(mteresourcesampleinstancelacks.yfilter)) leaf_name_data.push_back(mteresourcesampleinstancelacks.get_name_leafdata());
    if (mteresourcesampleinstancemaximum.is_set || is_set(mteresourcesampleinstancemaximum.yfilter)) leaf_name_data.push_back(mteresourcesampleinstancemaximum.get_name_leafdata());
    if (mteresourcesampleinstances.is_set || is_set(mteresourcesampleinstances.yfilter)) leaf_name_data.push_back(mteresourcesampleinstances.get_name_leafdata());
    if (mteresourcesampleinstanceshigh.is_set || is_set(mteresourcesampleinstanceshigh.yfilter)) leaf_name_data.push_back(mteresourcesampleinstanceshigh.get_name_leafdata());
    if (mteresourcesampleminimum.is_set || is_set(mteresourcesampleminimum.yfilter)) leaf_name_data.push_back(mteresourcesampleminimum.get_name_leafdata());


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

void DismanEventMib::Mteresource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteResourceSampleInstanceLacks")
    {
        mteresourcesampleinstancelacks = value;
        mteresourcesampleinstancelacks.value_namespace = name_space;
        mteresourcesampleinstancelacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteResourceSampleInstanceMaximum")
    {
        mteresourcesampleinstancemaximum = value;
        mteresourcesampleinstancemaximum.value_namespace = name_space;
        mteresourcesampleinstancemaximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteResourceSampleInstances")
    {
        mteresourcesampleinstances = value;
        mteresourcesampleinstances.value_namespace = name_space;
        mteresourcesampleinstances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteResourceSampleInstancesHigh")
    {
        mteresourcesampleinstanceshigh = value;
        mteresourcesampleinstanceshigh.value_namespace = name_space;
        mteresourcesampleinstanceshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteResourceSampleMinimum")
    {
        mteresourcesampleminimum = value;
        mteresourcesampleminimum.value_namespace = name_space;
        mteresourcesampleminimum.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mteresource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteResourceSampleInstanceLacks")
    {
        mteresourcesampleinstancelacks.yfilter = yfilter;
    }
    if(value_path == "mteResourceSampleInstanceMaximum")
    {
        mteresourcesampleinstancemaximum.yfilter = yfilter;
    }
    if(value_path == "mteResourceSampleInstances")
    {
        mteresourcesampleinstances.yfilter = yfilter;
    }
    if(value_path == "mteResourceSampleInstancesHigh")
    {
        mteresourcesampleinstanceshigh.yfilter = yfilter;
    }
    if(value_path == "mteResourceSampleMinimum")
    {
        mteresourcesampleminimum.yfilter = yfilter;
    }
}

bool DismanEventMib::Mteresource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteResourceSampleInstanceLacks" || name == "mteResourceSampleInstanceMaximum" || name == "mteResourceSampleInstances" || name == "mteResourceSampleInstancesHigh" || name == "mteResourceSampleMinimum")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mtetriggerfailures.yfilter);
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

    if (mtetriggerfailures.is_set || is_set(mtetriggerfailures.yfilter)) leaf_name_data.push_back(mtetriggerfailures.get_name_leafdata());


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

void DismanEventMib::Mtetrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteTriggerFailures")
    {
        mtetriggerfailures = value;
        mtetriggerfailures.value_namespace = name_space;
        mtetriggerfailures.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mtetrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteTriggerFailures")
    {
        mtetriggerfailures.yfilter = yfilter;
    }
}

bool DismanEventMib::Mtetrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerFailures")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteeventfailures.yfilter);
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

    if (mteeventfailures.is_set || is_set(mteeventfailures.yfilter)) leaf_name_data.push_back(mteeventfailures.get_name_leafdata());


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

void DismanEventMib::Mteevent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteEventFailures")
    {
        mteeventfailures = value;
        mteeventfailures.value_namespace = name_space;
        mteeventfailures.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mteevent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteEventFailures")
    {
        mteeventfailures.yfilter = yfilter;
    }
}

bool DismanEventMib::Mteevent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventFailures")
        return true;
    return false;
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
    for (std::size_t index=0; index<mtetriggerentry.size(); index++)
    {
        if(mtetriggerentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggertable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerentry.size(); index++)
    {
        if(mtetriggerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mtetriggerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggertable::Mtetriggerentry>();
        c->parent = this;
        mtetriggerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mtetriggertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mtetriggertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggercomment.yfilter)
	|| ydk::is_set(mtetriggercontextname.yfilter)
	|| ydk::is_set(mtetriggercontextnamewildcard.yfilter)
	|| ydk::is_set(mtetriggerenabled.yfilter)
	|| ydk::is_set(mtetriggerentrystatus.yfilter)
	|| ydk::is_set(mtetriggerfrequency.yfilter)
	|| ydk::is_set(mtetriggerobjects.yfilter)
	|| ydk::is_set(mtetriggerobjectsowner.yfilter)
	|| ydk::is_set(mtetriggersampletype.yfilter)
	|| ydk::is_set(mtetriggertargettag.yfilter)
	|| ydk::is_set(mtetriggertest.yfilter)
	|| ydk::is_set(mtetriggervalueid.yfilter)
	|| ydk::is_set(mtetriggervalueidwildcard.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggercomment.is_set || is_set(mtetriggercomment.yfilter)) leaf_name_data.push_back(mtetriggercomment.get_name_leafdata());
    if (mtetriggercontextname.is_set || is_set(mtetriggercontextname.yfilter)) leaf_name_data.push_back(mtetriggercontextname.get_name_leafdata());
    if (mtetriggercontextnamewildcard.is_set || is_set(mtetriggercontextnamewildcard.yfilter)) leaf_name_data.push_back(mtetriggercontextnamewildcard.get_name_leafdata());
    if (mtetriggerenabled.is_set || is_set(mtetriggerenabled.yfilter)) leaf_name_data.push_back(mtetriggerenabled.get_name_leafdata());
    if (mtetriggerentrystatus.is_set || is_set(mtetriggerentrystatus.yfilter)) leaf_name_data.push_back(mtetriggerentrystatus.get_name_leafdata());
    if (mtetriggerfrequency.is_set || is_set(mtetriggerfrequency.yfilter)) leaf_name_data.push_back(mtetriggerfrequency.get_name_leafdata());
    if (mtetriggerobjects.is_set || is_set(mtetriggerobjects.yfilter)) leaf_name_data.push_back(mtetriggerobjects.get_name_leafdata());
    if (mtetriggerobjectsowner.is_set || is_set(mtetriggerobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerobjectsowner.get_name_leafdata());
    if (mtetriggersampletype.is_set || is_set(mtetriggersampletype.yfilter)) leaf_name_data.push_back(mtetriggersampletype.get_name_leafdata());
    if (mtetriggertargettag.is_set || is_set(mtetriggertargettag.yfilter)) leaf_name_data.push_back(mtetriggertargettag.get_name_leafdata());
    if (mtetriggertest.is_set || is_set(mtetriggertest.yfilter)) leaf_name_data.push_back(mtetriggertest.get_name_leafdata());
    if (mtetriggervalueid.is_set || is_set(mtetriggervalueid.yfilter)) leaf_name_data.push_back(mtetriggervalueid.get_name_leafdata());
    if (mtetriggervalueidwildcard.is_set || is_set(mtetriggervalueidwildcard.yfilter)) leaf_name_data.push_back(mtetriggervalueidwildcard.get_name_leafdata());


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

void DismanEventMib::Mtetriggertable::Mtetriggerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
        mtetriggername.value_namespace = name_space;
        mtetriggername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerComment")
    {
        mtetriggercomment = value;
        mtetriggercomment.value_namespace = name_space;
        mtetriggercomment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerContextName")
    {
        mtetriggercontextname = value;
        mtetriggercontextname.value_namespace = name_space;
        mtetriggercontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerContextNameWildcard")
    {
        mtetriggercontextnamewildcard = value;
        mtetriggercontextnamewildcard.value_namespace = name_space;
        mtetriggercontextnamewildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerEnabled")
    {
        mtetriggerenabled = value;
        mtetriggerenabled.value_namespace = name_space;
        mtetriggerenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerEntryStatus")
    {
        mtetriggerentrystatus = value;
        mtetriggerentrystatus.value_namespace = name_space;
        mtetriggerentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerFrequency")
    {
        mtetriggerfrequency = value;
        mtetriggerfrequency.value_namespace = name_space;
        mtetriggerfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerObjects")
    {
        mtetriggerobjects = value;
        mtetriggerobjects.value_namespace = name_space;
        mtetriggerobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerObjectsOwner")
    {
        mtetriggerobjectsowner = value;
        mtetriggerobjectsowner.value_namespace = name_space;
        mtetriggerobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerSampleType")
    {
        mtetriggersampletype = value;
        mtetriggersampletype.value_namespace = name_space;
        mtetriggersampletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerTargetTag")
    {
        mtetriggertargettag = value;
        mtetriggertargettag.value_namespace = name_space;
        mtetriggertargettag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerTest")
    {
        mtetriggertest[value] = true;
    }
    if(value_path == "mteTriggerValueID")
    {
        mtetriggervalueid = value;
        mtetriggervalueid.value_namespace = name_space;
        mtetriggervalueid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerValueIDWildcard")
    {
        mtetriggervalueidwildcard = value;
        mtetriggervalueidwildcard.value_namespace = name_space;
        mtetriggervalueidwildcard.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mtetriggertable::Mtetriggerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername.yfilter = yfilter;
    }
    if(value_path == "mteTriggerComment")
    {
        mtetriggercomment.yfilter = yfilter;
    }
    if(value_path == "mteTriggerContextName")
    {
        mtetriggercontextname.yfilter = yfilter;
    }
    if(value_path == "mteTriggerContextNameWildcard")
    {
        mtetriggercontextnamewildcard.yfilter = yfilter;
    }
    if(value_path == "mteTriggerEnabled")
    {
        mtetriggerenabled.yfilter = yfilter;
    }
    if(value_path == "mteTriggerEntryStatus")
    {
        mtetriggerentrystatus.yfilter = yfilter;
    }
    if(value_path == "mteTriggerFrequency")
    {
        mtetriggerfrequency.yfilter = yfilter;
    }
    if(value_path == "mteTriggerObjects")
    {
        mtetriggerobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerObjectsOwner")
    {
        mtetriggerobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerSampleType")
    {
        mtetriggersampletype.yfilter = yfilter;
    }
    if(value_path == "mteTriggerTargetTag")
    {
        mtetriggertargettag.yfilter = yfilter;
    }
    if(value_path == "mteTriggerTest")
    {
        mtetriggertest.yfilter = yfilter;
    }
    if(value_path == "mteTriggerValueID")
    {
        mtetriggervalueid.yfilter = yfilter;
    }
    if(value_path == "mteTriggerValueIDWildcard")
    {
        mtetriggervalueidwildcard.yfilter = yfilter;
    }
}

bool DismanEventMib::Mtetriggertable::Mtetriggerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerComment" || name == "mteTriggerContextName" || name == "mteTriggerContextNameWildcard" || name == "mteTriggerEnabled" || name == "mteTriggerEntryStatus" || name == "mteTriggerFrequency" || name == "mteTriggerObjects" || name == "mteTriggerObjectsOwner" || name == "mteTriggerSampleType" || name == "mteTriggerTargetTag" || name == "mteTriggerTest" || name == "mteTriggerValueID" || name == "mteTriggerValueIDWildcard")
        return true;
    return false;
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
    for (std::size_t index=0; index<mtetriggerdeltaentry.size(); index++)
    {
        if(mtetriggerdeltaentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerdeltatable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerdeltaentry.size(); index++)
    {
        if(mtetriggerdeltaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mtetriggerdeltaentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry>();
        c->parent = this;
        mtetriggerdeltaentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerdeltatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerdeltaentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerdeltatable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mtetriggerdeltatable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mtetriggerdeltatable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerDeltaEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerdeltadiscontinuityid.yfilter)
	|| ydk::is_set(mtetriggerdeltadiscontinuityidtype.yfilter)
	|| ydk::is_set(mtetriggerdeltadiscontinuityidwildcard.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityid.is_set || is_set(mtetriggerdeltadiscontinuityid.yfilter)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityid.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityidtype.is_set || is_set(mtetriggerdeltadiscontinuityidtype.yfilter)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityidtype.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityidwildcard.is_set || is_set(mtetriggerdeltadiscontinuityidwildcard.yfilter)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityidwildcard.get_name_leafdata());


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

void DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
        mtetriggername.value_namespace = name_space;
        mtetriggername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityID")
    {
        mtetriggerdeltadiscontinuityid = value;
        mtetriggerdeltadiscontinuityid.value_namespace = name_space;
        mtetriggerdeltadiscontinuityid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDType")
    {
        mtetriggerdeltadiscontinuityidtype = value;
        mtetriggerdeltadiscontinuityidtype.value_namespace = name_space;
        mtetriggerdeltadiscontinuityidtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDWildcard")
    {
        mtetriggerdeltadiscontinuityidwildcard = value;
        mtetriggerdeltadiscontinuityidwildcard.value_namespace = name_space;
        mtetriggerdeltadiscontinuityidwildcard.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername.yfilter = yfilter;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityID")
    {
        mtetriggerdeltadiscontinuityid.yfilter = yfilter;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDType")
    {
        mtetriggerdeltadiscontinuityidtype.yfilter = yfilter;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDWildcard")
    {
        mtetriggerdeltadiscontinuityidwildcard.yfilter = yfilter;
    }
}

bool DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerDeltaDiscontinuityID" || name == "mteTriggerDeltaDiscontinuityIDType" || name == "mteTriggerDeltaDiscontinuityIDWildcard")
        return true;
    return false;
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
    for (std::size_t index=0; index<mtetriggerexistenceentry.size(); index++)
    {
        if(mtetriggerexistenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerexistencetable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerexistenceentry.size(); index++)
    {
        if(mtetriggerexistenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mtetriggerexistenceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry>();
        c->parent = this;
        mtetriggerexistenceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerexistencetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerexistenceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerexistencetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mtetriggerexistencetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mtetriggerexistencetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerExistenceEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerexistenceevent.yfilter)
	|| ydk::is_set(mtetriggerexistenceeventowner.yfilter)
	|| ydk::is_set(mtetriggerexistenceobjects.yfilter)
	|| ydk::is_set(mtetriggerexistenceobjectsowner.yfilter)
	|| ydk::is_set(mtetriggerexistencestartup.yfilter)
	|| ydk::is_set(mtetriggerexistencetest.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerexistenceevent.is_set || is_set(mtetriggerexistenceevent.yfilter)) leaf_name_data.push_back(mtetriggerexistenceevent.get_name_leafdata());
    if (mtetriggerexistenceeventowner.is_set || is_set(mtetriggerexistenceeventowner.yfilter)) leaf_name_data.push_back(mtetriggerexistenceeventowner.get_name_leafdata());
    if (mtetriggerexistenceobjects.is_set || is_set(mtetriggerexistenceobjects.yfilter)) leaf_name_data.push_back(mtetriggerexistenceobjects.get_name_leafdata());
    if (mtetriggerexistenceobjectsowner.is_set || is_set(mtetriggerexistenceobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerexistenceobjectsowner.get_name_leafdata());
    if (mtetriggerexistencestartup.is_set || is_set(mtetriggerexistencestartup.yfilter)) leaf_name_data.push_back(mtetriggerexistencestartup.get_name_leafdata());
    if (mtetriggerexistencetest.is_set || is_set(mtetriggerexistencetest.yfilter)) leaf_name_data.push_back(mtetriggerexistencetest.get_name_leafdata());


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

void DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
        mtetriggername.value_namespace = name_space;
        mtetriggername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerExistenceEvent")
    {
        mtetriggerexistenceevent = value;
        mtetriggerexistenceevent.value_namespace = name_space;
        mtetriggerexistenceevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerExistenceEventOwner")
    {
        mtetriggerexistenceeventowner = value;
        mtetriggerexistenceeventowner.value_namespace = name_space;
        mtetriggerexistenceeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerExistenceObjects")
    {
        mtetriggerexistenceobjects = value;
        mtetriggerexistenceobjects.value_namespace = name_space;
        mtetriggerexistenceobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerExistenceObjectsOwner")
    {
        mtetriggerexistenceobjectsowner = value;
        mtetriggerexistenceobjectsowner.value_namespace = name_space;
        mtetriggerexistenceobjectsowner.value_namespace_prefix = name_space_prefix;
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

void DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceEvent")
    {
        mtetriggerexistenceevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceEventOwner")
    {
        mtetriggerexistenceeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceObjects")
    {
        mtetriggerexistenceobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceObjectsOwner")
    {
        mtetriggerexistenceobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceStartup")
    {
        mtetriggerexistencestartup.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceTest")
    {
        mtetriggerexistencetest.yfilter = yfilter;
    }
}

bool DismanEventMib::Mtetriggerexistencetable::Mtetriggerexistenceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerExistenceEvent" || name == "mteTriggerExistenceEventOwner" || name == "mteTriggerExistenceObjects" || name == "mteTriggerExistenceObjectsOwner" || name == "mteTriggerExistenceStartup" || name == "mteTriggerExistenceTest")
        return true;
    return false;
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
    for (std::size_t index=0; index<mtetriggerbooleanentry.size(); index++)
    {
        if(mtetriggerbooleanentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerbooleantable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerbooleanentry.size(); index++)
    {
        if(mtetriggerbooleanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mtetriggerbooleanentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry>();
        c->parent = this;
        mtetriggerbooleanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerbooleantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerbooleanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerbooleantable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mtetriggerbooleantable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mtetriggerbooleantable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerBooleanEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerbooleancomparison.yfilter)
	|| ydk::is_set(mtetriggerbooleanevent.yfilter)
	|| ydk::is_set(mtetriggerbooleaneventowner.yfilter)
	|| ydk::is_set(mtetriggerbooleanobjects.yfilter)
	|| ydk::is_set(mtetriggerbooleanobjectsowner.yfilter)
	|| ydk::is_set(mtetriggerbooleanstartup.yfilter)
	|| ydk::is_set(mtetriggerbooleanvalue.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerbooleancomparison.is_set || is_set(mtetriggerbooleancomparison.yfilter)) leaf_name_data.push_back(mtetriggerbooleancomparison.get_name_leafdata());
    if (mtetriggerbooleanevent.is_set || is_set(mtetriggerbooleanevent.yfilter)) leaf_name_data.push_back(mtetriggerbooleanevent.get_name_leafdata());
    if (mtetriggerbooleaneventowner.is_set || is_set(mtetriggerbooleaneventowner.yfilter)) leaf_name_data.push_back(mtetriggerbooleaneventowner.get_name_leafdata());
    if (mtetriggerbooleanobjects.is_set || is_set(mtetriggerbooleanobjects.yfilter)) leaf_name_data.push_back(mtetriggerbooleanobjects.get_name_leafdata());
    if (mtetriggerbooleanobjectsowner.is_set || is_set(mtetriggerbooleanobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerbooleanobjectsowner.get_name_leafdata());
    if (mtetriggerbooleanstartup.is_set || is_set(mtetriggerbooleanstartup.yfilter)) leaf_name_data.push_back(mtetriggerbooleanstartup.get_name_leafdata());
    if (mtetriggerbooleanvalue.is_set || is_set(mtetriggerbooleanvalue.yfilter)) leaf_name_data.push_back(mtetriggerbooleanvalue.get_name_leafdata());


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

void DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
        mtetriggername.value_namespace = name_space;
        mtetriggername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanComparison")
    {
        mtetriggerbooleancomparison = value;
        mtetriggerbooleancomparison.value_namespace = name_space;
        mtetriggerbooleancomparison.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanEvent")
    {
        mtetriggerbooleanevent = value;
        mtetriggerbooleanevent.value_namespace = name_space;
        mtetriggerbooleanevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanEventOwner")
    {
        mtetriggerbooleaneventowner = value;
        mtetriggerbooleaneventowner.value_namespace = name_space;
        mtetriggerbooleaneventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanObjects")
    {
        mtetriggerbooleanobjects = value;
        mtetriggerbooleanobjects.value_namespace = name_space;
        mtetriggerbooleanobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanObjectsOwner")
    {
        mtetriggerbooleanobjectsowner = value;
        mtetriggerbooleanobjectsowner.value_namespace = name_space;
        mtetriggerbooleanobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanStartup")
    {
        mtetriggerbooleanstartup = value;
        mtetriggerbooleanstartup.value_namespace = name_space;
        mtetriggerbooleanstartup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanValue")
    {
        mtetriggerbooleanvalue = value;
        mtetriggerbooleanvalue.value_namespace = name_space;
        mtetriggerbooleanvalue.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanComparison")
    {
        mtetriggerbooleancomparison.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanEvent")
    {
        mtetriggerbooleanevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanEventOwner")
    {
        mtetriggerbooleaneventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanObjects")
    {
        mtetriggerbooleanobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanObjectsOwner")
    {
        mtetriggerbooleanobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanStartup")
    {
        mtetriggerbooleanstartup.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanValue")
    {
        mtetriggerbooleanvalue.yfilter = yfilter;
    }
}

bool DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerBooleanComparison" || name == "mteTriggerBooleanEvent" || name == "mteTriggerBooleanEventOwner" || name == "mteTriggerBooleanObjects" || name == "mteTriggerBooleanObjectsOwner" || name == "mteTriggerBooleanStartup" || name == "mteTriggerBooleanValue")
        return true;
    return false;
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
    for (std::size_t index=0; index<mtetriggerthresholdentry.size(); index++)
    {
        if(mtetriggerthresholdentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mtetriggerthresholdtable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerthresholdentry.size(); index++)
    {
        if(mtetriggerthresholdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mtetriggerthresholdentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry>();
        c->parent = this;
        mtetriggerthresholdentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mtetriggerthresholdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtetriggerthresholdentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mtetriggerthresholdtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mtetriggerthresholdtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mtetriggerthresholdtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerThresholdEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltafalling.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltafallingevent.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltafallingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltarising.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltarisingevent.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltarisingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholdfalling.yfilter)
	|| ydk::is_set(mtetriggerthresholdfallingevent.yfilter)
	|| ydk::is_set(mtetriggerthresholdfallingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholdobjects.yfilter)
	|| ydk::is_set(mtetriggerthresholdobjectsowner.yfilter)
	|| ydk::is_set(mtetriggerthresholdrising.yfilter)
	|| ydk::is_set(mtetriggerthresholdrisingevent.yfilter)
	|| ydk::is_set(mtetriggerthresholdrisingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholdstartup.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerthresholddeltafalling.is_set || is_set(mtetriggerthresholddeltafalling.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltafalling.get_name_leafdata());
    if (mtetriggerthresholddeltafallingevent.is_set || is_set(mtetriggerthresholddeltafallingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltafallingevent.get_name_leafdata());
    if (mtetriggerthresholddeltafallingeventowner.is_set || is_set(mtetriggerthresholddeltafallingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltafallingeventowner.get_name_leafdata());
    if (mtetriggerthresholddeltarising.is_set || is_set(mtetriggerthresholddeltarising.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltarising.get_name_leafdata());
    if (mtetriggerthresholddeltarisingevent.is_set || is_set(mtetriggerthresholddeltarisingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltarisingevent.get_name_leafdata());
    if (mtetriggerthresholddeltarisingeventowner.is_set || is_set(mtetriggerthresholddeltarisingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltarisingeventowner.get_name_leafdata());
    if (mtetriggerthresholdfalling.is_set || is_set(mtetriggerthresholdfalling.yfilter)) leaf_name_data.push_back(mtetriggerthresholdfalling.get_name_leafdata());
    if (mtetriggerthresholdfallingevent.is_set || is_set(mtetriggerthresholdfallingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholdfallingevent.get_name_leafdata());
    if (mtetriggerthresholdfallingeventowner.is_set || is_set(mtetriggerthresholdfallingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholdfallingeventowner.get_name_leafdata());
    if (mtetriggerthresholdobjects.is_set || is_set(mtetriggerthresholdobjects.yfilter)) leaf_name_data.push_back(mtetriggerthresholdobjects.get_name_leafdata());
    if (mtetriggerthresholdobjectsowner.is_set || is_set(mtetriggerthresholdobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholdobjectsowner.get_name_leafdata());
    if (mtetriggerthresholdrising.is_set || is_set(mtetriggerthresholdrising.yfilter)) leaf_name_data.push_back(mtetriggerthresholdrising.get_name_leafdata());
    if (mtetriggerthresholdrisingevent.is_set || is_set(mtetriggerthresholdrisingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholdrisingevent.get_name_leafdata());
    if (mtetriggerthresholdrisingeventowner.is_set || is_set(mtetriggerthresholdrisingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholdrisingeventowner.get_name_leafdata());
    if (mtetriggerthresholdstartup.is_set || is_set(mtetriggerthresholdstartup.yfilter)) leaf_name_data.push_back(mtetriggerthresholdstartup.get_name_leafdata());


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

void DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername = value;
        mtetriggername.value_namespace = name_space;
        mtetriggername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaFalling")
    {
        mtetriggerthresholddeltafalling = value;
        mtetriggerthresholddeltafalling.value_namespace = name_space;
        mtetriggerthresholddeltafalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEvent")
    {
        mtetriggerthresholddeltafallingevent = value;
        mtetriggerthresholddeltafallingevent.value_namespace = name_space;
        mtetriggerthresholddeltafallingevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEventOwner")
    {
        mtetriggerthresholddeltafallingeventowner = value;
        mtetriggerthresholddeltafallingeventowner.value_namespace = name_space;
        mtetriggerthresholddeltafallingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaRising")
    {
        mtetriggerthresholddeltarising = value;
        mtetriggerthresholddeltarising.value_namespace = name_space;
        mtetriggerthresholddeltarising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEvent")
    {
        mtetriggerthresholddeltarisingevent = value;
        mtetriggerthresholddeltarisingevent.value_namespace = name_space;
        mtetriggerthresholddeltarisingevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEventOwner")
    {
        mtetriggerthresholddeltarisingeventowner = value;
        mtetriggerthresholddeltarisingeventowner.value_namespace = name_space;
        mtetriggerthresholddeltarisingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdFalling")
    {
        mtetriggerthresholdfalling = value;
        mtetriggerthresholdfalling.value_namespace = name_space;
        mtetriggerthresholdfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdFallingEvent")
    {
        mtetriggerthresholdfallingevent = value;
        mtetriggerthresholdfallingevent.value_namespace = name_space;
        mtetriggerthresholdfallingevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdFallingEventOwner")
    {
        mtetriggerthresholdfallingeventowner = value;
        mtetriggerthresholdfallingeventowner.value_namespace = name_space;
        mtetriggerthresholdfallingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdObjects")
    {
        mtetriggerthresholdobjects = value;
        mtetriggerthresholdobjects.value_namespace = name_space;
        mtetriggerthresholdobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdObjectsOwner")
    {
        mtetriggerthresholdobjectsowner = value;
        mtetriggerthresholdobjectsowner.value_namespace = name_space;
        mtetriggerthresholdobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdRising")
    {
        mtetriggerthresholdrising = value;
        mtetriggerthresholdrising.value_namespace = name_space;
        mtetriggerthresholdrising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdRisingEvent")
    {
        mtetriggerthresholdrisingevent = value;
        mtetriggerthresholdrisingevent.value_namespace = name_space;
        mtetriggerthresholdrisingevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdRisingEventOwner")
    {
        mtetriggerthresholdrisingeventowner = value;
        mtetriggerthresholdrisingeventowner.value_namespace = name_space;
        mtetriggerthresholdrisingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdStartup")
    {
        mtetriggerthresholdstartup = value;
        mtetriggerthresholdstartup.value_namespace = name_space;
        mtetriggerthresholdstartup.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaFalling")
    {
        mtetriggerthresholddeltafalling.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEvent")
    {
        mtetriggerthresholddeltafallingevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEventOwner")
    {
        mtetriggerthresholddeltafallingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaRising")
    {
        mtetriggerthresholddeltarising.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEvent")
    {
        mtetriggerthresholddeltarisingevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEventOwner")
    {
        mtetriggerthresholddeltarisingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdFalling")
    {
        mtetriggerthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdFallingEvent")
    {
        mtetriggerthresholdfallingevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdFallingEventOwner")
    {
        mtetriggerthresholdfallingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdObjects")
    {
        mtetriggerthresholdobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdObjectsOwner")
    {
        mtetriggerthresholdobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdRising")
    {
        mtetriggerthresholdrising.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdRisingEvent")
    {
        mtetriggerthresholdrisingevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdRisingEventOwner")
    {
        mtetriggerthresholdrisingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdStartup")
    {
        mtetriggerthresholdstartup.yfilter = yfilter;
    }
}

bool DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerThresholdDeltaFalling" || name == "mteTriggerThresholdDeltaFallingEvent" || name == "mteTriggerThresholdDeltaFallingEventOwner" || name == "mteTriggerThresholdDeltaRising" || name == "mteTriggerThresholdDeltaRisingEvent" || name == "mteTriggerThresholdDeltaRisingEventOwner" || name == "mteTriggerThresholdFalling" || name == "mteTriggerThresholdFallingEvent" || name == "mteTriggerThresholdFallingEventOwner" || name == "mteTriggerThresholdObjects" || name == "mteTriggerThresholdObjectsOwner" || name == "mteTriggerThresholdRising" || name == "mteTriggerThresholdRisingEvent" || name == "mteTriggerThresholdRisingEventOwner" || name == "mteTriggerThresholdStartup")
        return true;
    return false;
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
    for (std::size_t index=0; index<mteobjectsentry.size(); index++)
    {
        if(mteobjectsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteobjectstable::has_operation() const
{
    for (std::size_t index=0; index<mteobjectsentry.size(); index++)
    {
        if(mteobjectsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mteobjectsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteobjectstable::Mteobjectsentry>();
        c->parent = this;
        mteobjectsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteobjectstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteobjectsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteobjectstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mteobjectstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mteobjectstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteObjectsEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteobjectsname.yfilter)
	|| ydk::is_set(mteobjectsindex.yfilter)
	|| ydk::is_set(mteobjectsentrystatus.yfilter)
	|| ydk::is_set(mteobjectsid.yfilter)
	|| ydk::is_set(mteobjectsidwildcard.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteobjectsname.is_set || is_set(mteobjectsname.yfilter)) leaf_name_data.push_back(mteobjectsname.get_name_leafdata());
    if (mteobjectsindex.is_set || is_set(mteobjectsindex.yfilter)) leaf_name_data.push_back(mteobjectsindex.get_name_leafdata());
    if (mteobjectsentrystatus.is_set || is_set(mteobjectsentrystatus.yfilter)) leaf_name_data.push_back(mteobjectsentrystatus.get_name_leafdata());
    if (mteobjectsid.is_set || is_set(mteobjectsid.yfilter)) leaf_name_data.push_back(mteobjectsid.get_name_leafdata());
    if (mteobjectsidwildcard.is_set || is_set(mteobjectsidwildcard.yfilter)) leaf_name_data.push_back(mteobjectsidwildcard.get_name_leafdata());


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

void DismanEventMib::Mteobjectstable::Mteobjectsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteObjectsName")
    {
        mteobjectsname = value;
        mteobjectsname.value_namespace = name_space;
        mteobjectsname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteObjectsIndex")
    {
        mteobjectsindex = value;
        mteobjectsindex.value_namespace = name_space;
        mteobjectsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteObjectsEntryStatus")
    {
        mteobjectsentrystatus = value;
        mteobjectsentrystatus.value_namespace = name_space;
        mteobjectsentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteObjectsID")
    {
        mteobjectsid = value;
        mteobjectsid.value_namespace = name_space;
        mteobjectsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteObjectsIDWildcard")
    {
        mteobjectsidwildcard = value;
        mteobjectsidwildcard.value_namespace = name_space;
        mteobjectsidwildcard.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mteobjectstable::Mteobjectsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteObjectsName")
    {
        mteobjectsname.yfilter = yfilter;
    }
    if(value_path == "mteObjectsIndex")
    {
        mteobjectsindex.yfilter = yfilter;
    }
    if(value_path == "mteObjectsEntryStatus")
    {
        mteobjectsentrystatus.yfilter = yfilter;
    }
    if(value_path == "mteObjectsID")
    {
        mteobjectsid.yfilter = yfilter;
    }
    if(value_path == "mteObjectsIDWildcard")
    {
        mteobjectsidwildcard.yfilter = yfilter;
    }
}

bool DismanEventMib::Mteobjectstable::Mteobjectsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteObjectsName" || name == "mteObjectsIndex" || name == "mteObjectsEntryStatus" || name == "mteObjectsID" || name == "mteObjectsIDWildcard")
        return true;
    return false;
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
    for (std::size_t index=0; index<mteevententry.size(); index++)
    {
        if(mteevententry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteeventtable::has_operation() const
{
    for (std::size_t index=0; index<mteevententry.size(); index++)
    {
        if(mteevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mteevententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteeventtable::Mteevententry>();
        c->parent = this;
        mteevententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteevententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteeventtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mteeventtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mteeventtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteeventname.yfilter)
	|| ydk::is_set(mteeventactions.yfilter)
	|| ydk::is_set(mteeventcomment.yfilter)
	|| ydk::is_set(mteeventenabled.yfilter)
	|| ydk::is_set(mteevententrystatus.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.yfilter)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventactions.is_set || is_set(mteeventactions.yfilter)) leaf_name_data.push_back(mteeventactions.get_name_leafdata());
    if (mteeventcomment.is_set || is_set(mteeventcomment.yfilter)) leaf_name_data.push_back(mteeventcomment.get_name_leafdata());
    if (mteeventenabled.is_set || is_set(mteeventenabled.yfilter)) leaf_name_data.push_back(mteeventenabled.get_name_leafdata());
    if (mteevententrystatus.is_set || is_set(mteevententrystatus.yfilter)) leaf_name_data.push_back(mteevententrystatus.get_name_leafdata());


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

void DismanEventMib::Mteeventtable::Mteevententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventName")
    {
        mteeventname = value;
        mteeventname.value_namespace = name_space;
        mteeventname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventActions")
    {
        mteeventactions[value] = true;
    }
    if(value_path == "mteEventComment")
    {
        mteeventcomment = value;
        mteeventcomment.value_namespace = name_space;
        mteeventcomment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventEnabled")
    {
        mteeventenabled = value;
        mteeventenabled.value_namespace = name_space;
        mteeventenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventEntryStatus")
    {
        mteevententrystatus = value;
        mteevententrystatus.value_namespace = name_space;
        mteevententrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mteeventtable::Mteevententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteEventName")
    {
        mteeventname.yfilter = yfilter;
    }
    if(value_path == "mteEventActions")
    {
        mteeventactions.yfilter = yfilter;
    }
    if(value_path == "mteEventComment")
    {
        mteeventcomment.yfilter = yfilter;
    }
    if(value_path == "mteEventEnabled")
    {
        mteeventenabled.yfilter = yfilter;
    }
    if(value_path == "mteEventEntryStatus")
    {
        mteevententrystatus.yfilter = yfilter;
    }
}

bool DismanEventMib::Mteeventtable::Mteevententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteEventName" || name == "mteEventActions" || name == "mteEventComment" || name == "mteEventEnabled" || name == "mteEventEntryStatus")
        return true;
    return false;
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
    for (std::size_t index=0; index<mteeventnotificationentry.size(); index++)
    {
        if(mteeventnotificationentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteeventnotificationtable::has_operation() const
{
    for (std::size_t index=0; index<mteeventnotificationentry.size(); index++)
    {
        if(mteeventnotificationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mteeventnotificationentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry>();
        c->parent = this;
        mteeventnotificationentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventnotificationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteeventnotificationentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteeventnotificationtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mteeventnotificationtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mteeventnotificationtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventNotificationEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteeventname.yfilter)
	|| ydk::is_set(mteeventnotification.yfilter)
	|| ydk::is_set(mteeventnotificationobjects.yfilter)
	|| ydk::is_set(mteeventnotificationobjectsowner.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.yfilter)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventnotification.is_set || is_set(mteeventnotification.yfilter)) leaf_name_data.push_back(mteeventnotification.get_name_leafdata());
    if (mteeventnotificationobjects.is_set || is_set(mteeventnotificationobjects.yfilter)) leaf_name_data.push_back(mteeventnotificationobjects.get_name_leafdata());
    if (mteeventnotificationobjectsowner.is_set || is_set(mteeventnotificationobjectsowner.yfilter)) leaf_name_data.push_back(mteeventnotificationobjectsowner.get_name_leafdata());


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

void DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventName")
    {
        mteeventname = value;
        mteeventname.value_namespace = name_space;
        mteeventname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventNotification")
    {
        mteeventnotification = value;
        mteeventnotification.value_namespace = name_space;
        mteeventnotification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventNotificationObjects")
    {
        mteeventnotificationobjects = value;
        mteeventnotificationobjects.value_namespace = name_space;
        mteeventnotificationobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventNotificationObjectsOwner")
    {
        mteeventnotificationobjectsowner = value;
        mteeventnotificationobjectsowner.value_namespace = name_space;
        mteeventnotificationobjectsowner.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteEventName")
    {
        mteeventname.yfilter = yfilter;
    }
    if(value_path == "mteEventNotification")
    {
        mteeventnotification.yfilter = yfilter;
    }
    if(value_path == "mteEventNotificationObjects")
    {
        mteeventnotificationobjects.yfilter = yfilter;
    }
    if(value_path == "mteEventNotificationObjectsOwner")
    {
        mteeventnotificationobjectsowner.yfilter = yfilter;
    }
}

bool DismanEventMib::Mteeventnotificationtable::Mteeventnotificationentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteEventName" || name == "mteEventNotification" || name == "mteEventNotificationObjects" || name == "mteEventNotificationObjectsOwner")
        return true;
    return false;
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
    for (std::size_t index=0; index<mteeventsetentry.size(); index++)
    {
        if(mteeventsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool DismanEventMib::Mteeventsettable::has_operation() const
{
    for (std::size_t index=0; index<mteeventsetentry.size(); index++)
    {
        if(mteeventsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mteeventsetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DismanEventMib::Mteeventsettable::Mteeventsetentry>();
        c->parent = this;
        mteeventsetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DismanEventMib::Mteeventsettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mteeventsetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DismanEventMib::Mteeventsettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DismanEventMib::Mteeventsettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DismanEventMib::Mteeventsettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventSetEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteeventname.yfilter)
	|| ydk::is_set(mteeventsetcontextname.yfilter)
	|| ydk::is_set(mteeventsetcontextnamewildcard.yfilter)
	|| ydk::is_set(mteeventsetobject.yfilter)
	|| ydk::is_set(mteeventsetobjectwildcard.yfilter)
	|| ydk::is_set(mteeventsettargettag.yfilter)
	|| ydk::is_set(mteeventsetvalue.yfilter);
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

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.yfilter)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventsetcontextname.is_set || is_set(mteeventsetcontextname.yfilter)) leaf_name_data.push_back(mteeventsetcontextname.get_name_leafdata());
    if (mteeventsetcontextnamewildcard.is_set || is_set(mteeventsetcontextnamewildcard.yfilter)) leaf_name_data.push_back(mteeventsetcontextnamewildcard.get_name_leafdata());
    if (mteeventsetobject.is_set || is_set(mteeventsetobject.yfilter)) leaf_name_data.push_back(mteeventsetobject.get_name_leafdata());
    if (mteeventsetobjectwildcard.is_set || is_set(mteeventsetobjectwildcard.yfilter)) leaf_name_data.push_back(mteeventsetobjectwildcard.get_name_leafdata());
    if (mteeventsettargettag.is_set || is_set(mteeventsettargettag.yfilter)) leaf_name_data.push_back(mteeventsettargettag.get_name_leafdata());
    if (mteeventsetvalue.is_set || is_set(mteeventsetvalue.yfilter)) leaf_name_data.push_back(mteeventsetvalue.get_name_leafdata());


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

void DismanEventMib::Mteeventsettable::Mteeventsetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteOwner")
    {
        mteowner = value;
        mteowner.value_namespace = name_space;
        mteowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventName")
    {
        mteeventname = value;
        mteeventname.value_namespace = name_space;
        mteeventname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventSetContextName")
    {
        mteeventsetcontextname = value;
        mteeventsetcontextname.value_namespace = name_space;
        mteeventsetcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventSetContextNameWildcard")
    {
        mteeventsetcontextnamewildcard = value;
        mteeventsetcontextnamewildcard.value_namespace = name_space;
        mteeventsetcontextnamewildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventSetObject")
    {
        mteeventsetobject = value;
        mteeventsetobject.value_namespace = name_space;
        mteeventsetobject.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventSetObjectWildcard")
    {
        mteeventsetobjectwildcard = value;
        mteeventsetobjectwildcard.value_namespace = name_space;
        mteeventsetobjectwildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventSetTargetTag")
    {
        mteeventsettargettag = value;
        mteeventsettargettag.value_namespace = name_space;
        mteeventsettargettag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventSetValue")
    {
        mteeventsetvalue = value;
        mteeventsetvalue.value_namespace = name_space;
        mteeventsetvalue.value_namespace_prefix = name_space_prefix;
    }
}

void DismanEventMib::Mteeventsettable::Mteeventsetentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteEventName")
    {
        mteeventname.yfilter = yfilter;
    }
    if(value_path == "mteEventSetContextName")
    {
        mteeventsetcontextname.yfilter = yfilter;
    }
    if(value_path == "mteEventSetContextNameWildcard")
    {
        mteeventsetcontextnamewildcard.yfilter = yfilter;
    }
    if(value_path == "mteEventSetObject")
    {
        mteeventsetobject.yfilter = yfilter;
    }
    if(value_path == "mteEventSetObjectWildcard")
    {
        mteeventsetobjectwildcard.yfilter = yfilter;
    }
    if(value_path == "mteEventSetTargetTag")
    {
        mteeventsettargettag.yfilter = yfilter;
    }
    if(value_path == "mteEventSetValue")
    {
        mteeventsetvalue.yfilter = yfilter;
    }
}

bool DismanEventMib::Mteeventsettable::Mteeventsetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteEventName" || name == "mteEventSetContextName" || name == "mteEventSetContextNameWildcard" || name == "mteEventSetObject" || name == "mteEventSetObjectWildcard" || name == "mteEventSetTargetTag" || name == "mteEventSetValue")
        return true;
    return false;
}

const Enum::YLeaf Failurereason::sampleOverrun {-6, "sampleOverrun"};
const Enum::YLeaf Failurereason::badType {-5, "badType"};
const Enum::YLeaf Failurereason::noResponse {-4, "noResponse"};
const Enum::YLeaf Failurereason::destinationUnreachable {-3, "destinationUnreachable"};
const Enum::YLeaf Failurereason::badDestination {-2, "badDestination"};
const Enum::YLeaf Failurereason::localResourceLack {-1, "localResourceLack"};
const Enum::YLeaf Failurereason::noError {0, "noError"};
const Enum::YLeaf Failurereason::tooBig {1, "tooBig"};
const Enum::YLeaf Failurereason::noSuchName {2, "noSuchName"};
const Enum::YLeaf Failurereason::badValue {3, "badValue"};
const Enum::YLeaf Failurereason::readOnly {4, "readOnly"};
const Enum::YLeaf Failurereason::genErr {5, "genErr"};
const Enum::YLeaf Failurereason::noAccess {6, "noAccess"};
const Enum::YLeaf Failurereason::wrongType {7, "wrongType"};
const Enum::YLeaf Failurereason::wrongLength {8, "wrongLength"};
const Enum::YLeaf Failurereason::wrongEncoding {9, "wrongEncoding"};
const Enum::YLeaf Failurereason::wrongValue {10, "wrongValue"};
const Enum::YLeaf Failurereason::noCreation {11, "noCreation"};
const Enum::YLeaf Failurereason::inconsistentValue {12, "inconsistentValue"};
const Enum::YLeaf Failurereason::resourceUnavailable {13, "resourceUnavailable"};
const Enum::YLeaf Failurereason::commitFailed {14, "commitFailed"};
const Enum::YLeaf Failurereason::undoFailed {15, "undoFailed"};
const Enum::YLeaf Failurereason::authorizationError {16, "authorizationError"};
const Enum::YLeaf Failurereason::notWritable {17, "notWritable"};
const Enum::YLeaf Failurereason::inconsistentName {18, "inconsistentName"};

const Enum::YLeaf DismanEventMib::Mtetriggertable::Mtetriggerentry::Mtetriggersampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf DismanEventMib::Mtetriggertable::Mtetriggerentry::Mtetriggersampletype::deltaValue {2, "deltaValue"};

const Enum::YLeaf DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::Mtetriggerdeltadiscontinuityidtype::timeTicks {1, "timeTicks"};
const Enum::YLeaf DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::Mtetriggerdeltadiscontinuityidtype::timeStamp {2, "timeStamp"};
const Enum::YLeaf DismanEventMib::Mtetriggerdeltatable::Mtetriggerdeltaentry::Mtetriggerdeltadiscontinuityidtype::dateAndTime {3, "dateAndTime"};

const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison::unequal {1, "unequal"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison::equal {2, "equal"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison::less {3, "less"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison::lessOrEqual {4, "lessOrEqual"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison::greater {5, "greater"};
const Enum::YLeaf DismanEventMib::Mtetriggerbooleantable::Mtetriggerbooleanentry::Mtetriggerbooleancomparison::greaterOrEqual {6, "greaterOrEqual"};

const Enum::YLeaf DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::Mtetriggerthresholdstartup::rising {1, "rising"};
const Enum::YLeaf DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::Mtetriggerthresholdstartup::falling {2, "falling"};
const Enum::YLeaf DismanEventMib::Mtetriggerthresholdtable::Mtetriggerthresholdentry::Mtetriggerthresholdstartup::risingOrFalling {3, "risingOrFalling"};


}
}

