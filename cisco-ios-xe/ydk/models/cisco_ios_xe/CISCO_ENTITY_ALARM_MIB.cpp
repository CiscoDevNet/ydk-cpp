
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_ALARM_MIB.hpp"

namespace ydk {
namespace CISCO_ENTITY_ALARM_MIB {

CiscoEntityAlarmMib::CiscoEntityAlarmMib()
    :
    cealarmdescrmaptable_(std::make_shared<CiscoEntityAlarmMib::Cealarmdescrmaptable>())
	,cealarmdescrtable_(std::make_shared<CiscoEntityAlarmMib::Cealarmdescrtable>())
	,cealarmfiltering_(std::make_shared<CiscoEntityAlarmMib::Cealarmfiltering>())
	,cealarmfilterprofiletable_(std::make_shared<CiscoEntityAlarmMib::Cealarmfilterprofiletable>())
	,cealarmhistory_(std::make_shared<CiscoEntityAlarmMib::Cealarmhistory>())
	,cealarmhisttable_(std::make_shared<CiscoEntityAlarmMib::Cealarmhisttable>())
	,cealarmmonitoring_(std::make_shared<CiscoEntityAlarmMib::Cealarmmonitoring>())
	,cealarmtable_(std::make_shared<CiscoEntityAlarmMib::Cealarmtable>())
{
    cealarmdescrmaptable_->parent = this;

    cealarmdescrtable_->parent = this;

    cealarmfiltering_->parent = this;

    cealarmfilterprofiletable_->parent = this;

    cealarmhistory_->parent = this;

    cealarmhisttable_->parent = this;

    cealarmmonitoring_->parent = this;

    cealarmtable_->parent = this;

    yang_name = "CISCO-ENTITY-ALARM-MIB"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::~CiscoEntityAlarmMib()
{
}

bool CiscoEntityAlarmMib::has_data() const
{
    return (cealarmdescrmaptable_ !=  nullptr && cealarmdescrmaptable_->has_data())
	|| (cealarmdescrtable_ !=  nullptr && cealarmdescrtable_->has_data())
	|| (cealarmfiltering_ !=  nullptr && cealarmfiltering_->has_data())
	|| (cealarmfilterprofiletable_ !=  nullptr && cealarmfilterprofiletable_->has_data())
	|| (cealarmhistory_ !=  nullptr && cealarmhistory_->has_data())
	|| (cealarmhisttable_ !=  nullptr && cealarmhisttable_->has_data())
	|| (cealarmmonitoring_ !=  nullptr && cealarmmonitoring_->has_data())
	|| (cealarmtable_ !=  nullptr && cealarmtable_->has_data());
}

bool CiscoEntityAlarmMib::has_operation() const
{
    return is_set(operation)
	|| (cealarmdescrmaptable_ !=  nullptr && cealarmdescrmaptable_->has_operation())
	|| (cealarmdescrtable_ !=  nullptr && cealarmdescrtable_->has_operation())
	|| (cealarmfiltering_ !=  nullptr && cealarmfiltering_->has_operation())
	|| (cealarmfilterprofiletable_ !=  nullptr && cealarmfilterprofiletable_->has_operation())
	|| (cealarmhistory_ !=  nullptr && cealarmhistory_->has_operation())
	|| (cealarmhisttable_ !=  nullptr && cealarmhisttable_->has_operation())
	|| (cealarmmonitoring_ !=  nullptr && cealarmmonitoring_->has_operation())
	|| (cealarmtable_ !=  nullptr && cealarmtable_->has_operation());
}

std::string CiscoEntityAlarmMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEntityAlarmMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrMapTable")
    {
        if(cealarmdescrmaptable_ == nullptr)
        {
            cealarmdescrmaptable_ = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrmaptable>();
        }
        return cealarmdescrmaptable_;
    }

    if(child_yang_name == "ceAlarmDescrTable")
    {
        if(cealarmdescrtable_ == nullptr)
        {
            cealarmdescrtable_ = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrtable>();
        }
        return cealarmdescrtable_;
    }

    if(child_yang_name == "ceAlarmFiltering")
    {
        if(cealarmfiltering_ == nullptr)
        {
            cealarmfiltering_ = std::make_shared<CiscoEntityAlarmMib::Cealarmfiltering>();
        }
        return cealarmfiltering_;
    }

    if(child_yang_name == "ceAlarmFilterProfileTable")
    {
        if(cealarmfilterprofiletable_ == nullptr)
        {
            cealarmfilterprofiletable_ = std::make_shared<CiscoEntityAlarmMib::Cealarmfilterprofiletable>();
        }
        return cealarmfilterprofiletable_;
    }

    if(child_yang_name == "ceAlarmHistory")
    {
        if(cealarmhistory_ == nullptr)
        {
            cealarmhistory_ = std::make_shared<CiscoEntityAlarmMib::Cealarmhistory>();
        }
        return cealarmhistory_;
    }

    if(child_yang_name == "ceAlarmHistTable")
    {
        if(cealarmhisttable_ == nullptr)
        {
            cealarmhisttable_ = std::make_shared<CiscoEntityAlarmMib::Cealarmhisttable>();
        }
        return cealarmhisttable_;
    }

    if(child_yang_name == "ceAlarmMonitoring")
    {
        if(cealarmmonitoring_ == nullptr)
        {
            cealarmmonitoring_ = std::make_shared<CiscoEntityAlarmMib::Cealarmmonitoring>();
        }
        return cealarmmonitoring_;
    }

    if(child_yang_name == "ceAlarmTable")
    {
        if(cealarmtable_ == nullptr)
        {
            cealarmtable_ = std::make_shared<CiscoEntityAlarmMib::Cealarmtable>();
        }
        return cealarmtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cealarmdescrmaptable_ != nullptr)
    {
        children["ceAlarmDescrMapTable"] = cealarmdescrmaptable_;
    }

    if(cealarmdescrtable_ != nullptr)
    {
        children["ceAlarmDescrTable"] = cealarmdescrtable_;
    }

    if(cealarmfiltering_ != nullptr)
    {
        children["ceAlarmFiltering"] = cealarmfiltering_;
    }

    if(cealarmfilterprofiletable_ != nullptr)
    {
        children["ceAlarmFilterProfileTable"] = cealarmfilterprofiletable_;
    }

    if(cealarmhistory_ != nullptr)
    {
        children["ceAlarmHistory"] = cealarmhistory_;
    }

    if(cealarmhisttable_ != nullptr)
    {
        children["ceAlarmHistTable"] = cealarmhisttable_;
    }

    if(cealarmmonitoring_ != nullptr)
    {
        children["ceAlarmMonitoring"] = cealarmmonitoring_;
    }

    if(cealarmtable_ != nullptr)
    {
        children["ceAlarmTable"] = cealarmtable_;
    }

    return children;
}

void CiscoEntityAlarmMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoEntityAlarmMib::clone_ptr() const
{
    return std::make_shared<CiscoEntityAlarmMib>();
}

std::string CiscoEntityAlarmMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEntityAlarmMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEntityAlarmMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoEntityAlarmMib::Cealarmmonitoring::Cealarmmonitoring()
    :
    cealarmcriticalcount{YType::uint32, "ceAlarmCriticalCount"},
    cealarmcutoff{YType::boolean, "ceAlarmCutOff"},
    cealarmmajorcount{YType::uint32, "ceAlarmMajorCount"},
    cealarmminorcount{YType::uint32, "ceAlarmMinorCount"}
{
    yang_name = "ceAlarmMonitoring"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmmonitoring::~Cealarmmonitoring()
{
}

bool CiscoEntityAlarmMib::Cealarmmonitoring::has_data() const
{
    return cealarmcriticalcount.is_set
	|| cealarmcutoff.is_set
	|| cealarmmajorcount.is_set
	|| cealarmminorcount.is_set;
}

bool CiscoEntityAlarmMib::Cealarmmonitoring::has_operation() const
{
    return is_set(operation)
	|| is_set(cealarmcriticalcount.operation)
	|| is_set(cealarmcutoff.operation)
	|| is_set(cealarmmajorcount.operation)
	|| is_set(cealarmminorcount.operation);
}

std::string CiscoEntityAlarmMib::Cealarmmonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmMonitoring";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmmonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmcriticalcount.is_set || is_set(cealarmcriticalcount.operation)) leaf_name_data.push_back(cealarmcriticalcount.get_name_leafdata());
    if (cealarmcutoff.is_set || is_set(cealarmcutoff.operation)) leaf_name_data.push_back(cealarmcutoff.get_name_leafdata());
    if (cealarmmajorcount.is_set || is_set(cealarmmajorcount.operation)) leaf_name_data.push_back(cealarmmajorcount.get_name_leafdata());
    if (cealarmminorcount.is_set || is_set(cealarmminorcount.operation)) leaf_name_data.push_back(cealarmminorcount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmmonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmmonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmmonitoring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceAlarmCriticalCount")
    {
        cealarmcriticalcount = value;
    }
    if(value_path == "ceAlarmCutOff")
    {
        cealarmcutoff = value;
    }
    if(value_path == "ceAlarmMajorCount")
    {
        cealarmmajorcount = value;
    }
    if(value_path == "ceAlarmMinorCount")
    {
        cealarmminorcount = value;
    }
}

CiscoEntityAlarmMib::Cealarmhistory::Cealarmhistory()
    :
    cealarmhistlastindex{YType::uint32, "ceAlarmHistLastIndex"},
    cealarmhisttablesize{YType::int32, "ceAlarmHistTableSize"}
{
    yang_name = "ceAlarmHistory"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmhistory::~Cealarmhistory()
{
}

bool CiscoEntityAlarmMib::Cealarmhistory::has_data() const
{
    return cealarmhistlastindex.is_set
	|| cealarmhisttablesize.is_set;
}

bool CiscoEntityAlarmMib::Cealarmhistory::has_operation() const
{
    return is_set(operation)
	|| is_set(cealarmhistlastindex.operation)
	|| is_set(cealarmhisttablesize.operation);
}

std::string CiscoEntityAlarmMib::Cealarmhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistory";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmhistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmhistlastindex.is_set || is_set(cealarmhistlastindex.operation)) leaf_name_data.push_back(cealarmhistlastindex.get_name_leafdata());
    if (cealarmhisttablesize.is_set || is_set(cealarmhisttablesize.operation)) leaf_name_data.push_back(cealarmhisttablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmhistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceAlarmHistLastIndex")
    {
        cealarmhistlastindex = value;
    }
    if(value_path == "ceAlarmHistTableSize")
    {
        cealarmhisttablesize = value;
    }
}

CiscoEntityAlarmMib::Cealarmfiltering::Cealarmfiltering()
    :
    cealarmfilterprofileindexnext{YType::uint32, "ceAlarmFilterProfileIndexNext"},
    cealarmnotifiesenable{YType::int32, "ceAlarmNotifiesEnable"},
    cealarmsyslogenable{YType::int32, "ceAlarmSyslogEnable"}
{
    yang_name = "ceAlarmFiltering"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmfiltering::~Cealarmfiltering()
{
}

bool CiscoEntityAlarmMib::Cealarmfiltering::has_data() const
{
    return cealarmfilterprofileindexnext.is_set
	|| cealarmnotifiesenable.is_set
	|| cealarmsyslogenable.is_set;
}

bool CiscoEntityAlarmMib::Cealarmfiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(cealarmfilterprofileindexnext.operation)
	|| is_set(cealarmnotifiesenable.operation)
	|| is_set(cealarmsyslogenable.operation);
}

std::string CiscoEntityAlarmMib::Cealarmfiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFiltering";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmfiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmfilterprofileindexnext.is_set || is_set(cealarmfilterprofileindexnext.operation)) leaf_name_data.push_back(cealarmfilterprofileindexnext.get_name_leafdata());
    if (cealarmnotifiesenable.is_set || is_set(cealarmnotifiesenable.operation)) leaf_name_data.push_back(cealarmnotifiesenable.get_name_leafdata());
    if (cealarmsyslogenable.is_set || is_set(cealarmsyslogenable.operation)) leaf_name_data.push_back(cealarmsyslogenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmfiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmfiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmfiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceAlarmFilterProfileIndexNext")
    {
        cealarmfilterprofileindexnext = value;
    }
    if(value_path == "ceAlarmNotifiesEnable")
    {
        cealarmnotifiesenable = value;
    }
    if(value_path == "ceAlarmSyslogEnable")
    {
        cealarmsyslogenable = value;
    }
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmaptable()
{
    yang_name = "ceAlarmDescrMapTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::~Cealarmdescrmaptable()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::has_data() const
{
    for (std::size_t index=0; index<cealarmdescrmapentry_.size(); index++)
    {
        if(cealarmdescrmapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrmapentry_.size(); index++)
    {
        if(cealarmdescrmapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityAlarmMib::Cealarmdescrmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrMapEntry")
    {
        for(auto const & c : cealarmdescrmapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry>();
        c->parent = this;
        cealarmdescrmapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmdescrmapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrmaptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::Cealarmdescrmapentry()
    :
    cealarmdescrindex{YType::uint32, "ceAlarmDescrIndex"},
    cealarmdescrvendortype{YType::str, "ceAlarmDescrVendorType"}
{
    yang_name = "ceAlarmDescrMapEntry"; yang_parent_name = "ceAlarmDescrMapTable";
}

CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::~Cealarmdescrmapentry()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::has_data() const
{
    return cealarmdescrindex.is_set
	|| cealarmdescrvendortype.is_set;
}

bool CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cealarmdescrindex.operation)
	|| is_set(cealarmdescrvendortype.operation);
}

std::string CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapEntry" <<"[ceAlarmDescrIndex='" <<cealarmdescrindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.operation)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescrvendortype.is_set || is_set(cealarmdescrvendortype.operation)) leaf_name_data.push_back(cealarmdescrvendortype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrmaptable::Cealarmdescrmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex = value;
    }
    if(value_path == "ceAlarmDescrVendorType")
    {
        cealarmdescrvendortype = value;
    }
}

CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrtable()
{
    yang_name = "ceAlarmDescrTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmdescrtable::~Cealarmdescrtable()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::has_data() const
{
    for (std::size_t index=0; index<cealarmdescrentry_.size(); index++)
    {
        if(cealarmdescrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrentry_.size(); index++)
    {
        if(cealarmdescrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityAlarmMib::Cealarmdescrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrEntry")
    {
        for(auto const & c : cealarmdescrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry>();
        c->parent = this;
        cealarmdescrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmdescrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::Cealarmdescrentry()
    :
    cealarmdescrindex{YType::str, "ceAlarmDescrIndex"},
    cealarmdescralarmtype{YType::int32, "ceAlarmDescrAlarmType"},
    cealarmdescrseverity{YType::int32, "ceAlarmDescrSeverity"},
    cealarmdescrtext{YType::str, "ceAlarmDescrText"}
{
    yang_name = "ceAlarmDescrEntry"; yang_parent_name = "ceAlarmDescrTable";
}

CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::~Cealarmdescrentry()
{
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::has_data() const
{
    return cealarmdescrindex.is_set
	|| cealarmdescralarmtype.is_set
	|| cealarmdescrseverity.is_set
	|| cealarmdescrtext.is_set;
}

bool CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cealarmdescrindex.operation)
	|| is_set(cealarmdescralarmtype.operation)
	|| is_set(cealarmdescrseverity.operation)
	|| is_set(cealarmdescrtext.operation);
}

std::string CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrEntry" <<"[ceAlarmDescrIndex='" <<cealarmdescrindex <<"']" <<"[ceAlarmDescrAlarmType='" <<cealarmdescralarmtype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.operation)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescralarmtype.is_set || is_set(cealarmdescralarmtype.operation)) leaf_name_data.push_back(cealarmdescralarmtype.get_name_leafdata());
    if (cealarmdescrseverity.is_set || is_set(cealarmdescrseverity.operation)) leaf_name_data.push_back(cealarmdescrseverity.get_name_leafdata());
    if (cealarmdescrtext.is_set || is_set(cealarmdescrtext.operation)) leaf_name_data.push_back(cealarmdescrtext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmdescrtable::Cealarmdescrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex = value;
    }
    if(value_path == "ceAlarmDescrAlarmType")
    {
        cealarmdescralarmtype = value;
    }
    if(value_path == "ceAlarmDescrSeverity")
    {
        cealarmdescrseverity = value;
    }
    if(value_path == "ceAlarmDescrText")
    {
        cealarmdescrtext = value;
    }
}

CiscoEntityAlarmMib::Cealarmtable::Cealarmtable()
{
    yang_name = "ceAlarmTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmtable::~Cealarmtable()
{
}

bool CiscoEntityAlarmMib::Cealarmtable::has_data() const
{
    for (std::size_t index=0; index<cealarmentry_.size(); index++)
    {
        if(cealarmentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmtable::has_operation() const
{
    for (std::size_t index=0; index<cealarmentry_.size(); index++)
    {
        if(cealarmentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityAlarmMib::Cealarmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmEntry")
    {
        for(auto const & c : cealarmentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmtable::Cealarmentry>();
        c->parent = this;
        cealarmentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::Cealarmentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cealarmfilterprofile{YType::uint32, "ceAlarmFilterProfile"},
    cealarmlist{YType::str, "ceAlarmList"},
    cealarmseverity{YType::int32, "ceAlarmSeverity"}
{
    yang_name = "ceAlarmEntry"; yang_parent_name = "ceAlarmTable";
}

CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::~Cealarmentry()
{
}

bool CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::has_data() const
{
    return entphysicalindex.is_set
	|| cealarmfilterprofile.is_set
	|| cealarmlist.is_set
	|| cealarmseverity.is_set;
}

bool CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cealarmfilterprofile.operation)
	|| is_set(cealarmlist.operation)
	|| is_set(cealarmseverity.operation);
}

std::string CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cealarmfilterprofile.is_set || is_set(cealarmfilterprofile.operation)) leaf_name_data.push_back(cealarmfilterprofile.get_name_leafdata());
    if (cealarmlist.is_set || is_set(cealarmlist.operation)) leaf_name_data.push_back(cealarmlist.get_name_leafdata());
    if (cealarmseverity.is_set || is_set(cealarmseverity.operation)) leaf_name_data.push_back(cealarmseverity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmtable::Cealarmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceAlarmFilterProfile")
    {
        cealarmfilterprofile = value;
    }
    if(value_path == "ceAlarmList")
    {
        cealarmlist = value;
    }
    if(value_path == "ceAlarmSeverity")
    {
        cealarmseverity = value;
    }
}

CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhisttable()
{
    yang_name = "ceAlarmHistTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmhisttable::~Cealarmhisttable()
{
}

bool CiscoEntityAlarmMib::Cealarmhisttable::has_data() const
{
    for (std::size_t index=0; index<cealarmhistentry_.size(); index++)
    {
        if(cealarmhistentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmhisttable::has_operation() const
{
    for (std::size_t index=0; index<cealarmhistentry_.size(); index++)
    {
        if(cealarmhistentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityAlarmMib::Cealarmhisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmhisttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmhisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmHistEntry")
    {
        for(auto const & c : cealarmhistentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry>();
        c->parent = this;
        cealarmhistentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmhisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmhistentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmhisttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::Cealarmhistentry()
    :
    cealarmhistindex{YType::uint32, "ceAlarmHistIndex"},
    cealarmhistalarmtype{YType::int32, "ceAlarmHistAlarmType"},
    cealarmhistentphysicalindex{YType::int32, "ceAlarmHistEntPhysicalIndex"},
    cealarmhistseverity{YType::enumeration, "ceAlarmHistSeverity"},
    cealarmhisttimestamp{YType::uint32, "ceAlarmHistTimeStamp"},
    cealarmhisttype{YType::enumeration, "ceAlarmHistType"}
{
    yang_name = "ceAlarmHistEntry"; yang_parent_name = "ceAlarmHistTable";
}

CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::~Cealarmhistentry()
{
}

bool CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::has_data() const
{
    return cealarmhistindex.is_set
	|| cealarmhistalarmtype.is_set
	|| cealarmhistentphysicalindex.is_set
	|| cealarmhistseverity.is_set
	|| cealarmhisttimestamp.is_set
	|| cealarmhisttype.is_set;
}

bool CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cealarmhistindex.operation)
	|| is_set(cealarmhistalarmtype.operation)
	|| is_set(cealarmhistentphysicalindex.operation)
	|| is_set(cealarmhistseverity.operation)
	|| is_set(cealarmhisttimestamp.operation)
	|| is_set(cealarmhisttype.operation);
}

std::string CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistEntry" <<"[ceAlarmHistIndex='" <<cealarmhistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmHistTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmhistindex.is_set || is_set(cealarmhistindex.operation)) leaf_name_data.push_back(cealarmhistindex.get_name_leafdata());
    if (cealarmhistalarmtype.is_set || is_set(cealarmhistalarmtype.operation)) leaf_name_data.push_back(cealarmhistalarmtype.get_name_leafdata());
    if (cealarmhistentphysicalindex.is_set || is_set(cealarmhistentphysicalindex.operation)) leaf_name_data.push_back(cealarmhistentphysicalindex.get_name_leafdata());
    if (cealarmhistseverity.is_set || is_set(cealarmhistseverity.operation)) leaf_name_data.push_back(cealarmhistseverity.get_name_leafdata());
    if (cealarmhisttimestamp.is_set || is_set(cealarmhisttimestamp.operation)) leaf_name_data.push_back(cealarmhisttimestamp.get_name_leafdata());
    if (cealarmhisttype.is_set || is_set(cealarmhisttype.operation)) leaf_name_data.push_back(cealarmhisttype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceAlarmHistIndex")
    {
        cealarmhistindex = value;
    }
    if(value_path == "ceAlarmHistAlarmType")
    {
        cealarmhistalarmtype = value;
    }
    if(value_path == "ceAlarmHistEntPhysicalIndex")
    {
        cealarmhistentphysicalindex = value;
    }
    if(value_path == "ceAlarmHistSeverity")
    {
        cealarmhistseverity = value;
    }
    if(value_path == "ceAlarmHistTimeStamp")
    {
        cealarmhisttimestamp = value;
    }
    if(value_path == "ceAlarmHistType")
    {
        cealarmhisttype = value;
    }
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofiletable()
{
    yang_name = "ceAlarmFilterProfileTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB";
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::~Cealarmfilterprofiletable()
{
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::has_data() const
{
    for (std::size_t index=0; index<cealarmfilterprofileentry_.size(); index++)
    {
        if(cealarmfilterprofileentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::has_operation() const
{
    for (std::size_t index=0; index<cealarmfilterprofileentry_.size(); index++)
    {
        if(cealarmfilterprofileentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmFilterProfileEntry")
    {
        for(auto const & c : cealarmfilterprofileentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry>();
        c->parent = this;
        cealarmfilterprofileentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmfilterprofiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmfilterprofileentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityAlarmMib::Cealarmfilterprofiletable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::Cealarmfilterprofileentry()
    :
    cealarmfilterindex{YType::uint32, "ceAlarmFilterIndex"},
    cealarmfilteralarmsenabled{YType::str, "ceAlarmFilterAlarmsEnabled"},
    cealarmfilteralias{YType::str, "ceAlarmFilterAlias"},
    cealarmfilternotifiesenabled{YType::str, "ceAlarmFilterNotifiesEnabled"},
    cealarmfilterstatus{YType::enumeration, "ceAlarmFilterStatus"},
    cealarmfiltersyslogenabled{YType::str, "ceAlarmFilterSyslogEnabled"}
{
    yang_name = "ceAlarmFilterProfileEntry"; yang_parent_name = "ceAlarmFilterProfileTable";
}

CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::~Cealarmfilterprofileentry()
{
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_data() const
{
    return cealarmfilterindex.is_set
	|| cealarmfilteralarmsenabled.is_set
	|| cealarmfilteralias.is_set
	|| cealarmfilternotifiesenabled.is_set
	|| cealarmfilterstatus.is_set
	|| cealarmfiltersyslogenabled.is_set;
}

bool CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cealarmfilterindex.operation)
	|| is_set(cealarmfilteralarmsenabled.operation)
	|| is_set(cealarmfilteralias.operation)
	|| is_set(cealarmfilternotifiesenabled.operation)
	|| is_set(cealarmfilterstatus.operation)
	|| is_set(cealarmfiltersyslogenabled.operation);
}

std::string CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileEntry" <<"[ceAlarmFilterIndex='" <<cealarmfilterindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmFilterProfileTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmfilterindex.is_set || is_set(cealarmfilterindex.operation)) leaf_name_data.push_back(cealarmfilterindex.get_name_leafdata());
    if (cealarmfilteralarmsenabled.is_set || is_set(cealarmfilteralarmsenabled.operation)) leaf_name_data.push_back(cealarmfilteralarmsenabled.get_name_leafdata());
    if (cealarmfilteralias.is_set || is_set(cealarmfilteralias.operation)) leaf_name_data.push_back(cealarmfilteralias.get_name_leafdata());
    if (cealarmfilternotifiesenabled.is_set || is_set(cealarmfilternotifiesenabled.operation)) leaf_name_data.push_back(cealarmfilternotifiesenabled.get_name_leafdata());
    if (cealarmfilterstatus.is_set || is_set(cealarmfilterstatus.operation)) leaf_name_data.push_back(cealarmfilterstatus.get_name_leafdata());
    if (cealarmfiltersyslogenabled.is_set || is_set(cealarmfiltersyslogenabled.operation)) leaf_name_data.push_back(cealarmfiltersyslogenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityAlarmMib::Cealarmfilterprofiletable::Cealarmfilterprofileentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceAlarmFilterIndex")
    {
        cealarmfilterindex = value;
    }
    if(value_path == "ceAlarmFilterAlarmsEnabled")
    {
        cealarmfilteralarmsenabled = value;
    }
    if(value_path == "ceAlarmFilterAlias")
    {
        cealarmfilteralias = value;
    }
    if(value_path == "ceAlarmFilterNotifiesEnabled")
    {
        cealarmfilternotifiesenabled = value;
    }
    if(value_path == "ceAlarmFilterStatus")
    {
        cealarmfilterstatus = value;
    }
    if(value_path == "ceAlarmFilterSyslogEnabled")
    {
        cealarmfiltersyslogenabled = value;
    }
}

const Enum::YLeaf AlarmseverityEnum::critical {1, "critical"};
const Enum::YLeaf AlarmseverityEnum::major {2, "major"};
const Enum::YLeaf AlarmseverityEnum::minor {3, "minor"};
const Enum::YLeaf AlarmseverityEnum::info {4, "info"};

const Enum::YLeaf CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::CealarmhisttypeEnum::asserted {1, "asserted"};
const Enum::YLeaf CiscoEntityAlarmMib::Cealarmhisttable::Cealarmhistentry::CealarmhisttypeEnum::cleared {2, "cleared"};


}
}

