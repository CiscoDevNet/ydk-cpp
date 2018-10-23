
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "LLDP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace LLDP_MIB {

LLDPMIB::LLDPMIB()
    :
    lldpconfiguration(std::make_shared<LLDPMIB::LldpConfiguration>())
    , lldpstatistics(std::make_shared<LLDPMIB::LldpStatistics>())
    , lldplocalsystemdata(std::make_shared<LLDPMIB::LldpLocalSystemData>())
    , lldpportconfigtable(std::make_shared<LLDPMIB::LldpPortConfigTable>())
    , lldpstatstxporttable(std::make_shared<LLDPMIB::LldpStatsTxPortTable>())
    , lldpstatsrxporttable(std::make_shared<LLDPMIB::LldpStatsRxPortTable>())
    , lldplocporttable(std::make_shared<LLDPMIB::LldpLocPortTable>())
    , lldplocmanaddrtable(std::make_shared<LLDPMIB::LldpLocManAddrTable>())
    , lldpremtable(std::make_shared<LLDPMIB::LldpRemTable>())
    , lldpremmanaddrtable(std::make_shared<LLDPMIB::LldpRemManAddrTable>())
    , lldpremunknowntlvtable(std::make_shared<LLDPMIB::LldpRemUnknownTLVTable>())
    , lldpremorgdefinfotable(std::make_shared<LLDPMIB::LldpRemOrgDefInfoTable>())
{
    lldpconfiguration->parent = this;
    lldpstatistics->parent = this;
    lldplocalsystemdata->parent = this;
    lldpportconfigtable->parent = this;
    lldpstatstxporttable->parent = this;
    lldpstatsrxporttable->parent = this;
    lldplocporttable->parent = this;
    lldplocmanaddrtable->parent = this;
    lldpremtable->parent = this;
    lldpremmanaddrtable->parent = this;
    lldpremunknowntlvtable->parent = this;
    lldpremorgdefinfotable->parent = this;

    yang_name = "LLDP-MIB"; yang_parent_name = "LLDP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

LLDPMIB::~LLDPMIB()
{
}

bool LLDPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (lldpconfiguration !=  nullptr && lldpconfiguration->has_data())
	|| (lldpstatistics !=  nullptr && lldpstatistics->has_data())
	|| (lldplocalsystemdata !=  nullptr && lldplocalsystemdata->has_data())
	|| (lldpportconfigtable !=  nullptr && lldpportconfigtable->has_data())
	|| (lldpstatstxporttable !=  nullptr && lldpstatstxporttable->has_data())
	|| (lldpstatsrxporttable !=  nullptr && lldpstatsrxporttable->has_data())
	|| (lldplocporttable !=  nullptr && lldplocporttable->has_data())
	|| (lldplocmanaddrtable !=  nullptr && lldplocmanaddrtable->has_data())
	|| (lldpremtable !=  nullptr && lldpremtable->has_data())
	|| (lldpremmanaddrtable !=  nullptr && lldpremmanaddrtable->has_data())
	|| (lldpremunknowntlvtable !=  nullptr && lldpremunknowntlvtable->has_data())
	|| (lldpremorgdefinfotable !=  nullptr && lldpremorgdefinfotable->has_data());
}

bool LLDPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (lldpconfiguration !=  nullptr && lldpconfiguration->has_operation())
	|| (lldpstatistics !=  nullptr && lldpstatistics->has_operation())
	|| (lldplocalsystemdata !=  nullptr && lldplocalsystemdata->has_operation())
	|| (lldpportconfigtable !=  nullptr && lldpportconfigtable->has_operation())
	|| (lldpstatstxporttable !=  nullptr && lldpstatstxporttable->has_operation())
	|| (lldpstatsrxporttable !=  nullptr && lldpstatsrxporttable->has_operation())
	|| (lldplocporttable !=  nullptr && lldplocporttable->has_operation())
	|| (lldplocmanaddrtable !=  nullptr && lldplocmanaddrtable->has_operation())
	|| (lldpremtable !=  nullptr && lldpremtable->has_operation())
	|| (lldpremmanaddrtable !=  nullptr && lldpremmanaddrtable->has_operation())
	|| (lldpremunknowntlvtable !=  nullptr && lldpremunknowntlvtable->has_operation())
	|| (lldpremorgdefinfotable !=  nullptr && lldpremorgdefinfotable->has_operation());
}

std::string LLDPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpConfiguration")
    {
        if(lldpconfiguration == nullptr)
        {
            lldpconfiguration = std::make_shared<LLDPMIB::LldpConfiguration>();
        }
        return lldpconfiguration;
    }

    if(child_yang_name == "lldpStatistics")
    {
        if(lldpstatistics == nullptr)
        {
            lldpstatistics = std::make_shared<LLDPMIB::LldpStatistics>();
        }
        return lldpstatistics;
    }

    if(child_yang_name == "lldpLocalSystemData")
    {
        if(lldplocalsystemdata == nullptr)
        {
            lldplocalsystemdata = std::make_shared<LLDPMIB::LldpLocalSystemData>();
        }
        return lldplocalsystemdata;
    }

    if(child_yang_name == "lldpPortConfigTable")
    {
        if(lldpportconfigtable == nullptr)
        {
            lldpportconfigtable = std::make_shared<LLDPMIB::LldpPortConfigTable>();
        }
        return lldpportconfigtable;
    }

    if(child_yang_name == "lldpStatsTxPortTable")
    {
        if(lldpstatstxporttable == nullptr)
        {
            lldpstatstxporttable = std::make_shared<LLDPMIB::LldpStatsTxPortTable>();
        }
        return lldpstatstxporttable;
    }

    if(child_yang_name == "lldpStatsRxPortTable")
    {
        if(lldpstatsrxporttable == nullptr)
        {
            lldpstatsrxporttable = std::make_shared<LLDPMIB::LldpStatsRxPortTable>();
        }
        return lldpstatsrxporttable;
    }

    if(child_yang_name == "lldpLocPortTable")
    {
        if(lldplocporttable == nullptr)
        {
            lldplocporttable = std::make_shared<LLDPMIB::LldpLocPortTable>();
        }
        return lldplocporttable;
    }

    if(child_yang_name == "lldpLocManAddrTable")
    {
        if(lldplocmanaddrtable == nullptr)
        {
            lldplocmanaddrtable = std::make_shared<LLDPMIB::LldpLocManAddrTable>();
        }
        return lldplocmanaddrtable;
    }

    if(child_yang_name == "lldpRemTable")
    {
        if(lldpremtable == nullptr)
        {
            lldpremtable = std::make_shared<LLDPMIB::LldpRemTable>();
        }
        return lldpremtable;
    }

    if(child_yang_name == "lldpRemManAddrTable")
    {
        if(lldpremmanaddrtable == nullptr)
        {
            lldpremmanaddrtable = std::make_shared<LLDPMIB::LldpRemManAddrTable>();
        }
        return lldpremmanaddrtable;
    }

    if(child_yang_name == "lldpRemUnknownTLVTable")
    {
        if(lldpremunknowntlvtable == nullptr)
        {
            lldpremunknowntlvtable = std::make_shared<LLDPMIB::LldpRemUnknownTLVTable>();
        }
        return lldpremunknowntlvtable;
    }

    if(child_yang_name == "lldpRemOrgDefInfoTable")
    {
        if(lldpremorgdefinfotable == nullptr)
        {
            lldpremorgdefinfotable = std::make_shared<LLDPMIB::LldpRemOrgDefInfoTable>();
        }
        return lldpremorgdefinfotable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lldpconfiguration != nullptr)
    {
        _children["lldpConfiguration"] = lldpconfiguration;
    }

    if(lldpstatistics != nullptr)
    {
        _children["lldpStatistics"] = lldpstatistics;
    }

    if(lldplocalsystemdata != nullptr)
    {
        _children["lldpLocalSystemData"] = lldplocalsystemdata;
    }

    if(lldpportconfigtable != nullptr)
    {
        _children["lldpPortConfigTable"] = lldpportconfigtable;
    }

    if(lldpstatstxporttable != nullptr)
    {
        _children["lldpStatsTxPortTable"] = lldpstatstxporttable;
    }

    if(lldpstatsrxporttable != nullptr)
    {
        _children["lldpStatsRxPortTable"] = lldpstatsrxporttable;
    }

    if(lldplocporttable != nullptr)
    {
        _children["lldpLocPortTable"] = lldplocporttable;
    }

    if(lldplocmanaddrtable != nullptr)
    {
        _children["lldpLocManAddrTable"] = lldplocmanaddrtable;
    }

    if(lldpremtable != nullptr)
    {
        _children["lldpRemTable"] = lldpremtable;
    }

    if(lldpremmanaddrtable != nullptr)
    {
        _children["lldpRemManAddrTable"] = lldpremmanaddrtable;
    }

    if(lldpremunknowntlvtable != nullptr)
    {
        _children["lldpRemUnknownTLVTable"] = lldpremunknowntlvtable;
    }

    if(lldpremorgdefinfotable != nullptr)
    {
        _children["lldpRemOrgDefInfoTable"] = lldpremorgdefinfotable;
    }

    return _children;
}

void LLDPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> LLDPMIB::clone_ptr() const
{
    return std::make_shared<LLDPMIB>();
}

std::string LLDPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LLDPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LLDPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LLDPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool LLDPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpConfiguration" || name == "lldpStatistics" || name == "lldpLocalSystemData" || name == "lldpPortConfigTable" || name == "lldpStatsTxPortTable" || name == "lldpStatsRxPortTable" || name == "lldpLocPortTable" || name == "lldpLocManAddrTable" || name == "lldpRemTable" || name == "lldpRemManAddrTable" || name == "lldpRemUnknownTLVTable" || name == "lldpRemOrgDefInfoTable")
        return true;
    return false;
}

LLDPMIB::LldpConfiguration::LldpConfiguration()
    :
    lldpmessagetxinterval{YType::int32, "lldpMessageTxInterval"},
    lldpmessagetxholdmultiplier{YType::int32, "lldpMessageTxHoldMultiplier"},
    lldpreinitdelay{YType::int32, "lldpReinitDelay"},
    lldptxdelay{YType::int32, "lldpTxDelay"},
    lldpnotificationinterval{YType::int32, "lldpNotificationInterval"}
{

    yang_name = "lldpConfiguration"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpConfiguration::~LldpConfiguration()
{
}

bool LLDPMIB::LldpConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return lldpmessagetxinterval.is_set
	|| lldpmessagetxholdmultiplier.is_set
	|| lldpreinitdelay.is_set
	|| lldptxdelay.is_set
	|| lldpnotificationinterval.is_set;
}

bool LLDPMIB::LldpConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpmessagetxinterval.yfilter)
	|| ydk::is_set(lldpmessagetxholdmultiplier.yfilter)
	|| ydk::is_set(lldpreinitdelay.yfilter)
	|| ydk::is_set(lldptxdelay.yfilter)
	|| ydk::is_set(lldpnotificationinterval.yfilter);
}

