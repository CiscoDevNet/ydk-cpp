
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_QFP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENTITY_QFP_MIB {

CiscoEntityQfpMib::CiscoEntityQfpMib()
    :
    ceqfpmemoryresourcetable(std::make_shared<CiscoEntityQfpMib::Ceqfpmemoryresourcetable>())
	,ceqfpsystemtable(std::make_shared<CiscoEntityQfpMib::Ceqfpsystemtable>())
	,ceqfpthroughputtable(std::make_shared<CiscoEntityQfpMib::Ceqfpthroughputtable>())
	,ceqfputilizationtable(std::make_shared<CiscoEntityQfpMib::Ceqfputilizationtable>())
	,ciscoentityqfp(std::make_shared<CiscoEntityQfpMib::Ciscoentityqfp>())
	,ciscoentityqfpnotif(std::make_shared<CiscoEntityQfpMib::Ciscoentityqfpnotif>())
{
    ceqfpmemoryresourcetable->parent = this;

    ceqfpsystemtable->parent = this;

    ceqfpthroughputtable->parent = this;

    ceqfputilizationtable->parent = this;

    ciscoentityqfp->parent = this;

    ciscoentityqfpnotif->parent = this;

    yang_name = "CISCO-ENTITY-QFP-MIB"; yang_parent_name = "CISCO-ENTITY-QFP-MIB";
}

CiscoEntityQfpMib::~CiscoEntityQfpMib()
{
}

bool CiscoEntityQfpMib::has_data() const
{
    return (ceqfpmemoryresourcetable !=  nullptr && ceqfpmemoryresourcetable->has_data())
	|| (ceqfpsystemtable !=  nullptr && ceqfpsystemtable->has_data())
	|| (ceqfpthroughputtable !=  nullptr && ceqfpthroughputtable->has_data())
	|| (ceqfputilizationtable !=  nullptr && ceqfputilizationtable->has_data())
	|| (ciscoentityqfp !=  nullptr && ciscoentityqfp->has_data())
	|| (ciscoentityqfpnotif !=  nullptr && ciscoentityqfpnotif->has_data());
}

bool CiscoEntityQfpMib::has_operation() const
{
    return is_set(yfilter)
	|| (ceqfpmemoryresourcetable !=  nullptr && ceqfpmemoryresourcetable->has_operation())
	|| (ceqfpsystemtable !=  nullptr && ceqfpsystemtable->has_operation())
	|| (ceqfpthroughputtable !=  nullptr && ceqfpthroughputtable->has_operation())
	|| (ceqfputilizationtable !=  nullptr && ceqfputilizationtable->has_operation())
	|| (ciscoentityqfp !=  nullptr && ciscoentityqfp->has_operation())
	|| (ciscoentityqfpnotif !=  nullptr && ciscoentityqfpnotif->has_operation());
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
        if(ceqfpmemoryresourcetable == nullptr)
        {
            ceqfpmemoryresourcetable = std::make_shared<CiscoEntityQfpMib::Ceqfpmemoryresourcetable>();
        }
        return ceqfpmemoryresourcetable;
    }

    if(child_yang_name == "ceqfpSystemTable")
    {
        if(ceqfpsystemtable == nullptr)
        {
            ceqfpsystemtable = std::make_shared<CiscoEntityQfpMib::Ceqfpsystemtable>();
        }
        return ceqfpsystemtable;
    }

    if(child_yang_name == "ceqfpThroughputTable")
    {
        if(ceqfpthroughputtable == nullptr)
        {
            ceqfpthroughputtable = std::make_shared<CiscoEntityQfpMib::Ceqfpthroughputtable>();
        }
        return ceqfpthroughputtable;
    }

    if(child_yang_name == "ceqfpUtilizationTable")
    {
        if(ceqfputilizationtable == nullptr)
        {
            ceqfputilizationtable = std::make_shared<CiscoEntityQfpMib::Ceqfputilizationtable>();
        }
        return ceqfputilizationtable;
    }

    if(child_yang_name == "ciscoEntityQfp")
    {
        if(ciscoentityqfp == nullptr)
        {
            ciscoentityqfp = std::make_shared<CiscoEntityQfpMib::Ciscoentityqfp>();
        }
        return ciscoentityqfp;
    }

    if(child_yang_name == "ciscoEntityQfpNotif")
    {
        if(ciscoentityqfpnotif == nullptr)
        {
            ciscoentityqfpnotif = std::make_shared<CiscoEntityQfpMib::Ciscoentityqfpnotif>();
        }
        return ciscoentityqfpnotif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceqfpmemoryresourcetable != nullptr)
    {
        children["ceqfpMemoryResourceTable"] = ceqfpmemoryresourcetable;
    }

    if(ceqfpsystemtable != nullptr)
    {
        children["ceqfpSystemTable"] = ceqfpsystemtable;
    }

    if(ceqfpthroughputtable != nullptr)
    {
        children["ceqfpThroughputTable"] = ceqfpthroughputtable;
    }

    if(ceqfputilizationtable != nullptr)
    {
        children["ceqfpUtilizationTable"] = ceqfputilizationtable;
    }

    if(ciscoentityqfp != nullptr)
    {
        children["ciscoEntityQfp"] = ciscoentityqfp;
    }

    if(ciscoentityqfpnotif != nullptr)
    {
        children["ciscoEntityQfpNotif"] = ciscoentityqfpnotif;
    }

    return children;
}

void CiscoEntityQfpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityQfpMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoEntityQfpMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEntityQfpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceqfpMemoryResourceTable" || name == "ceqfpSystemTable" || name == "ceqfpThroughputTable" || name == "ceqfpUtilizationTable" || name == "ciscoEntityQfp" || name == "ciscoEntityQfpNotif")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ceqfpfiveminutesutilalgo.yfilter)
	|| ydk::is_set(ceqfpfivesecondutilalgo.yfilter)
	|| ydk::is_set(ceqfponeminuteutilalgo.yfilter)
	|| ydk::is_set(ceqfpsixtyminutesutilalgo.yfilter);
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

    if (ceqfpfiveminutesutilalgo.is_set || is_set(ceqfpfiveminutesutilalgo.yfilter)) leaf_name_data.push_back(ceqfpfiveminutesutilalgo.get_name_leafdata());
    if (ceqfpfivesecondutilalgo.is_set || is_set(ceqfpfivesecondutilalgo.yfilter)) leaf_name_data.push_back(ceqfpfivesecondutilalgo.get_name_leafdata());
    if (ceqfponeminuteutilalgo.is_set || is_set(ceqfponeminuteutilalgo.yfilter)) leaf_name_data.push_back(ceqfponeminuteutilalgo.get_name_leafdata());
    if (ceqfpsixtyminutesutilalgo.is_set || is_set(ceqfpsixtyminutesutilalgo.yfilter)) leaf_name_data.push_back(ceqfpsixtyminutesutilalgo.get_name_leafdata());


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

