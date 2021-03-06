
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DISMAN_EVENT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DISMAN_EVENT_MIB {

DISMANEVENTMIB::DISMANEVENTMIB()
    :
    mteresource(std::make_shared<DISMANEVENTMIB::MteResource>())
    , mtetrigger(std::make_shared<DISMANEVENTMIB::MteTrigger>())
    , mteevent(std::make_shared<DISMANEVENTMIB::MteEvent>())
    , mtetriggertable(std::make_shared<DISMANEVENTMIB::MteTriggerTable>())
    , mtetriggerdeltatable(std::make_shared<DISMANEVENTMIB::MteTriggerDeltaTable>())
    , mtetriggerexistencetable(std::make_shared<DISMANEVENTMIB::MteTriggerExistenceTable>())
    , mtetriggerbooleantable(std::make_shared<DISMANEVENTMIB::MteTriggerBooleanTable>())
    , mtetriggerthresholdtable(std::make_shared<DISMANEVENTMIB::MteTriggerThresholdTable>())
    , mteobjectstable(std::make_shared<DISMANEVENTMIB::MteObjectsTable>())
    , mteeventtable(std::make_shared<DISMANEVENTMIB::MteEventTable>())
    , mteeventnotificationtable(std::make_shared<DISMANEVENTMIB::MteEventNotificationTable>())
    , mteeventsettable(std::make_shared<DISMANEVENTMIB::MteEventSetTable>())
{
    mteresource->parent = this;
    mtetrigger->parent = this;
    mteevent->parent = this;
    mtetriggertable->parent = this;
    mtetriggerdeltatable->parent = this;
    mtetriggerexistencetable->parent = this;
    mtetriggerbooleantable->parent = this;
    mtetriggerthresholdtable->parent = this;
    mteobjectstable->parent = this;
    mteeventtable->parent = this;
    mteeventnotificationtable->parent = this;
    mteeventsettable->parent = this;

    yang_name = "DISMAN-EVENT-MIB"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DISMANEVENTMIB::~DISMANEVENTMIB()
{
}

bool DISMANEVENTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (mteresource !=  nullptr && mteresource->has_data())
	|| (mtetrigger !=  nullptr && mtetrigger->has_data())
	|| (mteevent !=  nullptr && mteevent->has_data())
	|| (mtetriggertable !=  nullptr && mtetriggertable->has_data())
	|| (mtetriggerdeltatable !=  nullptr && mtetriggerdeltatable->has_data())
	|| (mtetriggerexistencetable !=  nullptr && mtetriggerexistencetable->has_data())
	|| (mtetriggerbooleantable !=  nullptr && mtetriggerbooleantable->has_data())
	|| (mtetriggerthresholdtable !=  nullptr && mtetriggerthresholdtable->has_data())
	|| (mteobjectstable !=  nullptr && mteobjectstable->has_data())
	|| (mteeventtable !=  nullptr && mteeventtable->has_data())
	|| (mteeventnotificationtable !=  nullptr && mteeventnotificationtable->has_data())
	|| (mteeventsettable !=  nullptr && mteeventsettable->has_data());
}

bool DISMANEVENTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mteresource !=  nullptr && mteresource->has_operation())
	|| (mtetrigger !=  nullptr && mtetrigger->has_operation())
	|| (mteevent !=  nullptr && mteevent->has_operation())
	|| (mtetriggertable !=  nullptr && mtetriggertable->has_operation())
	|| (mtetriggerdeltatable !=  nullptr && mtetriggerdeltatable->has_operation())
	|| (mtetriggerexistencetable !=  nullptr && mtetriggerexistencetable->has_operation())
	|| (mtetriggerbooleantable !=  nullptr && mtetriggerbooleantable->has_operation())
	|| (mtetriggerthresholdtable !=  nullptr && mtetriggerthresholdtable->has_operation())
	|| (mteobjectstable !=  nullptr && mteobjectstable->has_operation())
	|| (mteeventtable !=  nullptr && mteeventtable->has_operation())
	|| (mteeventnotificationtable !=  nullptr && mteeventnotificationtable->has_operation())
	|| (mteeventsettable !=  nullptr && mteeventsettable->has_operation());
}

std::string DISMANEVENTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteResource")
    {
        if(mteresource == nullptr)
        {
            mteresource = std::make_shared<DISMANEVENTMIB::MteResource>();
        }
        return mteresource;
    }

    if(child_yang_name == "mteTrigger")
    {
        if(mtetrigger == nullptr)
        {
            mtetrigger = std::make_shared<DISMANEVENTMIB::MteTrigger>();
        }
        return mtetrigger;
    }

    if(child_yang_name == "mteEvent")
    {
        if(mteevent == nullptr)
        {
            mteevent = std::make_shared<DISMANEVENTMIB::MteEvent>();
        }
        return mteevent;
    }

    if(child_yang_name == "mteTriggerTable")
    {
        if(mtetriggertable == nullptr)
        {
            mtetriggertable = std::make_shared<DISMANEVENTMIB::MteTriggerTable>();
        }
        return mtetriggertable;
    }

    if(child_yang_name == "mteTriggerDeltaTable")
    {
        if(mtetriggerdeltatable == nullptr)
        {
            mtetriggerdeltatable = std::make_shared<DISMANEVENTMIB::MteTriggerDeltaTable>();
        }
        return mtetriggerdeltatable;
    }

    if(child_yang_name == "mteTriggerExistenceTable")
    {
        if(mtetriggerexistencetable == nullptr)
        {
            mtetriggerexistencetable = std::make_shared<DISMANEVENTMIB::MteTriggerExistenceTable>();
        }
        return mtetriggerexistencetable;
    }

    if(child_yang_name == "mteTriggerBooleanTable")
    {
        if(mtetriggerbooleantable == nullptr)
        {
            mtetriggerbooleantable = std::make_shared<DISMANEVENTMIB::MteTriggerBooleanTable>();
        }
        return mtetriggerbooleantable;
    }

    if(child_yang_name == "mteTriggerThresholdTable")
    {
        if(mtetriggerthresholdtable == nullptr)
        {
            mtetriggerthresholdtable = std::make_shared<DISMANEVENTMIB::MteTriggerThresholdTable>();
        }
        return mtetriggerthresholdtable;
    }

    if(child_yang_name == "mteObjectsTable")
    {
        if(mteobjectstable == nullptr)
        {
            mteobjectstable = std::make_shared<DISMANEVENTMIB::MteObjectsTable>();
        }
        return mteobjectstable;
    }

    if(child_yang_name == "mteEventTable")
    {
        if(mteeventtable == nullptr)
        {
            mteeventtable = std::make_shared<DISMANEVENTMIB::MteEventTable>();
        }
        return mteeventtable;
    }

    if(child_yang_name == "mteEventNotificationTable")
    {
        if(mteeventnotificationtable == nullptr)
        {
            mteeventnotificationtable = std::make_shared<DISMANEVENTMIB::MteEventNotificationTable>();
        }
        return mteeventnotificationtable;
    }

    if(child_yang_name == "mteEventSetTable")
    {
        if(mteeventsettable == nullptr)
        {
            mteeventsettable = std::make_shared<DISMANEVENTMIB::MteEventSetTable>();
        }
        return mteeventsettable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mteresource != nullptr)
    {
        _children["mteResource"] = mteresource;
    }

    if(mtetrigger != nullptr)
    {
        _children["mteTrigger"] = mtetrigger;
    }

    if(mteevent != nullptr)
    {
        _children["mteEvent"] = mteevent;
    }

    if(mtetriggertable != nullptr)
    {
        _children["mteTriggerTable"] = mtetriggertable;
    }

    if(mtetriggerdeltatable != nullptr)
    {
        _children["mteTriggerDeltaTable"] = mtetriggerdeltatable;
    }

    if(mtetriggerexistencetable != nullptr)
    {
        _children["mteTriggerExistenceTable"] = mtetriggerexistencetable;
    }

    if(mtetriggerbooleantable != nullptr)
    {
        _children["mteTriggerBooleanTable"] = mtetriggerbooleantable;
    }

    if(mtetriggerthresholdtable != nullptr)
    {
        _children["mteTriggerThresholdTable"] = mtetriggerthresholdtable;
    }

    if(mteobjectstable != nullptr)
    {
        _children["mteObjectsTable"] = mteobjectstable;
    }

    if(mteeventtable != nullptr)
    {
        _children["mteEventTable"] = mteeventtable;
    }

    if(mteeventnotificationtable != nullptr)
    {
        _children["mteEventNotificationTable"] = mteeventnotificationtable;
    }

    if(mteeventsettable != nullptr)
    {
        _children["mteEventSetTable"] = mteeventsettable;
    }

    return _children;
}

void DISMANEVENTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::clone_ptr() const
{
    return std::make_shared<DISMANEVENTMIB>();
}

std::string DISMANEVENTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DISMANEVENTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DISMANEVENTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DISMANEVENTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DISMANEVENTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteResource" || name == "mteTrigger" || name == "mteEvent" || name == "mteTriggerTable" || name == "mteTriggerDeltaTable" || name == "mteTriggerExistenceTable" || name == "mteTriggerBooleanTable" || name == "mteTriggerThresholdTable" || name == "mteObjectsTable" || name == "mteEventTable" || name == "mteEventNotificationTable" || name == "mteEventSetTable")
        return true;
    return false;
}

DISMANEVENTMIB::MteResource::MteResource()
    :
    mteresourcesampleminimum{YType::int32, "mteResourceSampleMinimum"},
    mteresourcesampleinstancemaximum{YType::uint32, "mteResourceSampleInstanceMaximum"},
    mteresourcesampleinstances{YType::uint32, "mteResourceSampleInstances"},
    mteresourcesampleinstanceshigh{YType::uint32, "mteResourceSampleInstancesHigh"},
    mteresourcesampleinstancelacks{YType::uint32, "mteResourceSampleInstanceLacks"}
{

    yang_name = "mteResource"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteResource::~MteResource()
{
}

bool DISMANEVENTMIB::MteResource::has_data() const
{
    if (is_presence_container) return true;
    return mteresourcesampleminimum.is_set
	|| mteresourcesampleinstancemaximum.is_set
	|| mteresourcesampleinstances.is_set
	|| mteresourcesampleinstanceshigh.is_set
	|| mteresourcesampleinstancelacks.is_set;
}

bool DISMANEVENTMIB::MteResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteresourcesampleminimum.yfilter)
	|| ydk::is_set(mteresourcesampleinstancemaximum.yfilter)
	|| ydk::is_set(mteresourcesampleinstances.yfilter)
	|| ydk::is_set(mteresourcesampleinstanceshigh.yfilter)
	|| ydk::is_set(mteresourcesampleinstancelacks.yfilter);
}