std::string LLDPMIB::LldpConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpConfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpmessagetxinterval.is_set || is_set(lldpmessagetxinterval.yfilter)) leaf_name_data.push_back(lldpmessagetxinterval.get_name_leafdata());
    if (lldpmessagetxholdmultiplier.is_set || is_set(lldpmessagetxholdmultiplier.yfilter)) leaf_name_data.push_back(lldpmessagetxholdmultiplier.get_name_leafdata());
    if (lldpreinitdelay.is_set || is_set(lldpreinitdelay.yfilter)) leaf_name_data.push_back(lldpreinitdelay.get_name_leafdata());
    if (lldptxdelay.is_set || is_set(lldptxdelay.yfilter)) leaf_name_data.push_back(lldptxdelay.get_name_leafdata());
    if (lldpnotificationinterval.is_set || is_set(lldpnotificationinterval.yfilter)) leaf_name_data.push_back(lldpnotificationinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpMessageTxInterval")
    {
        lldpmessagetxinterval = value;
        lldpmessagetxinterval.value_namespace = name_space;
        lldpmessagetxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpMessageTxHoldMultiplier")
    {
        lldpmessagetxholdmultiplier = value;
        lldpmessagetxholdmultiplier.value_namespace = name_space;
        lldpmessagetxholdmultiplier.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lldpNotificationInterval")
    {
        lldpnotificationinterval = value;
        lldpnotificationinterval.value_namespace = name_space;
        lldpnotificationinterval.value_namespace_prefix = name_space_prefix;
    }
}

void LLDPMIB::LldpConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpMessageTxInterval")
    {
        lldpmessagetxinterval.yfilter = yfilter;
    }
    if(value_path == "lldpMessageTxHoldMultiplier")
    {
        lldpmessagetxholdmultiplier.yfilter = yfilter;
    }
    if(value_path == "lldpReinitDelay")
    {
        lldpreinitdelay.yfilter = yfilter;
    }
    if(value_path == "lldpTxDelay")
    {
        lldptxdelay.yfilter = yfilter;
    }
    if(value_path == "lldpNotificationInterval")
    {
        lldpnotificationinterval.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpMessageTxInterval" || name == "lldpMessageTxHoldMultiplier" || name == "lldpReinitDelay" || name == "lldpTxDelay" || name == "lldpNotificationInterval")
        return true;
    return false;
}

LLDPMIB::LldpStatistics::LldpStatistics()
    :
    lldpstatsremtableslastchangetime{YType::uint32, "lldpStatsRemTablesLastChangeTime"},
    lldpstatsremtablesinserts{YType::uint32, "lldpStatsRemTablesInserts"},
    lldpstatsremtablesdeletes{YType::uint32, "lldpStatsRemTablesDeletes"},
    lldpstatsremtablesdrops{YType::uint32, "lldpStatsRemTablesDrops"},
    lldpstatsremtablesageouts{YType::uint32, "lldpStatsRemTablesAgeouts"}
{

    yang_name = "lldpStatistics"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpStatistics::~LldpStatistics()
{
}

bool LLDPMIB::LldpStatistics::has_data() const
{
    if (is_presence_container) return true;
    return lldpstatsremtableslastchangetime.is_set
	|| lldpstatsremtablesinserts.is_set
	|| lldpstatsremtablesdeletes.is_set
	|| lldpstatsremtablesdrops.is_set
	|| lldpstatsremtablesageouts.is_set;
}

bool LLDPMIB::LldpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpstatsremtableslastchangetime.yfilter)
	|| ydk::is_set(lldpstatsremtablesinserts.yfilter)
	|| ydk::is_set(lldpstatsremtablesdeletes.yfilter)
	|| ydk::is_set(lldpstatsremtablesdrops.yfilter)
	|| ydk::is_set(lldpstatsremtablesageouts.yfilter);
}

std::string LLDPMIB::LldpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpstatsremtableslastchangetime.is_set || is_set(lldpstatsremtableslastchangetime.yfilter)) leaf_name_data.push_back(lldpstatsremtableslastchangetime.get_name_leafdata());
    if (lldpstatsremtablesinserts.is_set || is_set(lldpstatsremtablesinserts.yfilter)) leaf_name_data.push_back(lldpstatsremtablesinserts.get_name_leafdata());
    if (lldpstatsremtablesdeletes.is_set || is_set(lldpstatsremtablesdeletes.yfilter)) leaf_name_data.push_back(lldpstatsremtablesdeletes.get_name_leafdata());
    if (lldpstatsremtablesdrops.is_set || is_set(lldpstatsremtablesdrops.yfilter)) leaf_name_data.push_back(lldpstatsremtablesdrops.get_name_leafdata());
    if (lldpstatsremtablesageouts.is_set || is_set(lldpstatsremtablesageouts.yfilter)) leaf_name_data.push_back(lldpstatsremtablesageouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpStatsRemTablesLastChangeTime")
    {
        lldpstatsremtableslastchangetime = value;
        lldpstatsremtableslastchangetime.value_namespace = name_space;
        lldpstatsremtableslastchangetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpStatsRemTablesInserts")
    {
        lldpstatsremtablesinserts = value;
        lldpstatsremtablesinserts.value_namespace = name_space;
        lldpstatsremtablesinserts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lldpStatsRemTablesAgeouts")
    {
        lldpstatsremtablesageouts = value;
        lldpstatsremtablesageouts.value_namespace = name_space;
        lldpstatsremtablesageouts.value_namespace_prefix = name_space_prefix;
    }
}

void LLDPMIB::LldpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpStatsRemTablesLastChangeTime")
    {
        lldpstatsremtableslastchangetime.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesInserts")
    {
        lldpstatsremtablesinserts.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesDeletes")
    {
        lldpstatsremtablesdeletes.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesDrops")
    {
        lldpstatsremtablesdrops.yfilter = yfilter;
    }
    if(value_path == "lldpStatsRemTablesAgeouts")
    {
        lldpstatsremtablesageouts.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsRemTablesLastChangeTime" || name == "lldpStatsRemTablesInserts" || name == "lldpStatsRemTablesDeletes" || name == "lldpStatsRemTablesDrops" || name == "lldpStatsRemTablesAgeouts")
        return true;
    return false;
}

LLDPMIB::LldpLocalSystemData::LldpLocalSystemData()
    :
    lldplocchassisidsubtype{YType::enumeration, "lldpLocChassisIdSubtype"},
    lldplocchassisid{YType::str, "lldpLocChassisId"},
    lldplocsysname{YType::str, "lldpLocSysName"},
    lldplocsysdesc{YType::str, "lldpLocSysDesc"},
    lldplocsyscapsupported{YType::bits, "lldpLocSysCapSupported"},
    lldplocsyscapenabled{YType::bits, "lldpLocSysCapEnabled"}
{

    yang_name = "lldpLocalSystemData"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpLocalSystemData::~LldpLocalSystemData()
{
}

bool LLDPMIB::LldpLocalSystemData::has_data() const
{
    if (is_presence_container) return true;
    return lldplocchassisidsubtype.is_set
	|| lldplocchassisid.is_set
	|| lldplocsysname.is_set
	|| lldplocsysdesc.is_set
	|| lldplocsyscapsupported.is_set
	|| lldplocsyscapenabled.is_set;
}

bool LLDPMIB::LldpLocalSystemData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldplocchassisidsubtype.yfilter)
	|| ydk::is_set(lldplocchassisid.yfilter)
	|| ydk::is_set(lldplocsysname.yfilter)
	|| ydk::is_set(lldplocsysdesc.yfilter)
	|| ydk::is_set(lldplocsyscapsupported.yfilter)
	|| ydk::is_set(lldplocsyscapenabled.yfilter);
}

std::string LLDPMIB::LldpLocalSystemData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpLocalSystemData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocalSystemData";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpLocalSystemData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldplocchassisidsubtype.is_set || is_set(lldplocchassisidsubtype.yfilter)) leaf_name_data.push_back(lldplocchassisidsubtype.get_name_leafdata());
    if (lldplocchassisid.is_set || is_set(lldplocchassisid.yfilter)) leaf_name_data.push_back(lldplocchassisid.get_name_leafdata());
    if (lldplocsysname.is_set || is_set(lldplocsysname.yfilter)) leaf_name_data.push_back(lldplocsysname.get_name_leafdata());
    if (lldplocsysdesc.is_set || is_set(lldplocsysdesc.yfilter)) leaf_name_data.push_back(lldplocsysdesc.get_name_leafdata());
    if (lldplocsyscapsupported.is_set || is_set(lldplocsyscapsupported.yfilter)) leaf_name_data.push_back(lldplocsyscapsupported.get_name_leafdata());
    if (lldplocsyscapenabled.is_set || is_set(lldplocsyscapenabled.yfilter)) leaf_name_data.push_back(lldplocsyscapenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpLocalSystemData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpLocalSystemData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpLocalSystemData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpLocChassisIdSubtype")
    {
        lldplocchassisidsubtype = value;
        lldplocchassisidsubtype.value_namespace = name_space;
        lldplocchassisidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocChassisId")
    {
        lldplocchassisid = value;
        lldplocchassisid.value_namespace = name_space;
        lldplocchassisid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocSysName")
    {
        lldplocsysname = value;
        lldplocsysname.value_namespace = name_space;
        lldplocsysname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocSysDesc")
    {
        lldplocsysdesc = value;
        lldplocsysdesc.value_namespace = name_space;
        lldplocsysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocSysCapSupported")
    {
        lldplocsyscapsupported[value] = true;
    }
    if(value_path == "lldpLocSysCapEnabled")
    {
        lldplocsyscapenabled[value] = true;
    }
}

void LLDPMIB::LldpLocalSystemData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpLocChassisIdSubtype")
    {
        lldplocchassisidsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpLocChassisId")
    {
        lldplocchassisid.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysName")
    {
        lldplocsysname.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysDesc")
    {
        lldplocsysdesc.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysCapSupported")
    {
        lldplocsyscapsupported.yfilter = yfilter;
    }
    if(value_path == "lldpLocSysCapEnabled")
    {
        lldplocsyscapenabled.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpLocalSystemData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocChassisIdSubtype" || name == "lldpLocChassisId" || name == "lldpLocSysName" || name == "lldpLocSysDesc" || name == "lldpLocSysCapSupported" || name == "lldpLocSysCapEnabled")
        return true;
    return false;
}

LLDPMIB::LldpPortConfigTable::LldpPortConfigTable()
    :
    lldpportconfigentry(this, {"lldpportconfigportnum"})
{

    yang_name = "lldpPortConfigTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpPortConfigTable::~LldpPortConfigTable()
{
}

bool LLDPMIB::LldpPortConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldpportconfigentry.len(); index++)
    {
        if(lldpportconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpPortConfigTable::has_operation() const
{
    for (std::size_t index=0; index<lldpportconfigentry.len(); index++)
    {
        if(lldpportconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpPortConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpPortConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpPortConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpPortConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpPortConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpPortConfigEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry>();
        ent_->parent = this;
        lldpportconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpPortConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldpportconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpPortConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpPortConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpPortConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpPortConfigEntry")
        return true;
    return false;
}

LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::LldpPortConfigEntry()
    :
    lldpportconfigportnum{YType::int32, "lldpPortConfigPortNum"},
    lldpportconfigadminstatus{YType::enumeration, "lldpPortConfigAdminStatus"},
    lldpportconfignotificationenable{YType::boolean, "lldpPortConfigNotificationEnable"},
    lldpportconfigtlvstxenable{YType::bits, "lldpPortConfigTLVsTxEnable"}
{

    yang_name = "lldpPortConfigEntry"; yang_parent_name = "lldpPortConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::~LldpPortConfigEntry()
{
}

bool LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldpportconfigportnum.is_set
	|| lldpportconfigadminstatus.is_set
	|| lldpportconfignotificationenable.is_set
	|| lldpportconfigtlvstxenable.is_set;
}

bool LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpportconfigportnum.yfilter)
	|| ydk::is_set(lldpportconfigadminstatus.yfilter)
	|| ydk::is_set(lldpportconfignotificationenable.yfilter)
	|| ydk::is_set(lldpportconfigtlvstxenable.yfilter);
}

std::string LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpPortConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpPortConfigEntry";
    ADD_KEY_TOKEN(lldpportconfigportnum, "lldpPortConfigPortNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpportconfigportnum.is_set || is_set(lldpportconfigportnum.yfilter)) leaf_name_data.push_back(lldpportconfigportnum.get_name_leafdata());
    if (lldpportconfigadminstatus.is_set || is_set(lldpportconfigadminstatus.yfilter)) leaf_name_data.push_back(lldpportconfigadminstatus.get_name_leafdata());
    if (lldpportconfignotificationenable.is_set || is_set(lldpportconfignotificationenable.yfilter)) leaf_name_data.push_back(lldpportconfignotificationenable.get_name_leafdata());
    if (lldpportconfigtlvstxenable.is_set || is_set(lldpportconfigtlvstxenable.yfilter)) leaf_name_data.push_back(lldpportconfigtlvstxenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpPortConfigPortNum" || name == "lldpPortConfigAdminStatus" || name == "lldpPortConfigNotificationEnable" || name == "lldpPortConfigTLVsTxEnable")
        return true;
    return false;
}

LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortTable()
    :
    lldpstatstxportentry(this, {"lldpstatstxportnum"})
{

    yang_name = "lldpStatsTxPortTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpStatsTxPortTable::~LldpStatsTxPortTable()
{
}

bool LLDPMIB::LldpStatsTxPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldpstatstxportentry.len(); index++)
    {
        if(lldpstatstxportentry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpStatsTxPortTable::has_operation() const
{
    for (std::size_t index=0; index<lldpstatstxportentry.len(); index++)
    {
        if(lldpstatstxportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpStatsTxPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpStatsTxPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsTxPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpStatsTxPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpStatsTxPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpStatsTxPortEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry>();
        ent_->parent = this;
        lldpstatstxportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpStatsTxPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldpstatstxportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpStatsTxPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpStatsTxPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpStatsTxPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsTxPortEntry")
        return true;
    return false;
}

LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::LldpStatsTxPortEntry()
    :
    lldpstatstxportnum{YType::int32, "lldpStatsTxPortNum"},
    lldpstatstxportframestotal{YType::uint32, "lldpStatsTxPortFramesTotal"}
{

    yang_name = "lldpStatsTxPortEntry"; yang_parent_name = "lldpStatsTxPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::~LldpStatsTxPortEntry()
{
}

bool LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldpstatstxportnum.is_set
	|| lldpstatstxportframestotal.is_set;
}

bool LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpstatstxportnum.yfilter)
	|| ydk::is_set(lldpstatstxportframestotal.yfilter);
}

std::string LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpStatsTxPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsTxPortEntry";
    ADD_KEY_TOKEN(lldpstatstxportnum, "lldpStatsTxPortNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpstatstxportnum.is_set || is_set(lldpstatstxportnum.yfilter)) leaf_name_data.push_back(lldpstatstxportnum.get_name_leafdata());
    if (lldpstatstxportframestotal.is_set || is_set(lldpstatstxportframestotal.yfilter)) leaf_name_data.push_back(lldpstatstxportframestotal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LLDPMIB::LldpStatsTxPortTable::LldpStatsTxPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsTxPortNum" || name == "lldpStatsTxPortFramesTotal")
        return true;
    return false;
}

LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortTable()
    :
    lldpstatsrxportentry(this, {"lldpstatsrxportnum"})
{

    yang_name = "lldpStatsRxPortTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpStatsRxPortTable::~LldpStatsRxPortTable()
{
}

bool LLDPMIB::LldpStatsRxPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldpstatsrxportentry.len(); index++)
    {
        if(lldpstatsrxportentry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpStatsRxPortTable::has_operation() const
{
    for (std::size_t index=0; index<lldpstatsrxportentry.len(); index++)
    {
        if(lldpstatsrxportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpStatsRxPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpStatsRxPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsRxPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpStatsRxPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpStatsRxPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpStatsRxPortEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry>();
        ent_->parent = this;
        lldpstatsrxportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpStatsRxPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldpstatsrxportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpStatsRxPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpStatsRxPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpStatsRxPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsRxPortEntry")
        return true;
    return false;
}

LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::LldpStatsRxPortEntry()
    :
    lldpstatsrxportnum{YType::int32, "lldpStatsRxPortNum"},
    lldpstatsrxportframesdiscardedtotal{YType::uint32, "lldpStatsRxPortFramesDiscardedTotal"},
    lldpstatsrxportframeserrors{YType::uint32, "lldpStatsRxPortFramesErrors"},
    lldpstatsrxportframestotal{YType::uint32, "lldpStatsRxPortFramesTotal"},
    lldpstatsrxporttlvsdiscardedtotal{YType::uint32, "lldpStatsRxPortTLVsDiscardedTotal"},
    lldpstatsrxporttlvsunrecognizedtotal{YType::uint32, "lldpStatsRxPortTLVsUnrecognizedTotal"},
    lldpstatsrxportageoutstotal{YType::uint32, "lldpStatsRxPortAgeoutsTotal"}
{

    yang_name = "lldpStatsRxPortEntry"; yang_parent_name = "lldpStatsRxPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::~LldpStatsRxPortEntry()
{
}

bool LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldpstatsrxportnum.is_set
	|| lldpstatsrxportframesdiscardedtotal.is_set
	|| lldpstatsrxportframeserrors.is_set
	|| lldpstatsrxportframestotal.is_set
	|| lldpstatsrxporttlvsdiscardedtotal.is_set
	|| lldpstatsrxporttlvsunrecognizedtotal.is_set
	|| lldpstatsrxportageoutstotal.is_set;
}

bool LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpstatsrxportnum.yfilter)
	|| ydk::is_set(lldpstatsrxportframesdiscardedtotal.yfilter)
	|| ydk::is_set(lldpstatsrxportframeserrors.yfilter)
	|| ydk::is_set(lldpstatsrxportframestotal.yfilter)
	|| ydk::is_set(lldpstatsrxporttlvsdiscardedtotal.yfilter)
	|| ydk::is_set(lldpstatsrxporttlvsunrecognizedtotal.yfilter)
	|| ydk::is_set(lldpstatsrxportageoutstotal.yfilter);
}

std::string LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpStatsRxPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpStatsRxPortEntry";
    ADD_KEY_TOKEN(lldpstatsrxportnum, "lldpStatsRxPortNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpstatsrxportnum.is_set || is_set(lldpstatsrxportnum.yfilter)) leaf_name_data.push_back(lldpstatsrxportnum.get_name_leafdata());
    if (lldpstatsrxportframesdiscardedtotal.is_set || is_set(lldpstatsrxportframesdiscardedtotal.yfilter)) leaf_name_data.push_back(lldpstatsrxportframesdiscardedtotal.get_name_leafdata());
    if (lldpstatsrxportframeserrors.is_set || is_set(lldpstatsrxportframeserrors.yfilter)) leaf_name_data.push_back(lldpstatsrxportframeserrors.get_name_leafdata());
    if (lldpstatsrxportframestotal.is_set || is_set(lldpstatsrxportframestotal.yfilter)) leaf_name_data.push_back(lldpstatsrxportframestotal.get_name_leafdata());
    if (lldpstatsrxporttlvsdiscardedtotal.is_set || is_set(lldpstatsrxporttlvsdiscardedtotal.yfilter)) leaf_name_data.push_back(lldpstatsrxporttlvsdiscardedtotal.get_name_leafdata());
    if (lldpstatsrxporttlvsunrecognizedtotal.is_set || is_set(lldpstatsrxporttlvsunrecognizedtotal.yfilter)) leaf_name_data.push_back(lldpstatsrxporttlvsunrecognizedtotal.get_name_leafdata());
    if (lldpstatsrxportageoutstotal.is_set || is_set(lldpstatsrxportageoutstotal.yfilter)) leaf_name_data.push_back(lldpstatsrxportageoutstotal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpStatsRxPortNum")
    {
        lldpstatsrxportnum = value;
        lldpstatsrxportnum.value_namespace = name_space;
        lldpstatsrxportnum.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lldpStatsRxPortAgeoutsTotal")
    {
        lldpstatsrxportageoutstotal = value;
        lldpstatsrxportageoutstotal.value_namespace = name_space;
        lldpstatsrxportageoutstotal.value_namespace_prefix = name_space_prefix;
    }
}

void LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpStatsRxPortNum")
    {
        lldpstatsrxportnum.yfilter = yfilter;
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
    if(value_path == "lldpStatsRxPortAgeoutsTotal")
    {
        lldpstatsrxportageoutstotal.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpStatsRxPortTable::LldpStatsRxPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpStatsRxPortNum" || name == "lldpStatsRxPortFramesDiscardedTotal" || name == "lldpStatsRxPortFramesErrors" || name == "lldpStatsRxPortFramesTotal" || name == "lldpStatsRxPortTLVsDiscardedTotal" || name == "lldpStatsRxPortTLVsUnrecognizedTotal" || name == "lldpStatsRxPortAgeoutsTotal")
        return true;
    return false;
}

LLDPMIB::LldpLocPortTable::LldpLocPortTable()
    :
    lldplocportentry(this, {"lldplocportnum"})
{

    yang_name = "lldpLocPortTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpLocPortTable::~LldpLocPortTable()
{
}

bool LLDPMIB::LldpLocPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldplocportentry.len(); index++)
    {
        if(lldplocportentry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpLocPortTable::has_operation() const
{
    for (std::size_t index=0; index<lldplocportentry.len(); index++)
    {
        if(lldplocportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpLocPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpLocPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpLocPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpLocPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpLocPortEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpLocPortTable::LldpLocPortEntry>();
        ent_->parent = this;
        lldplocportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpLocPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldplocportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpLocPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpLocPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpLocPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocPortEntry")
        return true;
    return false;
}

LLDPMIB::LldpLocPortTable::LldpLocPortEntry::LldpLocPortEntry()
    :
    lldplocportnum{YType::int32, "lldpLocPortNum"},
    lldplocportidsubtype{YType::enumeration, "lldpLocPortIdSubtype"},
    lldplocportid{YType::str, "lldpLocPortId"},
    lldplocportdesc{YType::str, "lldpLocPortDesc"}
{

    yang_name = "lldpLocPortEntry"; yang_parent_name = "lldpLocPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpLocPortTable::LldpLocPortEntry::~LldpLocPortEntry()
{
}

bool LLDPMIB::LldpLocPortTable::LldpLocPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldplocportnum.is_set
	|| lldplocportidsubtype.is_set
	|| lldplocportid.is_set
	|| lldplocportdesc.is_set;
}

bool LLDPMIB::LldpLocPortTable::LldpLocPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldplocportnum.yfilter)
	|| ydk::is_set(lldplocportidsubtype.yfilter)
	|| ydk::is_set(lldplocportid.yfilter)
	|| ydk::is_set(lldplocportdesc.yfilter);
}

std::string LLDPMIB::LldpLocPortTable::LldpLocPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpLocPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpLocPortTable::LldpLocPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocPortEntry";
    ADD_KEY_TOKEN(lldplocportnum, "lldpLocPortNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpLocPortTable::LldpLocPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldplocportnum.is_set || is_set(lldplocportnum.yfilter)) leaf_name_data.push_back(lldplocportnum.get_name_leafdata());
    if (lldplocportidsubtype.is_set || is_set(lldplocportidsubtype.yfilter)) leaf_name_data.push_back(lldplocportidsubtype.get_name_leafdata());
    if (lldplocportid.is_set || is_set(lldplocportid.yfilter)) leaf_name_data.push_back(lldplocportid.get_name_leafdata());
    if (lldplocportdesc.is_set || is_set(lldplocportdesc.yfilter)) leaf_name_data.push_back(lldplocportdesc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpLocPortTable::LldpLocPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpLocPortTable::LldpLocPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpLocPortTable::LldpLocPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpLocPortNum")
    {
        lldplocportnum = value;
        lldplocportnum.value_namespace = name_space;
        lldplocportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocPortIdSubtype")
    {
        lldplocportidsubtype = value;
        lldplocportidsubtype.value_namespace = name_space;
        lldplocportidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocPortId")
    {
        lldplocportid = value;
        lldplocportid.value_namespace = name_space;
        lldplocportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocPortDesc")
    {
        lldplocportdesc = value;
        lldplocportdesc.value_namespace = name_space;
        lldplocportdesc.value_namespace_prefix = name_space_prefix;
    }
}

void LLDPMIB::LldpLocPortTable::LldpLocPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpLocPortNum")
    {
        lldplocportnum.yfilter = yfilter;
    }
    if(value_path == "lldpLocPortIdSubtype")
    {
        lldplocportidsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpLocPortId")
    {
        lldplocportid.yfilter = yfilter;
    }
    if(value_path == "lldpLocPortDesc")
    {
        lldplocportdesc.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpLocPortTable::LldpLocPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocPortNum" || name == "lldpLocPortIdSubtype" || name == "lldpLocPortId" || name == "lldpLocPortDesc")
        return true;
    return false;
}

LLDPMIB::LldpLocManAddrTable::LldpLocManAddrTable()
    :
    lldplocmanaddrentry(this, {"lldplocmanaddrsubtype", "lldplocmanaddr"})
{

    yang_name = "lldpLocManAddrTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpLocManAddrTable::~LldpLocManAddrTable()
{
}

bool LLDPMIB::LldpLocManAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldplocmanaddrentry.len(); index++)
    {
        if(lldplocmanaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpLocManAddrTable::has_operation() const
{
    for (std::size_t index=0; index<lldplocmanaddrentry.len(); index++)
    {
        if(lldplocmanaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpLocManAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpLocManAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocManAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpLocManAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpLocManAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpLocManAddrEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry>();
        ent_->parent = this;
        lldplocmanaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpLocManAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldplocmanaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpLocManAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpLocManAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpLocManAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocManAddrEntry")
        return true;
    return false;
}

LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::LldpLocManAddrEntry()
    :
    lldplocmanaddrsubtype{YType::enumeration, "lldpLocManAddrSubtype"},
    lldplocmanaddr{YType::str, "lldpLocManAddr"},
    lldplocmanaddrlen{YType::int32, "lldpLocManAddrLen"},
    lldplocmanaddrifsubtype{YType::enumeration, "lldpLocManAddrIfSubtype"},
    lldplocmanaddrifid{YType::int32, "lldpLocManAddrIfId"},
    lldplocmanaddroid{YType::str, "lldpLocManAddrOID"},
    lldpconfigmanaddrportstxenable{YType::str, "lldpConfigManAddrPortsTxEnable"}
{

    yang_name = "lldpLocManAddrEntry"; yang_parent_name = "lldpLocManAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::~LldpLocManAddrEntry()
{
}

bool LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldplocmanaddrsubtype.is_set
	|| lldplocmanaddr.is_set
	|| lldplocmanaddrlen.is_set
	|| lldplocmanaddrifsubtype.is_set
	|| lldplocmanaddrifid.is_set
	|| lldplocmanaddroid.is_set
	|| lldpconfigmanaddrportstxenable.is_set;
}

bool LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldplocmanaddrsubtype.yfilter)
	|| ydk::is_set(lldplocmanaddr.yfilter)
	|| ydk::is_set(lldplocmanaddrlen.yfilter)
	|| ydk::is_set(lldplocmanaddrifsubtype.yfilter)
	|| ydk::is_set(lldplocmanaddrifid.yfilter)
	|| ydk::is_set(lldplocmanaddroid.yfilter)
	|| ydk::is_set(lldpconfigmanaddrportstxenable.yfilter);
}

std::string LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpLocManAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpLocManAddrEntry";
    ADD_KEY_TOKEN(lldplocmanaddrsubtype, "lldpLocManAddrSubtype");
    ADD_KEY_TOKEN(lldplocmanaddr, "lldpLocManAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldplocmanaddrsubtype.is_set || is_set(lldplocmanaddrsubtype.yfilter)) leaf_name_data.push_back(lldplocmanaddrsubtype.get_name_leafdata());
    if (lldplocmanaddr.is_set || is_set(lldplocmanaddr.yfilter)) leaf_name_data.push_back(lldplocmanaddr.get_name_leafdata());
    if (lldplocmanaddrlen.is_set || is_set(lldplocmanaddrlen.yfilter)) leaf_name_data.push_back(lldplocmanaddrlen.get_name_leafdata());
    if (lldplocmanaddrifsubtype.is_set || is_set(lldplocmanaddrifsubtype.yfilter)) leaf_name_data.push_back(lldplocmanaddrifsubtype.get_name_leafdata());
    if (lldplocmanaddrifid.is_set || is_set(lldplocmanaddrifid.yfilter)) leaf_name_data.push_back(lldplocmanaddrifid.get_name_leafdata());
    if (lldplocmanaddroid.is_set || is_set(lldplocmanaddroid.yfilter)) leaf_name_data.push_back(lldplocmanaddroid.get_name_leafdata());
    if (lldpconfigmanaddrportstxenable.is_set || is_set(lldpconfigmanaddrportstxenable.yfilter)) leaf_name_data.push_back(lldpconfigmanaddrportstxenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "lldpLocManAddrLen")
    {
        lldplocmanaddrlen = value;
        lldplocmanaddrlen.value_namespace = name_space;
        lldplocmanaddrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddrIfSubtype")
    {
        lldplocmanaddrifsubtype = value;
        lldplocmanaddrifsubtype.value_namespace = name_space;
        lldplocmanaddrifsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddrIfId")
    {
        lldplocmanaddrifid = value;
        lldplocmanaddrifid.value_namespace = name_space;
        lldplocmanaddrifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpLocManAddrOID")
    {
        lldplocmanaddroid = value;
        lldplocmanaddroid.value_namespace = name_space;
        lldplocmanaddroid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpConfigManAddrPortsTxEnable")
    {
        lldpconfigmanaddrportstxenable = value;
        lldpconfigmanaddrportstxenable.value_namespace = name_space;
        lldpconfigmanaddrportstxenable.value_namespace_prefix = name_space_prefix;
    }
}

void LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpLocManAddrSubtype")
    {
        lldplocmanaddrsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddr")
    {
        lldplocmanaddr.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrLen")
    {
        lldplocmanaddrlen.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrIfSubtype")
    {
        lldplocmanaddrifsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrIfId")
    {
        lldplocmanaddrifid.yfilter = yfilter;
    }
    if(value_path == "lldpLocManAddrOID")
    {
        lldplocmanaddroid.yfilter = yfilter;
    }
    if(value_path == "lldpConfigManAddrPortsTxEnable")
    {
        lldpconfigmanaddrportstxenable.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpLocManAddrTable::LldpLocManAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpLocManAddrSubtype" || name == "lldpLocManAddr" || name == "lldpLocManAddrLen" || name == "lldpLocManAddrIfSubtype" || name == "lldpLocManAddrIfId" || name == "lldpLocManAddrOID" || name == "lldpConfigManAddrPortsTxEnable")
        return true;
    return false;
}

LLDPMIB::LldpRemTable::LldpRemTable()
    :
    lldprementry(this, {"lldpremtimemark", "lldpremlocalportnum", "lldpremindex"})
{

    yang_name = "lldpRemTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemTable::~LldpRemTable()
{
}

bool LLDPMIB::LldpRemTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldprementry.len(); index++)
    {
        if(lldprementry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpRemTable::has_operation() const
{
    for (std::size_t index=0; index<lldprementry.len(); index++)
    {
        if(lldprementry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpRemTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpRemTable::LldpRemEntry>();
        ent_->parent = this;
        lldprementry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldprementry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpRemTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpRemTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpRemTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemEntry")
        return true;
    return false;
}

LLDPMIB::LldpRemTable::LldpRemEntry::LldpRemEntry()
    :
    lldpremtimemark{YType::uint32, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::int32, "lldpRemLocalPortNum"},
    lldpremindex{YType::int32, "lldpRemIndex"},
    lldpremchassisidsubtype{YType::enumeration, "lldpRemChassisIdSubtype"},
    lldpremchassisid{YType::str, "lldpRemChassisId"},
    lldpremportidsubtype{YType::enumeration, "lldpRemPortIdSubtype"},
    lldpremportid{YType::str, "lldpRemPortId"},
    lldpremportdesc{YType::str, "lldpRemPortDesc"},
    lldpremsysname{YType::str, "lldpRemSysName"},
    lldpremsysdesc{YType::str, "lldpRemSysDesc"},
    lldpremsyscapsupported{YType::bits, "lldpRemSysCapSupported"},
    lldpremsyscapenabled{YType::bits, "lldpRemSysCapEnabled"}
{

    yang_name = "lldpRemEntry"; yang_parent_name = "lldpRemTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemTable::LldpRemEntry::~LldpRemEntry()
{
}

bool LLDPMIB::LldpRemTable::LldpRemEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremchassisidsubtype.is_set
	|| lldpremchassisid.is_set
	|| lldpremportidsubtype.is_set
	|| lldpremportid.is_set
	|| lldpremportdesc.is_set
	|| lldpremsysname.is_set
	|| lldpremsysdesc.is_set
	|| lldpremsyscapsupported.is_set
	|| lldpremsyscapenabled.is_set;
}

bool LLDPMIB::LldpRemTable::LldpRemEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpremtimemark.yfilter)
	|| ydk::is_set(lldpremlocalportnum.yfilter)
	|| ydk::is_set(lldpremindex.yfilter)
	|| ydk::is_set(lldpremchassisidsubtype.yfilter)
	|| ydk::is_set(lldpremchassisid.yfilter)
	|| ydk::is_set(lldpremportidsubtype.yfilter)
	|| ydk::is_set(lldpremportid.yfilter)
	|| ydk::is_set(lldpremportdesc.yfilter)
	|| ydk::is_set(lldpremsysname.yfilter)
	|| ydk::is_set(lldpremsysdesc.yfilter)
	|| ydk::is_set(lldpremsyscapsupported.yfilter)
	|| ydk::is_set(lldpremsyscapenabled.yfilter);
}

std::string LLDPMIB::LldpRemTable::LldpRemEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemTable::LldpRemEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemEntry";
    ADD_KEY_TOKEN(lldpremtimemark, "lldpRemTimeMark");
    ADD_KEY_TOKEN(lldpremlocalportnum, "lldpRemLocalPortNum");
    ADD_KEY_TOKEN(lldpremindex, "lldpRemIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemTable::LldpRemEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremchassisidsubtype.is_set || is_set(lldpremchassisidsubtype.yfilter)) leaf_name_data.push_back(lldpremchassisidsubtype.get_name_leafdata());
    if (lldpremchassisid.is_set || is_set(lldpremchassisid.yfilter)) leaf_name_data.push_back(lldpremchassisid.get_name_leafdata());
    if (lldpremportidsubtype.is_set || is_set(lldpremportidsubtype.yfilter)) leaf_name_data.push_back(lldpremportidsubtype.get_name_leafdata());
    if (lldpremportid.is_set || is_set(lldpremportid.yfilter)) leaf_name_data.push_back(lldpremportid.get_name_leafdata());
    if (lldpremportdesc.is_set || is_set(lldpremportdesc.yfilter)) leaf_name_data.push_back(lldpremportdesc.get_name_leafdata());
    if (lldpremsysname.is_set || is_set(lldpremsysname.yfilter)) leaf_name_data.push_back(lldpremsysname.get_name_leafdata());
    if (lldpremsysdesc.is_set || is_set(lldpremsysdesc.yfilter)) leaf_name_data.push_back(lldpremsysdesc.get_name_leafdata());
    if (lldpremsyscapsupported.is_set || is_set(lldpremsyscapsupported.yfilter)) leaf_name_data.push_back(lldpremsyscapsupported.get_name_leafdata());
    if (lldpremsyscapenabled.is_set || is_set(lldpremsyscapenabled.yfilter)) leaf_name_data.push_back(lldpremsyscapenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemTable::LldpRemEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemTable::LldpRemEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpRemTable::LldpRemEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "lldpRemChassisIdSubtype")
    {
        lldpremchassisidsubtype = value;
        lldpremchassisidsubtype.value_namespace = name_space;
        lldpremchassisidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemChassisId")
    {
        lldpremchassisid = value;
        lldpremchassisid.value_namespace = name_space;
        lldpremchassisid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemPortIdSubtype")
    {
        lldpremportidsubtype = value;
        lldpremportidsubtype.value_namespace = name_space;
        lldpremportidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemPortId")
    {
        lldpremportid = value;
        lldpremportid.value_namespace = name_space;
        lldpremportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemPortDesc")
    {
        lldpremportdesc = value;
        lldpremportdesc.value_namespace = name_space;
        lldpremportdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemSysName")
    {
        lldpremsysname = value;
        lldpremsysname.value_namespace = name_space;
        lldpremsysname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemSysDesc")
    {
        lldpremsysdesc = value;
        lldpremsysdesc.value_namespace = name_space;
        lldpremsysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemSysCapSupported")
    {
        lldpremsyscapsupported[value] = true;
    }
    if(value_path == "lldpRemSysCapEnabled")
    {
        lldpremsyscapenabled[value] = true;
    }
}

void LLDPMIB::LldpRemTable::LldpRemEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "lldpRemChassisIdSubtype")
    {
        lldpremchassisidsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemChassisId")
    {
        lldpremchassisid.yfilter = yfilter;
    }
    if(value_path == "lldpRemPortIdSubtype")
    {
        lldpremportidsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemPortId")
    {
        lldpremportid.yfilter = yfilter;
    }
    if(value_path == "lldpRemPortDesc")
    {
        lldpremportdesc.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysName")
    {
        lldpremsysname.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysDesc")
    {
        lldpremsysdesc.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysCapSupported")
    {
        lldpremsyscapsupported.yfilter = yfilter;
    }
    if(value_path == "lldpRemSysCapEnabled")
    {
        lldpremsyscapenabled.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpRemTable::LldpRemEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemChassisIdSubtype" || name == "lldpRemChassisId" || name == "lldpRemPortIdSubtype" || name == "lldpRemPortId" || name == "lldpRemPortDesc" || name == "lldpRemSysName" || name == "lldpRemSysDesc" || name == "lldpRemSysCapSupported" || name == "lldpRemSysCapEnabled")
        return true;
    return false;
}

LLDPMIB::LldpRemManAddrTable::LldpRemManAddrTable()
    :
    lldpremmanaddrentry(this, {"lldpremtimemark", "lldpremlocalportnum", "lldpremindex", "lldpremmanaddrsubtype", "lldpremmanaddr"})
{

    yang_name = "lldpRemManAddrTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemManAddrTable::~LldpRemManAddrTable()
{
}

bool LLDPMIB::LldpRemManAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldpremmanaddrentry.len(); index++)
    {
        if(lldpremmanaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpRemManAddrTable::has_operation() const
{
    for (std::size_t index=0; index<lldpremmanaddrentry.len(); index++)
    {
        if(lldpremmanaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpRemManAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemManAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemManAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemManAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemManAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemManAddrEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry>();
        ent_->parent = this;
        lldpremmanaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemManAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldpremmanaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpRemManAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpRemManAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpRemManAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemManAddrEntry")
        return true;
    return false;
}

LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::LldpRemManAddrEntry()
    :
    lldpremtimemark{YType::str, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::str, "lldpRemLocalPortNum"},
    lldpremindex{YType::str, "lldpRemIndex"},
    lldpremmanaddrsubtype{YType::enumeration, "lldpRemManAddrSubtype"},
    lldpremmanaddr{YType::str, "lldpRemManAddr"},
    lldpremmanaddrifsubtype{YType::enumeration, "lldpRemManAddrIfSubtype"},
    lldpremmanaddrifid{YType::int32, "lldpRemManAddrIfId"},
    lldpremmanaddroid{YType::str, "lldpRemManAddrOID"}
{

    yang_name = "lldpRemManAddrEntry"; yang_parent_name = "lldpRemManAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::~LldpRemManAddrEntry()
{
}

bool LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremmanaddrsubtype.is_set
	|| lldpremmanaddr.is_set
	|| lldpremmanaddrifsubtype.is_set
	|| lldpremmanaddrifid.is_set
	|| lldpremmanaddroid.is_set;
}

bool LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpremtimemark.yfilter)
	|| ydk::is_set(lldpremlocalportnum.yfilter)
	|| ydk::is_set(lldpremindex.yfilter)
	|| ydk::is_set(lldpremmanaddrsubtype.yfilter)
	|| ydk::is_set(lldpremmanaddr.yfilter)
	|| ydk::is_set(lldpremmanaddrifsubtype.yfilter)
	|| ydk::is_set(lldpremmanaddrifid.yfilter)
	|| ydk::is_set(lldpremmanaddroid.yfilter);
}

std::string LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemManAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemManAddrEntry";
    ADD_KEY_TOKEN(lldpremtimemark, "lldpRemTimeMark");
    ADD_KEY_TOKEN(lldpremlocalportnum, "lldpRemLocalPortNum");
    ADD_KEY_TOKEN(lldpremindex, "lldpRemIndex");
    ADD_KEY_TOKEN(lldpremmanaddrsubtype, "lldpRemManAddrSubtype");
    ADD_KEY_TOKEN(lldpremmanaddr, "lldpRemManAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremmanaddrsubtype.is_set || is_set(lldpremmanaddrsubtype.yfilter)) leaf_name_data.push_back(lldpremmanaddrsubtype.get_name_leafdata());
    if (lldpremmanaddr.is_set || is_set(lldpremmanaddr.yfilter)) leaf_name_data.push_back(lldpremmanaddr.get_name_leafdata());
    if (lldpremmanaddrifsubtype.is_set || is_set(lldpremmanaddrifsubtype.yfilter)) leaf_name_data.push_back(lldpremmanaddrifsubtype.get_name_leafdata());
    if (lldpremmanaddrifid.is_set || is_set(lldpremmanaddrifid.yfilter)) leaf_name_data.push_back(lldpremmanaddrifid.get_name_leafdata());
    if (lldpremmanaddroid.is_set || is_set(lldpremmanaddroid.yfilter)) leaf_name_data.push_back(lldpremmanaddroid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "lldpRemManAddrIfSubtype")
    {
        lldpremmanaddrifsubtype = value;
        lldpremmanaddrifsubtype.value_namespace = name_space;
        lldpremmanaddrifsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemManAddrIfId")
    {
        lldpremmanaddrifid = value;
        lldpremmanaddrifid.value_namespace = name_space;
        lldpremmanaddrifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldpRemManAddrOID")
    {
        lldpremmanaddroid = value;
        lldpremmanaddroid.value_namespace = name_space;
        lldpremmanaddroid.value_namespace_prefix = name_space_prefix;
    }
}

void LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "lldpRemManAddrIfSubtype")
    {
        lldpremmanaddrifsubtype.yfilter = yfilter;
    }
    if(value_path == "lldpRemManAddrIfId")
    {
        lldpremmanaddrifid.yfilter = yfilter;
    }
    if(value_path == "lldpRemManAddrOID")
    {
        lldpremmanaddroid.yfilter = yfilter;
    }
}

bool LLDPMIB::LldpRemManAddrTable::LldpRemManAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemManAddrSubtype" || name == "lldpRemManAddr" || name == "lldpRemManAddrIfSubtype" || name == "lldpRemManAddrIfId" || name == "lldpRemManAddrOID")
        return true;
    return false;
}

LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVTable()
    :
    lldpremunknowntlventry(this, {"lldpremtimemark", "lldpremlocalportnum", "lldpremindex", "lldpremunknowntlvtype"})
{

    yang_name = "lldpRemUnknownTLVTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemUnknownTLVTable::~LldpRemUnknownTLVTable()
{
}

bool LLDPMIB::LldpRemUnknownTLVTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldpremunknowntlventry.len(); index++)
    {
        if(lldpremunknowntlventry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpRemUnknownTLVTable::has_operation() const
{
    for (std::size_t index=0; index<lldpremunknowntlventry.len(); index++)
    {
        if(lldpremunknowntlventry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpRemUnknownTLVTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemUnknownTLVTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemUnknownTLVTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemUnknownTLVTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemUnknownTLVTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemUnknownTLVEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry>();
        ent_->parent = this;
        lldpremunknowntlventry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemUnknownTLVTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldpremunknowntlventry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpRemUnknownTLVTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpRemUnknownTLVTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpRemUnknownTLVTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemUnknownTLVEntry")
        return true;
    return false;
}

LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::LldpRemUnknownTLVEntry()
    :
    lldpremtimemark{YType::str, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::str, "lldpRemLocalPortNum"},
    lldpremindex{YType::str, "lldpRemIndex"},
    lldpremunknowntlvtype{YType::int32, "lldpRemUnknownTLVType"},
    lldpremunknowntlvinfo{YType::str, "lldpRemUnknownTLVInfo"}
{

    yang_name = "lldpRemUnknownTLVEntry"; yang_parent_name = "lldpRemUnknownTLVTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::~LldpRemUnknownTLVEntry()
{
}

bool LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremunknowntlvtype.is_set
	|| lldpremunknowntlvinfo.is_set;
}

bool LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpremtimemark.yfilter)
	|| ydk::is_set(lldpremlocalportnum.yfilter)
	|| ydk::is_set(lldpremindex.yfilter)
	|| ydk::is_set(lldpremunknowntlvtype.yfilter)
	|| ydk::is_set(lldpremunknowntlvinfo.yfilter);
}

std::string LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemUnknownTLVTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemUnknownTLVEntry";
    ADD_KEY_TOKEN(lldpremtimemark, "lldpRemTimeMark");
    ADD_KEY_TOKEN(lldpremlocalportnum, "lldpRemLocalPortNum");
    ADD_KEY_TOKEN(lldpremindex, "lldpRemIndex");
    ADD_KEY_TOKEN(lldpremunknowntlvtype, "lldpRemUnknownTLVType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremunknowntlvtype.is_set || is_set(lldpremunknowntlvtype.yfilter)) leaf_name_data.push_back(lldpremunknowntlvtype.get_name_leafdata());
    if (lldpremunknowntlvinfo.is_set || is_set(lldpremunknowntlvinfo.yfilter)) leaf_name_data.push_back(lldpremunknowntlvinfo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LLDPMIB::LldpRemUnknownTLVTable::LldpRemUnknownTLVEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemUnknownTLVType" || name == "lldpRemUnknownTLVInfo")
        return true;
    return false;
}

LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoTable()
    :
    lldpremorgdefinfoentry(this, {"lldpremtimemark", "lldpremlocalportnum", "lldpremindex", "lldpremorgdefinfooui", "lldpremorgdefinfosubtype", "lldpremorgdefinfoindex"})
{

    yang_name = "lldpRemOrgDefInfoTable"; yang_parent_name = "LLDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemOrgDefInfoTable::~LldpRemOrgDefInfoTable()
{
}

bool LLDPMIB::LldpRemOrgDefInfoTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lldpremorgdefinfoentry.len(); index++)
    {
        if(lldpremorgdefinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool LLDPMIB::LldpRemOrgDefInfoTable::has_operation() const
{
    for (std::size_t index=0; index<lldpremorgdefinfoentry.len(); index++)
    {
        if(lldpremorgdefinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LLDPMIB::LldpRemOrgDefInfoTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemOrgDefInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemOrgDefInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemOrgDefInfoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemOrgDefInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemOrgDefInfoEntry")
    {
        auto ent_ = std::make_shared<LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry>();
        ent_->parent = this;
        lldpremorgdefinfoentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemOrgDefInfoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lldpremorgdefinfoentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LLDPMIB::LldpRemOrgDefInfoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LLDPMIB::LldpRemOrgDefInfoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LLDPMIB::LldpRemOrgDefInfoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemOrgDefInfoEntry")
        return true;
    return false;
}

LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::LldpRemOrgDefInfoEntry()
    :
    lldpremtimemark{YType::str, "lldpRemTimeMark"},
    lldpremlocalportnum{YType::str, "lldpRemLocalPortNum"},
    lldpremindex{YType::str, "lldpRemIndex"},
    lldpremorgdefinfooui{YType::str, "lldpRemOrgDefInfoOUI"},
    lldpremorgdefinfosubtype{YType::int32, "lldpRemOrgDefInfoSubtype"},
    lldpremorgdefinfoindex{YType::int32, "lldpRemOrgDefInfoIndex"},
    lldpremorgdefinfo{YType::str, "lldpRemOrgDefInfo"}
{

    yang_name = "lldpRemOrgDefInfoEntry"; yang_parent_name = "lldpRemOrgDefInfoTable"; is_top_level_class = false; has_list_ancestor = false; 
}

LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::~LldpRemOrgDefInfoEntry()
{
}

bool LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::has_data() const
{
    if (is_presence_container) return true;
    return lldpremtimemark.is_set
	|| lldpremlocalportnum.is_set
	|| lldpremindex.is_set
	|| lldpremorgdefinfooui.is_set
	|| lldpremorgdefinfosubtype.is_set
	|| lldpremorgdefinfoindex.is_set
	|| lldpremorgdefinfo.is_set;
}

bool LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::has_operation() const
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

std::string LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLDP-MIB:LLDP-MIB/lldpRemOrgDefInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemOrgDefInfoEntry";
    ADD_KEY_TOKEN(lldpremtimemark, "lldpRemTimeMark");
    ADD_KEY_TOKEN(lldpremlocalportnum, "lldpRemLocalPortNum");
    ADD_KEY_TOKEN(lldpremindex, "lldpRemIndex");
    ADD_KEY_TOKEN(lldpremorgdefinfooui, "lldpRemOrgDefInfoOUI");
    ADD_KEY_TOKEN(lldpremorgdefinfosubtype, "lldpRemOrgDefInfoSubtype");
    ADD_KEY_TOKEN(lldpremorgdefinfoindex, "lldpRemOrgDefInfoIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpremtimemark.is_set || is_set(lldpremtimemark.yfilter)) leaf_name_data.push_back(lldpremtimemark.get_name_leafdata());
    if (lldpremlocalportnum.is_set || is_set(lldpremlocalportnum.yfilter)) leaf_name_data.push_back(lldpremlocalportnum.get_name_leafdata());
    if (lldpremindex.is_set || is_set(lldpremindex.yfilter)) leaf_name_data.push_back(lldpremindex.get_name_leafdata());
    if (lldpremorgdefinfooui.is_set || is_set(lldpremorgdefinfooui.yfilter)) leaf_name_data.push_back(lldpremorgdefinfooui.get_name_leafdata());
    if (lldpremorgdefinfosubtype.is_set || is_set(lldpremorgdefinfosubtype.yfilter)) leaf_name_data.push_back(lldpremorgdefinfosubtype.get_name_leafdata());
    if (lldpremorgdefinfoindex.is_set || is_set(lldpremorgdefinfoindex.yfilter)) leaf_name_data.push_back(lldpremorgdefinfoindex.get_name_leafdata());
    if (lldpremorgdefinfo.is_set || is_set(lldpremorgdefinfo.yfilter)) leaf_name_data.push_back(lldpremorgdefinfo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LLDPMIB::LldpRemOrgDefInfoTable::LldpRemOrgDefInfoEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTimeMark" || name == "lldpRemLocalPortNum" || name == "lldpRemIndex" || name == "lldpRemOrgDefInfoOUI" || name == "lldpRemOrgDefInfoSubtype" || name == "lldpRemOrgDefInfoIndex" || name == "lldpRemOrgDefInfo")
        return true;
    return false;
}

const Enum::YLeaf LldpPortIdSubtype::interfaceAlias {1, "interfaceAlias"};
const Enum::YLeaf LldpPortIdSubtype::portComponent {2, "portComponent"};
const Enum::YLeaf LldpPortIdSubtype::macAddress {3, "macAddress"};
const Enum::YLeaf LldpPortIdSubtype::networkAddress {4, "networkAddress"};
const Enum::YLeaf LldpPortIdSubtype::interfaceName {5, "interfaceName"};
const Enum::YLeaf LldpPortIdSubtype::agentCircuitId {6, "agentCircuitId"};
const Enum::YLeaf LldpPortIdSubtype::local {7, "local"};

const Enum::YLeaf LldpChassisIdSubtype::chassisComponent {1, "chassisComponent"};
const Enum::YLeaf LldpChassisIdSubtype::interfaceAlias {2, "interfaceAlias"};
const Enum::YLeaf LldpChassisIdSubtype::portComponent {3, "portComponent"};
const Enum::YLeaf LldpChassisIdSubtype::macAddress {4, "macAddress"};
const Enum::YLeaf LldpChassisIdSubtype::networkAddress {5, "networkAddress"};
const Enum::YLeaf LldpChassisIdSubtype::interfaceName {6, "interfaceName"};
const Enum::YLeaf LldpChassisIdSubtype::local {7, "local"};

const Enum::YLeaf LldpManAddrIfSubtype::unknown {1, "unknown"};
const Enum::YLeaf LldpManAddrIfSubtype::ifIndex {2, "ifIndex"};
const Enum::YLeaf LldpManAddrIfSubtype::systemPortNumber {3, "systemPortNumber"};

const Enum::YLeaf LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::LldpPortConfigAdminStatus::txOnly {1, "txOnly"};
const Enum::YLeaf LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::LldpPortConfigAdminStatus::rxOnly {2, "rxOnly"};
const Enum::YLeaf LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::LldpPortConfigAdminStatus::txAndRx {3, "txAndRx"};
const Enum::YLeaf LLDPMIB::LldpPortConfigTable::LldpPortConfigEntry::LldpPortConfigAdminStatus::disabled {4, "disabled"};


}
}