void CiscoEntityQfpMib::Ciscoentityqfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceqfpFiveMinutesUtilAlgo")
    {
        ceqfpfiveminutesutilalgo = value;
        ceqfpfiveminutesutilalgo.value_namespace = name_space;
        ceqfpfiveminutesutilalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpFiveSecondUtilAlgo")
    {
        ceqfpfivesecondutilalgo = value;
        ceqfpfivesecondutilalgo.value_namespace = name_space;
        ceqfpfivesecondutilalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpOneMinuteUtilAlgo")
    {
        ceqfponeminuteutilalgo = value;
        ceqfponeminuteutilalgo.value_namespace = name_space;
        ceqfponeminuteutilalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpSixtyMinutesUtilAlgo")
    {
        ceqfpsixtyminutesutilalgo = value;
        ceqfpsixtyminutesutilalgo.value_namespace = name_space;
        ceqfpsixtyminutesutilalgo.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityQfpMib::Ciscoentityqfp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceqfpFiveMinutesUtilAlgo")
    {
        ceqfpfiveminutesutilalgo.yfilter = yfilter;
    }
    if(value_path == "ceqfpFiveSecondUtilAlgo")
    {
        ceqfpfivesecondutilalgo.yfilter = yfilter;
    }
    if(value_path == "ceqfpOneMinuteUtilAlgo")
    {
        ceqfponeminuteutilalgo.yfilter = yfilter;
    }
    if(value_path == "ceqfpSixtyMinutesUtilAlgo")
    {
        ceqfpsixtyminutesutilalgo.yfilter = yfilter;
    }
}

bool CiscoEntityQfpMib::Ciscoentityqfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceqfpFiveMinutesUtilAlgo" || name == "ceqfpFiveSecondUtilAlgo" || name == "ceqfpOneMinuteUtilAlgo" || name == "ceqfpSixtyMinutesUtilAlgo")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ceqfpmemoryresthreshnotifenabled.yfilter)
	|| ydk::is_set(ceqfpthroughputnotifenabled.yfilter);
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

    if (ceqfpmemoryresthreshnotifenabled.is_set || is_set(ceqfpmemoryresthreshnotifenabled.yfilter)) leaf_name_data.push_back(ceqfpmemoryresthreshnotifenabled.get_name_leafdata());
    if (ceqfpthroughputnotifenabled.is_set || is_set(ceqfpthroughputnotifenabled.yfilter)) leaf_name_data.push_back(ceqfpthroughputnotifenabled.get_name_leafdata());


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

void CiscoEntityQfpMib::Ciscoentityqfpnotif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceqfpMemoryResThreshNotifEnabled")
    {
        ceqfpmemoryresthreshnotifenabled = value;
        ceqfpmemoryresthreshnotifenabled.value_namespace = name_space;
        ceqfpmemoryresthreshnotifenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpThroughputNotifEnabled")
    {
        ceqfpthroughputnotifenabled = value;
        ceqfpthroughputnotifenabled.value_namespace = name_space;
        ceqfpthroughputnotifenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityQfpMib::Ciscoentityqfpnotif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceqfpMemoryResThreshNotifEnabled")
    {
        ceqfpmemoryresthreshnotifenabled.yfilter = yfilter;
    }
    if(value_path == "ceqfpThroughputNotifEnabled")
    {
        ceqfpthroughputnotifenabled.yfilter = yfilter;
    }
}

bool CiscoEntityQfpMib::Ciscoentityqfpnotif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceqfpMemoryResThreshNotifEnabled" || name == "ceqfpThroughputNotifEnabled")
        return true;
    return false;
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
    for (std::size_t index=0; index<ceqfpsystementry.size(); index++)
    {
        if(ceqfpsystementry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfpsystemtable::has_operation() const
{
    for (std::size_t index=0; index<ceqfpsystementry.size(); index++)
    {
        if(ceqfpsystementry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ceqfpsystementry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry>();
        c->parent = this;
        ceqfpsystementry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpsystemtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfpsystementry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfpsystemtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityQfpMib::Ceqfpsystemtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityQfpMib::Ceqfpsystemtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceqfpSystemEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceqfpnumbersystemloads.yfilter)
	|| ydk::is_set(ceqfpsystemlastloadtime.yfilter)
	|| ydk::is_set(ceqfpsystemstate.yfilter)
	|| ydk::is_set(ceqfpsystemtrafficdirection.yfilter);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfpnumbersystemloads.is_set || is_set(ceqfpnumbersystemloads.yfilter)) leaf_name_data.push_back(ceqfpnumbersystemloads.get_name_leafdata());
    if (ceqfpsystemlastloadtime.is_set || is_set(ceqfpsystemlastloadtime.yfilter)) leaf_name_data.push_back(ceqfpsystemlastloadtime.get_name_leafdata());
    if (ceqfpsystemstate.is_set || is_set(ceqfpsystemstate.yfilter)) leaf_name_data.push_back(ceqfpsystemstate.get_name_leafdata());
    if (ceqfpsystemtrafficdirection.is_set || is_set(ceqfpsystemtrafficdirection.yfilter)) leaf_name_data.push_back(ceqfpsystemtrafficdirection.get_name_leafdata());


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

void CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpNumberSystemLoads")
    {
        ceqfpnumbersystemloads = value;
        ceqfpnumbersystemloads.value_namespace = name_space;
        ceqfpnumbersystemloads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpSystemLastLoadTime")
    {
        ceqfpsystemlastloadtime = value;
        ceqfpsystemlastloadtime.value_namespace = name_space;
        ceqfpsystemlastloadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpSystemState")
    {
        ceqfpsystemstate = value;
        ceqfpsystemstate.value_namespace = name_space;
        ceqfpsystemstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpSystemTrafficDirection")
    {
        ceqfpsystemtrafficdirection = value;
        ceqfpsystemtrafficdirection.value_namespace = name_space;
        ceqfpsystemtrafficdirection.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceqfpNumberSystemLoads")
    {
        ceqfpnumbersystemloads.yfilter = yfilter;
    }
    if(value_path == "ceqfpSystemLastLoadTime")
    {
        ceqfpsystemlastloadtime.yfilter = yfilter;
    }
    if(value_path == "ceqfpSystemState")
    {
        ceqfpsystemstate.yfilter = yfilter;
    }
    if(value_path == "ceqfpSystemTrafficDirection")
    {
        ceqfpsystemtrafficdirection.yfilter = yfilter;
    }
}

bool CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceqfpNumberSystemLoads" || name == "ceqfpSystemLastLoadTime" || name == "ceqfpSystemState" || name == "ceqfpSystemTrafficDirection")
        return true;
    return false;
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
    for (std::size_t index=0; index<ceqfputilizationentry.size(); index++)
    {
        if(ceqfputilizationentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfputilizationtable::has_operation() const
{
    for (std::size_t index=0; index<ceqfputilizationentry.size(); index++)
    {
        if(ceqfputilizationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ceqfputilizationentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry>();
        c->parent = this;
        ceqfputilizationentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfputilizationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfputilizationentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfputilizationtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityQfpMib::Ceqfputilizationtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityQfpMib::Ceqfputilizationtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceqfpUtilizationEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceqfputiltimeinterval.yfilter)
	|| ydk::is_set(ceqfputilinputnonprioritybitrate.yfilter)
	|| ydk::is_set(ceqfputilinputnonprioritypktrate.yfilter)
	|| ydk::is_set(ceqfputilinputprioritybitrate.yfilter)
	|| ydk::is_set(ceqfputilinputprioritypktrate.yfilter)
	|| ydk::is_set(ceqfputilinputtotalbitrate.yfilter)
	|| ydk::is_set(ceqfputilinputtotalpktrate.yfilter)
	|| ydk::is_set(ceqfputiloutputnonprioritybitrate.yfilter)
	|| ydk::is_set(ceqfputiloutputnonprioritypktrate.yfilter)
	|| ydk::is_set(ceqfputiloutputprioritybitrate.yfilter)
	|| ydk::is_set(ceqfputiloutputprioritypktrate.yfilter)
	|| ydk::is_set(ceqfputiloutputtotalbitrate.yfilter)
	|| ydk::is_set(ceqfputiloutputtotalpktrate.yfilter)
	|| ydk::is_set(ceqfputilprocessingload.yfilter);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfputiltimeinterval.is_set || is_set(ceqfputiltimeinterval.yfilter)) leaf_name_data.push_back(ceqfputiltimeinterval.get_name_leafdata());
    if (ceqfputilinputnonprioritybitrate.is_set || is_set(ceqfputilinputnonprioritybitrate.yfilter)) leaf_name_data.push_back(ceqfputilinputnonprioritybitrate.get_name_leafdata());
    if (ceqfputilinputnonprioritypktrate.is_set || is_set(ceqfputilinputnonprioritypktrate.yfilter)) leaf_name_data.push_back(ceqfputilinputnonprioritypktrate.get_name_leafdata());
    if (ceqfputilinputprioritybitrate.is_set || is_set(ceqfputilinputprioritybitrate.yfilter)) leaf_name_data.push_back(ceqfputilinputprioritybitrate.get_name_leafdata());
    if (ceqfputilinputprioritypktrate.is_set || is_set(ceqfputilinputprioritypktrate.yfilter)) leaf_name_data.push_back(ceqfputilinputprioritypktrate.get_name_leafdata());
    if (ceqfputilinputtotalbitrate.is_set || is_set(ceqfputilinputtotalbitrate.yfilter)) leaf_name_data.push_back(ceqfputilinputtotalbitrate.get_name_leafdata());
    if (ceqfputilinputtotalpktrate.is_set || is_set(ceqfputilinputtotalpktrate.yfilter)) leaf_name_data.push_back(ceqfputilinputtotalpktrate.get_name_leafdata());
    if (ceqfputiloutputnonprioritybitrate.is_set || is_set(ceqfputiloutputnonprioritybitrate.yfilter)) leaf_name_data.push_back(ceqfputiloutputnonprioritybitrate.get_name_leafdata());
    if (ceqfputiloutputnonprioritypktrate.is_set || is_set(ceqfputiloutputnonprioritypktrate.yfilter)) leaf_name_data.push_back(ceqfputiloutputnonprioritypktrate.get_name_leafdata());
    if (ceqfputiloutputprioritybitrate.is_set || is_set(ceqfputiloutputprioritybitrate.yfilter)) leaf_name_data.push_back(ceqfputiloutputprioritybitrate.get_name_leafdata());
    if (ceqfputiloutputprioritypktrate.is_set || is_set(ceqfputiloutputprioritypktrate.yfilter)) leaf_name_data.push_back(ceqfputiloutputprioritypktrate.get_name_leafdata());
    if (ceqfputiloutputtotalbitrate.is_set || is_set(ceqfputiloutputtotalbitrate.yfilter)) leaf_name_data.push_back(ceqfputiloutputtotalbitrate.get_name_leafdata());
    if (ceqfputiloutputtotalpktrate.is_set || is_set(ceqfputiloutputtotalpktrate.yfilter)) leaf_name_data.push_back(ceqfputiloutputtotalpktrate.get_name_leafdata());
    if (ceqfputilprocessingload.is_set || is_set(ceqfputilprocessingload.yfilter)) leaf_name_data.push_back(ceqfputilprocessingload.get_name_leafdata());


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

void CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilTimeInterval")
    {
        ceqfputiltimeinterval = value;
        ceqfputiltimeinterval.value_namespace = name_space;
        ceqfputiltimeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilInputNonPriorityBitRate")
    {
        ceqfputilinputnonprioritybitrate = value;
        ceqfputilinputnonprioritybitrate.value_namespace = name_space;
        ceqfputilinputnonprioritybitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilInputNonPriorityPktRate")
    {
        ceqfputilinputnonprioritypktrate = value;
        ceqfputilinputnonprioritypktrate.value_namespace = name_space;
        ceqfputilinputnonprioritypktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilInputPriorityBitRate")
    {
        ceqfputilinputprioritybitrate = value;
        ceqfputilinputprioritybitrate.value_namespace = name_space;
        ceqfputilinputprioritybitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilInputPriorityPktRate")
    {
        ceqfputilinputprioritypktrate = value;
        ceqfputilinputprioritypktrate.value_namespace = name_space;
        ceqfputilinputprioritypktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilInputTotalBitRate")
    {
        ceqfputilinputtotalbitrate = value;
        ceqfputilinputtotalbitrate.value_namespace = name_space;
        ceqfputilinputtotalbitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilInputTotalPktRate")
    {
        ceqfputilinputtotalpktrate = value;
        ceqfputilinputtotalpktrate.value_namespace = name_space;
        ceqfputilinputtotalpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilOutputNonPriorityBitRate")
    {
        ceqfputiloutputnonprioritybitrate = value;
        ceqfputiloutputnonprioritybitrate.value_namespace = name_space;
        ceqfputiloutputnonprioritybitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilOutputNonPriorityPktRate")
    {
        ceqfputiloutputnonprioritypktrate = value;
        ceqfputiloutputnonprioritypktrate.value_namespace = name_space;
        ceqfputiloutputnonprioritypktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilOutputPriorityBitRate")
    {
        ceqfputiloutputprioritybitrate = value;
        ceqfputiloutputprioritybitrate.value_namespace = name_space;
        ceqfputiloutputprioritybitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilOutputPriorityPktRate")
    {
        ceqfputiloutputprioritypktrate = value;
        ceqfputiloutputprioritypktrate.value_namespace = name_space;
        ceqfputiloutputprioritypktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilOutputTotalBitRate")
    {
        ceqfputiloutputtotalbitrate = value;
        ceqfputiloutputtotalbitrate.value_namespace = name_space;
        ceqfputiloutputtotalbitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilOutputTotalPktRate")
    {
        ceqfputiloutputtotalpktrate = value;
        ceqfputiloutputtotalpktrate.value_namespace = name_space;
        ceqfputiloutputtotalpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpUtilProcessingLoad")
    {
        ceqfputilprocessingload = value;
        ceqfputilprocessingload.value_namespace = name_space;
        ceqfputilprocessingload.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilTimeInterval")
    {
        ceqfputiltimeinterval.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilInputNonPriorityBitRate")
    {
        ceqfputilinputnonprioritybitrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilInputNonPriorityPktRate")
    {
        ceqfputilinputnonprioritypktrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilInputPriorityBitRate")
    {
        ceqfputilinputprioritybitrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilInputPriorityPktRate")
    {
        ceqfputilinputprioritypktrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilInputTotalBitRate")
    {
        ceqfputilinputtotalbitrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilInputTotalPktRate")
    {
        ceqfputilinputtotalpktrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilOutputNonPriorityBitRate")
    {
        ceqfputiloutputnonprioritybitrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilOutputNonPriorityPktRate")
    {
        ceqfputiloutputnonprioritypktrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilOutputPriorityBitRate")
    {
        ceqfputiloutputprioritybitrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilOutputPriorityPktRate")
    {
        ceqfputiloutputprioritypktrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilOutputTotalBitRate")
    {
        ceqfputiloutputtotalbitrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilOutputTotalPktRate")
    {
        ceqfputiloutputtotalpktrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpUtilProcessingLoad")
    {
        ceqfputilprocessingload.yfilter = yfilter;
    }
}

bool CiscoEntityQfpMib::Ceqfputilizationtable::Ceqfputilizationentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceqfpUtilTimeInterval" || name == "ceqfpUtilInputNonPriorityBitRate" || name == "ceqfpUtilInputNonPriorityPktRate" || name == "ceqfpUtilInputPriorityBitRate" || name == "ceqfpUtilInputPriorityPktRate" || name == "ceqfpUtilInputTotalBitRate" || name == "ceqfpUtilInputTotalPktRate" || name == "ceqfpUtilOutputNonPriorityBitRate" || name == "ceqfpUtilOutputNonPriorityPktRate" || name == "ceqfpUtilOutputPriorityBitRate" || name == "ceqfpUtilOutputPriorityPktRate" || name == "ceqfpUtilOutputTotalBitRate" || name == "ceqfpUtilOutputTotalPktRate" || name == "ceqfpUtilProcessingLoad")
        return true;
    return false;
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
    for (std::size_t index=0; index<ceqfpmemoryresourceentry.size(); index++)
    {
        if(ceqfpmemoryresourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfpmemoryresourcetable::has_operation() const
{
    for (std::size_t index=0; index<ceqfpmemoryresourceentry.size(); index++)
    {
        if(ceqfpmemoryresourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ceqfpmemoryresourceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry>();
        c->parent = this;
        ceqfpmemoryresourceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpmemoryresourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfpmemoryresourceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfpmemoryresourcetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityQfpMib::Ceqfpmemoryresourcetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityQfpMib::Ceqfpmemoryresourcetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceqfpMemoryResourceEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceqfpmemoryrestype.yfilter)
	|| ydk::is_set(ceqfpmemoryhcresfree.yfilter)
	|| ydk::is_set(ceqfpmemoryhcresinuse.yfilter)
	|| ydk::is_set(ceqfpmemoryhcreslowfreewatermark.yfilter)
	|| ydk::is_set(ceqfpmemoryhcrestotal.yfilter)
	|| ydk::is_set(ceqfpmemoryresfallingthreshold.yfilter)
	|| ydk::is_set(ceqfpmemoryresfree.yfilter)
	|| ydk::is_set(ceqfpmemoryresfreeovrflw.yfilter)
	|| ydk::is_set(ceqfpmemoryresinuse.yfilter)
	|| ydk::is_set(ceqfpmemoryresinuseovrflw.yfilter)
	|| ydk::is_set(ceqfpmemoryreslowfreewatermark.yfilter)
	|| ydk::is_set(ceqfpmemoryreslowfreewatermarkovrflw.yfilter)
	|| ydk::is_set(ceqfpmemoryresrisingthreshold.yfilter)
	|| ydk::is_set(ceqfpmemoryrestotal.yfilter)
	|| ydk::is_set(ceqfpmemoryrestotalovrflw.yfilter);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfpmemoryrestype.is_set || is_set(ceqfpmemoryrestype.yfilter)) leaf_name_data.push_back(ceqfpmemoryrestype.get_name_leafdata());
    if (ceqfpmemoryhcresfree.is_set || is_set(ceqfpmemoryhcresfree.yfilter)) leaf_name_data.push_back(ceqfpmemoryhcresfree.get_name_leafdata());
    if (ceqfpmemoryhcresinuse.is_set || is_set(ceqfpmemoryhcresinuse.yfilter)) leaf_name_data.push_back(ceqfpmemoryhcresinuse.get_name_leafdata());
    if (ceqfpmemoryhcreslowfreewatermark.is_set || is_set(ceqfpmemoryhcreslowfreewatermark.yfilter)) leaf_name_data.push_back(ceqfpmemoryhcreslowfreewatermark.get_name_leafdata());
    if (ceqfpmemoryhcrestotal.is_set || is_set(ceqfpmemoryhcrestotal.yfilter)) leaf_name_data.push_back(ceqfpmemoryhcrestotal.get_name_leafdata());
    if (ceqfpmemoryresfallingthreshold.is_set || is_set(ceqfpmemoryresfallingthreshold.yfilter)) leaf_name_data.push_back(ceqfpmemoryresfallingthreshold.get_name_leafdata());
    if (ceqfpmemoryresfree.is_set || is_set(ceqfpmemoryresfree.yfilter)) leaf_name_data.push_back(ceqfpmemoryresfree.get_name_leafdata());
    if (ceqfpmemoryresfreeovrflw.is_set || is_set(ceqfpmemoryresfreeovrflw.yfilter)) leaf_name_data.push_back(ceqfpmemoryresfreeovrflw.get_name_leafdata());
    if (ceqfpmemoryresinuse.is_set || is_set(ceqfpmemoryresinuse.yfilter)) leaf_name_data.push_back(ceqfpmemoryresinuse.get_name_leafdata());
    if (ceqfpmemoryresinuseovrflw.is_set || is_set(ceqfpmemoryresinuseovrflw.yfilter)) leaf_name_data.push_back(ceqfpmemoryresinuseovrflw.get_name_leafdata());
    if (ceqfpmemoryreslowfreewatermark.is_set || is_set(ceqfpmemoryreslowfreewatermark.yfilter)) leaf_name_data.push_back(ceqfpmemoryreslowfreewatermark.get_name_leafdata());
    if (ceqfpmemoryreslowfreewatermarkovrflw.is_set || is_set(ceqfpmemoryreslowfreewatermarkovrflw.yfilter)) leaf_name_data.push_back(ceqfpmemoryreslowfreewatermarkovrflw.get_name_leafdata());
    if (ceqfpmemoryresrisingthreshold.is_set || is_set(ceqfpmemoryresrisingthreshold.yfilter)) leaf_name_data.push_back(ceqfpmemoryresrisingthreshold.get_name_leafdata());
    if (ceqfpmemoryrestotal.is_set || is_set(ceqfpmemoryrestotal.yfilter)) leaf_name_data.push_back(ceqfpmemoryrestotal.get_name_leafdata());
    if (ceqfpmemoryrestotalovrflw.is_set || is_set(ceqfpmemoryrestotalovrflw.yfilter)) leaf_name_data.push_back(ceqfpmemoryrestotalovrflw.get_name_leafdata());


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

void CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResType")
    {
        ceqfpmemoryrestype = value;
        ceqfpmemoryrestype.value_namespace = name_space;
        ceqfpmemoryrestype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryHCResFree")
    {
        ceqfpmemoryhcresfree = value;
        ceqfpmemoryhcresfree.value_namespace = name_space;
        ceqfpmemoryhcresfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryHCResInUse")
    {
        ceqfpmemoryhcresinuse = value;
        ceqfpmemoryhcresinuse.value_namespace = name_space;
        ceqfpmemoryhcresinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryHCResLowFreeWatermark")
    {
        ceqfpmemoryhcreslowfreewatermark = value;
        ceqfpmemoryhcreslowfreewatermark.value_namespace = name_space;
        ceqfpmemoryhcreslowfreewatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryHCResTotal")
    {
        ceqfpmemoryhcrestotal = value;
        ceqfpmemoryhcrestotal.value_namespace = name_space;
        ceqfpmemoryhcrestotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResFallingThreshold")
    {
        ceqfpmemoryresfallingthreshold = value;
        ceqfpmemoryresfallingthreshold.value_namespace = name_space;
        ceqfpmemoryresfallingthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResFree")
    {
        ceqfpmemoryresfree = value;
        ceqfpmemoryresfree.value_namespace = name_space;
        ceqfpmemoryresfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResFreeOvrflw")
    {
        ceqfpmemoryresfreeovrflw = value;
        ceqfpmemoryresfreeovrflw.value_namespace = name_space;
        ceqfpmemoryresfreeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResInUse")
    {
        ceqfpmemoryresinuse = value;
        ceqfpmemoryresinuse.value_namespace = name_space;
        ceqfpmemoryresinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResInUseOvrflw")
    {
        ceqfpmemoryresinuseovrflw = value;
        ceqfpmemoryresinuseovrflw.value_namespace = name_space;
        ceqfpmemoryresinuseovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResLowFreeWatermark")
    {
        ceqfpmemoryreslowfreewatermark = value;
        ceqfpmemoryreslowfreewatermark.value_namespace = name_space;
        ceqfpmemoryreslowfreewatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResLowFreeWatermarkOvrflw")
    {
        ceqfpmemoryreslowfreewatermarkovrflw = value;
        ceqfpmemoryreslowfreewatermarkovrflw.value_namespace = name_space;
        ceqfpmemoryreslowfreewatermarkovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResRisingThreshold")
    {
        ceqfpmemoryresrisingthreshold = value;
        ceqfpmemoryresrisingthreshold.value_namespace = name_space;
        ceqfpmemoryresrisingthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResTotal")
    {
        ceqfpmemoryrestotal = value;
        ceqfpmemoryrestotal.value_namespace = name_space;
        ceqfpmemoryrestotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpMemoryResTotalOvrflw")
    {
        ceqfpmemoryrestotalovrflw = value;
        ceqfpmemoryrestotalovrflw.value_namespace = name_space;
        ceqfpmemoryrestotalovrflw.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResType")
    {
        ceqfpmemoryrestype.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryHCResFree")
    {
        ceqfpmemoryhcresfree.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryHCResInUse")
    {
        ceqfpmemoryhcresinuse.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryHCResLowFreeWatermark")
    {
        ceqfpmemoryhcreslowfreewatermark.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryHCResTotal")
    {
        ceqfpmemoryhcrestotal.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResFallingThreshold")
    {
        ceqfpmemoryresfallingthreshold.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResFree")
    {
        ceqfpmemoryresfree.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResFreeOvrflw")
    {
        ceqfpmemoryresfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResInUse")
    {
        ceqfpmemoryresinuse.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResInUseOvrflw")
    {
        ceqfpmemoryresinuseovrflw.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResLowFreeWatermark")
    {
        ceqfpmemoryreslowfreewatermark.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResLowFreeWatermarkOvrflw")
    {
        ceqfpmemoryreslowfreewatermarkovrflw.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResRisingThreshold")
    {
        ceqfpmemoryresrisingthreshold.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResTotal")
    {
        ceqfpmemoryrestotal.yfilter = yfilter;
    }
    if(value_path == "ceqfpMemoryResTotalOvrflw")
    {
        ceqfpmemoryrestotalovrflw.yfilter = yfilter;
    }
}

bool CiscoEntityQfpMib::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceqfpMemoryResType" || name == "ceqfpMemoryHCResFree" || name == "ceqfpMemoryHCResInUse" || name == "ceqfpMemoryHCResLowFreeWatermark" || name == "ceqfpMemoryHCResTotal" || name == "ceqfpMemoryResFallingThreshold" || name == "ceqfpMemoryResFree" || name == "ceqfpMemoryResFreeOvrflw" || name == "ceqfpMemoryResInUse" || name == "ceqfpMemoryResInUseOvrflw" || name == "ceqfpMemoryResLowFreeWatermark" || name == "ceqfpMemoryResLowFreeWatermarkOvrflw" || name == "ceqfpMemoryResRisingThreshold" || name == "ceqfpMemoryResTotal" || name == "ceqfpMemoryResTotalOvrflw")
        return true;
    return false;
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
    for (std::size_t index=0; index<ceqfpthroughputentry.size(); index++)
    {
        if(ceqfpthroughputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityQfpMib::Ceqfpthroughputtable::has_operation() const
{
    for (std::size_t index=0; index<ceqfpthroughputentry.size(); index++)
    {
        if(ceqfpthroughputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ceqfpthroughputentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry>();
        c->parent = this;
        ceqfpthroughputentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityQfpMib::Ceqfpthroughputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceqfpthroughputentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityQfpMib::Ceqfpthroughputtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEntityQfpMib::Ceqfpthroughputtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEntityQfpMib::Ceqfpthroughputtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceqfpThroughputEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceqfpthroughputavgrate.yfilter)
	|| ydk::is_set(ceqfpthroughputinterval.yfilter)
	|| ydk::is_set(ceqfpthroughputlevel.yfilter)
	|| ydk::is_set(ceqfpthroughputlicensedbw.yfilter)
	|| ydk::is_set(ceqfpthroughputthreshold.yfilter);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceqfpthroughputavgrate.is_set || is_set(ceqfpthroughputavgrate.yfilter)) leaf_name_data.push_back(ceqfpthroughputavgrate.get_name_leafdata());
    if (ceqfpthroughputinterval.is_set || is_set(ceqfpthroughputinterval.yfilter)) leaf_name_data.push_back(ceqfpthroughputinterval.get_name_leafdata());
    if (ceqfpthroughputlevel.is_set || is_set(ceqfpthroughputlevel.yfilter)) leaf_name_data.push_back(ceqfpthroughputlevel.get_name_leafdata());
    if (ceqfpthroughputlicensedbw.is_set || is_set(ceqfpthroughputlicensedbw.yfilter)) leaf_name_data.push_back(ceqfpthroughputlicensedbw.get_name_leafdata());
    if (ceqfpthroughputthreshold.is_set || is_set(ceqfpthroughputthreshold.yfilter)) leaf_name_data.push_back(ceqfpthroughputthreshold.get_name_leafdata());


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

void CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpThroughputAvgRate")
    {
        ceqfpthroughputavgrate = value;
        ceqfpthroughputavgrate.value_namespace = name_space;
        ceqfpthroughputavgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpThroughputInterval")
    {
        ceqfpthroughputinterval = value;
        ceqfpthroughputinterval.value_namespace = name_space;
        ceqfpthroughputinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpThroughputLevel")
    {
        ceqfpthroughputlevel = value;
        ceqfpthroughputlevel.value_namespace = name_space;
        ceqfpthroughputlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpThroughputLicensedBW")
    {
        ceqfpthroughputlicensedbw = value;
        ceqfpthroughputlicensedbw.value_namespace = name_space;
        ceqfpthroughputlicensedbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceqfpThroughputThreshold")
    {
        ceqfpthroughputthreshold = value;
        ceqfpthroughputthreshold.value_namespace = name_space;
        ceqfpthroughputthreshold.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceqfpThroughputAvgRate")
    {
        ceqfpthroughputavgrate.yfilter = yfilter;
    }
    if(value_path == "ceqfpThroughputInterval")
    {
        ceqfpthroughputinterval.yfilter = yfilter;
    }
    if(value_path == "ceqfpThroughputLevel")
    {
        ceqfpthroughputlevel.yfilter = yfilter;
    }
    if(value_path == "ceqfpThroughputLicensedBW")
    {
        ceqfpthroughputlicensedbw.yfilter = yfilter;
    }
    if(value_path == "ceqfpThroughputThreshold")
    {
        ceqfpthroughputthreshold.yfilter = yfilter;
    }
}

bool CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceqfpThroughputAvgRate" || name == "ceqfpThroughputInterval" || name == "ceqfpThroughputLevel" || name == "ceqfpThroughputLicensedBW" || name == "ceqfpThroughputThreshold")
        return true;
    return false;
}

const Enum::YLeaf Ciscoqfpmemoryresource::dram {1, "dram"};

const Enum::YLeaf Ciscoqfptimeinterval::fiveSeconds {1, "fiveSeconds"};
const Enum::YLeaf Ciscoqfptimeinterval::oneMinute {2, "oneMinute"};
const Enum::YLeaf Ciscoqfptimeinterval::fiveMinutes {3, "fiveMinutes"};
const Enum::YLeaf Ciscoqfptimeinterval::sixtyMinutes {4, "sixtyMinutes"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfpfivesecondutilalgo::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfpfivesecondutilalgo::fiveSecSample {2, "fiveSecSample"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfponeminuteutilalgo::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfponeminuteutilalgo::fiveSecSMA {2, "fiveSecSMA"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfpfiveminutesutilalgo::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfpfiveminutesutilalgo::fiveSecSMA {2, "fiveSecSMA"};

const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfpsixtyminutesutilalgo::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ciscoentityqfp::Ceqfpsixtyminutesutilalgo::fiveSecSMA {2, "fiveSecSMA"};

const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemtrafficdirection::none {1, "none"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemtrafficdirection::ingress {2, "ingress"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemtrafficdirection::egress {3, "egress"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemtrafficdirection::both {4, "both"};

const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate::unknown {1, "unknown"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate::reset {2, "reset"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate::init {3, "init"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate::active {4, "active"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate::activeSolo {5, "activeSolo"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate::standby {6, "standby"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate::hotStandby {7, "hotStandby"};

const Enum::YLeaf CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::Ceqfpthroughputlevel::normal {1, "normal"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::Ceqfpthroughputlevel::warning {2, "warning"};
const Enum::YLeaf CiscoEntityQfpMib::Ceqfpthroughputtable::Ceqfpthroughputentry::Ceqfpthroughputlevel::exceed {3, "exceed"};


}
}