std::string DISMANEVENTMIB::MteResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteResource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteresourcesampleminimum.is_set || is_set(mteresourcesampleminimum.yfilter)) leaf_name_data.push_back(mteresourcesampleminimum.get_name_leafdata());
    if (mteresourcesampleinstancemaximum.is_set || is_set(mteresourcesampleinstancemaximum.yfilter)) leaf_name_data.push_back(mteresourcesampleinstancemaximum.get_name_leafdata());
    if (mteresourcesampleinstances.is_set || is_set(mteresourcesampleinstances.yfilter)) leaf_name_data.push_back(mteresourcesampleinstances.get_name_leafdata());
    if (mteresourcesampleinstanceshigh.is_set || is_set(mteresourcesampleinstanceshigh.yfilter)) leaf_name_data.push_back(mteresourcesampleinstanceshigh.get_name_leafdata());
    if (mteresourcesampleinstancelacks.is_set || is_set(mteresourcesampleinstancelacks.yfilter)) leaf_name_data.push_back(mteresourcesampleinstancelacks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteResource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteResourceSampleMinimum")
    {
        mteresourcesampleminimum = value;
        mteresourcesampleminimum.value_namespace = name_space;
        mteresourcesampleminimum.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mteResourceSampleInstanceLacks")
    {
        mteresourcesampleinstancelacks = value;
        mteresourcesampleinstancelacks.value_namespace = name_space;
        mteresourcesampleinstancelacks.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteResourceSampleMinimum")
    {
        mteresourcesampleminimum.yfilter = yfilter;
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
    if(value_path == "mteResourceSampleInstanceLacks")
    {
        mteresourcesampleinstancelacks.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteResourceSampleMinimum" || name == "mteResourceSampleInstanceMaximum" || name == "mteResourceSampleInstances" || name == "mteResourceSampleInstancesHigh" || name == "mteResourceSampleInstanceLacks")
        return true;
    return false;
}

DISMANEVENTMIB::MteTrigger::MteTrigger()
    :
    mtetriggerfailures{YType::uint32, "mteTriggerFailures"}
{

    yang_name = "mteTrigger"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTrigger::~MteTrigger()
{
}

bool DISMANEVENTMIB::MteTrigger::has_data() const
{
    if (is_presence_container) return true;
    return mtetriggerfailures.is_set;
}

bool DISMANEVENTMIB::MteTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtetriggerfailures.yfilter);
}

std::string DISMANEVENTMIB::MteTrigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTrigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtetriggerfailures.is_set || is_set(mtetriggerfailures.yfilter)) leaf_name_data.push_back(mtetriggerfailures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteTriggerFailures")
    {
        mtetriggerfailures = value;
        mtetriggerfailures.value_namespace = name_space;
        mtetriggerfailures.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteTriggerFailures")
    {
        mtetriggerfailures.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerFailures")
        return true;
    return false;
}

DISMANEVENTMIB::MteEvent::MteEvent()
    :
    mteeventfailures{YType::uint32, "mteEventFailures"}
{

    yang_name = "mteEvent"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteEvent::~MteEvent()
{
}

bool DISMANEVENTMIB::MteEvent::has_data() const
{
    if (is_presence_container) return true;
    return mteeventfailures.is_set;
}

bool DISMANEVENTMIB::MteEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteeventfailures.yfilter);
}

std::string DISMANEVENTMIB::MteEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEvent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteeventfailures.is_set || is_set(mteeventfailures.yfilter)) leaf_name_data.push_back(mteeventfailures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mteEventFailures")
    {
        mteeventfailures = value;
        mteeventfailures.value_namespace = name_space;
        mteeventfailures.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteEventFailures")
    {
        mteeventfailures.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventFailures")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerTable::MteTriggerTable()
    :
    mtetriggerentry(this, {"mteowner", "mtetriggername"})
{

    yang_name = "mteTriggerTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerTable::~MteTriggerTable()
{
}

bool DISMANEVENTMIB::MteTriggerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mtetriggerentry.len(); index++)
    {
        if(mtetriggerentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteTriggerTable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerentry.len(); index++)
    {
        if(mtetriggerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteTriggerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry>();
        ent_->parent = this;
        mtetriggerentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mtetriggerentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteTriggerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteTriggerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteTriggerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::MteTriggerEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggercomment{YType::str, "mteTriggerComment"},
    mtetriggertest{YType::bits, "mteTriggerTest"},
    mtetriggersampletype{YType::enumeration, "mteTriggerSampleType"},
    mtetriggervalueid{YType::str, "mteTriggerValueID"},
    mtetriggervalueidwildcard{YType::boolean, "mteTriggerValueIDWildcard"},
    mtetriggertargettag{YType::str, "mteTriggerTargetTag"},
    mtetriggercontextname{YType::str, "mteTriggerContextName"},
    mtetriggercontextnamewildcard{YType::boolean, "mteTriggerContextNameWildcard"},
    mtetriggerfrequency{YType::uint32, "mteTriggerFrequency"},
    mtetriggerobjectsowner{YType::str, "mteTriggerObjectsOwner"},
    mtetriggerobjects{YType::str, "mteTriggerObjects"},
    mtetriggerenabled{YType::boolean, "mteTriggerEnabled"},
    mtetriggerentrystatus{YType::enumeration, "mteTriggerEntryStatus"}
{

    yang_name = "mteTriggerEntry"; yang_parent_name = "mteTriggerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::~MteTriggerEntry()
{
}

bool DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggercomment.is_set
	|| mtetriggertest.is_set
	|| mtetriggersampletype.is_set
	|| mtetriggervalueid.is_set
	|| mtetriggervalueidwildcard.is_set
	|| mtetriggertargettag.is_set
	|| mtetriggercontextname.is_set
	|| mtetriggercontextnamewildcard.is_set
	|| mtetriggerfrequency.is_set
	|| mtetriggerobjectsowner.is_set
	|| mtetriggerobjects.is_set
	|| mtetriggerenabled.is_set
	|| mtetriggerentrystatus.is_set;
}

bool DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggercomment.yfilter)
	|| ydk::is_set(mtetriggertest.yfilter)
	|| ydk::is_set(mtetriggersampletype.yfilter)
	|| ydk::is_set(mtetriggervalueid.yfilter)
	|| ydk::is_set(mtetriggervalueidwildcard.yfilter)
	|| ydk::is_set(mtetriggertargettag.yfilter)
	|| ydk::is_set(mtetriggercontextname.yfilter)
	|| ydk::is_set(mtetriggercontextnamewildcard.yfilter)
	|| ydk::is_set(mtetriggerfrequency.yfilter)
	|| ydk::is_set(mtetriggerobjectsowner.yfilter)
	|| ydk::is_set(mtetriggerobjects.yfilter)
	|| ydk::is_set(mtetriggerenabled.yfilter)
	|| ydk::is_set(mtetriggerentrystatus.yfilter);
}

std::string DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mtetriggername, "mteTriggerName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggercomment.is_set || is_set(mtetriggercomment.yfilter)) leaf_name_data.push_back(mtetriggercomment.get_name_leafdata());
    if (mtetriggertest.is_set || is_set(mtetriggertest.yfilter)) leaf_name_data.push_back(mtetriggertest.get_name_leafdata());
    if (mtetriggersampletype.is_set || is_set(mtetriggersampletype.yfilter)) leaf_name_data.push_back(mtetriggersampletype.get_name_leafdata());
    if (mtetriggervalueid.is_set || is_set(mtetriggervalueid.yfilter)) leaf_name_data.push_back(mtetriggervalueid.get_name_leafdata());
    if (mtetriggervalueidwildcard.is_set || is_set(mtetriggervalueidwildcard.yfilter)) leaf_name_data.push_back(mtetriggervalueidwildcard.get_name_leafdata());
    if (mtetriggertargettag.is_set || is_set(mtetriggertargettag.yfilter)) leaf_name_data.push_back(mtetriggertargettag.get_name_leafdata());
    if (mtetriggercontextname.is_set || is_set(mtetriggercontextname.yfilter)) leaf_name_data.push_back(mtetriggercontextname.get_name_leafdata());
    if (mtetriggercontextnamewildcard.is_set || is_set(mtetriggercontextnamewildcard.yfilter)) leaf_name_data.push_back(mtetriggercontextnamewildcard.get_name_leafdata());
    if (mtetriggerfrequency.is_set || is_set(mtetriggerfrequency.yfilter)) leaf_name_data.push_back(mtetriggerfrequency.get_name_leafdata());
    if (mtetriggerobjectsowner.is_set || is_set(mtetriggerobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerobjectsowner.get_name_leafdata());
    if (mtetriggerobjects.is_set || is_set(mtetriggerobjects.yfilter)) leaf_name_data.push_back(mtetriggerobjects.get_name_leafdata());
    if (mtetriggerenabled.is_set || is_set(mtetriggerenabled.yfilter)) leaf_name_data.push_back(mtetriggerenabled.get_name_leafdata());
    if (mtetriggerentrystatus.is_set || is_set(mtetriggerentrystatus.yfilter)) leaf_name_data.push_back(mtetriggerentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteTriggerTest")
    {
        mtetriggertest[value] = true;
    }
    if(value_path == "mteTriggerSampleType")
    {
        mtetriggersampletype = value;
        mtetriggersampletype.value_namespace = name_space;
        mtetriggersampletype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mteTriggerTargetTag")
    {
        mtetriggertargettag = value;
        mtetriggertargettag.value_namespace = name_space;
        mtetriggertargettag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mteTriggerFrequency")
    {
        mtetriggerfrequency = value;
        mtetriggerfrequency.value_namespace = name_space;
        mtetriggerfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerObjectsOwner")
    {
        mtetriggerobjectsowner = value;
        mtetriggerobjectsowner.value_namespace = name_space;
        mtetriggerobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerObjects")
    {
        mtetriggerobjects = value;
        mtetriggerobjects.value_namespace = name_space;
        mtetriggerobjects.value_namespace_prefix = name_space_prefix;
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
}

void DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mteTriggerTest")
    {
        mtetriggertest.yfilter = yfilter;
    }
    if(value_path == "mteTriggerSampleType")
    {
        mtetriggersampletype.yfilter = yfilter;
    }
    if(value_path == "mteTriggerValueID")
    {
        mtetriggervalueid.yfilter = yfilter;
    }
    if(value_path == "mteTriggerValueIDWildcard")
    {
        mtetriggervalueidwildcard.yfilter = yfilter;
    }
    if(value_path == "mteTriggerTargetTag")
    {
        mtetriggertargettag.yfilter = yfilter;
    }
    if(value_path == "mteTriggerContextName")
    {
        mtetriggercontextname.yfilter = yfilter;
    }
    if(value_path == "mteTriggerContextNameWildcard")
    {
        mtetriggercontextnamewildcard.yfilter = yfilter;
    }
    if(value_path == "mteTriggerFrequency")
    {
        mtetriggerfrequency.yfilter = yfilter;
    }
    if(value_path == "mteTriggerObjectsOwner")
    {
        mtetriggerobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerObjects")
    {
        mtetriggerobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerEnabled")
    {
        mtetriggerenabled.yfilter = yfilter;
    }
    if(value_path == "mteTriggerEntryStatus")
    {
        mtetriggerentrystatus.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerComment" || name == "mteTriggerTest" || name == "mteTriggerSampleType" || name == "mteTriggerValueID" || name == "mteTriggerValueIDWildcard" || name == "mteTriggerTargetTag" || name == "mteTriggerContextName" || name == "mteTriggerContextNameWildcard" || name == "mteTriggerFrequency" || name == "mteTriggerObjectsOwner" || name == "mteTriggerObjects" || name == "mteTriggerEnabled" || name == "mteTriggerEntryStatus")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaTable()
    :
    mtetriggerdeltaentry(this, {"mteowner", "mtetriggername"})
{

    yang_name = "mteTriggerDeltaTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerDeltaTable::~MteTriggerDeltaTable()
{
}

bool DISMANEVENTMIB::MteTriggerDeltaTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mtetriggerdeltaentry.len(); index++)
    {
        if(mtetriggerdeltaentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteTriggerDeltaTable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerdeltaentry.len(); index++)
    {
        if(mtetriggerdeltaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteTriggerDeltaTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerDeltaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerDeltaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerDeltaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerDeltaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerDeltaEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry>();
        ent_->parent = this;
        mtetriggerdeltaentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerDeltaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mtetriggerdeltaentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteTriggerDeltaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteTriggerDeltaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteTriggerDeltaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerDeltaEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::MteTriggerDeltaEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerdeltadiscontinuityid{YType::str, "mteTriggerDeltaDiscontinuityID"},
    mtetriggerdeltadiscontinuityidwildcard{YType::boolean, "mteTriggerDeltaDiscontinuityIDWildcard"},
    mtetriggerdeltadiscontinuityidtype{YType::enumeration, "mteTriggerDeltaDiscontinuityIDType"}
{

    yang_name = "mteTriggerDeltaEntry"; yang_parent_name = "mteTriggerDeltaTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::~MteTriggerDeltaEntry()
{
}

bool DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerdeltadiscontinuityid.is_set
	|| mtetriggerdeltadiscontinuityidwildcard.is_set
	|| mtetriggerdeltadiscontinuityidtype.is_set;
}

bool DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerdeltadiscontinuityid.yfilter)
	|| ydk::is_set(mtetriggerdeltadiscontinuityidwildcard.yfilter)
	|| ydk::is_set(mtetriggerdeltadiscontinuityidtype.yfilter);
}

std::string DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerDeltaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerDeltaEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mtetriggername, "mteTriggerName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityid.is_set || is_set(mtetriggerdeltadiscontinuityid.yfilter)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityid.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityidwildcard.is_set || is_set(mtetriggerdeltadiscontinuityidwildcard.yfilter)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityidwildcard.get_name_leafdata());
    if (mtetriggerdeltadiscontinuityidtype.is_set || is_set(mtetriggerdeltadiscontinuityidtype.yfilter)) leaf_name_data.push_back(mtetriggerdeltadiscontinuityidtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteTriggerDeltaDiscontinuityIDWildcard")
    {
        mtetriggerdeltadiscontinuityidwildcard = value;
        mtetriggerdeltadiscontinuityidwildcard.value_namespace = name_space;
        mtetriggerdeltadiscontinuityidwildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDType")
    {
        mtetriggerdeltadiscontinuityidtype = value;
        mtetriggerdeltadiscontinuityidtype.value_namespace = name_space;
        mtetriggerdeltadiscontinuityidtype.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mteTriggerDeltaDiscontinuityIDWildcard")
    {
        mtetriggerdeltadiscontinuityidwildcard.yfilter = yfilter;
    }
    if(value_path == "mteTriggerDeltaDiscontinuityIDType")
    {
        mtetriggerdeltadiscontinuityidtype.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerDeltaDiscontinuityID" || name == "mteTriggerDeltaDiscontinuityIDWildcard" || name == "mteTriggerDeltaDiscontinuityIDType")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceTable()
    :
    mtetriggerexistenceentry(this, {"mteowner", "mtetriggername"})
{

    yang_name = "mteTriggerExistenceTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerExistenceTable::~MteTriggerExistenceTable()
{
}

bool DISMANEVENTMIB::MteTriggerExistenceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mtetriggerexistenceentry.len(); index++)
    {
        if(mtetriggerexistenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteTriggerExistenceTable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerexistenceentry.len(); index++)
    {
        if(mtetriggerexistenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteTriggerExistenceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerExistenceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerExistenceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerExistenceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerExistenceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerExistenceEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry>();
        ent_->parent = this;
        mtetriggerexistenceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerExistenceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mtetriggerexistenceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteTriggerExistenceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteTriggerExistenceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteTriggerExistenceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerExistenceEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::MteTriggerExistenceEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerexistencetest{YType::bits, "mteTriggerExistenceTest"},
    mtetriggerexistencestartup{YType::bits, "mteTriggerExistenceStartup"},
    mtetriggerexistenceobjectsowner{YType::str, "mteTriggerExistenceObjectsOwner"},
    mtetriggerexistenceobjects{YType::str, "mteTriggerExistenceObjects"},
    mtetriggerexistenceeventowner{YType::str, "mteTriggerExistenceEventOwner"},
    mtetriggerexistenceevent{YType::str, "mteTriggerExistenceEvent"}
{

    yang_name = "mteTriggerExistenceEntry"; yang_parent_name = "mteTriggerExistenceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::~MteTriggerExistenceEntry()
{
}

bool DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerexistencetest.is_set
	|| mtetriggerexistencestartup.is_set
	|| mtetriggerexistenceobjectsowner.is_set
	|| mtetriggerexistenceobjects.is_set
	|| mtetriggerexistenceeventowner.is_set
	|| mtetriggerexistenceevent.is_set;
}

bool DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerexistencetest.yfilter)
	|| ydk::is_set(mtetriggerexistencestartup.yfilter)
	|| ydk::is_set(mtetriggerexistenceobjectsowner.yfilter)
	|| ydk::is_set(mtetriggerexistenceobjects.yfilter)
	|| ydk::is_set(mtetriggerexistenceeventowner.yfilter)
	|| ydk::is_set(mtetriggerexistenceevent.yfilter);
}

std::string DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerExistenceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerExistenceEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mtetriggername, "mteTriggerName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerexistencetest.is_set || is_set(mtetriggerexistencetest.yfilter)) leaf_name_data.push_back(mtetriggerexistencetest.get_name_leafdata());
    if (mtetriggerexistencestartup.is_set || is_set(mtetriggerexistencestartup.yfilter)) leaf_name_data.push_back(mtetriggerexistencestartup.get_name_leafdata());
    if (mtetriggerexistenceobjectsowner.is_set || is_set(mtetriggerexistenceobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerexistenceobjectsowner.get_name_leafdata());
    if (mtetriggerexistenceobjects.is_set || is_set(mtetriggerexistenceobjects.yfilter)) leaf_name_data.push_back(mtetriggerexistenceobjects.get_name_leafdata());
    if (mtetriggerexistenceeventowner.is_set || is_set(mtetriggerexistenceeventowner.yfilter)) leaf_name_data.push_back(mtetriggerexistenceeventowner.get_name_leafdata());
    if (mtetriggerexistenceevent.is_set || is_set(mtetriggerexistenceevent.yfilter)) leaf_name_data.push_back(mtetriggerexistenceevent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteTriggerExistenceTest")
    {
        mtetriggerexistencetest[value] = true;
    }
    if(value_path == "mteTriggerExistenceStartup")
    {
        mtetriggerexistencestartup[value] = true;
    }
    if(value_path == "mteTriggerExistenceObjectsOwner")
    {
        mtetriggerexistenceobjectsowner = value;
        mtetriggerexistenceobjectsowner.value_namespace = name_space;
        mtetriggerexistenceobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerExistenceObjects")
    {
        mtetriggerexistenceobjects = value;
        mtetriggerexistenceobjects.value_namespace = name_space;
        mtetriggerexistenceobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerExistenceEventOwner")
    {
        mtetriggerexistenceeventowner = value;
        mtetriggerexistenceeventowner.value_namespace = name_space;
        mtetriggerexistenceeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerExistenceEvent")
    {
        mtetriggerexistenceevent = value;
        mtetriggerexistenceevent.value_namespace = name_space;
        mtetriggerexistenceevent.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceTest")
    {
        mtetriggerexistencetest.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceStartup")
    {
        mtetriggerexistencestartup.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceObjectsOwner")
    {
        mtetriggerexistenceobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceObjects")
    {
        mtetriggerexistenceobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceEventOwner")
    {
        mtetriggerexistenceeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerExistenceEvent")
    {
        mtetriggerexistenceevent.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteTriggerExistenceTable::MteTriggerExistenceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerExistenceTest" || name == "mteTriggerExistenceStartup" || name == "mteTriggerExistenceObjectsOwner" || name == "mteTriggerExistenceObjects" || name == "mteTriggerExistenceEventOwner" || name == "mteTriggerExistenceEvent")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanTable()
    :
    mtetriggerbooleanentry(this, {"mteowner", "mtetriggername"})
{

    yang_name = "mteTriggerBooleanTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerBooleanTable::~MteTriggerBooleanTable()
{
}

bool DISMANEVENTMIB::MteTriggerBooleanTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mtetriggerbooleanentry.len(); index++)
    {
        if(mtetriggerbooleanentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteTriggerBooleanTable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerbooleanentry.len(); index++)
    {
        if(mtetriggerbooleanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteTriggerBooleanTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerBooleanTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerBooleanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerBooleanTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerBooleanTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerBooleanEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry>();
        ent_->parent = this;
        mtetriggerbooleanentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerBooleanTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mtetriggerbooleanentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteTriggerBooleanTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteTriggerBooleanTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteTriggerBooleanTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerBooleanEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerbooleancomparison{YType::enumeration, "mteTriggerBooleanComparison"},
    mtetriggerbooleanvalue{YType::int32, "mteTriggerBooleanValue"},
    mtetriggerbooleanstartup{YType::boolean, "mteTriggerBooleanStartup"},
    mtetriggerbooleanobjectsowner{YType::str, "mteTriggerBooleanObjectsOwner"},
    mtetriggerbooleanobjects{YType::str, "mteTriggerBooleanObjects"},
    mtetriggerbooleaneventowner{YType::str, "mteTriggerBooleanEventOwner"},
    mtetriggerbooleanevent{YType::str, "mteTriggerBooleanEvent"}
{

    yang_name = "mteTriggerBooleanEntry"; yang_parent_name = "mteTriggerBooleanTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::~MteTriggerBooleanEntry()
{
}

bool DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerbooleancomparison.is_set
	|| mtetriggerbooleanvalue.is_set
	|| mtetriggerbooleanstartup.is_set
	|| mtetriggerbooleanobjectsowner.is_set
	|| mtetriggerbooleanobjects.is_set
	|| mtetriggerbooleaneventowner.is_set
	|| mtetriggerbooleanevent.is_set;
}

bool DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerbooleancomparison.yfilter)
	|| ydk::is_set(mtetriggerbooleanvalue.yfilter)
	|| ydk::is_set(mtetriggerbooleanstartup.yfilter)
	|| ydk::is_set(mtetriggerbooleanobjectsowner.yfilter)
	|| ydk::is_set(mtetriggerbooleanobjects.yfilter)
	|| ydk::is_set(mtetriggerbooleaneventowner.yfilter)
	|| ydk::is_set(mtetriggerbooleanevent.yfilter);
}

std::string DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerBooleanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerBooleanEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mtetriggername, "mteTriggerName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerbooleancomparison.is_set || is_set(mtetriggerbooleancomparison.yfilter)) leaf_name_data.push_back(mtetriggerbooleancomparison.get_name_leafdata());
    if (mtetriggerbooleanvalue.is_set || is_set(mtetriggerbooleanvalue.yfilter)) leaf_name_data.push_back(mtetriggerbooleanvalue.get_name_leafdata());
    if (mtetriggerbooleanstartup.is_set || is_set(mtetriggerbooleanstartup.yfilter)) leaf_name_data.push_back(mtetriggerbooleanstartup.get_name_leafdata());
    if (mtetriggerbooleanobjectsowner.is_set || is_set(mtetriggerbooleanobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerbooleanobjectsowner.get_name_leafdata());
    if (mtetriggerbooleanobjects.is_set || is_set(mtetriggerbooleanobjects.yfilter)) leaf_name_data.push_back(mtetriggerbooleanobjects.get_name_leafdata());
    if (mtetriggerbooleaneventowner.is_set || is_set(mtetriggerbooleaneventowner.yfilter)) leaf_name_data.push_back(mtetriggerbooleaneventowner.get_name_leafdata());
    if (mtetriggerbooleanevent.is_set || is_set(mtetriggerbooleanevent.yfilter)) leaf_name_data.push_back(mtetriggerbooleanevent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteTriggerBooleanValue")
    {
        mtetriggerbooleanvalue = value;
        mtetriggerbooleanvalue.value_namespace = name_space;
        mtetriggerbooleanvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanStartup")
    {
        mtetriggerbooleanstartup = value;
        mtetriggerbooleanstartup.value_namespace = name_space;
        mtetriggerbooleanstartup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanObjectsOwner")
    {
        mtetriggerbooleanobjectsowner = value;
        mtetriggerbooleanobjectsowner.value_namespace = name_space;
        mtetriggerbooleanobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanObjects")
    {
        mtetriggerbooleanobjects = value;
        mtetriggerbooleanobjects.value_namespace = name_space;
        mtetriggerbooleanobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanEventOwner")
    {
        mtetriggerbooleaneventowner = value;
        mtetriggerbooleaneventowner.value_namespace = name_space;
        mtetriggerbooleaneventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerBooleanEvent")
    {
        mtetriggerbooleanevent = value;
        mtetriggerbooleanevent.value_namespace = name_space;
        mtetriggerbooleanevent.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mteTriggerBooleanValue")
    {
        mtetriggerbooleanvalue.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanStartup")
    {
        mtetriggerbooleanstartup.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanObjectsOwner")
    {
        mtetriggerbooleanobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanObjects")
    {
        mtetriggerbooleanobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanEventOwner")
    {
        mtetriggerbooleaneventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerBooleanEvent")
    {
        mtetriggerbooleanevent.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerBooleanComparison" || name == "mteTriggerBooleanValue" || name == "mteTriggerBooleanStartup" || name == "mteTriggerBooleanObjectsOwner" || name == "mteTriggerBooleanObjects" || name == "mteTriggerBooleanEventOwner" || name == "mteTriggerBooleanEvent")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdTable()
    :
    mtetriggerthresholdentry(this, {"mteowner", "mtetriggername"})
{

    yang_name = "mteTriggerThresholdTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerThresholdTable::~MteTriggerThresholdTable()
{
}

bool DISMANEVENTMIB::MteTriggerThresholdTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mtetriggerthresholdentry.len(); index++)
    {
        if(mtetriggerthresholdentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteTriggerThresholdTable::has_operation() const
{
    for (std::size_t index=0; index<mtetriggerthresholdentry.len(); index++)
    {
        if(mtetriggerthresholdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteTriggerThresholdTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerThresholdTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerThresholdTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerThresholdTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerThresholdTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteTriggerThresholdEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry>();
        ent_->parent = this;
        mtetriggerthresholdentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerThresholdTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mtetriggerthresholdentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteTriggerThresholdTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteTriggerThresholdTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteTriggerThresholdTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteTriggerThresholdEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::MteTriggerThresholdEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mtetriggername{YType::str, "mteTriggerName"},
    mtetriggerthresholdstartup{YType::enumeration, "mteTriggerThresholdStartup"},
    mtetriggerthresholdrising{YType::int32, "mteTriggerThresholdRising"},
    mtetriggerthresholdfalling{YType::int32, "mteTriggerThresholdFalling"},
    mtetriggerthresholddeltarising{YType::int32, "mteTriggerThresholdDeltaRising"},
    mtetriggerthresholddeltafalling{YType::int32, "mteTriggerThresholdDeltaFalling"},
    mtetriggerthresholdobjectsowner{YType::str, "mteTriggerThresholdObjectsOwner"},
    mtetriggerthresholdobjects{YType::str, "mteTriggerThresholdObjects"},
    mtetriggerthresholdrisingeventowner{YType::str, "mteTriggerThresholdRisingEventOwner"},
    mtetriggerthresholdrisingevent{YType::str, "mteTriggerThresholdRisingEvent"},
    mtetriggerthresholdfallingeventowner{YType::str, "mteTriggerThresholdFallingEventOwner"},
    mtetriggerthresholdfallingevent{YType::str, "mteTriggerThresholdFallingEvent"},
    mtetriggerthresholddeltarisingeventowner{YType::str, "mteTriggerThresholdDeltaRisingEventOwner"},
    mtetriggerthresholddeltarisingevent{YType::str, "mteTriggerThresholdDeltaRisingEvent"},
    mtetriggerthresholddeltafallingeventowner{YType::str, "mteTriggerThresholdDeltaFallingEventOwner"},
    mtetriggerthresholddeltafallingevent{YType::str, "mteTriggerThresholdDeltaFallingEvent"}
{

    yang_name = "mteTriggerThresholdEntry"; yang_parent_name = "mteTriggerThresholdTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::~MteTriggerThresholdEntry()
{
}

bool DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mtetriggername.is_set
	|| mtetriggerthresholdstartup.is_set
	|| mtetriggerthresholdrising.is_set
	|| mtetriggerthresholdfalling.is_set
	|| mtetriggerthresholddeltarising.is_set
	|| mtetriggerthresholddeltafalling.is_set
	|| mtetriggerthresholdobjectsowner.is_set
	|| mtetriggerthresholdobjects.is_set
	|| mtetriggerthresholdrisingeventowner.is_set
	|| mtetriggerthresholdrisingevent.is_set
	|| mtetriggerthresholdfallingeventowner.is_set
	|| mtetriggerthresholdfallingevent.is_set
	|| mtetriggerthresholddeltarisingeventowner.is_set
	|| mtetriggerthresholddeltarisingevent.is_set
	|| mtetriggerthresholddeltafallingeventowner.is_set
	|| mtetriggerthresholddeltafallingevent.is_set;
}

bool DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mtetriggername.yfilter)
	|| ydk::is_set(mtetriggerthresholdstartup.yfilter)
	|| ydk::is_set(mtetriggerthresholdrising.yfilter)
	|| ydk::is_set(mtetriggerthresholdfalling.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltarising.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltafalling.yfilter)
	|| ydk::is_set(mtetriggerthresholdobjectsowner.yfilter)
	|| ydk::is_set(mtetriggerthresholdobjects.yfilter)
	|| ydk::is_set(mtetriggerthresholdrisingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholdrisingevent.yfilter)
	|| ydk::is_set(mtetriggerthresholdfallingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholdfallingevent.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltarisingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltarisingevent.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltafallingeventowner.yfilter)
	|| ydk::is_set(mtetriggerthresholddeltafallingevent.yfilter);
}

std::string DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteTriggerThresholdTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteTriggerThresholdEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mtetriggername, "mteTriggerName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mtetriggername.is_set || is_set(mtetriggername.yfilter)) leaf_name_data.push_back(mtetriggername.get_name_leafdata());
    if (mtetriggerthresholdstartup.is_set || is_set(mtetriggerthresholdstartup.yfilter)) leaf_name_data.push_back(mtetriggerthresholdstartup.get_name_leafdata());
    if (mtetriggerthresholdrising.is_set || is_set(mtetriggerthresholdrising.yfilter)) leaf_name_data.push_back(mtetriggerthresholdrising.get_name_leafdata());
    if (mtetriggerthresholdfalling.is_set || is_set(mtetriggerthresholdfalling.yfilter)) leaf_name_data.push_back(mtetriggerthresholdfalling.get_name_leafdata());
    if (mtetriggerthresholddeltarising.is_set || is_set(mtetriggerthresholddeltarising.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltarising.get_name_leafdata());
    if (mtetriggerthresholddeltafalling.is_set || is_set(mtetriggerthresholddeltafalling.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltafalling.get_name_leafdata());
    if (mtetriggerthresholdobjectsowner.is_set || is_set(mtetriggerthresholdobjectsowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholdobjectsowner.get_name_leafdata());
    if (mtetriggerthresholdobjects.is_set || is_set(mtetriggerthresholdobjects.yfilter)) leaf_name_data.push_back(mtetriggerthresholdobjects.get_name_leafdata());
    if (mtetriggerthresholdrisingeventowner.is_set || is_set(mtetriggerthresholdrisingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholdrisingeventowner.get_name_leafdata());
    if (mtetriggerthresholdrisingevent.is_set || is_set(mtetriggerthresholdrisingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholdrisingevent.get_name_leafdata());
    if (mtetriggerthresholdfallingeventowner.is_set || is_set(mtetriggerthresholdfallingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholdfallingeventowner.get_name_leafdata());
    if (mtetriggerthresholdfallingevent.is_set || is_set(mtetriggerthresholdfallingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholdfallingevent.get_name_leafdata());
    if (mtetriggerthresholddeltarisingeventowner.is_set || is_set(mtetriggerthresholddeltarisingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltarisingeventowner.get_name_leafdata());
    if (mtetriggerthresholddeltarisingevent.is_set || is_set(mtetriggerthresholddeltarisingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltarisingevent.get_name_leafdata());
    if (mtetriggerthresholddeltafallingeventowner.is_set || is_set(mtetriggerthresholddeltafallingeventowner.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltafallingeventowner.get_name_leafdata());
    if (mtetriggerthresholddeltafallingevent.is_set || is_set(mtetriggerthresholddeltafallingevent.yfilter)) leaf_name_data.push_back(mtetriggerthresholddeltafallingevent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteTriggerThresholdStartup")
    {
        mtetriggerthresholdstartup = value;
        mtetriggerthresholdstartup.value_namespace = name_space;
        mtetriggerthresholdstartup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdRising")
    {
        mtetriggerthresholdrising = value;
        mtetriggerthresholdrising.value_namespace = name_space;
        mtetriggerthresholdrising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdFalling")
    {
        mtetriggerthresholdfalling = value;
        mtetriggerthresholdfalling.value_namespace = name_space;
        mtetriggerthresholdfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaRising")
    {
        mtetriggerthresholddeltarising = value;
        mtetriggerthresholddeltarising.value_namespace = name_space;
        mtetriggerthresholddeltarising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaFalling")
    {
        mtetriggerthresholddeltafalling = value;
        mtetriggerthresholddeltafalling.value_namespace = name_space;
        mtetriggerthresholddeltafalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdObjectsOwner")
    {
        mtetriggerthresholdobjectsowner = value;
        mtetriggerthresholdobjectsowner.value_namespace = name_space;
        mtetriggerthresholdobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdObjects")
    {
        mtetriggerthresholdobjects = value;
        mtetriggerthresholdobjects.value_namespace = name_space;
        mtetriggerthresholdobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdRisingEventOwner")
    {
        mtetriggerthresholdrisingeventowner = value;
        mtetriggerthresholdrisingeventowner.value_namespace = name_space;
        mtetriggerthresholdrisingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdRisingEvent")
    {
        mtetriggerthresholdrisingevent = value;
        mtetriggerthresholdrisingevent.value_namespace = name_space;
        mtetriggerthresholdrisingevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdFallingEventOwner")
    {
        mtetriggerthresholdfallingeventowner = value;
        mtetriggerthresholdfallingeventowner.value_namespace = name_space;
        mtetriggerthresholdfallingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdFallingEvent")
    {
        mtetriggerthresholdfallingevent = value;
        mtetriggerthresholdfallingevent.value_namespace = name_space;
        mtetriggerthresholdfallingevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEventOwner")
    {
        mtetriggerthresholddeltarisingeventowner = value;
        mtetriggerthresholddeltarisingeventowner.value_namespace = name_space;
        mtetriggerthresholddeltarisingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEvent")
    {
        mtetriggerthresholddeltarisingevent = value;
        mtetriggerthresholddeltarisingevent.value_namespace = name_space;
        mtetriggerthresholddeltarisingevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEventOwner")
    {
        mtetriggerthresholddeltafallingeventowner = value;
        mtetriggerthresholddeltafallingeventowner.value_namespace = name_space;
        mtetriggerthresholddeltafallingeventowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEvent")
    {
        mtetriggerthresholddeltafallingevent = value;
        mtetriggerthresholddeltafallingevent.value_namespace = name_space;
        mtetriggerthresholddeltafallingevent.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerName")
    {
        mtetriggername.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdStartup")
    {
        mtetriggerthresholdstartup.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdRising")
    {
        mtetriggerthresholdrising.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdFalling")
    {
        mtetriggerthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaRising")
    {
        mtetriggerthresholddeltarising.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaFalling")
    {
        mtetriggerthresholddeltafalling.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdObjectsOwner")
    {
        mtetriggerthresholdobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdObjects")
    {
        mtetriggerthresholdobjects.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdRisingEventOwner")
    {
        mtetriggerthresholdrisingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdRisingEvent")
    {
        mtetriggerthresholdrisingevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdFallingEventOwner")
    {
        mtetriggerthresholdfallingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdFallingEvent")
    {
        mtetriggerthresholdfallingevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEventOwner")
    {
        mtetriggerthresholddeltarisingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaRisingEvent")
    {
        mtetriggerthresholddeltarisingevent.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEventOwner")
    {
        mtetriggerthresholddeltafallingeventowner.yfilter = yfilter;
    }
    if(value_path == "mteTriggerThresholdDeltaFallingEvent")
    {
        mtetriggerthresholddeltafallingevent.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteTriggerName" || name == "mteTriggerThresholdStartup" || name == "mteTriggerThresholdRising" || name == "mteTriggerThresholdFalling" || name == "mteTriggerThresholdDeltaRising" || name == "mteTriggerThresholdDeltaFalling" || name == "mteTriggerThresholdObjectsOwner" || name == "mteTriggerThresholdObjects" || name == "mteTriggerThresholdRisingEventOwner" || name == "mteTriggerThresholdRisingEvent" || name == "mteTriggerThresholdFallingEventOwner" || name == "mteTriggerThresholdFallingEvent" || name == "mteTriggerThresholdDeltaRisingEventOwner" || name == "mteTriggerThresholdDeltaRisingEvent" || name == "mteTriggerThresholdDeltaFallingEventOwner" || name == "mteTriggerThresholdDeltaFallingEvent")
        return true;
    return false;
}

DISMANEVENTMIB::MteObjectsTable::MteObjectsTable()
    :
    mteobjectsentry(this, {"mteowner", "mteobjectsname", "mteobjectsindex"})
{

    yang_name = "mteObjectsTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteObjectsTable::~MteObjectsTable()
{
}

bool DISMANEVENTMIB::MteObjectsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mteobjectsentry.len(); index++)
    {
        if(mteobjectsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteObjectsTable::has_operation() const
{
    for (std::size_t index=0; index<mteobjectsentry.len(); index++)
    {
        if(mteobjectsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteObjectsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteObjectsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteObjectsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteObjectsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteObjectsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteObjectsEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry>();
        ent_->parent = this;
        mteobjectsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteObjectsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mteobjectsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteObjectsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteObjectsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteObjectsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteObjectsEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::MteObjectsEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mteobjectsname{YType::str, "mteObjectsName"},
    mteobjectsindex{YType::uint32, "mteObjectsIndex"},
    mteobjectsid{YType::str, "mteObjectsID"},
    mteobjectsidwildcard{YType::boolean, "mteObjectsIDWildcard"},
    mteobjectsentrystatus{YType::enumeration, "mteObjectsEntryStatus"}
{

    yang_name = "mteObjectsEntry"; yang_parent_name = "mteObjectsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::~MteObjectsEntry()
{
}

bool DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mteobjectsname.is_set
	|| mteobjectsindex.is_set
	|| mteobjectsid.is_set
	|| mteobjectsidwildcard.is_set
	|| mteobjectsentrystatus.is_set;
}

bool DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteobjectsname.yfilter)
	|| ydk::is_set(mteobjectsindex.yfilter)
	|| ydk::is_set(mteobjectsid.yfilter)
	|| ydk::is_set(mteobjectsidwildcard.yfilter)
	|| ydk::is_set(mteobjectsentrystatus.yfilter);
}

std::string DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteObjectsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteObjectsEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mteobjectsname, "mteObjectsName");
    ADD_KEY_TOKEN(mteobjectsindex, "mteObjectsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteobjectsname.is_set || is_set(mteobjectsname.yfilter)) leaf_name_data.push_back(mteobjectsname.get_name_leafdata());
    if (mteobjectsindex.is_set || is_set(mteobjectsindex.yfilter)) leaf_name_data.push_back(mteobjectsindex.get_name_leafdata());
    if (mteobjectsid.is_set || is_set(mteobjectsid.yfilter)) leaf_name_data.push_back(mteobjectsid.get_name_leafdata());
    if (mteobjectsidwildcard.is_set || is_set(mteobjectsidwildcard.yfilter)) leaf_name_data.push_back(mteobjectsidwildcard.get_name_leafdata());
    if (mteobjectsentrystatus.is_set || is_set(mteobjectsentrystatus.yfilter)) leaf_name_data.push_back(mteobjectsentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteObjectsEntryStatus")
    {
        mteobjectsentrystatus = value;
        mteobjectsentrystatus.value_namespace = name_space;
        mteobjectsentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mteObjectsID")
    {
        mteobjectsid.yfilter = yfilter;
    }
    if(value_path == "mteObjectsIDWildcard")
    {
        mteobjectsidwildcard.yfilter = yfilter;
    }
    if(value_path == "mteObjectsEntryStatus")
    {
        mteobjectsentrystatus.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteObjectsTable::MteObjectsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteObjectsName" || name == "mteObjectsIndex" || name == "mteObjectsID" || name == "mteObjectsIDWildcard" || name == "mteObjectsEntryStatus")
        return true;
    return false;
}

DISMANEVENTMIB::MteEventTable::MteEventTable()
    :
    mteevententry(this, {"mteowner", "mteeventname"})
{

    yang_name = "mteEventTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteEventTable::~MteEventTable()
{
}

bool DISMANEVENTMIB::MteEventTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mteevententry.len(); index++)
    {
        if(mteevententry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteEventTable::has_operation() const
{
    for (std::size_t index=0; index<mteevententry.len(); index++)
    {
        if(mteevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteEventTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteEventTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteEventTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteEventTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteEventEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteEventTable::MteEventEntry>();
        ent_->parent = this;
        mteevententry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteEventTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mteevententry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteEventTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteEventTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteEventTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteEventTable::MteEventEntry::MteEventEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mteeventname{YType::str, "mteEventName"},
    mteeventcomment{YType::str, "mteEventComment"},
    mteeventactions{YType::bits, "mteEventActions"},
    mteeventenabled{YType::boolean, "mteEventEnabled"},
    mteevententrystatus{YType::enumeration, "mteEventEntryStatus"}
{

    yang_name = "mteEventEntry"; yang_parent_name = "mteEventTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteEventTable::MteEventEntry::~MteEventEntry()
{
}

bool DISMANEVENTMIB::MteEventTable::MteEventEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mteeventname.is_set
	|| mteeventcomment.is_set
	|| mteeventactions.is_set
	|| mteeventenabled.is_set
	|| mteevententrystatus.is_set;
}

bool DISMANEVENTMIB::MteEventTable::MteEventEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteeventname.yfilter)
	|| ydk::is_set(mteeventcomment.yfilter)
	|| ydk::is_set(mteeventactions.yfilter)
	|| ydk::is_set(mteeventenabled.yfilter)
	|| ydk::is_set(mteevententrystatus.yfilter);
}

std::string DISMANEVENTMIB::MteEventTable::MteEventEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteEventTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteEventTable::MteEventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mteeventname, "mteEventName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteEventTable::MteEventEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.yfilter)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventcomment.is_set || is_set(mteeventcomment.yfilter)) leaf_name_data.push_back(mteeventcomment.get_name_leafdata());
    if (mteeventactions.is_set || is_set(mteeventactions.yfilter)) leaf_name_data.push_back(mteeventactions.get_name_leafdata());
    if (mteeventenabled.is_set || is_set(mteeventenabled.yfilter)) leaf_name_data.push_back(mteeventenabled.get_name_leafdata());
    if (mteevententrystatus.is_set || is_set(mteevententrystatus.yfilter)) leaf_name_data.push_back(mteevententrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteEventTable::MteEventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteEventTable::MteEventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteEventTable::MteEventEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteEventComment")
    {
        mteeventcomment = value;
        mteeventcomment.value_namespace = name_space;
        mteeventcomment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventActions")
    {
        mteeventactions[value] = true;
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

void DISMANEVENTMIB::MteEventTable::MteEventEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteEventName")
    {
        mteeventname.yfilter = yfilter;
    }
    if(value_path == "mteEventComment")
    {
        mteeventcomment.yfilter = yfilter;
    }
    if(value_path == "mteEventActions")
    {
        mteeventactions.yfilter = yfilter;
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

bool DISMANEVENTMIB::MteEventTable::MteEventEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteEventName" || name == "mteEventComment" || name == "mteEventActions" || name == "mteEventEnabled" || name == "mteEventEntryStatus")
        return true;
    return false;
}

DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationTable()
    :
    mteeventnotificationentry(this, {"mteowner", "mteeventname"})
{

    yang_name = "mteEventNotificationTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteEventNotificationTable::~MteEventNotificationTable()
{
}

bool DISMANEVENTMIB::MteEventNotificationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mteeventnotificationentry.len(); index++)
    {
        if(mteeventnotificationentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteEventNotificationTable::has_operation() const
{
    for (std::size_t index=0; index<mteeventnotificationentry.len(); index++)
    {
        if(mteeventnotificationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteEventNotificationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteEventNotificationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventNotificationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteEventNotificationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteEventNotificationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteEventNotificationEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry>();
        ent_->parent = this;
        mteeventnotificationentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteEventNotificationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mteeventnotificationentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteEventNotificationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteEventNotificationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteEventNotificationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventNotificationEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::MteEventNotificationEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mteeventname{YType::str, "mteEventName"},
    mteeventnotification{YType::str, "mteEventNotification"},
    mteeventnotificationobjectsowner{YType::str, "mteEventNotificationObjectsOwner"},
    mteeventnotificationobjects{YType::str, "mteEventNotificationObjects"}
{

    yang_name = "mteEventNotificationEntry"; yang_parent_name = "mteEventNotificationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::~MteEventNotificationEntry()
{
}

bool DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mteeventname.is_set
	|| mteeventnotification.is_set
	|| mteeventnotificationobjectsowner.is_set
	|| mteeventnotificationobjects.is_set;
}

bool DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteeventname.yfilter)
	|| ydk::is_set(mteeventnotification.yfilter)
	|| ydk::is_set(mteeventnotificationobjectsowner.yfilter)
	|| ydk::is_set(mteeventnotificationobjects.yfilter);
}

std::string DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteEventNotificationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventNotificationEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mteeventname, "mteEventName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.yfilter)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventnotification.is_set || is_set(mteeventnotification.yfilter)) leaf_name_data.push_back(mteeventnotification.get_name_leafdata());
    if (mteeventnotificationobjectsowner.is_set || is_set(mteeventnotificationobjectsowner.yfilter)) leaf_name_data.push_back(mteeventnotificationobjectsowner.get_name_leafdata());
    if (mteeventnotificationobjects.is_set || is_set(mteeventnotificationobjects.yfilter)) leaf_name_data.push_back(mteeventnotificationobjects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteEventNotificationObjectsOwner")
    {
        mteeventnotificationobjectsowner = value;
        mteeventnotificationobjectsowner.value_namespace = name_space;
        mteeventnotificationobjectsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventNotificationObjects")
    {
        mteeventnotificationobjects = value;
        mteeventnotificationobjects.value_namespace = name_space;
        mteeventnotificationobjects.value_namespace_prefix = name_space_prefix;
    }
}

void DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mteEventNotificationObjectsOwner")
    {
        mteeventnotificationobjectsowner.yfilter = yfilter;
    }
    if(value_path == "mteEventNotificationObjects")
    {
        mteeventnotificationobjects.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteEventNotificationTable::MteEventNotificationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteEventName" || name == "mteEventNotification" || name == "mteEventNotificationObjectsOwner" || name == "mteEventNotificationObjects")
        return true;
    return false;
}

DISMANEVENTMIB::MteEventSetTable::MteEventSetTable()
    :
    mteeventsetentry(this, {"mteowner", "mteeventname"})
{

    yang_name = "mteEventSetTable"; yang_parent_name = "DISMAN-EVENT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteEventSetTable::~MteEventSetTable()
{
}

bool DISMANEVENTMIB::MteEventSetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mteeventsetentry.len(); index++)
    {
        if(mteeventsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool DISMANEVENTMIB::MteEventSetTable::has_operation() const
{
    for (std::size_t index=0; index<mteeventsetentry.len(); index++)
    {
        if(mteeventsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DISMANEVENTMIB::MteEventSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteEventSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteEventSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteEventSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mteEventSetEntry")
    {
        auto ent_ = std::make_shared<DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry>();
        ent_->parent = this;
        mteeventsetentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteEventSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mteeventsetentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DISMANEVENTMIB::MteEventSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DISMANEVENTMIB::MteEventSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DISMANEVENTMIB::MteEventSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteEventSetEntry")
        return true;
    return false;
}

DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::MteEventSetEntry()
    :
    mteowner{YType::str, "mteOwner"},
    mteeventname{YType::str, "mteEventName"},
    mteeventsetobject{YType::str, "mteEventSetObject"},
    mteeventsetobjectwildcard{YType::boolean, "mteEventSetObjectWildcard"},
    mteeventsetvalue{YType::int32, "mteEventSetValue"},
    mteeventsettargettag{YType::str, "mteEventSetTargetTag"},
    mteeventsetcontextname{YType::str, "mteEventSetContextName"},
    mteeventsetcontextnamewildcard{YType::boolean, "mteEventSetContextNameWildcard"}
{

    yang_name = "mteEventSetEntry"; yang_parent_name = "mteEventSetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::~MteEventSetEntry()
{
}

bool DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::has_data() const
{
    if (is_presence_container) return true;
    return mteowner.is_set
	|| mteeventname.is_set
	|| mteeventsetobject.is_set
	|| mteeventsetobjectwildcard.is_set
	|| mteeventsetvalue.is_set
	|| mteeventsettargettag.is_set
	|| mteeventsetcontextname.is_set
	|| mteeventsetcontextnamewildcard.is_set;
}

bool DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mteowner.yfilter)
	|| ydk::is_set(mteeventname.yfilter)
	|| ydk::is_set(mteeventsetobject.yfilter)
	|| ydk::is_set(mteeventsetobjectwildcard.yfilter)
	|| ydk::is_set(mteeventsetvalue.yfilter)
	|| ydk::is_set(mteeventsettargettag.yfilter)
	|| ydk::is_set(mteeventsetcontextname.yfilter)
	|| ydk::is_set(mteeventsetcontextnamewildcard.yfilter);
}

std::string DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DISMAN-EVENT-MIB:DISMAN-EVENT-MIB/mteEventSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mteEventSetEntry";
    ADD_KEY_TOKEN(mteowner, "mteOwner");
    ADD_KEY_TOKEN(mteeventname, "mteEventName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mteowner.is_set || is_set(mteowner.yfilter)) leaf_name_data.push_back(mteowner.get_name_leafdata());
    if (mteeventname.is_set || is_set(mteeventname.yfilter)) leaf_name_data.push_back(mteeventname.get_name_leafdata());
    if (mteeventsetobject.is_set || is_set(mteeventsetobject.yfilter)) leaf_name_data.push_back(mteeventsetobject.get_name_leafdata());
    if (mteeventsetobjectwildcard.is_set || is_set(mteeventsetobjectwildcard.yfilter)) leaf_name_data.push_back(mteeventsetobjectwildcard.get_name_leafdata());
    if (mteeventsetvalue.is_set || is_set(mteeventsetvalue.yfilter)) leaf_name_data.push_back(mteeventsetvalue.get_name_leafdata());
    if (mteeventsettargettag.is_set || is_set(mteeventsettargettag.yfilter)) leaf_name_data.push_back(mteeventsettargettag.get_name_leafdata());
    if (mteeventsetcontextname.is_set || is_set(mteeventsetcontextname.yfilter)) leaf_name_data.push_back(mteeventsetcontextname.get_name_leafdata());
    if (mteeventsetcontextnamewildcard.is_set || is_set(mteeventsetcontextnamewildcard.yfilter)) leaf_name_data.push_back(mteeventsetcontextnamewildcard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mteEventSetValue")
    {
        mteeventsetvalue = value;
        mteeventsetvalue.value_namespace = name_space;
        mteeventsetvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mteEventSetTargetTag")
    {
        mteeventsettargettag = value;
        mteeventsettargettag.value_namespace = name_space;
        mteeventsettargettag.value_namespace_prefix = name_space_prefix;
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
}

void DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mteOwner")
    {
        mteowner.yfilter = yfilter;
    }
    if(value_path == "mteEventName")
    {
        mteeventname.yfilter = yfilter;
    }
    if(value_path == "mteEventSetObject")
    {
        mteeventsetobject.yfilter = yfilter;
    }
    if(value_path == "mteEventSetObjectWildcard")
    {
        mteeventsetobjectwildcard.yfilter = yfilter;
    }
    if(value_path == "mteEventSetValue")
    {
        mteeventsetvalue.yfilter = yfilter;
    }
    if(value_path == "mteEventSetTargetTag")
    {
        mteeventsettargettag.yfilter = yfilter;
    }
    if(value_path == "mteEventSetContextName")
    {
        mteeventsetcontextname.yfilter = yfilter;
    }
    if(value_path == "mteEventSetContextNameWildcard")
    {
        mteeventsetcontextnamewildcard.yfilter = yfilter;
    }
}

bool DISMANEVENTMIB::MteEventSetTable::MteEventSetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mteOwner" || name == "mteEventName" || name == "mteEventSetObject" || name == "mteEventSetObjectWildcard" || name == "mteEventSetValue" || name == "mteEventSetTargetTag" || name == "mteEventSetContextName" || name == "mteEventSetContextNameWildcard")
        return true;
    return false;
}

const Enum::YLeaf FailureReason::sampleOverrun {-6, "sampleOverrun"};
const Enum::YLeaf FailureReason::badType {-5, "badType"};
const Enum::YLeaf FailureReason::noResponse {-4, "noResponse"};
const Enum::YLeaf FailureReason::destinationUnreachable {-3, "destinationUnreachable"};
const Enum::YLeaf FailureReason::badDestination {-2, "badDestination"};
const Enum::YLeaf FailureReason::localResourceLack {-1, "localResourceLack"};
const Enum::YLeaf FailureReason::noError {0, "noError"};
const Enum::YLeaf FailureReason::tooBig {1, "tooBig"};
const Enum::YLeaf FailureReason::noSuchName {2, "noSuchName"};
const Enum::YLeaf FailureReason::badValue {3, "badValue"};
const Enum::YLeaf FailureReason::readOnly {4, "readOnly"};
const Enum::YLeaf FailureReason::genErr {5, "genErr"};
const Enum::YLeaf FailureReason::noAccess {6, "noAccess"};
const Enum::YLeaf FailureReason::wrongType {7, "wrongType"};
const Enum::YLeaf FailureReason::wrongLength {8, "wrongLength"};
const Enum::YLeaf FailureReason::wrongEncoding {9, "wrongEncoding"};
const Enum::YLeaf FailureReason::wrongValue {10, "wrongValue"};
const Enum::YLeaf FailureReason::noCreation {11, "noCreation"};
const Enum::YLeaf FailureReason::inconsistentValue {12, "inconsistentValue"};
const Enum::YLeaf FailureReason::resourceUnavailable {13, "resourceUnavailable"};
const Enum::YLeaf FailureReason::commitFailed {14, "commitFailed"};
const Enum::YLeaf FailureReason::undoFailed {15, "undoFailed"};
const Enum::YLeaf FailureReason::authorizationError {16, "authorizationError"};
const Enum::YLeaf FailureReason::notWritable {17, "notWritable"};
const Enum::YLeaf FailureReason::inconsistentName {18, "inconsistentName"};

const Enum::YLeaf DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::MteTriggerSampleType::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerTable::MteTriggerEntry::MteTriggerSampleType::deltaValue {2, "deltaValue"};

const Enum::YLeaf DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::MteTriggerDeltaDiscontinuityIDType::timeTicks {1, "timeTicks"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::MteTriggerDeltaDiscontinuityIDType::timeStamp {2, "timeStamp"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerDeltaTable::MteTriggerDeltaEntry::MteTriggerDeltaDiscontinuityIDType::dateAndTime {3, "dateAndTime"};

const Enum::YLeaf DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanComparison::unequal {1, "unequal"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanComparison::equal {2, "equal"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanComparison::less {3, "less"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanComparison::lessOrEqual {4, "lessOrEqual"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanComparison::greater {5, "greater"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerBooleanTable::MteTriggerBooleanEntry::MteTriggerBooleanComparison::greaterOrEqual {6, "greaterOrEqual"};

const Enum::YLeaf DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::MteTriggerThresholdStartup::rising {1, "rising"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::MteTriggerThresholdStartup::falling {2, "falling"};
const Enum::YLeaf DISMANEVENTMIB::MteTriggerThresholdTable::MteTriggerThresholdEntry::MteTriggerThresholdStartup::risingOrFalling {3, "risingOrFalling"};


}
}

