
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "LLDP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace LLDP_MIB {

LldpMib::LldpMib()
    :
    lldpconfiguration(std::make_shared<LldpMib::Lldpconfiguration>())
	,lldplocalsystemdata(std::make_shared<LldpMib::Lldplocalsystemdata>())
	,lldplocmanaddrtable(std::make_shared<LldpMib::Lldplocmanaddrtable>())
	,lldplocporttable(std::make_shared<LldpMib::Lldplocporttable>())
	,lldpportconfigtable(std::make_shared<LldpMib::Lldpportconfigtable>())
	,lldpremmanaddrtable(std::make_shared<LldpMib::Lldpremmanaddrtable>())
	,lldpremorgdefinfotable(std::make_shared<LldpMib::Lldpremorgdefinfotable>())
	,lldpremtable(std::make_shared<LldpMib::Lldpremtable>())
	,lldpremunknowntlvtable(std::make_shared<LldpMib::Lldpremunknowntlvtable>())
	,lldpstatistics(std::make_shared<LldpMib::Lldpstatistics>())
	,lldpstatsrxporttable(std::make_shared<LldpMib::Lldpstatsrxporttable>())
	,lldpstatstxporttable(std::make_shared<LldpMib::Lldpstatstxporttable>())
{
    lldpconfiguration->parent = this;

    lldplocalsystemdata->parent = this;

    lldplocmanaddrtable->parent = this;

    lldplocporttable->parent = this;

    lldpportconfigtable->parent = this;

    lldpremmanaddrtable->parent = this;

    lldpremorgdefinfotable->parent = this;

    lldpremtable->parent = this;

    lldpremunknowntlvtable->parent = this;

    lldpstatistics->parent = this;

    lldpstatsrxporttable->parent = this;

    lldpstatstxporttable->parent = this;

    yang_name = "LLDP-MIB"; yang_parent_name = "LLDP-MIB";
}

LldpMib::~LldpMib()
{
}

bool LldpMib::has_data() const
{
    return (lldpconfiguration !=  nullptr && lldpconfiguration->has_data())
	|| (lldplocalsystemdata !=  nullptr && lldplocalsystemdata->has_data())
	|| (lldplocmanaddrtable !=  nullptr && lldplocmanaddrtable->has_data())
	|| (lldplocporttable !=  nullptr && lldplocporttable->has_data())
	|| (lldpportconfigtable !=  nullptr && lldpportconfigtable->has_data())
	|| (lldpremmanaddrtable !=  nullptr && lldpremmanaddrtable->has_data())
	|| (lldpremorgdefinfotable !=  nullptr && lldpremorgdefinfotable->has_data())
	|| (lldpremtable !=  nullptr && lldpremtable->has_data())
	|| (lldpremunknowntlvtable !=  nullptr && lldpremunknowntlvtable->has_data())
	|| (lldpstatistics !=  nullptr && lldpstatistics->has_data())
	|| (lldpstatsrxporttable !=  nullptr && lldpstatsrxporttable->has_data())
	|| (lldpstatstxporttable !=  nullptr && lldpstatstxporttable->has_data());
}

bool LldpMib::has_operation() const
{
    return is_set(yfilter)
	|| (lldpconfiguration !=  nullptr && lldpconfiguration->has_operation())
	|| (lldplocalsystemdata !=  nullptr && lldplocalsystemdata->has_operation())
	|| (lldplocmanaddrtable !=  nullptr && lldplocmanaddrtable->has_operation())
	|| (lldplocporttable !=  nullptr && lldplocporttable->has_operation())
	|| (lldpportconfigtable !=  nullptr && lldpportconfigtable->has_operation())
	|| (lldpremmanaddrtable !=  nullptr && lldpremmanaddrtable->has_operation())
	|| (lldpremorgdefinfotable !=  nullptr && lldpremorgdefinfotable->has_operation())
	|| (lldpremtable !=  nullptr && lldpremtable->has_operation())
	|| (lldpremunknowntlvtable !=  nullptr && lldpremunknowntlvtable->has_operation())
	|| (lldpstatistics !=  nullptr && lldpstatistics->has_operation())
	|| (lldpstatsrxporttable !=  nullptr && lldpstatsrxporttable->has_operation())
	|| (lldpstatstxporttable !=  nullptr && lldpstatstxporttable->has_operation());
}

std::string LldpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB";

    return path_buffer.str();

}

const EntityPath LldpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LldpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpConfiguration")
    {
        if(lldpconfiguration == nullptr)
        {
            lldpconfiguration = std::make_shared<LldpMib::Lldpconfiguration>();
        }
        return lldpconfiguration;
    }

    if(child_yang_name == "lldpLocalSystemData")
    {
        if(lldplocalsystemdata == nullptr)
        {
            lldplocalsystemdata = std::make_shared<LldpMib::Lldplocalsystemdata>();
        }
        return lldplocalsystemdata;
    }

    if(child_yang_name == "lldpLocManAddrTable")
    {
        if(lldplocmanaddrtable == nullptr)
        {
            lldplocmanaddrtable = std::make_shared<LldpMib::Lldplocmanaddrtable>();
        }
        return lldplocmanaddrtable;
    }

    if(child_yang_name == "lldpLocPortTable")
    {
        if(lldplocporttable == nullptr)
        {
            lldplocporttable = std::make_shared<LldpMib::Lldplocporttable>();
        }
        return lldplocporttable;
    }

    if(child_yang_name == "lldpPortConfigTable")
    {
        if(lldpportconfigtable == nullptr)
        {
            lldpportconfigtable = std::make_shared<LldpMib::Lldpportconfigtable>();
        }
        return lldpportconfigtable;
    }

    if(child_yang_name == "lldpRemManAddrTable")
    {
        if(lldpremmanaddrtable == nullptr)
        {
            lldpremmanaddrtable = std::make_shared<LldpMib::Lldpremmanaddrtable>();
        }
        return lldpremmanaddrtable;
    }

    if(child_yang_name == "lldpRemOrgDefInfoTable")
    {
        if(lldpremorgdefinfotable == nullptr)
        {
            lldpremorgdefinfotable = std::make_shared<LldpMib::Lldpremorgdefinfotable>();
        }
        return lldpremorgdefinfotable;
    }

    if(child_yang_name == "lldpRemTable")
    {
        if(lldpremtable == nullptr)
        {
            lldpremtable = std::make_shared<LldpMib::Lldpremtable>();
        }
        return lldpremtable;
    }

    if(child_yang_name == "lldpRemUnknownTLVTable")
    {
        if(lldpremunknowntlvtable == nullptr)
        {
            lldpremunknowntlvtable = std::make_shared<LldpMib::Lldpremunknowntlvtable>();
        }
        return lldpremunknowntlvtable;
    }

    if(child_yang_name == "lldpStatistics")
    {
        if(lldpstatistics == nullptr)
        {
            lldpstatistics = std::make_shared<LldpMib::Lldpstatistics>();
        }
        return lldpstatistics;
    }

    if(child_yang_name == "lldpStatsRxPortTable")
    {
        if(lldpstatsrxporttable == nullptr)
        {
            lldpstatsrxporttable = std::make_shared<LldpMib::Lldpstatsrxporttable>();
        }
        return lldpstatsrxporttable;
    }

    if(child_yang_name == "lldpStatsTxPortTable")
    {
        if(lldpstatstxporttable == nullptr)
        {
            lldpstatstxporttable = std::make_shared<LldpMib::Lldpstatstxporttable>();
        }
        return lldpstatstxporttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lldpconfiguration != nullptr)
    {
        children["lldpConfiguration"] = lldpconfiguration;
    }

    if(lldplocalsystemdata != nullptr)
    {
        children["lldpLocalSystemData"] = lldplocalsystemdata;
    }

    if(lldplocmanaddrtable != nullptr)
    {
        children["lldpLocManAddrTable"] = lldplocmanaddrtable;
    }

    if(lldplocporttable != nullptr)
    {
        children["lldpLocPortTable"] = lldplocporttable;
    }

    if(lldpportconfigtable != nullptr)
    {
        children["lldpPortConfigTable"] = lldpportconfigtable;
    }

    if(lldpremmanaddrtable != nullptr)
    {
        children["lldpRemManAddrTable"] = lldpremmanaddrtable;
    }

    if(lldpremorgdefinfotable != nullptr)
    {
        children["lldpRemOrgDefInfoTable"] = lldpremorgdefinfotable;
    }

    if(lldpremtable != nullptr)
    {
        children["lldpRemTable"] = lldpremtable;
    }

    if(lldpremunknowntlvtable != nullptr)
    {
        children["lldpRemUnknownTLVTable"] = lldpremunknowntlvtable;
    }

    if(lldpstatistics != nullptr)
    {
        children["lldpStatistics"] = lldpstatistics;
    }

    if(lldpstatsrxporttable != nullptr)
    {
        children["lldpStatsRxPortTable"] = lldpstatsrxporttable;
    }

    if(lldpstatstxporttable != nullptr)
    {
        children["lldpStatsTxPortTable"] = lldpstatstxporttable;
    }

    return children;
}

void LldpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LldpMib::clone_ptr() const
{
    return std::make_shared<LldpMib>();
}

