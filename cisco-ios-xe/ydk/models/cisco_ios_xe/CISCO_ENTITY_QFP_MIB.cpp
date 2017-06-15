
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_QFP_MIB.hpp"

namespace ydk {
namespace CISCO_ENTITY_QFP_MIB {

CiscoEntityQfpMib::CiscoEntityQfpMib()
    :
    ceqfpmemoryresourcetable_(std::make_shared<CiscoEntityQfpMib::Ceqfpmemoryresourcetable>())
	,ceqfpsystemtable_(std::make_shared<CiscoEntityQfpMib::Ceqfpsystemtable>())
	,ceqfpthroughputtable_(std::make_shared<CiscoEntityQfpMib::Ceqfpthroughputtable>())
	,ceqfputilizationtable_(std::make_shared<CiscoEntityQfpMib::Ceqfputilizationtable>())
	,ciscoentityqfp_(std::make_shared<CiscoEntityQfpMib::Ciscoentityqfp>())
	,ciscoentityqfpnotif_(std::make_shared<CiscoEntityQfpMib::Ciscoentityqfpnotif>())
{
    ceqfpmemoryresourcetable_->parent = this;

    ceqfpsystemtable_->parent = this;

    ceqfpthroughputtable_->parent = this;

    ceqfputilizationtable_->parent = this;

    ciscoentityqfp_->parent = this;

    ciscoentityqfpnotif_->parent = this;

    yang_name = "CISCO-ENTITY-QFP-MIB"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::~CiscoEntityQfpMib()
{
}

bool CiscoEntityQfpMib::has_data() const
{
    return (ceqfpmemoryresourcetable_ !=  nullptr && ceqfpmemoryresourcetable_->has_data())
	|| (ceqfpsystemtable_ !=  nullptr && ceqfpsystemtable_->has_data())
	|| (ceqfpthroughputtable_ !=  nullptr && ceqfpthroughputtable_->has_data())
	|| (ceqfputilizationtable_ !=  nullptr && ceqfputilizationtable_->has_data())
	|| (ciscoentityqfp_ !=  nullptr && ciscoentityqfp_->has_data())
	|| (ciscoentityqfpnotif_ !=  nullptr && ciscoentityqfpnotif_->has_data());
}

bool CiscoEntityQfpMib::has_operation() const
{
    return is_set(operation)
	|| (ceqfpmemoryresourcetable_ !=  nullptr && ceqfpmemoryresourcetable_->has_operation())
	|| (ceqfpsystemtable_ !=  nullptr && ceqfpsystemtable_->has_operation())
	|| (ceqfpthroughputtable_ !=  nullptr && ceqfpthroughputtable_->has_operation())
	|| (ceqfputilizationtable_ !=  nullptr && ceqfputilizationtable_->has_operation())
	|| (ciscoentityqfp_ !=  nullptr && ciscoentityqfp_->has_operation())
	|| (ciscoentityqfpnotif_ !=  nullptr && ciscoentityqfpnotif_->has_operation());
}

std::string CiscoEntityQfpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEntityQfpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceqfpMemoryResourceTable")
    {
        if(ceqfpmemoryresourcetable_ == nullptr)
        {
            ceqfpmemoryresourcetable_ = std::make_shared<CiscoEntityQfpMib::Ceqfpmemoryresourcetable>();
        }
        return ceqfpmemoryresourcetable_;
    }

    if(child_yang_name == "ceqfpSystemTable")
    {
        if(ceqfpsystemtable_ == nullptr)
        {
            ceqfpsystemtable_ = std::make_shared<CiscoEntityQfpMib::Ceqfpsystemtable>();
        }
        return ceqfpsystemtable_;
    }

    if(child_yang_name == "ceqfpThroughputTable")
    {
        if(ceqfpthroughputtable_ == nullptr)
        {
            ceqfpthroughputtable_ = std::make_shared<CiscoEntityQfpMib::Ceqfpthroughputtable>();
        }
        return ceqfpthroughputtable_;
    }

    if(child_yang_name == "ceqfpUtilizationTable")
    {
        if(ceqfputilizationtable_ == nullptr)
        {
            ceqfputilizationtable_ = std::make_shared<CiscoEntityQfpMib::Ceqfputilizationtable>();
        }
        return ceqfputilizationtable_;
    }

    if(child_yang_name == "ciscoEntityQfp")
    {
        if(ciscoentityqfp_ == nullptr)
        {
            ciscoentityqfp_ = std::make_shared<CiscoEntityQfpMib::Ciscoentityqfp>();
        }
        return ciscoentityqfp_;
    }

    if(child_yang_name == "ciscoEntityQfpNotif")
    {
        if(ciscoentityqfpnotif_ == nullptr)
        {
            ciscoentityqfpnotif_ = std::make_shared<CiscoEntityQfpMib::Ciscoentityqfpnotif>();
        }
        return ciscoentityqfpnotif_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceqfpmemoryresourcetable_ != nullptr)
    {
        children["ceqfpMemoryResourceTable"] = ceqfpmemoryresourcetable_;
    }

    if(ceqfpsystemtable_ != nullptr)
    {
        children["ceqfpSystemTable"] = ceqfpsystemtable_;
    }

    if(ceqfpthroughputtable_ != nullptr)
    {
        children["ceqfpThroughputTable"] = ceqfpthroughputtable_;
    }

    if(ceqfputilizationtable_ != nullptr)
    {
        children["ceqfpUtilizationTable"] = ceqfputilizationtable_;
    }

    if(ciscoentityqfp_ != nullptr)
    {
        children["ciscoEntityQfp"] = ciscoentityqfp_;
    }

    if(ciscoentityqfpnotif_ != nullptr)
    {
        children["ciscoEntityQfpNotif"] = ciscoentityqfpnotif_;
    }

    return children;
}

void CiscoEntityQfpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoEntityQfpMib::clone_ptr() const
{
    return std::make_shared<CiscoEntityQfpMib>();
}

std::string CiscoEntityQfpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEntityQfpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEntityQfpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoEntityQfpMib::Ciscoentityqfp::Ciscoentityqfp()
    :
    ceqfpfiveminutesutilalgo{YType::enumeration, "ceqfpFiveMinutesUtilAlgo"},
    ceqfpfivesecondutilalgo{YType::enumeration, "ceqfpFiveSecondUtilAlgo"},
    ceqfponeminuteutilalgo{YType::enumeration, "ceqfpOneMinuteUtilAlgo"},
    ceqfpsixtyminutesutilalgo{YType::enumeration, "ceqfpSixtyMinutesUtilAlgo"}
{
    yang_name = "ciscoEntityQfp"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::Ciscoentityqfp::~Ciscoentityqfp()
{
}

bool CiscoEntityQfpMib::Ciscoentityqfp::has_data() const
{
    return ceqfpfiveminutesutilalgo.is_set
	|| ceqfpfivesecondutilalgo.is_set
	|| ceqfponeminuteutilalgo.is_set
	|| ceqfpsixtyminutesutilalgo.is_set;
}

bool CiscoEntityQfpMib::Ciscoentityqfp::has_operation() const
{
    return is_set(operation)
	|| is_set(ceqfpfiveminutesutilalgo.operation)
	|| is_set(ceqfpfivesecondutilalgo.operation)
	|| is_set(ceqfponeminuteutilalgo.operation)
	|| is_set(ceqfpsixtyminutesutilalgo.operation);
}

std::string CiscoEntityQfpMib::Ciscoentityqfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEntityQfp";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ciscoentityqfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceqfpfiveminutesutilalgo.is_set || is_set(ceqfpfiveminutesutilalgo.operation)) leaf_name_data.push_back(ceqfpfiveminutesutilalgo.get_name_leafdata());
    if (ceqfpfivesecondutilalgo.is_set || is_set(ceqfpfivesecondutilalgo.operation)) leaf_name_data.push_back(ceqfpfivesecondutilalgo.get_name_leafdata());
    if (ceqfponeminuteutilalgo.is_set || is_set(ceqfponeminuteutilalgo.operation)) leaf_name_data.push_back(ceqfponeminuteutilalgo.get_name_leafdata());
    if (ceqfpsixtyminutesutilalgo.is_set || is_set(ceqfpsixtyminutesutilalgo.operation)) leaf_name_data.push_back(ceqfpsixtyminutesutilalgo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ciscoentityqfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ciscoentityqfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityQfpMib::Ciscoentityqfp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceqfpFiveMinutesUtilAlgo")
    {
        ceqfpfiveminutesutilalgo = value;
    }
    if(value_path == "ceqfpFiveSecondUtilAlgo")
    {
        ceqfpfivesecondutilalgo = value;
    }
    if(value_path == "ceqfpOneMinuteUtilAlgo")
    {
        ceqfponeminuteutilalgo = value;
    }
    if(value_path == "ceqfpSixtyMinutesUtilAlgo")
    {
        ceqfpsixtyminutesutilalgo = value;
    }
}

CiscoEntityQfpMib::Ciscoentityqfpnotif::Ciscoentityqfpnotif()
    :
    ceqfpmemoryresthreshnotifenabled{YType::boolean, "ceqfpMemoryResThreshNotifEnabled"},
    ceqfpthroughputnotifenabled{YType::uint32, "ceqfpThroughputNotifEnabled"}
{
    yang_name = "ciscoEntityQfpNotif"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::Ciscoentityqfpnotif::~Ciscoentityqfpnotif()
{
}

bool CiscoEntityQfpMib::Ciscoentityqfpnotif::has_data() const
{
    return ceqfpmemoryresthreshnotifenabled.is_set
	|| ceqfpthroughputnotifenabled.is_set;
}

bool CiscoEntityQfpMib::Ciscoentityqfpnotif::has_operation() const
{
    return is_set(operation)
	|| is_set(ceqfpmemoryresthreshnotifenabled.operation)
	|| is_set(ceqfpthroughputnotifenabled.operation);
}

std::string CiscoEntityQfpMib::Ciscoentityqfpnotif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoEntityQfpNotif";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ciscoentityqfpnotif::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceqfpmemoryresthreshnotifenabled.is_set || is_set(ceqfpmemoryresthreshnotifenabled.operation)) leaf_name_data.push_back(ceqfpmemoryresthreshnotifenabled.get_name_leafdata());
    if (ceqfpthroughputnotifenabled.is_set || is_set(ceqfpthroughputnotifenabled.operation)) leaf_name_data.push_back(ceqfpthroughputnotifenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ciscoentityqfpnotif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ciscoentityqfpnotif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityQfpMib::Ciscoentityqfpnotif::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceqfpMemoryResThreshNotifEnabled")
    {
        ceqfpmemoryresthreshnotifenabled = value;
    }
    if(value_path == "ceqfpThroughputNotifEnabled")
    {
        ceqfpthroughputnotifenabled = value;
    }
}

CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystemtable()
{
    yang_name = "ceqfpSystemTable"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::Ceqfpsystemtable::~Ceqfpsystemtable()
{
}

bool CiscoEntityQfpMib::Ceqfpsystemtable::has_data() const
{
    for (std::size_t index=0; index<ceqfpsystementry_.size(); index++)
    {
        if(ceqfpsystementry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfpsystemtable::has_operation() const
{
    for (std::size_t index=0; index<ceqfpsystementry_.size(); index++)
    {
        if(ceqfpsystementry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityQfpMib::Ceqfpsystemtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpSystemTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfpsystemtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfpsystemtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceqfpSystemEntry")
    {
        for(auto const & c : ceqfpsystementry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry>();
        c->parent = this;
        ceqfpsystementry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpsystemtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfpsystementry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfpsystemtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystementry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceqfpnumbersystemloads{YType::uint32, "ceqfpNumberSystemLoads"},
    ceqfpsystemlastloadtime{YType::str, "ceqfpSystemLastLoadTime"},
    ceqfpsystemstate{YType::enumeration, "ceqfpSystemState"},
    ceqfpsystemtrafficdirection{YType::enumeration, "ceqfpSystemTrafficDirection"}
{
    yang_name = "ceqfpSystemEntry"; yang_parent_name = "ceqfpSystemTable";
}

CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::~Ceqfpsystementry()
{
}

bool CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::has_data() const
{
    return entphysicalindex.is_set
	|| ceqfpnumbersystemloads.is_set
	|| ceqfpsystemlastloadtime.is_set
	|| ceqfpsystemstate.is_set
	|| ceqfpsystemtrafficdirection.is_set;
}

bool CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceqfpnumbersystemloads.operation)
	|| is_set(ceqfpsystemlastloadtime.operation)
	|| is_set(ceqfpsystemstate.operation)
	|| is_set(ceqfpsystemtrafficdirection.operation);
}

std::string CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpSystemEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/ceqfpSystemTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfpnumbersystemloads.is_set || is_set(ceqfpnumbersystemloads.operation)) leaf_name_data.push_back(ceqfpnumbersystemloads.get_name_leafdata());
    if (ceqfpsystemlastloadtime.is_set || is_set(ceqfpsystemlastloadtime.operation)) leaf_name_data.push_back(ceqfpsystemlastloadtime.get_name_leafdata());
    if (ceqfpsystemstate.is_set || is_set(ceqfpsystemstate.operation)) leaf_name_data.push_back(ceqfpsystemstate.get_name_leafdata());
    if (ceqfpsystemtrafficdirection.is_set || is_set(ceqfpsystemtrafficdirection.operation)) leaf_name_data.push_back(ceqfpsystemtrafficdirection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceqfpNumberSystemLoads")
    {
        ceqfpnumbersystemloads = value;
    }
    if(value_path == "ceqfpSystemLastLoadTime")
    {
        ceqfpsystemlastloadtime = value;
    }
    if(value_path == "ceqfpSystemState")
    {
        ceqfpsystemstate = value;
    }
    if(value_path == "ceqfpSystemTrafficDirection")
    {
        ceqfpsystemtrafficdirection = value;
    }
}

CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationtable()
{
    yang_name = "ceqfpUtilizationTable"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::Ceqfputilizationtable::~Ceqfputilizationtable()
{
}

bool CiscoEntityQfpMib::Ceqfputilizationtable::has_data() const
{
    for (std::size_t index=0; index<ceqfputilizationentry_.size(); index++)
    {
        if(ceqfputilizationentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfputilizationtable::has_operation() const
{
    for (std::size_t index=0; index<ceqfputilizationentry_.size(); index++)
    {
        if(ceqfputilizationentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityQfpMib::Ceqfputilizationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpUtilizationTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfputilizationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfputilizationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceqfpUtilizationEntry")
    {
        for(auto const & c : ceqfputilizationentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry>();
        c->parent = this;
        ceqfputilizationentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfputilizationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfputilizationentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfputilizationtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::Ceqfputilizationentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceqfputiltimeinterval{YType::enumeration, "ceqfpUtilTimeInterval"},
    ceqfputilinputnonprioritybitrate{YType::uint64, "ceqfpUtilInputNonPriorityBitRate"},
    ceqfputilinputnonprioritypktrate{YType::uint64, "ceqfpUtilInputNonPriorityPktRate"},
    ceqfputilinputprioritybitrate{YType::uint64, "ceqfpUtilInputPriorityBitRate"},
    ceqfputilinputprioritypktrate{YType::uint64, "ceqfpUtilInputPriorityPktRate"},
    ceqfputilinputtotalbitrate{YType::uint64, "ceqfpUtilInputTotalBitRate"},
    ceqfputilinputtotalpktrate{YType::uint64, "ceqfpUtilInputTotalPktRate"},
    ceqfputiloutputnonprioritybitrate{YType::uint64, "ceqfpUtilOutputNonPriorityBitRate"},
    ceqfputiloutputnonprioritypktrate{YType::uint64, "ceqfpUtilOutputNonPriorityPktRate"},
    ceqfputiloutputprioritybitrate{YType::uint64, "ceqfpUtilOutputPriorityBitRate"},
    ceqfputiloutputprioritypktrate{YType::uint64, "ceqfpUtilOutputPriorityPktRate"},
    ceqfputiloutputtotalbitrate{YType::uint64, "ceqfpUtilOutputTotalBitRate"},
    ceqfputiloutputtotalpktrate{YType::uint64, "ceqfpUtilOutputTotalPktRate"},
    ceqfputilprocessingload{YType::uint32, "ceqfpUtilProcessingLoad"}
{
    yang_name = "ceqfpUtilizationEntry"; yang_parent_name = "ceqfpUtilizationTable";
}

CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::~Ceqfputilizationentry()
{
}

bool CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceqfputiltimeinterval.is_set
	|| ceqfputilinputnonprioritybitrate.is_set
	|| ceqfputilinputnonprioritypktrate.is_set
	|| ceqfputilinputprioritybitrate.is_set
	|| ceqfputilinputprioritypktrate.is_set
	|| ceqfputilinputtotalbitrate.is_set
	|| ceqfputilinputtotalpktrate.is_set
	|| ceqfputiloutputnonprioritybitrate.is_set
	|| ceqfputiloutputnonprioritypktrate.is_set
	|| ceqfputiloutputprioritybitrate.is_set
	|| ceqfputiloutputprioritypktrate.is_set
	|| ceqfputiloutputtotalbitrate.is_set
	|| ceqfputiloutputtotalpktrate.is_set
	|| ceqfputilprocessingload.is_set;
}

bool CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceqfputiltimeinterval.operation)
	|| is_set(ceqfputilinputnonprioritybitrate.operation)
	|| is_set(ceqfputilinputnonprioritypktrate.operation)
	|| is_set(ceqfputilinputprioritybitrate.operation)
	|| is_set(ceqfputilinputprioritypktrate.operation)
	|| is_set(ceqfputilinputtotalbitrate.operation)
	|| is_set(ceqfputilinputtotalpktrate.operation)
	|| is_set(ceqfputiloutputnonprioritybitrate.operation)
	|| is_set(ceqfputiloutputnonprioritypktrate.operation)
	|| is_set(ceqfputiloutputprioritybitrate.operation)
	|| is_set(ceqfputiloutputprioritypktrate.operation)
	|| is_set(ceqfputiloutputtotalbitrate.operation)
	|| is_set(ceqfputiloutputtotalpktrate.operation)
	|| is_set(ceqfputilprocessingload.operation);
}

std::string CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpUtilizationEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[ceqfpUtilTimeInterval='" <<ceqfputiltimeinterval <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/ceqfpUtilizationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfputiltimeinterval.is_set || is_set(ceqfputiltimeinterval.operation)) leaf_name_data.push_back(ceqfputiltimeinterval.get_name_leafdata());
    if (ceqfputilinputnonprioritybitrate.is_set || is_set(ceqfputilinputnonprioritybitrate.operation)) leaf_name_data.push_back(ceqfputilinputnonprioritybitrate.get_name_leafdata());
    if (ceqfputilinputnonprioritypktrate.is_set || is_set(ceqfputilinputnonprioritypktrate.operation)) leaf_name_data.push_back(ceqfputilinputnonprioritypktrate.get_name_leafdata());
    if (ceqfputilinputprioritybitrate.is_set || is_set(ceqfputilinputprioritybitrate.operation)) leaf_name_data.push_back(ceqfputilinputprioritybitrate.get_name_leafdata());
    if (ceqfputilinputprioritypktrate.is_set || is_set(ceqfputilinputprioritypktrate.operation)) leaf_name_data.push_back(ceqfputilinputprioritypktrate.get_name_leafdata());
    if (ceqfputilinputtotalbitrate.is_set || is_set(ceqfputilinputtotalbitrate.operation)) leaf_name_data.push_back(ceqfputilinputtotalbitrate.get_name_leafdata());
    if (ceqfputilinputtotalpktrate.is_set || is_set(ceqfputilinputtotalpktrate.operation)) leaf_name_data.push_back(ceqfputilinputtotalpktrate.get_name_leafdata());
    if (ceqfputiloutputnonprioritybitrate.is_set || is_set(ceqfputiloutputnonprioritybitrate.operation)) leaf_name_data.push_back(ceqfputiloutputnonprioritybitrate.get_name_leafdata());
    if (ceqfputiloutputnonprioritypktrate.is_set || is_set(ceqfputiloutputnonprioritypktrate.operation)) leaf_name_data.push_back(ceqfputiloutputnonprioritypktrate.get_name_leafdata());
    if (ceqfputiloutputprioritybitrate.is_set || is_set(ceqfputiloutputprioritybitrate.operation)) leaf_name_data.push_back(ceqfputiloutputprioritybitrate.get_name_leafdata());
    if (ceqfputiloutputprioritypktrate.is_set || is_set(ceqfputiloutputprioritypktrate.operation)) leaf_name_data.push_back(ceqfputiloutputprioritypktrate.get_name_leafdata());
    if (ceqfputiloutputtotalbitrate.is_set || is_set(ceqfputiloutputtotalbitrate.operation)) leaf_name_data.push_back(ceqfputiloutputtotalbitrate.get_name_leafdata());
    if (ceqfputiloutputtotalpktrate.is_set || is_set(ceqfputiloutputtotalpktrate.operation)) leaf_name_data.push_back(ceqfputiloutputtotalpktrate.get_name_leafdata());
    if (ceqfputilprocessingload.is_set || is_set(ceqfputilprocessingload.operation)) leaf_name_data.push_back(ceqfputilprocessingload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceqfpUtilTimeInterval")
    {
        ceqfputiltimeinterval = value;
    }
    if(value_path == "ceqfpUtilInputNonPriorityBitRate")
    {
        ceqfputilinputnonprioritybitrate = value;
    }
    if(value_path == "ceqfpUtilInputNonPriorityPktRate")
    {
        ceqfputilinputnonprioritypktrate = value;
    }
    if(value_path == "ceqfpUtilInputPriorityBitRate")
    {
        ceqfputilinputprioritybitrate = value;
    }
    if(value_path == "ceqfpUtilInputPriorityPktRate")
    {
        ceqfputilinputprioritypktrate = value;
    }
    if(value_path == "ceqfpUtilInputTotalBitRate")
    {
        ceqfputilinputtotalbitrate = value;
    }
    if(value_path == "ceqfpUtilInputTotalPktRate")
    {
        ceqfputilinputtotalpktrate = value;
    }
    if(value_path == "ceqfpUtilOutputNonPriorityBitRate")
    {
        ceqfputiloutputnonprioritybitrate = value;
    }
    if(value_path == "ceqfpUtilOutputNonPriorityPktRate")
    {
        ceqfputiloutputnonprioritypktrate = value;
    }
    if(value_path == "ceqfpUtilOutputPriorityBitRate")
    {
        ceqfputiloutputprioritybitrate = value;
    }
    if(value_path == "ceqfpUtilOutputPriorityPktRate")
    {
        ceqfputiloutputprioritypktrate = value;
    }
    if(value_path == "ceqfpUtilOutputTotalBitRate")
    {
        ceqfputiloutputtotalbitrate = value;
    }
    if(value_path == "ceqfpUtilOutputTotalPktRate")
    {
        ceqfputiloutputtotalpktrate = value;
    }
    if(value_path == "ceqfpUtilProcessingLoad")
    {
        ceqfputilprocessingload = value;
    }
}

CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourcetable()
{
    yang_name = "ceqfpMemoryResourceTable"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::Ceqfpmemoryresourcetable::~Ceqfpmemoryresourcetable()
{
}

bool CiscoEntityQfpMib::Ceqfpmemoryresourcetable::has_data() const
{
    for (std::size_t index=0; index<ceqfpmemoryresourceentry_.size(); index++)
    {
        if(ceqfpmemoryresourceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfpmemoryresourcetable::has_operation() const
{
    for (std::size_t index=0; index<ceqfpmemoryresourceentry_.size(); index++)
    {
        if(ceqfpmemoryresourceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityQfpMib::Ceqfpmemoryresourcetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpMemoryResourceTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfpmemoryresourcetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfpmemoryresourcetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceqfpMemoryResourceEntry")
    {
        for(auto const & c : ceqfpmemoryresourceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry>();
        c->parent = this;
        ceqfpmemoryresourceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpmemoryresourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfpmemoryresourceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfpmemoryresourcetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::Ceqfpmemoryresourceentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceqfpmemoryrestype{YType::enumeration, "ceqfpMemoryResType"},
    ceqfpmemoryhcresfree{YType::uint64, "ceqfpMemoryHCResFree"},
    ceqfpmemoryhcresinuse{YType::uint64, "ceqfpMemoryHCResInUse"},
    ceqfpmemoryhcreslowfreewatermark{YType::uint64, "ceqfpMemoryHCResLowFreeWatermark"},
    ceqfpmemoryhcrestotal{YType::uint64, "ceqfpMemoryHCResTotal"},
    ceqfpmemoryresfallingthreshold{YType::uint32, "ceqfpMemoryResFallingThreshold"},
    ceqfpmemoryresfree{YType::uint32, "ceqfpMemoryResFree"},
    ceqfpmemoryresfreeovrflw{YType::uint32, "ceqfpMemoryResFreeOvrflw"},
    ceqfpmemoryresinuse{YType::uint32, "ceqfpMemoryResInUse"},
    ceqfpmemoryresinuseovrflw{YType::uint32, "ceqfpMemoryResInUseOvrflw"},
    ceqfpmemoryreslowfreewatermark{YType::uint32, "ceqfpMemoryResLowFreeWatermark"},
    ceqfpmemoryreslowfreewatermarkovrflw{YType::uint32, "ceqfpMemoryResLowFreeWatermarkOvrflw"},
    ceqfpmemoryresrisingthreshold{YType::uint32, "ceqfpMemoryResRisingThreshold"},
    ceqfpmemoryrestotal{YType::uint32, "ceqfpMemoryResTotal"},
    ceqfpmemoryrestotalovrflw{YType::uint32, "ceqfpMemoryResTotalOvrflw"}
{
    yang_name = "ceqfpMemoryResourceEntry"; yang_parent_name = "ceqfpMemoryResourceTable";
}

CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::~Ceqfpmemoryresourceentry()
{
}

bool CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceqfpmemoryrestype.is_set
	|| ceqfpmemoryhcresfree.is_set
	|| ceqfpmemoryhcresinuse.is_set
	|| ceqfpmemoryhcreslowfreewatermark.is_set
	|| ceqfpmemoryhcrestotal.is_set
	|| ceqfpmemoryresfallingthreshold.is_set
	|| ceqfpmemoryresfree.is_set
	|| ceqfpmemoryresfreeovrflw.is_set
	|| ceqfpmemoryresinuse.is_set
	|| ceqfpmemoryresinuseovrflw.is_set
	|| ceqfpmemoryreslowfreewatermark.is_set
	|| ceqfpmemoryreslowfreewatermarkovrflw.is_set
	|| ceqfpmemoryresrisingthreshold.is_set
	|| ceqfpmemoryrestotal.is_set
	|| ceqfpmemoryrestotalovrflw.is_set;
}

bool CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceqfpmemoryrestype.operation)
	|| is_set(ceqfpmemoryhcresfree.operation)
	|| is_set(ceqfpmemoryhcresinuse.operation)
	|| is_set(ceqfpmemoryhcreslowfreewatermark.operation)
	|| is_set(ceqfpmemoryhcrestotal.operation)
	|| is_set(ceqfpmemoryresfallingthreshold.operation)
	|| is_set(ceqfpmemoryresfree.operation)
	|| is_set(ceqfpmemoryresfreeovrflw.operation)
	|| is_set(ceqfpmemoryresinuse.operation)
	|| is_set(ceqfpmemoryresinuseovrflw.operation)
	|| is_set(ceqfpmemoryreslowfreewatermark.operation)
	|| is_set(ceqfpmemoryreslowfreewatermarkovrflw.operation)
	|| is_set(ceqfpmemoryresrisingthreshold.operation)
	|| is_set(ceqfpmemoryrestotal.operation)
	|| is_set(ceqfpmemoryrestotalovrflw.operation);
}

std::string CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpMemoryResourceEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[ceqfpMemoryResType='" <<ceqfpmemoryrestype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/ceqfpMemoryResourceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfpmemoryrestype.is_set || is_set(ceqfpmemoryrestype.operation)) leaf_name_data.push_back(ceqfpmemoryrestype.get_name_leafdata());
    if (ceqfpmemoryhcresfree.is_set || is_set(ceqfpmemoryhcresfree.operation)) leaf_name_data.push_back(ceqfpmemoryhcresfree.get_name_leafdata());
    if (ceqfpmemoryhcresinuse.is_set || is_set(ceqfpmemoryhcresinuse.operation)) leaf_name_data.push_back(ceqfpmemoryhcresinuse.get_name_leafdata());
    if (ceqfpmemoryhcreslowfreewatermark.is_set || is_set(ceqfpmemoryhcreslowfreewatermark.operation)) leaf_name_data.push_back(ceqfpmemoryhcreslowfreewatermark.get_name_leafdata());
    if (ceqfpmemoryhcrestotal.is_set || is_set(ceqfpmemoryhcrestotal.operation)) leaf_name_data.push_back(ceqfpmemoryhcrestotal.get_name_leafdata());
    if (ceqfpmemoryresfallingthreshold.is_set || is_set(ceqfpmemoryresfallingthreshold.operation)) leaf_name_data.push_back(ceqfpmemoryresfallingthreshold.get_name_leafdata());
    if (ceqfpmemoryresfree.is_set || is_set(ceqfpmemoryresfree.operation)) leaf_name_data.push_back(ceqfpmemoryresfree.get_name_leafdata());
    if (ceqfpmemoryresfreeovrflw.is_set || is_set(ceqfpmemoryresfreeovrflw.operation)) leaf_name_data.push_back(ceqfpmemoryresfreeovrflw.get_name_leafdata());
    if (ceqfpmemoryresinuse.is_set || is_set(ceqfpmemoryresinuse.operation)) leaf_name_data.push_back(ceqfpmemoryresinuse.get_name_leafdata());
    if (ceqfpmemoryresinuseovrflw.is_set || is_set(ceqfpmemoryresinuseovrflw.operation)) leaf_name_data.push_back(ceqfpmemoryresinuseovrflw.get_name_leafdata());
    if (ceqfpmemoryreslowfreewatermark.is_set || is_set(ceqfpmemoryreslowfreewatermark.operation)) leaf_name_data.push_back(ceqfpmemoryreslowfreewatermark.get_name_leafdata());
    if (ceqfpmemoryreslowfreewatermarkovrflw.is_set || is_set(ceqfpmemoryreslowfreewatermarkovrflw.operation)) leaf_name_data.push_back(ceqfpmemoryreslowfreewatermarkovrflw.get_name_leafdata());
    if (ceqfpmemoryresrisingthreshold.is_set || is_set(ceqfpmemoryresrisingthreshold.operation)) leaf_name_data.push_back(ceqfpmemoryresrisingthreshold.get_name_leafdata());
    if (ceqfpmemoryrestotal.is_set || is_set(ceqfpmemoryrestotal.operation)) leaf_name_data.push_back(ceqfpmemoryrestotal.get_name_leafdata());
    if (ceqfpmemoryrestotalovrflw.is_set || is_set(ceqfpmemoryrestotalovrflw.operation)) leaf_name_data.push_back(ceqfpmemoryrestotalovrflw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceqfpMemoryResType")
    {
        ceqfpmemoryrestype = value;
    }
    if(value_path == "ceqfpMemoryHCResFree")
    {
        ceqfpmemoryhcresfree = value;
    }
    if(value_path == "ceqfpMemoryHCResInUse")
    {
        ceqfpmemoryhcresinuse = value;
    }
    if(value_path == "ceqfpMemoryHCResLowFreeWatermark")
    {
        ceqfpmemoryhcreslowfreewatermark = value;
    }
    if(value_path == "ceqfpMemoryHCResTotal")
    {
        ceqfpmemoryhcrestotal = value;
    }
    if(value_path == "ceqfpMemoryResFallingThreshold")
    {
        ceqfpmemoryresfallingthreshold = value;
    }
    if(value_path == "ceqfpMemoryResFree")
    {
        ceqfpmemoryresfree = value;
    }
    if(value_path == "ceqfpMemoryResFreeOvrflw")
    {
        ceqfpmemoryresfreeovrflw = value;
    }
    if(value_path == "ceqfpMemoryResInUse")
    {
        ceqfpmemoryresinuse = value;
    }
    if(value_path == "ceqfpMemoryResInUseOvrflw")
    {
        ceqfpmemoryresinuseovrflw = value;
    }
    if(value_path == "ceqfpMemoryResLowFreeWatermark")
    {
        ceqfpmemoryreslowfreewatermark = value;
    }
    if(value_path == "ceqfpMemoryResLowFreeWatermarkOvrflw")
    {
        ceqfpmemoryreslowfreewatermarkovrflw = value;
    }
    if(value_path == "ceqfpMemoryResRisingThreshold")
    {
        ceqfpmemoryresrisingthreshold = value;
    }
    if(value_path == "ceqfpMemoryResTotal")
    {
        ceqfpmemoryrestotal = value;
    }
    if(value_path == "ceqfpMemoryResTotalOvrflw")
    {
        ceqfpmemoryrestotalovrflw = value;
    }
}

CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputtable()
{
    yang_name = "ceqfpThroughputTable"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::Ceqfpthroughputtable::~Ceqfpthroughputtable()
{
}

bool CiscoEntityQfpMib::Ceqfpthroughputtable::has_data() const
{
    for (std::size_t index=0; index<ceqfpthroughputentry_.size(); index++)
    {
        if(ceqfpthroughputentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfpthroughputtable::has_operation() const
{
    for (std::size_t index=0; index<ceqfpthroughputentry_.size(); index++)
    {
        if(ceqfpthroughputentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityQfpMib::Ceqfpthroughputtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpThroughputTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfpthroughputtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfpthroughputtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceqfpThroughputEntry")
    {
        for(auto const & c : ceqfpthroughputentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry>();
        c->parent = this;
        ceqfpthroughputentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpthroughputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfpthroughputentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfpthroughputtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::Ceqfpthroughputentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceqfpthroughputavgrate{YType::uint64, "ceqfpThroughputAvgRate"},
    ceqfpthroughputinterval{YType::int32, "ceqfpThroughputInterval"},
    ceqfpthroughputlevel{YType::enumeration, "ceqfpThroughputLevel"},
    ceqfpthroughputlicensedbw{YType::uint64, "ceqfpThroughputLicensedBW"},
    ceqfpthroughputthreshold{YType::int32, "ceqfpThroughputThreshold"}
{
    yang_name = "ceqfpThroughputEntry"; yang_parent_name = "ceqfpThroughputTable";
}

CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::~Ceqfpthroughputentry()
{
}

bool CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceqfpthroughputavgrate.is_set
	|| ceqfpthroughputinterval.is_set
	|| ceqfpthroughputlevel.is_set
	|| ceqfpthroughputlicensedbw.is_set
	|| ceqfpthroughputthreshold.is_set;
}

bool CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceqfpthroughputavgrate.operation)
	|| is_set(ceqfpthroughputinterval.operation)
	|| is_set(ceqfpthroughputlevel.operation)
	|| is_set(ceqfpthroughputlicensedbw.operation)
	|| is_set(ceqfpthroughputthreshold.operation);
}

std::string CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceqfpThroughputEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-QFP-MIB:CISCO-ENTITY-QFP-MIB/ceqfpThroughputTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfpthroughputavgrate.is_set || is_set(ceqfpthroughputavgrate.operation)) leaf_name_data.push_back(ceqfpthroughputavgrate.get_name_leafdata());
    if (ceqfpthroughputinterval.is_set || is_set(ceqfpthroughputinterval.operation)) leaf_name_data.push_back(ceqfpthroughputinterval.get_name_leafdata());
    if (ceqfpthroughputlevel.is_set || is_set(ceqfpthroughputlevel.operation)) leaf_name_data.push_back(ceqfpthroughputlevel.get_name_leafdata());
    if (ceqfpthroughputlicensedbw.is_set || is_set(ceqfpthroughputlicensedbw.operation)) leaf_name_data.push_back(ceqfpthroughputlicensedbw.get_name_leafdata());
    if (ceqfpthroughputthreshold.is_set || is_set(ceqfpthroughputthreshold.operation)) leaf_name_data.push_back(ceqfpthroughputthreshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceqfpThroughputAvgRate")
    {
        ceqfpthroughputavgrate = value;
    }
    if(value_path == "ceqfpThroughputInterval")
    {
        ceqfpthroughputinterval = value;
    }
    if(value_path == "ceqfpThroughputLevel")
    {
        ceqfpthroughputlevel = value;
    }
    if(value_path == "ceqfpThroughputLicensedBW")
    {
        ceqfpthroughputlicensedbw = value;
    }
    if(value_path == "ceqfpThroughputThreshold")
    {
        ceqfpthroughputthreshold = value;
    }
}

const Enum::YLeaf CiscoqfptimeintervalEnum::fiveSeconds {1, "fiveSeconds"};
const Enum::YLeaf CiscoqfptimeintervalEnum::oneMinute {2, "oneMinute"};
const Enum::YLeaf CiscoqfptimeintervalEnum::fiveMinutes {3, "fiveMinutes"};
const Enum::YLeaf CiscoqfptimeintervalEnum::sixtyMinutes {4, "sixtyMinutes"};

const Enum::YLeaf CiscoqfpmemoryresourceEnum::dram {1, "dram"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfpfivesecondutilalgoEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfpfivesecondutilalgoEnum::fiveSecSample {2, "fiveSecSample"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfponeminuteutilalgoEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfponeminuteutilalgoEnum::fiveSecSMA {2, "fiveSecSMA"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfpfiveminutesutilalgoEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfpfiveminutesutilalgoEnum::fiveSecSMA {2, "fiveSecSMA"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfpsixtyminutesutilalgoEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::CeqfpsixtyminutesutilalgoEnum::fiveSecSMA {2, "fiveSecSMA"};

const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemtrafficdirectionEnum::none {1, "none"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemtrafficdirectionEnum::ingress {2, "ingress"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemtrafficdirectionEnum::egress {3, "egress"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemtrafficdirectionEnum::both {4, "both"};

const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum::reset {2, "reset"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum::init {3, "init"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum::active {4, "active"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum::activeSolo {5, "activeSolo"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum::standby {6, "standby"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::CeqfpsystemstateEnum::hotStandby {7, "hotStandby"};

const Enum::YLeaf CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::CeqfpthroughputlevelEnum::normal {1, "normal"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::CeqfpthroughputlevelEnum::warning {2, "warning"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::CeqfpthroughputlevelEnum::exceed {3, "exceed"};


}
}