std::string LldpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LldpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LldpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LldpMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool LldpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpConfiguration" || name == "lldpLocalSystemData" || name == "lldpLocManAddrTable" || name == "lldpLocPortTable" || name == "lldpPortConfigTable" || name == "lldpRemManAddrTable" || name == "lldpRemOrgDefInfoTable" || name == "lldpRemTable" || name == "lldpRemUnknownTLVTable" || name == "lldpStatistics" || name == "lldpStatsRxPortTable" || name == "lldpStatsTxPortTable")
        return true;
    return false;
}

LldpMib::Lldpconfiguration::Lldpconfiguration()
    :
    lldpmessagetxholdmultiplier{YType::int32, "lldpMessageTxHoldMultiplier"},
    lldpmessagetxinterval{YType::int32, "lldpMessageTxInterval"},
    lldpnotificationinterval{YType::int32, "lldpNotificationInterval"},
    lldpreinitdelay{YType::int32, "lldpReinitDelay"},
    lldptxdelay{YType::int32, "lldpTxDelay"}
{
    yang_name = "lldpConfiguration"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpconfiguration::~Lldpconfiguration()
{
}

bool LldpMib::Lldpconfiguration::has_data() const
{
    return lldpmessagetxholdmultiplier.is_set
	|| lldpmessagetxinterval.is_set
	|| lldpnotificationinterval.is_set
	|| lldpreinitdelay.is_set
	|| lldptxdelay.is_set;
}

bool LldpMib::Lldpconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpmessagetxholdmultiplier.yfilter)
	|| ydk::is_set(lldpmessagetxinterval.yfilter)
	|| ydk::is_set(lldpnotificationinterval.yfilter)
	|| ydk::is_set(lldpreinitdelay.yfilter)
	|| ydk::is_set(lldptxdelay.yfilter);
}

std::string LldpMib::Lldpconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpConfiguration";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpmessagetxholdmultiplier.is_set || is_set(lldpmessagetxholdmultiplier.yfilter)) leaf_name_data.push_back(lldpmessagetxholdmultiplier.get_name_leafdata());
    if (lldpmessagetxinterval.is_set || is_set(lldpmessagetxinterval.yfilter)) leaf_name_data.push_back(lldpmessagetxinterval.get_name_leafdata());
    if (lldpnotificationinterval.is_set || is_set(lldpnotificationinterval.yfilter)) leaf_name_data.push_back(lldpnotificationinterval.get_name_leafdata());
    if (lldpreinitdelay.is_set || is_set(lldpreinitdelay.yfilter)) leaf_name_data.push_back(lldpreinitdelay.get_name_leafdata());
    if (lldptxdelay.is_set || is_set(lldptxdelay.yfilter)) leaf_name_data.push_back(lldptxdelay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpMessageTxHoldMultiplier")
    {
        lldpmessagetxholdmultiplier = value;
        lldpmessagetxholdmultiplier.value_namespace = name_space;
        lldpmessagetxholdmultiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpMessageTxInterval")
    {
        lldpmessagetxinterval = value;
        lldpmessagetxinterval.value_namespace = name_space;
        lldpmessagetxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpNotificationInterval")
    {
        lldpnotificationinterval = value;
        lldpnotificationinterval.value_namespace = name_space;
        lldpnotificationinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpReinitDelay")
    {
        lldpreinitdelay = value;
        lldpreinitdelay.value_namespace = name_space;
        lldpreinitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpTxDelay")
    {
        lldptxdelay = value;
        lldptxdelay.value_namespace = name_space;
        lldptxdelay.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpMessageTxHoldMultiplier")
    {
        lldpmessagetxholdmultiplier.yfilter = yfilter;
    }
    if(value_path == "lldpMessageTxInterval")
    {
        lldpmessagetxinterval.yfilter = yfilter;
    }
    if(value_path == "lldpNotificationInterval")
    {
        lldpnotificationinterval.yfilter = yfilter;
    }
    if(value_path == "lldpReinitDelay")
    {
        lldpreinitdelay.yfilter = yfilter;
    }
    if(value_path == "lldpTxDelay")
    {
        lldptxdelay.yfilter = yfilter;
    }
}

bool LldpMib::Lldpconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpMessageTxHoldMultiplier" || name == "lldpMessageTxInterval" || name == "lldpNotificationInterval" || name == "lldpReinitDelay" || name == "lldpTxDelay")
        return true;
    return false;
}

LldpMib::Lldpstatistics::Lldpstatistics()
    :
    lldpstatsremtablesageouts{YType::uint32, "lldpStatsRemTablesAgeouts"},
    lldpstatsremtablesdeletes{YType::uint32, "lldpStatsRemTablesDeletes"},
    lldpstatsremtablesdrops{YType::uint32, "lldpStatsRemTablesDrops"},
    lldpstatsremtablesinserts{YType::uint32, "lldpStatsRemTablesInserts"},
    lldpstatsremtableslastchangetime{YType::uint32, "lldpStatsRemTablesLastChangeTime"}
{
    yang_name = "lldpStatistics"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpstatistics::~Lldpstatistics()
{
}

bool LldpMib::Lldpstatistics::has_data() const
{
    return lldpstatsremtablesageouts.is_set
	|| lldpstatsremtablesdeletes.is_set
	|| lldpstatsremtablesdrops.is_set
	|| lldpstatsremtablesinserts.is_set
	|| lldpstatsremtableslastchangetime.is_set;
}

bool LldpMib::Lldpstatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpstatsremtablesageouts.yfilter)
	|| ydk::is_set(lldpstatsremtablesdeletes.yfilter)
	|| ydk::is_set(lldpstatsremtablesdrops.yfilter)
	|| ydk::is_set(lldpstatsremtablesinserts.yfilter)
	|| ydk::is_set(lldpstatsremtableslastchangetime.yfilter);
}

std::string LldpMib::Lldpstatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatistics";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpstatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpstatsremtablesageouts.is_set || is_set(lldpstatsremtablesageouts.yfilter)) leaf_name_data.push_back(lldpstatsremtablesageouts.get_name_leafdata());
    if (lldpstatsremtablesdeletes.is_set || is_set(lldpstatsremtablesdeletes.yfilter)) leaf_name_data.push_back(lldpstatsremtablesdeletes.get_name_leafdata());
    if (lldpstatsremtablesdrops.is_set || is_set(lldpstatsremtablesdrops.yfilter)) leaf_name_data.push_back(lldpstatsremtablesdrops.get_name_leafdata());
    if (lldpstatsremtablesinserts.is_set || is_set(lldpstatsremtablesinserts.yfilter)) leaf_name_data.push_back(lldpstatsremtablesinserts.get_name_leafdata());
    if (lldpstatsremtableslastchangetime.is_set || is_set(lldpstatsremtableslastchangetime.yfilter)) leaf_name_data.push_back(lldpstatsremtableslastchangetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpstatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpstatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpstatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpStatsRemTablesAgeouts")
    {
        lldpstatsremtablesageouts = value;
        lldpstatsremtablesageouts.value_namespace = name_space;
        lldpstatsremtablesageouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRemTablesDeletes")
    {
        lldpstatsremtablesdeletes = value;
        lldpstatsremtablesdeletes.value_namespace = name_space;
        lldpstatsremtablesdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRemTablesDrops")
    {
        lldpstatsremtablesdrops = value;
        lldpstatsremtablesdrops.value_namespace = name_space;
        lldpstatsremtablesdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRemTablesInserts")
    {
        lldpstatsremtablesinserts = value;
        lldpstatsremtablesinserts.value_namespace = name_space;
        lldpstatsremtablesinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRemTablesLastChangeTime")
    {
        lldpstatsremtableslastchangetime = value;
        lldpstatsremtableslastchangetime.value_namespace = name_space;
        lldpstatsremtableslastchangetime.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpstatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpStatsRemTablesAgeouts")
    {
        lldpstatsremtablesageouts.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesDeletes")
    {
        lldpstatsremtablesdeletes.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesDrops")
    {
        lldpstatsremtablesdrops.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesInserts")
    {
        lldpstatsremtablesinserts.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesLastChangeTime")
    {
        lldpstatsremtableslastchangetime.yfilter = yfilter;
    }
}

bool LldpMib::Lldpstatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsRemTablesAgeouts" || name == "lldpStatsRemTablesDeletes" || name == "lldpStatsRemTablesDrops" || name == "lldpStatsRemTablesInserts" || name == "lldpStatsRemTablesLastChangeTime")
        return true;
    return false;
}

LldpMib::Lldplocalsystemdata::Lldplocalsystemdata()
    :
    lldplocchassisid{YType::str, "lldpLocChassisId"},
    lldplocchassisidsubtype{YType::enumeration, "lldpLocChassisIdSubtype"},
    lldplocsyscapenabled{YType::bits, "lldpLocSysCapEnabled"},
    lldplocsyscapsupported{YType::bits, "lldpLocSysCapSupported"},
    lldplocsysdesc{YType::str, "lldpLocSysDesc"},
    lldplocsysname{YType::str, "lldpLocSysName"}
{
    yang_name = "lldpLocalSystemData"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldplocalsystemdata::~Lldplocalsystemdata()
{
}

bool LldpMib::Lldplocalsystemdata::has_data() const
{
    return lldplocchassisid.is_set
	|| lldplocchassisidsubtype.is_set
	|| lldplocsyscapenabled.is_set
	|| lldplocsyscapsupported.is_set
	|| lldplocsysdesc.is_set
	|| lldplocsysname.is_set;
}

bool LldpMib::Lldplocalsystemdata::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldplocchassisid.yfilter)
	|| ydk::is_set(lldplocchassisidsubtype.yfilter)
	|| ydk::is_set(lldplocsyscapenabled.yfilter)
	|| ydk::is_set(lldplocsyscapsupported.yfilter)
	|| ydk::is_set(lldplocsysdesc.yfilter)
	|| ydk::is_set(lldplocsysname.yfilter);
}

std::string LldpMib::Lldplocalsystemdata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocalSystemData";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldplocalsystemdata::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldplocchassisid.is_set || is_set(lldplocchassisid.yfilter)) leaf_name_data.push_back(lldplocchassisid.get_name_leafdata());
    if (lldplocchassisidsubtype.is_set || is_set(lldplocchassisidsubtype.yfilter)) leaf_name_data.push_back(lldplocchassisidsubtype.get_name_leafdata());
    if (lldplocsyscapenabled.is_set || is_set(lldplocsyscapenabled.yfilter)) leaf_name_data.push_back(lldplocsyscapenabled.get_name_leafdata());
    if (lldplocsyscapsupported.is_set || is_set(lldplocsyscapsupported.yfilter)) leaf_name_data.push_back(lldplocsyscapsupported.get_name_leafdata());
    if (lldplocsysdesc.is_set || is_set(lldplocsysdesc.yfilter)) leaf_name_data.push_back(lldplocsysdesc.get_name_leafdata());
    if (lldplocsysname.is_set || is_set(lldplocsysname.yfilter)) leaf_name_data.push_back(lldplocsysname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldplocalsystemdata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldplocalsystemdata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldplocalsystemdata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpLocChassisId")
    {
        lldplocchassisid = value;
        lldplocchassisid.value_namespace = name_space;
        lldplocchassisid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocChassisIdSubtype")
    {
        lldplocchassisidsubtype = value;
        lldplocchassisidsubtype.value_namespace = name_space;
        lldplocchassisidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocSysCapEnabled")
    {
        lldplocsyscapenabled[value] = true;
    }
    if(value_path == "lldpLocSysCapSupported")
    {
        lldplocsyscapsupported[value] = true;
    }
    if(value_path == "lldpLocSysDesc")
    {
        lldplocsysdesc = value;
        lldplocsysdesc.value_namespace = name_space;
        lldplocsysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocSysName")
    {
        lldplocsysname = value;
        lldplocsysname.value_namespace = name_space;
        lldplocsysname.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldplocalsystemdata::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpLocChassisId")
    {
        lldplocchassisid.yfilter = yfilter;
    }
    if(value_path == "lldpLocChassisIdSubtype")
    {
        lldplocchassisidsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysCapEnabled")
    {
        lldplocsyscapenabled.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysCapSupported")
    {
        lldplocsyscapsupported.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysDesc")
    {
        lldplocsysdesc.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysName")
    {
        lldplocsysname.yfilter = yfilter;
    }
}

bool LldpMib::Lldplocalsystemdata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocChassisId" || name == "lldpLocChassisIdSubtype" || name == "lldpLocSysCapEnabled" || name == "lldpLocSysCapSupported" || name == "lldpLocSysDesc" || name == "lldpLocSysName")
        return true;
    return false;
}

LldpMib::Lldpportconfigtable::Lldpportconfigtable()
{
    yang_name = "lldpPortConfigTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpportconfigtable::~Lldpportconfigtable()
{
}

bool LldpMib::Lldpportconfigtable::has_data() const
{
    for (std::size_t index=0; index<lldpportconfigentry.size(); index++)
    {
        if(lldpportconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldpportconfigtable::has_operation() const
{
    for (std::size_t index=0; index<lldpportconfigentry.size(); index++)
    {
        if(lldpportconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldpportconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpPortConfigTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpportconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpportconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpPortConfigEntry")
    {
        for(auto const & c : lldpportconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldpportconfigtable::Lldpportconfigentry>();
        c->parent = this;
        lldpportconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpportconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldpportconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldpportconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldpportconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldpportconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpPortConfigEntry")
        return true;
    return false;
}

LldpMib::Lldpportconfigtable::Lldpportconfigentry::Lldpportconfigentry()
    :
    lldpportconfigportnum{YType::int32, "lldpPortConfigPortNum"},
    lldpportconfigadminstatus{YType::enumeration, "lldpPortConfigAdminStatus"},
    lldpportconfignotificationenable{YType::boolean, "lldpPortConfigNotificationEnable"},
    lldpportconfigtlvstxenable{YType::bits, "lldpPortConfigTLVsTxEnable"}
{
    yang_name = "lldpPortConfigEntry"; yang_parent_name = "lldpPortConfigTable";
}

LldpMib::Lldpportconfigtable::Lldpportconfigentry::~Lldpportconfigentry()
{
}

bool LldpMib::Lldpportconfigtable::Lldpportconfigentry::has_data() const
{
    return lldpportconfigportnum.is_set
	|| lldpportconfigadminstatus.is_set
	|| lldpportconfignotificationenable.is_set
	|| lldpportconfigtlvstxenable.is_set;
}

bool LldpMib::Lldpportconfigtable::Lldpportconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpportconfigportnum.yfilter)
	|| ydk::is_set(lldpportconfigadminstatus.yfilter)
	|| ydk::is_set(lldpportconfignotificationenable.yfilter)
	|| ydk::is_set(lldpportconfigtlvstxenable.yfilter);
}

std::string LldpMib::Lldpportconfigtable::Lldpportconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpPortConfigEntry" <<"[lldpPortConfigPortNum='" <<lldpportconfigportnum <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpportconfigtable::Lldpportconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpPortConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpportconfigportnum.is_set || is_set(lldpportconfigportnum.yfilter)) leaf_name_data.push_back(lldpportconfigportnum.get_name_leafdata());
    if (lldpportconfigadminstatus.is_set || is_set(lldpportconfigadminstatus.yfilter)) leaf_name_data.push_back(lldpportconfigadminstatus.get_name_leafdata());
    if (lldpportconfignotificationenable.is_set || is_set(lldpportconfignotificationenable.yfilter)) leaf_name_data.push_back(lldpportconfignotificationenable.get_name_leafdata());
    if (lldpportconfigtlvstxenable.is_set || is_set(lldpportconfigtlvstxenable.yfilter)) leaf_name_data.push_back(lldpportconfigtlvstxenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpportconfigtable::Lldpportconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpportconfigtable::Lldpportconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpportconfigtable::Lldpportconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpPortConfigPortNum")
    {
        lldpportconfigportnum = value;
        lldpportconfigportnum.value_namespace = name_space;
        lldpportconfigportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpPortConfigAdminStatus")
    {
        lldpportconfigadminstatus = value;
        lldpportconfigadminstatus.value_namespace = name_space;
        lldpportconfigadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpPortConfigNotificationEnable")
    {
        lldpportconfignotificationenable = value;
        lldpportconfignotificationenable.value_namespace = name_space;
        lldpportconfignotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpPortConfigTLVsTxEnable")
    {
        lldpportconfigtlvstxenable[value] = true;
    }
}

void LldpMib::Lldpportconfigtable::Lldpportconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpPortConfigPortNum")
    {
        lldpportconfigportnum.yfilter = yfilter;
    }
    if(value_path == "lldpPortConfigAdminStatus")
    {
        lldpportconfigadminstatus.yfilter = yfilter;
    }
    if(value_path == "lldpPortConfigNotificationEnable")
    {
        lldpportconfignotificationenable.yfilter = yfilter;
    }
    if(value_path == "lldpPortConfigTLVsTxEnable")
    {
        lldpportconfigtlvstxenable.yfilter = yfilter;
    }
}

bool LldpMib::Lldpportconfigtable::Lldpportconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpPortConfigPortNum" || name == "lldpPortConfigAdminStatus" || name == "lldpPortConfigNotificationEnable" || name == "lldpPortConfigTLVsTxEnable")
        return true;
    return false;
}

LldpMib::Lldpstatstxporttable::Lldpstatstxporttable()
{
    yang_name = "lldpStatsTxPortTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpstatstxporttable::~Lldpstatstxporttable()
{
}

bool LldpMib::Lldpstatstxporttable::has_data() const
{
    for (std::size_t index=0; index<lldpstatstxportentry.size(); index++)
    {
        if(lldpstatstxportentry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldpstatstxporttable::has_operation() const
{
    for (std::size_t index=0; index<lldpstatstxportentry.size(); index++)
    {
        if(lldpstatstxportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldpstatstxporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsTxPortTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpstatstxporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpstatstxporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpStatsTxPortEntry")
    {
        for(auto const & c : lldpstatstxportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldpstatstxporttable::Lldpstatstxportentry>();
        c->parent = this;
        lldpstatstxportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpstatstxporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldpstatstxportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldpstatstxporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldpstatstxporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldpstatstxporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsTxPortEntry")
        return true;
    return false;
}

LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::Lldpstatstxportentry()
    :
    lldpstatstxportnum{YType::int32, "lldpStatsTxPortNum"},
    lldpstatstxportframestotal{YType::uint32, "lldpStatsTxPortFramesTotal"}
{
    yang_name = "lldpStatsTxPortEntry"; yang_parent_name = "lldpStatsTxPortTable";
}

LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::~Lldpstatstxportentry()
{
}

bool LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::has_data() const
{
    return lldpstatstxportnum.is_set
	|| lldpstatstxportframestotal.is_set;
}

bool LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpstatstxportnum.yfilter)
	|| ydk::is_set(lldpstatstxportframestotal.yfilter);
}

std::string LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsTxPortEntry" <<"[lldpStatsTxPortNum='" <<lldpstatstxportnum <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpStatsTxPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpstatstxportnum.is_set || is_set(lldpstatstxportnum.yfilter)) leaf_name_data.push_back(lldpstatstxportnum.get_name_leafdata());
    if (lldpstatstxportframestotal.is_set || is_set(lldpstatstxportframestotal.yfilter)) leaf_name_data.push_back(lldpstatstxportframestotal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpStatsTxPortNum")
    {
        lldpstatstxportnum = value;
        lldpstatstxportnum.value_namespace = name_space;
        lldpstatstxportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsTxPortFramesTotal")
    {
        lldpstatstxportframestotal = value;
        lldpstatstxportframestotal.value_namespace = name_space;
        lldpstatstxportframestotal.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpStatsTxPortNum")
    {
        lldpstatstxportnum.yfilter = yfilter;
    }
    if(value_path == "lldpStatsTxPortFramesTotal")
    {
        lldpstatstxportframestotal.yfilter = yfilter;
    }
}

bool LldpMib::Lldpstatstxporttable::Lldpstatstxportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsTxPortNum" || name == "lldpStatsTxPortFramesTotal")
        return true;
    return false;
}

LldpMib::Lldpstatsrxporttable::Lldpstatsrxporttable()
{
    yang_name = "lldpStatsRxPortTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpstatsrxporttable::~Lldpstatsrxporttable()
{
}

bool LldpMib::Lldpstatsrxporttable::has_data() const
{
    for (std::size_t index=0; index<lldpstatsrxportentry.size(); index++)
    {
        if(lldpstatsrxportentry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldpstatsrxporttable::has_operation() const
{
    for (std::size_t index=0; index<lldpstatsrxportentry.size(); index++)
    {
        if(lldpstatsrxportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldpstatsrxporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsRxPortTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpstatsrxporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpstatsrxporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpStatsRxPortEntry")
    {
        for(auto const & c : lldpstatsrxportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry>();
        c->parent = this;
        lldpstatsrxportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpstatsrxporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldpstatsrxportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldpstatsrxporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldpstatsrxporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldpstatsrxporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsRxPortEntry")
        return true;
    return false;
}

LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::Lldpstatsrxportentry()
    :
    lldpstatsrxportnum{YType::int32, "lldpStatsRxPortNum"},
    lldpstatsrxportageoutstotal{YType::uint32, "lldpStatsRxPortAgeoutsTotal"},
    lldpstatsrxportframesdiscardedtotal{YType::uint32, "lldpStatsRxPortFramesDiscardedTotal"},
    lldpstatsrxportframeserrors{YType::uint32, "lldpStatsRxPortFramesErrors"},
    lldpstatsrxportframestotal{YType::uint32, "lldpStatsRxPortFramesTotal"},
    lldpstatsrxporttlvsdiscardedtotal{YType::uint32, "lldpStatsRxPortTLVsDiscardedTotal"},
    lldpstatsrxporttlvsunrecognizedtotal{YType::uint32, "lldpStatsRxPortTLVsUnrecognizedTotal"}
{
    yang_name = "lldpStatsRxPortEntry"; yang_parent_name = "lldpStatsRxPortTable";
}

LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::~Lldpstatsrxportentry()
{
}

bool LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::has_data() const
{
    return lldpstatsrxportnum.is_set
	|| lldpstatsrxportageoutstotal.is_set
	|| lldpstatsrxportframesdiscardedtotal.is_set
	|| lldpstatsrxportframeserrors.is_set
	|| lldpstatsrxportframestotal.is_set
	|| lldpstatsrxporttlvsdiscardedtotal.is_set
	|| lldpstatsrxporttlvsunrecognizedtotal.is_set;
}

bool LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpstatsrxportnum.yfilter)
	|| ydk::is_set(lldpstatsrxportageoutstotal.yfilter)
	|| ydk::is_set(lldpstatsrxportframesdiscardedtotal.yfilter)
	|| ydk::is_set(lldpstatsrxportframeserrors.yfilter)
	|| ydk::is_set(lldpstatsrxportframestotal.yfilter)
	|| ydk::is_set(lldpstatsrxporttlvsdiscardedtotal.yfilter)
	|| ydk::is_set(lldpstatsrxporttlvsunrecognizedtotal.yfilter);
}

std::string LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsRxPortEntry" <<"[lldpStatsRxPortNum='" <<lldpstatsrxportnum <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpStatsRxPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpstatsrxportnum.is_set || is_set(lldpstatsrxportnum.yfilter)) leaf_name_data.push_back(lldpstatsrxportnum.get_name_leafdata());
    if (lldpstatsrxportageoutstotal.is_set || is_set(lldpstatsrxportageoutstotal.yfilter)) leaf_name_data.push_back(lldpstatsrxportageoutstotal.get_name_leafdata());
    if (lldpstatsrxportframesdiscardedtotal.is_set || is_set(lldpstatsrxportframesdiscardedtotal.yfilter)) leaf_name_data.push_back(lldpstatsrxportframesdiscardedtotal.get_name_leafdata());
    if (lldpstatsrxportframeserrors.is_set || is_set(lldpstatsrxportframeserrors.yfilter)) leaf_name_data.push_back(lldpstatsrxportframeserrors.get_name_leafdata());
    if (lldpstatsrxportframestotal.is_set || is_set(lldpstatsrxportframestotal.yfilter)) leaf_name_data.push_back(lldpstatsrxportframestotal.get_name_leafdata());
    if (lldpstatsrxporttlvsdiscardedtotal.is_set || is_set(lldpstatsrxporttlvsdiscardedtotal.yfilter)) leaf_name_data.push_back(lldpstatsrxporttlvsdiscardedtotal.get_name_leafdata());
    if (lldpstatsrxporttlvsunrecognizedtotal.is_set || is_set(lldpstatsrxporttlvsunrecognizedtotal.yfilter)) leaf_name_data.push_back(lldpstatsrxporttlvsunrecognizedtotal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpStatsRxPortNum")
    {
        lldpstatsrxportnum = value;
        lldpstatsrxportnum.value_namespace = name_space;
        lldpstatsrxportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRxPortAgeoutsTotal")
    {
        lldpstatsrxportageoutstotal = value;
        lldpstatsrxportageoutstotal.value_namespace = name_space;
        lldpstatsrxportageoutstotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRxPortFramesDiscardedTotal")
    {
        lldpstatsrxportframesdiscardedtotal = value;
        lldpstatsrxportframesdiscardedtotal.value_namespace = name_space;
        lldpstatsrxportframesdiscardedtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRxPortFramesErrors")
    {
        lldpstatsrxportframeserrors = value;
        lldpstatsrxportframeserrors.value_namespace = name_space;
        lldpstatsrxportframeserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRxPortFramesTotal")
    {
        lldpstatsrxportframestotal = value;
        lldpstatsrxportframestotal.value_namespace = name_space;
        lldpstatsrxportframestotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRxPortTLVsDiscardedTotal")
    {
        lldpstatsrxporttlvsdiscardedtotal = value;
        lldpstatsrxporttlvsdiscardedtotal.value_namespace = name_space;
        lldpstatsrxporttlvsdiscardedtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRxPortTLVsUnrecognizedTotal")
    {
        lldpstatsrxporttlvsunrecognizedtotal = value;
        lldpstatsrxporttlvsunrecognizedtotal.value_namespace = name_space;
        lldpstatsrxporttlvsunrecognizedtotal.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpStatsRxPortNum")
    {
        lldpstatsrxportnum.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRxPortAgeoutsTotal")
    {
        lldpstatsrxportageoutstotal.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRxPortFramesDiscardedTotal")
    {
        lldpstatsrxportframesdiscardedtotal.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRxPortFramesErrors")
    {
        lldpstatsrxportframeserrors.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRxPortFramesTotal")
    {
        lldpstatsrxportframestotal.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRxPortTLVsDiscardedTotal")
    {
        lldpstatsrxporttlvsdiscardedtotal.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRxPortTLVsUnrecognizedTotal")
    {
        lldpstatsrxporttlvsunrecognizedtotal.yfilter = yfilter;
    }
}

bool LldpMib::Lldpstatsrxporttable::Lldpstatsrxportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsRxPortNum" || name == "lldpStatsRxPortAgeoutsTotal" || name == "lldpStatsRxPortFramesDiscardedTotal" || name == "lldpStatsRxPortFramesErrors" || name == "lldpStatsRxPortFramesTotal" || name == "lldpStatsRxPortTLVsDiscardedTotal" || name == "lldpStatsRxPortTLVsUnrecognizedTotal")
        return true;
    return false;
}

LldpMib::Lldplocporttable::Lldplocporttable()
{
    yang_name = "lldpLocPortTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldplocporttable::~Lldplocporttable()
{
}

bool LldpMib::Lldplocporttable::has_data() const
{
    for (std::size_t index=0; index<lldplocportentry.size(); index++)
    {
        if(lldplocportentry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldplocporttable::has_operation() const
{
    for (std::size_t index=0; index<lldplocportentry.size(); index++)
    {
        if(lldplocportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldplocporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocPortTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldplocporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldplocporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpLocPortEntry")
    {
        for(auto const & c : lldplocportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldplocporttable::Lldplocportentry>();
        c->parent = this;
        lldplocportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldplocporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldplocportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldplocporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldplocporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldplocporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocPortEntry")
        return true;
    return false;
}

LldpMib::Lldplocporttable::Lldplocportentry::Lldplocportentry()
    :
    lldplocportnum{YType::int32, "lldpLocPortNum"},
    lldplocportdesc{YType::str, "lldpLocPortDesc"},
    lldplocportid{YType::str, "lldpLocPortId"},
    lldplocportidsubtype{YType::enumeration, "lldpLocPortIdSubtype"}
{
    yang_name = "lldpLocPortEntry"; yang_parent_name = "lldpLocPortTable";
}

LldpMib::Lldplocporttable::Lldplocportentry::~Lldplocportentry()
{
}

bool LldpMib::Lldplocporttable::Lldplocportentry::has_data() const
{
    return lldplocportnum.is_set
	|| lldplocportdesc.is_set
	|| lldplocportid.is_set
	|| lldplocportidsubtype.is_set;
}

bool LldpMib::Lldplocporttable::Lldplocportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldplocportnum.yfilter)
	|| ydk::is_set(lldplocportdesc.yfilter)
	|| ydk::is_set(lldplocportid.yfilter)
	|| ydk::is_set(lldplocportidsubtype.yfilter);
}

std::string LldpMib::Lldplocporttable::Lldplocportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocPortEntry" <<"[lldpLocPortNum='" <<lldplocportnum <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldplocporttable::Lldplocportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpLocPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldplocportnum.is_set || is_set(lldplocportnum.yfilter)) leaf_name_data.push_back(lldplocportnum.get_name_leafdata());
    if (lldplocportdesc.is_set || is_set(lldplocportdesc.yfilter)) leaf_name_data.push_back(lldplocportdesc.get_name_leafdata());
    if (lldplocportid.is_set || is_set(lldplocportid.yfilter)) leaf_name_data.push_back(lldplocportid.get_name_leafdata());
    if (lldplocportidsubtype.is_set || is_set(lldplocportidsubtype.yfilter)) leaf_name_data.push_back(lldplocportidsubtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldplocporttable::Lldplocportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldplocporttable::Lldplocportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldplocporttable::Lldplocportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpLocPortNum")
    {
        lldplocportnum = value;
        lldplocportnum.value_namespace = name_space;
        lldplocportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocPortDesc")
    {
        lldplocportdesc = value;
        lldplocportdesc.value_namespace = name_space;
        lldplocportdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocPortId")
    {
        lldplocportid = value;
        lldplocportid.value_namespace = name_space;
        lldplocportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocPortIdSubtype")
    {
        lldplocportidsubtype = value;
        lldplocportidsubtype.value_namespace = name_space;
        lldplocportidsubtype.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldplocporttable::Lldplocportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpLocPortNum")
    {
        lldplocportnum.yfilter = yfilter;
    }
    if(value_path == "lldpLocPortDesc")
    {
        lldplocportdesc.yfilter = yfilter;
    }
    if(value_path == "lldpLocPortId")
    {
        lldplocportid.yfilter = yfilter;
    }
    if(value_path == "lldpLocPortIdSubtype")
    {
        lldplocportidsubtype.yfilter = yfilter;
    }
}

bool LldpMib::Lldplocporttable::Lldplocportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocPortNum" || name == "lldpLocPortDesc" || name == "lldpLocPortId" || name == "lldpLocPortIdSubtype")
        return true;
    return false;
}

LldpMib::Lldplocmanaddrtable::Lldplocmanaddrtable()
{
    yang_name = "lldpLocManAddrTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldplocmanaddrtable::~Lldplocmanaddrtable()
{
}

bool LldpMib::Lldplocmanaddrtable::has_data() const
{
    for (std::size_t index=0; index<lldplocmanaddrentry.size(); index++)
    {
        if(lldplocmanaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldplocmanaddrtable::has_operation() const
{
    for (std::size_t index=0; index<lldplocmanaddrentry.size(); index++)
    {
        if(lldplocmanaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldplocmanaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocManAddrTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldplocmanaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldplocmanaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpLocManAddrEntry")
    {
        for(auto const & c : lldplocmanaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry>();
        c->parent = this;
        lldplocmanaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldplocmanaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldplocmanaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldplocmanaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldplocmanaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldplocmanaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocManAddrEntry")
        return true;
    return false;
}

LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::Lldplocmanaddrentry()
    :
    lldplocmanaddrsubtype{YType::enumeration, "lldpLocManAddrSubtype"},
    lldplocmanaddr{YType::str, "lldpLocManAddr"},
    lldpconfigmanaddrportstxenable{YType::str, "lldpConfigManAddrPortsTxEnable"},
    lldplocmanaddrifid{YType::int32, "lldpLocManAddrIfId"},
    lldplocmanaddrifsubtype{YType::enumeration, "lldpLocManAddrIfSubtype"},
    lldplocmanaddrlen{YType::int32, "lldpLocManAddrLen"},
    lldplocmanaddroid{YType::str, "lldpLocManAddrOID"}
{
    yang_name = "lldpLocManAddrEntry"; yang_parent_name = "lldpLocManAddrTable";
}

LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::~Lldplocmanaddrentry()
{
}

bool LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::has_data() const
{
    return lldplocmanaddrsubtype.is_set
	|| lldplocmanaddr.is_set
	|| lldpconfigmanaddrportstxenable.is_set
	|| lldplocmanaddrifid.is_set
	|| lldplocmanaddrifsubtype.is_set
	|| lldplocmanaddrlen.is_set
	|| lldplocmanaddroid.is_set;
}

bool LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldplocmanaddrsubtype.yfilter)
	|| ydk::is_set(lldplocmanaddr.yfilter)
	|| ydk::is_set(lldpconfigmanaddrportstxenable.yfilter)
	|| ydk::is_set(lldplocmanaddrifid.yfilter)
	|| ydk::is_set(lldplocmanaddrifsubtype.yfilter)
	|| ydk::is_set(lldplocmanaddrlen.yfilter)
	|| ydk::is_set(lldplocmanaddroid.yfilter);
}

std::string LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocManAddrEntry" <<"[lldpLocManAddrSubtype='" <<lldplocmanaddrsubtype <<"']" <<"[lldpLocManAddr='" <<lldplocmanaddr <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpLocManAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldplocmanaddrsubtype.is_set || is_set(lldplocmanaddrsubtype.yfilter)) leaf_name_data.push_back(lldplocmanaddrsubtype.get_name_leafdata());
    if (lldplocmanaddr.is_set || is_set(lldplocmanaddr.yfilter)) leaf_name_data.push_back(lldplocmanaddr.get_name_leafdata());
    if (lldpconfigmanaddrportstxenable.is_set || is_set(lldpconfigmanaddrportstxenable.yfilter)) leaf_name_data.push_back(lldpconfigmanaddrportstxenable.get_name_leafdata());
    if (lldplocmanaddrifid.is_set || is_set(lldplocmanaddrifid.yfilter)) leaf_name_data.push_back(lldplocmanaddrifid.get_name_leafdata());
    if (lldplocmanaddrifsubtype.is_set || is_set(lldplocmanaddrifsubtype.yfilter)) leaf_name_data.push_back(lldplocmanaddrifsubtype.get_name_leafdata());
    if (lldplocmanaddrlen.is_set || is_set(lldplocmanaddrlen.yfilter)) leaf_name_data.push_back(lldplocmanaddrlen.get_name_leafdata());
    if (lldplocmanaddroid.is_set || is_set(lldplocmanaddroid.yfilter)) leaf_name_data.push_back(lldplocmanaddroid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpLocManAddrSubtype")
    {
        lldplocmanaddrsubtype = value;
        lldplocmanaddrsubtype.value_namespace = name_space;
        lldplocmanaddrsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddr")
    {
        lldplocmanaddr = value;
        lldplocmanaddr.value_namespace = name_space;
        lldplocmanaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpConfigManAddrPortsTxEnable")
    {
        lldpconfigmanaddrportstxenable = value;
        lldpconfigmanaddrportstxenable.value_namespace = name_space;
        lldpconfigmanaddrportstxenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddrIfId")
    {
        lldplocmanaddrifid = value;
        lldplocmanaddrifid.value_namespace = name_space;
        lldplocmanaddrifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddrIfSubtype")
    {
        lldplocmanaddrifsubtype = value;
        lldplocmanaddrifsubtype.value_namespace = name_space;
        lldplocmanaddrifsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddrLen")
    {
        lldplocmanaddrlen = value;
        lldplocmanaddrlen.value_namespace = name_space;
        lldplocmanaddrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddrOID")
    {
        lldplocmanaddroid = value;
        lldplocmanaddroid.value_namespace = name_space;
        lldplocmanaddroid.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpLocManAddrSubtype")
    {
        lldplocmanaddrsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddr")
    {
        lldplocmanaddr.yfilter = yfilter;
    }
    if(value_path == "lldpConfigManAddrPortsTxEnable")
    {
        lldpconfigmanaddrportstxenable.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrIfId")
    {
        lldplocmanaddrifid.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrIfSubtype")
    {
        lldplocmanaddrifsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrLen")
    {
        lldplocmanaddrlen.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrOID")
    {
        lldplocmanaddroid.yfilter = yfilter;
    }
}

bool LldpMib::Lldplocmanaddrtable::Lldplocmanaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocManAddrSubtype" || name == "lldpLocManAddr" || name == "lldpConfigManAddrPortsTxEnable" || name == "lldpLocManAddrIfId" || name == "lldpLocManAddrIfSubtype" || name == "lldpLocManAddrLen" || name == "lldpLocManAddrOID")
        return true;
    return false;
}

LldpMib::Lldpremtable::Lldpremtable()
{
    yang_name = "lldpRemTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpremtable::~Lldpremtable()
{
}

bool LldpMib::Lldpremtable::has_data() const
{
    for (std::size_t index=0; index<lldprementry.size(); index++)
    {
        if(lldprementry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldpremtable::has_operation() const
{
    for (std::size_t index=0; index<lldprementry.size(); index++)
    {
        if(lldprementry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldpremtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemEntry")
    {
        for(auto const & c : lldprementry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldpremtable::Lldprementry>();
        c->parent = this;
        lldprementry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldprementry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldpremtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldpremtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldpremtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemEntry")
        return true;
    return false;
}

LldpMib::Lldpremtable::Lldprementry::Lldprementry()
    :
    lldpremtimemark{YType::uint32, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::int32, "lldpRemLocalPortNum"},
    lldpremindex{YType::int32, "lldpRemIndex"},
    lldpremchassisid{YType::str, "lldpRemChassisId"},
    lldpremchassisidsubtype{YType::enumeration, "lldpRemChassisIdSubtype"},
    lldpremportdesc{YType::str, "lldpRemPortDesc"},
    lldpremportid{YType::str, "lldpRemPortId"},
    lldpremportidsubtype{YType::enumeration, "lldpRemPortIdSubtype"},
    lldpremsyscapenabled{YType::bits, "lldpRemSysCapEnabled"},
    lldpremsyscapsupported{YType::bits, "lldpRemSysCapSupported"},
    lldpremsysdesc{YType::str, "lldpRemSysDesc"},
    lldpremsysname{YType::str, "lldpRemSysName"}
{
    yang_name = "lldpRemEntry"; yang_parent_name = "lldpRemTable";
}

LldpMib::Lldpremtable::Lldprementry::~Lldprementry()
{
}

bool LldpMib::Lldpremtable::Lldprementry::has_data() const
{
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremchassisid.is_set
	|| lldpremchassisidsubtype.is_set
	|| lldpremportdesc.is_set
	|| lldpremportid.is_set
	|| lldpremportidsubtype.is_set
	|| lldpremsyscapenabled.is_set
	|| lldpremsyscapsupported.is_set
	|| lldpremsysdesc.is_set
	|| lldpremsysname.is_set;
}

bool LldpMib::Lldpremtable::Lldprementry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpremtimemark.yfilter)
	|| ydk::is_set(lldpremlocalportnum.yfilter)
	|| ydk::is_set(lldpremindex.yfilter)
	|| ydk::is_set(lldpremchassisid.yfilter)
	|| ydk::is_set(lldpremchassisidsubtype.yfilter)
	|| ydk::is_set(lldpremportdesc.yfilter)
	|| ydk::is_set(lldpremportid.yfilter)
	|| ydk::is_set(lldpremportidsubtype.yfilter)
	|| ydk::is_set(lldpremsyscapenabled.yfilter)
	|| ydk::is_set(lldpremsyscapsupported.yfilter)
	|| ydk::is_set(lldpremsysdesc.yfilter)
	|| ydk::is_set(lldpremsysname.yfilter);
}

std::string LldpMib::Lldpremtable::Lldprementry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemEntry" <<"[lldpRemTimeMark='" <<lldpremtimemark <<"']" <<"[lldpRemLocalPortNum='" <<lldpremlocalportnum <<"']" <<"[lldpRemIndex='" <<lldpremindex <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremtable::Lldprementry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremchassisid.is_set || is_set(lldpremchassisid.yfilter)) leaf_name_data.push_back(lldpremchassisid.get_name_leafdata());
    if (lldpremchassisidsubtype.is_set || is_set(lldpremchassisidsubtype.yfilter)) leaf_name_data.push_back(lldpremchassisidsubtype.get_name_leafdata());
    if (lldpremportdesc.is_set || is_set(lldpremportdesc.yfilter)) leaf_name_data.push_back(lldpremportdesc.get_name_leafdata());
    if (lldpremportid.is_set || is_set(lldpremportid.yfilter)) leaf_name_data.push_back(lldpremportid.get_name_leafdata());
    if (lldpremportidsubtype.is_set || is_set(lldpremportidsubtype.yfilter)) leaf_name_data.push_back(lldpremportidsubtype.get_name_leafdata());
    if (lldpremsyscapenabled.is_set || is_set(lldpremsyscapenabled.yfilter)) leaf_name_data.push_back(lldpremsyscapenabled.get_name_leafdata());
    if (lldpremsyscapsupported.is_set || is_set(lldpremsyscapsupported.yfilter)) leaf_name_data.push_back(lldpremsyscapsupported.get_name_leafdata());
    if (lldpremsysdesc.is_set || is_set(lldpremsysdesc.yfilter)) leaf_name_data.push_back(lldpremsysdesc.get_name_leafdata());
    if (lldpremsysname.is_set || is_set(lldpremsysname.yfilter)) leaf_name_data.push_back(lldpremsysname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremtable::Lldprementry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremtable::Lldprementry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpremtable::Lldprementry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark = value;
        lldpremtimemark.value_namespace = name_space;
        lldpremtimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum = value;
        lldpremlocalportnum.value_namespace = name_space;
        lldpremlocalportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex = value;
        lldpremindex.value_namespace = name_space;
        lldpremindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemChassisId")
    {
        lldpremchassisid = value;
        lldpremchassisid.value_namespace = name_space;
        lldpremchassisid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemChassisIdSubtype")
    {
        lldpremchassisidsubtype = value;
        lldpremchassisidsubtype.value_namespace = name_space;
        lldpremchassisidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemPortDesc")
    {
        lldpremportdesc = value;
        lldpremportdesc.value_namespace = name_space;
        lldpremportdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemPortId")
    {
        lldpremportid = value;
        lldpremportid.value_namespace = name_space;
        lldpremportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemPortIdSubtype")
    {
        lldpremportidsubtype = value;
        lldpremportidsubtype.value_namespace = name_space;
        lldpremportidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemSysCapEnabled")
    {
        lldpremsyscapenabled[value] = true;
    }
    if(value_path == "lldpRemSysCapSupported")
    {
        lldpremsyscapsupported[value] = true;
    }
    if(value_path == "lldpRemSysDesc")
    {
        lldpremsysdesc = value;
        lldpremsysdesc.value_namespace = name_space;
        lldpremsysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemSysName")
    {
        lldpremsysname = value;
        lldpremsysname.value_namespace = name_space;
        lldpremsysname.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpremtable::Lldprementry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark.yfilter = yfilter;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum.yfilter = yfilter;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex.yfilter = yfilter;
    }
    if(value_path == "lldpRemChassisId")
    {
        lldpremchassisid.yfilter = yfilter;
    }
    if(value_path == "lldpRemChassisIdSubtype")
    {
        lldpremchassisidsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemPortDesc")
    {
        lldpremportdesc.yfilter = yfilter;
    }
    if(value_path == "lldpRemPortId")
    {
        lldpremportid.yfilter = yfilter;
    }
    if(value_path == "lldpRemPortIdSubtype")
    {
        lldpremportidsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysCapEnabled")
    {
        lldpremsyscapenabled.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysCapSupported")
    {
        lldpremsyscapsupported.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysDesc")
    {
        lldpremsysdesc.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysName")
    {
        lldpremsysname.yfilter = yfilter;
    }
}

bool LldpMib::Lldpremtable::Lldprementry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemChassisId" || name == "lldpRemChassisIdSubtype" || name == "lldpRemPortDesc" || name == "lldpRemPortId" || name == "lldpRemPortIdSubtype" || name == "lldpRemSysCapEnabled" || name == "lldpRemSysCapSupported" || name == "lldpRemSysDesc" || name == "lldpRemSysName")
        return true;
    return false;
}

LldpMib::Lldpremmanaddrtable::Lldpremmanaddrtable()
{
    yang_name = "lldpRemManAddrTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpremmanaddrtable::~Lldpremmanaddrtable()
{
}

bool LldpMib::Lldpremmanaddrtable::has_data() const
{
    for (std::size_t index=0; index<lldpremmanaddrentry.size(); index++)
    {
        if(lldpremmanaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldpremmanaddrtable::has_operation() const
{
    for (std::size_t index=0; index<lldpremmanaddrentry.size(); index++)
    {
        if(lldpremmanaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldpremmanaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemManAddrTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremmanaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremmanaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemManAddrEntry")
    {
        for(auto const & c : lldpremmanaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry>();
        c->parent = this;
        lldpremmanaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremmanaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldpremmanaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldpremmanaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldpremmanaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldpremmanaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemManAddrEntry")
        return true;
    return false;
}

LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::Lldpremmanaddrentry()
    :
    lldpremtimemark{YType::str, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::str, "lldpRemLocalPortNum"},
    lldpremindex{YType::str, "lldpRemIndex"},
    lldpremmanaddrsubtype{YType::enumeration, "lldpRemManAddrSubtype"},
    lldpremmanaddr{YType::str, "lldpRemManAddr"},
    lldpremmanaddrifid{YType::int32, "lldpRemManAddrIfId"},
    lldpremmanaddrifsubtype{YType::enumeration, "lldpRemManAddrIfSubtype"},
    lldpremmanaddroid{YType::str, "lldpRemManAddrOID"}
{
    yang_name = "lldpRemManAddrEntry"; yang_parent_name = "lldpRemManAddrTable";
}

LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::~Lldpremmanaddrentry()
{
}

bool LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::has_data() const
{
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremmanaddrsubtype.is_set
	|| lldpremmanaddr.is_set
	|| lldpremmanaddrifid.is_set
	|| lldpremmanaddrifsubtype.is_set
	|| lldpremmanaddroid.is_set;
}

bool LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpremtimemark.yfilter)
	|| ydk::is_set(lldpremlocalportnum.yfilter)
	|| ydk::is_set(lldpremindex.yfilter)
	|| ydk::is_set(lldpremmanaddrsubtype.yfilter)
	|| ydk::is_set(lldpremmanaddr.yfilter)
	|| ydk::is_set(lldpremmanaddrifid.yfilter)
	|| ydk::is_set(lldpremmanaddrifsubtype.yfilter)
	|| ydk::is_set(lldpremmanaddroid.yfilter);
}

std::string LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemManAddrEntry" <<"[lldpRemTimeMark='" <<lldpremtimemark <<"']" <<"[lldpRemLocalPortNum='" <<lldpremlocalportnum <<"']" <<"[lldpRemIndex='" <<lldpremindex <<"']" <<"[lldpRemManAddrSubtype='" <<lldpremmanaddrsubtype <<"']" <<"[lldpRemManAddr='" <<lldpremmanaddr <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemManAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremmanaddrsubtype.is_set || is_set(lldpremmanaddrsubtype.yfilter)) leaf_name_data.push_back(lldpremmanaddrsubtype.get_name_leafdata());
    if (lldpremmanaddr.is_set || is_set(lldpremmanaddr.yfilter)) leaf_name_data.push_back(lldpremmanaddr.get_name_leafdata());
    if (lldpremmanaddrifid.is_set || is_set(lldpremmanaddrifid.yfilter)) leaf_name_data.push_back(lldpremmanaddrifid.get_name_leafdata());
    if (lldpremmanaddrifsubtype.is_set || is_set(lldpremmanaddrifsubtype.yfilter)) leaf_name_data.push_back(lldpremmanaddrifsubtype.get_name_leafdata());
    if (lldpremmanaddroid.is_set || is_set(lldpremmanaddroid.yfilter)) leaf_name_data.push_back(lldpremmanaddroid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark = value;
        lldpremtimemark.value_namespace = name_space;
        lldpremtimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum = value;
        lldpremlocalportnum.value_namespace = name_space;
        lldpremlocalportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex = value;
        lldpremindex.value_namespace = name_space;
        lldpremindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemManAddrSubtype")
    {
        lldpremmanaddrsubtype = value;
        lldpremmanaddrsubtype.value_namespace = name_space;
        lldpremmanaddrsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemManAddr")
    {
        lldpremmanaddr = value;
        lldpremmanaddr.value_namespace = name_space;
        lldpremmanaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemManAddrIfId")
    {
        lldpremmanaddrifid = value;
        lldpremmanaddrifid.value_namespace = name_space;
        lldpremmanaddrifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemManAddrIfSubtype")
    {
        lldpremmanaddrifsubtype = value;
        lldpremmanaddrifsubtype.value_namespace = name_space;
        lldpremmanaddrifsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemManAddrOID")
    {
        lldpremmanaddroid = value;
        lldpremmanaddroid.value_namespace = name_space;
        lldpremmanaddroid.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark.yfilter = yfilter;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum.yfilter = yfilter;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex.yfilter = yfilter;
    }
    if(value_path == "lldpRemManAddrSubtype")
    {
        lldpremmanaddrsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemManAddr")
    {
        lldpremmanaddr.yfilter = yfilter;
    }
    if(value_path == "lldpRemManAddrIfId")
    {
        lldpremmanaddrifid.yfilter = yfilter;
    }
    if(value_path == "lldpRemManAddrIfSubtype")
    {
        lldpremmanaddrifsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemManAddrOID")
    {
        lldpremmanaddroid.yfilter = yfilter;
    }
}

bool LldpMib::Lldpremmanaddrtable::Lldpremmanaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemManAddrSubtype" || name == "lldpRemManAddr" || name == "lldpRemManAddrIfId" || name == "lldpRemManAddrIfSubtype" || name == "lldpRemManAddrOID")
        return true;
    return false;
}

LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlvtable()
{
    yang_name = "lldpRemUnknownTLVTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpremunknowntlvtable::~Lldpremunknowntlvtable()
{
}

bool LldpMib::Lldpremunknowntlvtable::has_data() const
{
    for (std::size_t index=0; index<lldpremunknowntlventry.size(); index++)
    {
        if(lldpremunknowntlventry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldpremunknowntlvtable::has_operation() const
{
    for (std::size_t index=0; index<lldpremunknowntlventry.size(); index++)
    {
        if(lldpremunknowntlventry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldpremunknowntlvtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemUnknownTLVTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremunknowntlvtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremunknowntlvtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemUnknownTLVEntry")
    {
        for(auto const & c : lldpremunknowntlventry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry>();
        c->parent = this;
        lldpremunknowntlventry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremunknowntlvtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldpremunknowntlventry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldpremunknowntlvtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldpremunknowntlvtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldpremunknowntlvtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemUnknownTLVEntry")
        return true;
    return false;
}

LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::Lldpremunknowntlventry()
    :
    lldpremtimemark{YType::str, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::str, "lldpRemLocalPortNum"},
    lldpremindex{YType::str, "lldpRemIndex"},
    lldpremunknowntlvtype{YType::int32, "lldpRemUnknownTLVType"},
    lldpremunknowntlvinfo{YType::str, "lldpRemUnknownTLVInfo"}
{
    yang_name = "lldpRemUnknownTLVEntry"; yang_parent_name = "lldpRemUnknownTLVTable";
}

LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::~Lldpremunknowntlventry()
{
}

bool LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::has_data() const
{
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremunknowntlvtype.is_set
	|| lldpremunknowntlvinfo.is_set;
}

bool LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpremtimemark.yfilter)
	|| ydk::is_set(lldpremlocalportnum.yfilter)
	|| ydk::is_set(lldpremindex.yfilter)
	|| ydk::is_set(lldpremunknowntlvtype.yfilter)
	|| ydk::is_set(lldpremunknowntlvinfo.yfilter);
}

std::string LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemUnknownTLVEntry" <<"[lldpRemTimeMark='" <<lldpremtimemark <<"']" <<"[lldpRemLocalPortNum='" <<lldpremlocalportnum <<"']" <<"[lldpRemIndex='" <<lldpremindex <<"']" <<"[lldpRemUnknownTLVType='" <<lldpremunknowntlvtype <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemUnknownTLVTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremunknowntlvtype.is_set || is_set(lldpremunknowntlvtype.yfilter)) leaf_name_data.push_back(lldpremunknowntlvtype.get_name_leafdata());
    if (lldpremunknowntlvinfo.is_set || is_set(lldpremunknowntlvinfo.yfilter)) leaf_name_data.push_back(lldpremunknowntlvinfo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark = value;
        lldpremtimemark.value_namespace = name_space;
        lldpremtimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum = value;
        lldpremlocalportnum.value_namespace = name_space;
        lldpremlocalportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex = value;
        lldpremindex.value_namespace = name_space;
        lldpremindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemUnknownTLVType")
    {
        lldpremunknowntlvtype = value;
        lldpremunknowntlvtype.value_namespace = name_space;
        lldpremunknowntlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemUnknownTLVInfo")
    {
        lldpremunknowntlvinfo = value;
        lldpremunknowntlvinfo.value_namespace = name_space;
        lldpremunknowntlvinfo.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark.yfilter = yfilter;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum.yfilter = yfilter;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex.yfilter = yfilter;
    }
    if(value_path == "lldpRemUnknownTLVType")
    {
        lldpremunknowntlvtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemUnknownTLVInfo")
    {
        lldpremunknowntlvinfo.yfilter = yfilter;
    }
}

bool LldpMib::Lldpremunknowntlvtable::Lldpremunknowntlventry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemUnknownTLVType" || name == "lldpRemUnknownTLVInfo")
        return true;
    return false;
}

LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfotable()
{
    yang_name = "lldpRemOrgDefInfoTable"; yang_parent_name = "LLDP-MIB";
}

LldpMib::Lldpremorgdefinfotable::~Lldpremorgdefinfotable()
{
}

bool LldpMib::Lldpremorgdefinfotable::has_data() const
{
    for (std::size_t index=0; index<lldpremorgdefinfoentry.size(); index++)
    {
        if(lldpremorgdefinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpMib::Lldpremorgdefinfotable::has_operation() const
{
    for (std::size_t index=0; index<lldpremorgdefinfoentry.size(); index++)
    {
        if(lldpremorgdefinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LldpMib::Lldpremorgdefinfotable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemOrgDefInfoTable";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremorgdefinfotable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremorgdefinfotable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemOrgDefInfoEntry")
    {
        for(auto const & c : lldpremorgdefinfoentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry>();
        c->parent = this;
        lldpremorgdefinfoentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremorgdefinfotable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldpremorgdefinfoentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpMib::Lldpremorgdefinfotable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpMib::Lldpremorgdefinfotable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LldpMib::Lldpremorgdefinfotable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemOrgDefInfoEntry")
        return true;
    return false;
}

LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::Lldpremorgdefinfoentry()
    :
    lldpremtimemark{YType::str, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::str, "lldpRemLocalPortNum"},
    lldpremindex{YType::str, "lldpRemIndex"},
    lldpremorgdefinfooui{YType::str, "lldpRemOrgDefInfoOUI"},
    lldpremorgdefinfosubtype{YType::int32, "lldpRemOrgDefInfoSubtype"},
    lldpremorgdefinfoindex{YType::int32, "lldpRemOrgDefInfoIndex"},
    lldpremorgdefinfo{YType::str, "lldpRemOrgDefInfo"}
{
    yang_name = "lldpRemOrgDefInfoEntry"; yang_parent_name = "lldpRemOrgDefInfoTable";
}

LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::~Lldpremorgdefinfoentry()
{
}

bool LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::has_data() const
{
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremorgdefinfooui.is_set
	|| lldpremorgdefinfosubtype.is_set
	|| lldpremorgdefinfoindex.is_set
	|| lldpremorgdefinfo.is_set;
}

bool LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpremtimemark.yfilter)
	|| ydk::is_set(lldpremlocalportnum.yfilter)
	|| ydk::is_set(lldpremindex.yfilter)
	|| ydk::is_set(lldpremorgdefinfooui.yfilter)
	|| ydk::is_set(lldpremorgdefinfosubtype.yfilter)
	|| ydk::is_set(lldpremorgdefinfoindex.yfilter)
	|| ydk::is_set(lldpremorgdefinfo.yfilter);
}

std::string LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemOrgDefInfoEntry" <<"[lldpRemTimeMark='" <<lldpremtimemark <<"']" <<"[lldpRemLocalPortNum='" <<lldpremlocalportnum <<"']" <<"[lldpRemIndex='" <<lldpremindex <<"']" <<"[lldpRemOrgDefInfoOUI='" <<lldpremorgdefinfooui <<"']" <<"[lldpRemOrgDefInfoSubtype='" <<lldpremorgdefinfosubtype <<"']" <<"[lldpRemOrgDefInfoIndex='" <<lldpremorgdefinfoindex <<"']";

    return path_buffer.str();

}

const EntityPath LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemOrgDefInfoTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremorgdefinfooui.is_set || is_set(lldpremorgdefinfooui.yfilter)) leaf_name_data.push_back(lldpremorgdefinfooui.get_name_leafdata());
    if (lldpremorgdefinfosubtype.is_set || is_set(lldpremorgdefinfosubtype.yfilter)) leaf_name_data.push_back(lldpremorgdefinfosubtype.get_name_leafdata());
    if (lldpremorgdefinfoindex.is_set || is_set(lldpremorgdefinfoindex.yfilter)) leaf_name_data.push_back(lldpremorgdefinfoindex.get_name_leafdata());
    if (lldpremorgdefinfo.is_set || is_set(lldpremorgdefinfo.yfilter)) leaf_name_data.push_back(lldpremorgdefinfo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark = value;
        lldpremtimemark.value_namespace = name_space;
        lldpremtimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum = value;
        lldpremlocalportnum.value_namespace = name_space;
        lldpremlocalportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex = value;
        lldpremindex.value_namespace = name_space;
        lldpremindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemOrgDefInfoOUI")
    {
        lldpremorgdefinfooui = value;
        lldpremorgdefinfooui.value_namespace = name_space;
        lldpremorgdefinfooui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemOrgDefInfoSubtype")
    {
        lldpremorgdefinfosubtype = value;
        lldpremorgdefinfosubtype.value_namespace = name_space;
        lldpremorgdefinfosubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemOrgDefInfoIndex")
    {
        lldpremorgdefinfoindex = value;
        lldpremorgdefinfoindex.value_namespace = name_space;
        lldpremorgdefinfoindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemOrgDefInfo")
    {
        lldpremorgdefinfo = value;
        lldpremorgdefinfo.value_namespace = name_space;
        lldpremorgdefinfo.value_namespace_prefix = name_space_prefix;
    }
}

void LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpRemTimeMark")
    {
        lldpremtimemark.yfilter = yfilter;
    }
    if(value_path == "lldpRemLocalPortNum")
    {
        lldpremlocalportnum.yfilter = yfilter;
    }
    if(value_path == "lldpRemIndex")
    {
        lldpremindex.yfilter = yfilter;
    }
    if(value_path == "lldpRemOrgDefInfoOUI")
    {
        lldpremorgdefinfooui.yfilter = yfilter;
    }
    if(value_path == "lldpRemOrgDefInfoSubtype")
    {
        lldpremorgdefinfosubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemOrgDefInfoIndex")
    {
        lldpremorgdefinfoindex.yfilter = yfilter;
    }
    if(value_path == "lldpRemOrgDefInfo")
    {
        lldpremorgdefinfo.yfilter = yfilter;
    }
}

bool LldpMib::Lldpremorgdefinfotable::Lldpremorgdefinfoentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemOrgDefInfoOUI" || name == "lldpRemOrgDefInfoSubtype" || name == "lldpRemOrgDefInfoIndex" || name == "lldpRemOrgDefInfo")
        return true;
    return false;
}

const Enum::YLeaf Lldpchassisidsubtype::chassisComponent {1, "chassisComponent"};
const Enum::YLeaf Lldpchassisidsubtype::interfaceAlias {2, "interfaceAlias"};
const Enum::YLeaf Lldpchassisidsubtype::portComponent {3, "portComponent"};
const Enum::YLeaf Lldpchassisidsubtype::macAddress {4, "macAddress"};
const Enum::YLeaf Lldpchassisidsubtype::networkAddress {5, "networkAddress"};
const Enum::YLeaf Lldpchassisidsubtype::interfaceName {6, "interfaceName"};
const Enum::YLeaf Lldpchassisidsubtype::local {7, "local"};

const Enum::YLeaf Lldpmanaddrifsubtype::unknown {1, "unknown"};
const Enum::YLeaf Lldpmanaddrifsubtype::ifIndex {2, "ifIndex"};
const Enum::YLeaf Lldpmanaddrifsubtype::systemPortNumber {3, "systemPortNumber"};

const Enum::YLeaf Lldpportidsubtype::interfaceAlias {1, "interfaceAlias"};
const Enum::YLeaf Lldpportidsubtype::portComponent {2, "portComponent"};
const Enum::YLeaf Lldpportidsubtype::macAddress {3, "macAddress"};
const Enum::YLeaf Lldpportidsubtype::networkAddress {4, "networkAddress"};
const Enum::YLeaf Lldpportidsubtype::interfaceName {5, "interfaceName"};
const Enum::YLeaf Lldpportidsubtype::agentCircuitId {6, "agentCircuitId"};
const Enum::YLeaf Lldpportidsubtype::local {7, "local"};

const Enum::YLeaf LldpMib::Lldpportconfigtable::Lldpportconfigentry::Lldpportconfigadminstatus::txOnly {1, "txOnly"};
const Enum::YLeaf LldpMib::Lldpportconfigtable::Lldpportconfigentry::Lldpportconfigadminstatus::rxOnly {2, "rxOnly"};
const Enum::YLeaf LldpMib::Lldpportconfigtable::Lldpportconfigentry::Lldpportconfigadminstatus::txAndRx {3, "txAndRx"};
const Enum::YLeaf LldpMib::Lldpportconfigtable::Lldpportconfigentry::Lldpportconfigadminstatus::disabled {4, "disabled"};


}
}

