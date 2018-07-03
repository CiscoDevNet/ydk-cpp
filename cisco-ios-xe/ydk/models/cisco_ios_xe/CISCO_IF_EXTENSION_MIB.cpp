
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IF_EXTENSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IF_EXTENSION_MIB {

CISCOIFEXTENSIONMIB::CISCOIFEXTENSIONMIB()
    :
    ciscoifextsystemconfig(std::make_shared<CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig>())
    , cieifpacketstatstable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfPacketStatsTable>())
    , cieifinterfacetable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfInterfaceTable>())
    , cieifstatuslisttable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfStatusListTable>())
    , cieifvlstatstable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfVlStatsTable>())
    , cieifindexpersistencetable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable>())
    , cieifdot1qcustomethertypetable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable>())
    , cieifutiltable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfUtilTable>())
    , cieifdot1dbasemappingtable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable>())
    , cieifnamemappingtable(std::make_shared<CISCOIFEXTENSIONMIB::CieIfNameMappingTable>())
{
    ciscoifextsystemconfig->parent = this;
    cieifpacketstatstable->parent = this;
    cieifinterfacetable->parent = this;
    cieifstatuslisttable->parent = this;
    cieifvlstatstable->parent = this;
    cieifindexpersistencetable->parent = this;
    cieifdot1qcustomethertypetable->parent = this;
    cieifutiltable->parent = this;
    cieifdot1dbasemappingtable->parent = this;
    cieifnamemappingtable->parent = this;

    yang_name = "CISCO-IF-EXTENSION-MIB"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::~CISCOIFEXTENSIONMIB()
{
}

bool CISCOIFEXTENSIONMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoifextsystemconfig !=  nullptr && ciscoifextsystemconfig->has_data())
	|| (cieifpacketstatstable !=  nullptr && cieifpacketstatstable->has_data())
	|| (cieifinterfacetable !=  nullptr && cieifinterfacetable->has_data())
	|| (cieifstatuslisttable !=  nullptr && cieifstatuslisttable->has_data())
	|| (cieifvlstatstable !=  nullptr && cieifvlstatstable->has_data())
	|| (cieifindexpersistencetable !=  nullptr && cieifindexpersistencetable->has_data())
	|| (cieifdot1qcustomethertypetable !=  nullptr && cieifdot1qcustomethertypetable->has_data())
	|| (cieifutiltable !=  nullptr && cieifutiltable->has_data())
	|| (cieifdot1dbasemappingtable !=  nullptr && cieifdot1dbasemappingtable->has_data())
	|| (cieifnamemappingtable !=  nullptr && cieifnamemappingtable->has_data());
}

bool CISCOIFEXTENSIONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoifextsystemconfig !=  nullptr && ciscoifextsystemconfig->has_operation())
	|| (cieifpacketstatstable !=  nullptr && cieifpacketstatstable->has_operation())
	|| (cieifinterfacetable !=  nullptr && cieifinterfacetable->has_operation())
	|| (cieifstatuslisttable !=  nullptr && cieifstatuslisttable->has_operation())
	|| (cieifvlstatstable !=  nullptr && cieifvlstatstable->has_operation())
	|| (cieifindexpersistencetable !=  nullptr && cieifindexpersistencetable->has_operation())
	|| (cieifdot1qcustomethertypetable !=  nullptr && cieifdot1qcustomethertypetable->has_operation())
	|| (cieifutiltable !=  nullptr && cieifutiltable->has_operation())
	|| (cieifdot1dbasemappingtable !=  nullptr && cieifdot1dbasemappingtable->has_operation())
	|| (cieifnamemappingtable !=  nullptr && cieifnamemappingtable->has_operation());
}

std::string CISCOIFEXTENSIONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoIfExtSystemConfig")
    {
        if(ciscoifextsystemconfig == nullptr)
        {
            ciscoifextsystemconfig = std::make_shared<CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig>();
        }
        return ciscoifextsystemconfig;
    }

    if(child_yang_name == "cieIfPacketStatsTable")
    {
        if(cieifpacketstatstable == nullptr)
        {
            cieifpacketstatstable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfPacketStatsTable>();
        }
        return cieifpacketstatstable;
    }

    if(child_yang_name == "cieIfInterfaceTable")
    {
        if(cieifinterfacetable == nullptr)
        {
            cieifinterfacetable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfInterfaceTable>();
        }
        return cieifinterfacetable;
    }

    if(child_yang_name == "cieIfStatusListTable")
    {
        if(cieifstatuslisttable == nullptr)
        {
            cieifstatuslisttable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfStatusListTable>();
        }
        return cieifstatuslisttable;
    }

    if(child_yang_name == "cieIfVlStatsTable")
    {
        if(cieifvlstatstable == nullptr)
        {
            cieifvlstatstable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfVlStatsTable>();
        }
        return cieifvlstatstable;
    }

    if(child_yang_name == "cieIfIndexPersistenceTable")
    {
        if(cieifindexpersistencetable == nullptr)
        {
            cieifindexpersistencetable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable>();
        }
        return cieifindexpersistencetable;
    }

    if(child_yang_name == "cieIfDot1qCustomEtherTypeTable")
    {
        if(cieifdot1qcustomethertypetable == nullptr)
        {
            cieifdot1qcustomethertypetable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable>();
        }
        return cieifdot1qcustomethertypetable;
    }

    if(child_yang_name == "cieIfUtilTable")
    {
        if(cieifutiltable == nullptr)
        {
            cieifutiltable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfUtilTable>();
        }
        return cieifutiltable;
    }

    if(child_yang_name == "cieIfDot1dBaseMappingTable")
    {
        if(cieifdot1dbasemappingtable == nullptr)
        {
            cieifdot1dbasemappingtable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable>();
        }
        return cieifdot1dbasemappingtable;
    }

    if(child_yang_name == "cieIfNameMappingTable")
    {
        if(cieifnamemappingtable == nullptr)
        {
            cieifnamemappingtable = std::make_shared<CISCOIFEXTENSIONMIB::CieIfNameMappingTable>();
        }
        return cieifnamemappingtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscoifextsystemconfig != nullptr)
    {
        children["ciscoIfExtSystemConfig"] = ciscoifextsystemconfig;
    }

    if(cieifpacketstatstable != nullptr)
    {
        children["cieIfPacketStatsTable"] = cieifpacketstatstable;
    }

    if(cieifinterfacetable != nullptr)
    {
        children["cieIfInterfaceTable"] = cieifinterfacetable;
    }

    if(cieifstatuslisttable != nullptr)
    {
        children["cieIfStatusListTable"] = cieifstatuslisttable;
    }

    if(cieifvlstatstable != nullptr)
    {
        children["cieIfVlStatsTable"] = cieifvlstatstable;
    }

    if(cieifindexpersistencetable != nullptr)
    {
        children["cieIfIndexPersistenceTable"] = cieifindexpersistencetable;
    }

    if(cieifdot1qcustomethertypetable != nullptr)
    {
        children["cieIfDot1qCustomEtherTypeTable"] = cieifdot1qcustomethertypetable;
    }

    if(cieifutiltable != nullptr)
    {
        children["cieIfUtilTable"] = cieifutiltable;
    }

    if(cieifdot1dbasemappingtable != nullptr)
    {
        children["cieIfDot1dBaseMappingTable"] = cieifdot1dbasemappingtable;
    }

    if(cieifnamemappingtable != nullptr)
    {
        children["cieIfNameMappingTable"] = cieifnamemappingtable;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::clone_ptr() const
{
    return std::make_shared<CISCOIFEXTENSIONMIB>();
}

std::string CISCOIFEXTENSIONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIFEXTENSIONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIFEXTENSIONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIFEXTENSIONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIFEXTENSIONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoIfExtSystemConfig" || name == "cieIfPacketStatsTable" || name == "cieIfInterfaceTable" || name == "cieIfStatusListTable" || name == "cieIfVlStatsTable" || name == "cieIfIndexPersistenceTable" || name == "cieIfDot1qCustomEtherTypeTable" || name == "cieIfUtilTable" || name == "cieIfDot1dBaseMappingTable" || name == "cieIfNameMappingTable")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::CiscoIfExtSystemConfig()
    :
    ciesystemmtu{YType::int32, "cieSystemMtu"},
    cielinkupdownenable{YType::bits, "cieLinkUpDownEnable"},
    ciestandardlinkupdownvarbinds{YType::enumeration, "cieStandardLinkUpDownVarbinds"},
    cieifindexpersistence{YType::boolean, "cieIfIndexPersistence"},
    ciedelayedlinkupdownnotifenable{YType::boolean, "cieDelayedLinkUpDownNotifEnable"},
    ciedelayedlinkupdownnotifdelay{YType::uint32, "cieDelayedLinkUpDownNotifDelay"},
    cieifindexglobalpersistence{YType::enumeration, "cieIfIndexGlobalPersistence"},
    cielinkupdownconfig{YType::bits, "cieLinkUpDownConfig"}
{

    yang_name = "ciscoIfExtSystemConfig"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::~CiscoIfExtSystemConfig()
{
}

bool CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::has_data() const
{
    if (is_presence_container) return true;
    return ciesystemmtu.is_set
	|| cielinkupdownenable.is_set
	|| ciestandardlinkupdownvarbinds.is_set
	|| cieifindexpersistence.is_set
	|| ciedelayedlinkupdownnotifenable.is_set
	|| ciedelayedlinkupdownnotifdelay.is_set
	|| cieifindexglobalpersistence.is_set
	|| cielinkupdownconfig.is_set;
}

bool CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciesystemmtu.yfilter)
	|| ydk::is_set(cielinkupdownenable.yfilter)
	|| ydk::is_set(ciestandardlinkupdownvarbinds.yfilter)
	|| ydk::is_set(cieifindexpersistence.yfilter)
	|| ydk::is_set(ciedelayedlinkupdownnotifenable.yfilter)
	|| ydk::is_set(ciedelayedlinkupdownnotifdelay.yfilter)
	|| ydk::is_set(cieifindexglobalpersistence.yfilter)
	|| ydk::is_set(cielinkupdownconfig.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoIfExtSystemConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciesystemmtu.is_set || is_set(ciesystemmtu.yfilter)) leaf_name_data.push_back(ciesystemmtu.get_name_leafdata());
    if (cielinkupdownenable.is_set || is_set(cielinkupdownenable.yfilter)) leaf_name_data.push_back(cielinkupdownenable.get_name_leafdata());
    if (ciestandardlinkupdownvarbinds.is_set || is_set(ciestandardlinkupdownvarbinds.yfilter)) leaf_name_data.push_back(ciestandardlinkupdownvarbinds.get_name_leafdata());
    if (cieifindexpersistence.is_set || is_set(cieifindexpersistence.yfilter)) leaf_name_data.push_back(cieifindexpersistence.get_name_leafdata());
    if (ciedelayedlinkupdownnotifenable.is_set || is_set(ciedelayedlinkupdownnotifenable.yfilter)) leaf_name_data.push_back(ciedelayedlinkupdownnotifenable.get_name_leafdata());
    if (ciedelayedlinkupdownnotifdelay.is_set || is_set(ciedelayedlinkupdownnotifdelay.yfilter)) leaf_name_data.push_back(ciedelayedlinkupdownnotifdelay.get_name_leafdata());
    if (cieifindexglobalpersistence.is_set || is_set(cieifindexglobalpersistence.yfilter)) leaf_name_data.push_back(cieifindexglobalpersistence.get_name_leafdata());
    if (cielinkupdownconfig.is_set || is_set(cielinkupdownconfig.yfilter)) leaf_name_data.push_back(cielinkupdownconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cieSystemMtu")
    {
        ciesystemmtu = value;
        ciesystemmtu.value_namespace = name_space;
        ciesystemmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieLinkUpDownEnable")
    {
        cielinkupdownenable[value] = true;
    }
    if(value_path == "cieStandardLinkUpDownVarbinds")
    {
        ciestandardlinkupdownvarbinds = value;
        ciestandardlinkupdownvarbinds.value_namespace = name_space;
        ciestandardlinkupdownvarbinds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexPersistence")
    {
        cieifindexpersistence = value;
        cieifindexpersistence.value_namespace = name_space;
        cieifindexpersistence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieDelayedLinkUpDownNotifEnable")
    {
        ciedelayedlinkupdownnotifenable = value;
        ciedelayedlinkupdownnotifenable.value_namespace = name_space;
        ciedelayedlinkupdownnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieDelayedLinkUpDownNotifDelay")
    {
        ciedelayedlinkupdownnotifdelay = value;
        ciedelayedlinkupdownnotifdelay.value_namespace = name_space;
        ciedelayedlinkupdownnotifdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexGlobalPersistence")
    {
        cieifindexglobalpersistence = value;
        cieifindexglobalpersistence.value_namespace = name_space;
        cieifindexglobalpersistence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieLinkUpDownConfig")
    {
        cielinkupdownconfig[value] = true;
    }
}

void CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cieSystemMtu")
    {
        ciesystemmtu.yfilter = yfilter;
    }
    if(value_path == "cieLinkUpDownEnable")
    {
        cielinkupdownenable.yfilter = yfilter;
    }
    if(value_path == "cieStandardLinkUpDownVarbinds")
    {
        ciestandardlinkupdownvarbinds.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexPersistence")
    {
        cieifindexpersistence.yfilter = yfilter;
    }
    if(value_path == "cieDelayedLinkUpDownNotifEnable")
    {
        ciedelayedlinkupdownnotifenable.yfilter = yfilter;
    }
    if(value_path == "cieDelayedLinkUpDownNotifDelay")
    {
        ciedelayedlinkupdownnotifdelay.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexGlobalPersistence")
    {
        cieifindexglobalpersistence.yfilter = yfilter;
    }
    if(value_path == "cieLinkUpDownConfig")
    {
        cielinkupdownconfig.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieSystemMtu" || name == "cieLinkUpDownEnable" || name == "cieStandardLinkUpDownVarbinds" || name == "cieIfIndexPersistence" || name == "cieDelayedLinkUpDownNotifEnable" || name == "cieDelayedLinkUpDownNotifDelay" || name == "cieIfIndexGlobalPersistence" || name == "cieLinkUpDownConfig")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsTable()
    :
    cieifpacketstatsentry(this, {"ifindex"})
{

    yang_name = "cieIfPacketStatsTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::~CieIfPacketStatsTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifpacketstatsentry.len(); index++)
    {
        if(cieifpacketstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::has_operation() const
{
    for (std::size_t index=0; index<cieifpacketstatsentry.len(); index++)
    {
        if(cieifpacketstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfPacketStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfPacketStatsEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry>();
        c->parent = this;
        cieifpacketstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifpacketstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfPacketStatsEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::CieIfPacketStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cieiflastintime{YType::uint32, "cieIfLastInTime"},
    cieiflastouttime{YType::uint32, "cieIfLastOutTime"},
    cieiflastouthangtime{YType::uint32, "cieIfLastOutHangTime"},
    cieifinruntserrs{YType::uint32, "cieIfInRuntsErrs"},
    cieifingiantserrs{YType::uint32, "cieIfInGiantsErrs"},
    cieifinframingerrs{YType::uint32, "cieIfInFramingErrs"},
    cieifinoverrunerrs{YType::uint32, "cieIfInOverrunErrs"},
    cieifinignored{YType::uint32, "cieIfInIgnored"},
    cieifinaborterrs{YType::uint32, "cieIfInAbortErrs"},
    cieifinputqueuedrops{YType::uint32, "cieIfInputQueueDrops"},
    cieifoutputqueuedrops{YType::uint32, "cieIfOutputQueueDrops"},
    cieifpacketdiscontinuitytime{YType::uint32, "cieIfPacketDiscontinuityTime"}
{

    yang_name = "cieIfPacketStatsEntry"; yang_parent_name = "cieIfPacketStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::~CieIfPacketStatsEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cieiflastintime.is_set
	|| cieiflastouttime.is_set
	|| cieiflastouthangtime.is_set
	|| cieifinruntserrs.is_set
	|| cieifingiantserrs.is_set
	|| cieifinframingerrs.is_set
	|| cieifinoverrunerrs.is_set
	|| cieifinignored.is_set
	|| cieifinaborterrs.is_set
	|| cieifinputqueuedrops.is_set
	|| cieifoutputqueuedrops.is_set
	|| cieifpacketdiscontinuitytime.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieiflastintime.yfilter)
	|| ydk::is_set(cieiflastouttime.yfilter)
	|| ydk::is_set(cieiflastouthangtime.yfilter)
	|| ydk::is_set(cieifinruntserrs.yfilter)
	|| ydk::is_set(cieifingiantserrs.yfilter)
	|| ydk::is_set(cieifinframingerrs.yfilter)
	|| ydk::is_set(cieifinoverrunerrs.yfilter)
	|| ydk::is_set(cieifinignored.yfilter)
	|| ydk::is_set(cieifinaborterrs.yfilter)
	|| ydk::is_set(cieifinputqueuedrops.yfilter)
	|| ydk::is_set(cieifoutputqueuedrops.yfilter)
	|| ydk::is_set(cieifpacketdiscontinuitytime.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfPacketStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfPacketStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieiflastintime.is_set || is_set(cieiflastintime.yfilter)) leaf_name_data.push_back(cieiflastintime.get_name_leafdata());
    if (cieiflastouttime.is_set || is_set(cieiflastouttime.yfilter)) leaf_name_data.push_back(cieiflastouttime.get_name_leafdata());
    if (cieiflastouthangtime.is_set || is_set(cieiflastouthangtime.yfilter)) leaf_name_data.push_back(cieiflastouthangtime.get_name_leafdata());
    if (cieifinruntserrs.is_set || is_set(cieifinruntserrs.yfilter)) leaf_name_data.push_back(cieifinruntserrs.get_name_leafdata());
    if (cieifingiantserrs.is_set || is_set(cieifingiantserrs.yfilter)) leaf_name_data.push_back(cieifingiantserrs.get_name_leafdata());
    if (cieifinframingerrs.is_set || is_set(cieifinframingerrs.yfilter)) leaf_name_data.push_back(cieifinframingerrs.get_name_leafdata());
    if (cieifinoverrunerrs.is_set || is_set(cieifinoverrunerrs.yfilter)) leaf_name_data.push_back(cieifinoverrunerrs.get_name_leafdata());
    if (cieifinignored.is_set || is_set(cieifinignored.yfilter)) leaf_name_data.push_back(cieifinignored.get_name_leafdata());
    if (cieifinaborterrs.is_set || is_set(cieifinaborterrs.yfilter)) leaf_name_data.push_back(cieifinaborterrs.get_name_leafdata());
    if (cieifinputqueuedrops.is_set || is_set(cieifinputqueuedrops.yfilter)) leaf_name_data.push_back(cieifinputqueuedrops.get_name_leafdata());
    if (cieifoutputqueuedrops.is_set || is_set(cieifoutputqueuedrops.yfilter)) leaf_name_data.push_back(cieifoutputqueuedrops.get_name_leafdata());
    if (cieifpacketdiscontinuitytime.is_set || is_set(cieifpacketdiscontinuitytime.yfilter)) leaf_name_data.push_back(cieifpacketdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfLastInTime")
    {
        cieiflastintime = value;
        cieiflastintime.value_namespace = name_space;
        cieiflastintime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfLastOutTime")
    {
        cieiflastouttime = value;
        cieiflastouttime.value_namespace = name_space;
        cieiflastouttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfLastOutHangTime")
    {
        cieiflastouthangtime = value;
        cieiflastouthangtime.value_namespace = name_space;
        cieiflastouthangtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInRuntsErrs")
    {
        cieifinruntserrs = value;
        cieifinruntserrs.value_namespace = name_space;
        cieifinruntserrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInGiantsErrs")
    {
        cieifingiantserrs = value;
        cieifingiantserrs.value_namespace = name_space;
        cieifingiantserrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInFramingErrs")
    {
        cieifinframingerrs = value;
        cieifinframingerrs.value_namespace = name_space;
        cieifinframingerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInOverrunErrs")
    {
        cieifinoverrunerrs = value;
        cieifinoverrunerrs.value_namespace = name_space;
        cieifinoverrunerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInIgnored")
    {
        cieifinignored = value;
        cieifinignored.value_namespace = name_space;
        cieifinignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInAbortErrs")
    {
        cieifinaborterrs = value;
        cieifinaborterrs.value_namespace = name_space;
        cieifinaborterrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInputQueueDrops")
    {
        cieifinputqueuedrops = value;
        cieifinputqueuedrops.value_namespace = name_space;
        cieifinputqueuedrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOutputQueueDrops")
    {
        cieifoutputqueuedrops = value;
        cieifoutputqueuedrops.value_namespace = name_space;
        cieifoutputqueuedrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfPacketDiscontinuityTime")
    {
        cieifpacketdiscontinuitytime = value;
        cieifpacketdiscontinuitytime.value_namespace = name_space;
        cieifpacketdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfLastInTime")
    {
        cieiflastintime.yfilter = yfilter;
    }
    if(value_path == "cieIfLastOutTime")
    {
        cieiflastouttime.yfilter = yfilter;
    }
    if(value_path == "cieIfLastOutHangTime")
    {
        cieiflastouthangtime.yfilter = yfilter;
    }
    if(value_path == "cieIfInRuntsErrs")
    {
        cieifinruntserrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInGiantsErrs")
    {
        cieifingiantserrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInFramingErrs")
    {
        cieifinframingerrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInOverrunErrs")
    {
        cieifinoverrunerrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInIgnored")
    {
        cieifinignored.yfilter = yfilter;
    }
    if(value_path == "cieIfInAbortErrs")
    {
        cieifinaborterrs.yfilter = yfilter;
    }
    if(value_path == "cieIfInputQueueDrops")
    {
        cieifinputqueuedrops.yfilter = yfilter;
    }
    if(value_path == "cieIfOutputQueueDrops")
    {
        cieifoutputqueuedrops.yfilter = yfilter;
    }
    if(value_path == "cieIfPacketDiscontinuityTime")
    {
        cieifpacketdiscontinuitytime.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfPacketStatsTable::CieIfPacketStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfLastInTime" || name == "cieIfLastOutTime" || name == "cieIfLastOutHangTime" || name == "cieIfInRuntsErrs" || name == "cieIfInGiantsErrs" || name == "cieIfInFramingErrs" || name == "cieIfInOverrunErrs" || name == "cieIfInIgnored" || name == "cieIfInAbortErrs" || name == "cieIfInputQueueDrops" || name == "cieIfOutputQueueDrops" || name == "cieIfPacketDiscontinuityTime")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceTable()
    :
    cieifinterfaceentry(this, {"ifindex"})
{

    yang_name = "cieIfInterfaceTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfInterfaceTable::~CieIfInterfaceTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifinterfaceentry.len(); index++)
    {
        if(cieifinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<cieifinterfaceentry.len(); index++)
    {
        if(cieifinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfInterfaceEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry>();
        c->parent = this;
        cieifinterfaceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifinterfaceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfInterfaceEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfInterfaceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifresetcount{YType::uint32, "cieIfResetCount"},
    cieifkeepaliveenabled{YType::boolean, "cieIfKeepAliveEnabled"},
    cieifstatechangereason{YType::str, "cieIfStateChangeReason"},
    cieifcarriertransitioncount{YType::uint32, "cieIfCarrierTransitionCount"},
    cieifinterfacediscontinuitytime{YType::uint32, "cieIfInterfaceDiscontinuityTime"},
    cieifdhcpmode{YType::boolean, "cieIfDhcpMode"},
    cieifmtu{YType::int32, "cieIfMtu"},
    cieifcontextname{YType::str, "cieIfContextName"},
    cieifoperstatuscause{YType::enumeration, "cieIfOperStatusCause"},
    cieifoperstatuscausedescr{YType::str, "cieIfOperStatusCauseDescr"},
    cieifspeedreceive{YType::uint32, "cieIfSpeedReceive"},
    cieifhighspeedreceive{YType::uint32, "cieIfHighSpeedReceive"},
    cieifowner{YType::str, "cieIfOwner"},
    cieifsharedconfig{YType::enumeration, "cieIfSharedConfig"},
    cieifspeedgroupconfig{YType::enumeration, "cieIfSpeedGroupConfig"},
    cieiftransceiverfrequencyconfig{YType::enumeration, "cieIfTransceiverFrequencyConfig"},
    cieiffillpatternconfig{YType::enumeration, "cieIfFillPatternConfig"},
    cieifignorebiterrorsconfig{YType::boolean, "cieIfIgnoreBitErrorsConfig"},
    cieifignoreinterruptthresholdconfig{YType::boolean, "cieIfIgnoreInterruptThresholdConfig"}
{

    yang_name = "cieIfInterfaceEntry"; yang_parent_name = "cieIfInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::~CieIfInterfaceEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cieifresetcount.is_set
	|| cieifkeepaliveenabled.is_set
	|| cieifstatechangereason.is_set
	|| cieifcarriertransitioncount.is_set
	|| cieifinterfacediscontinuitytime.is_set
	|| cieifdhcpmode.is_set
	|| cieifmtu.is_set
	|| cieifcontextname.is_set
	|| cieifoperstatuscause.is_set
	|| cieifoperstatuscausedescr.is_set
	|| cieifspeedreceive.is_set
	|| cieifhighspeedreceive.is_set
	|| cieifowner.is_set
	|| cieifsharedconfig.is_set
	|| cieifspeedgroupconfig.is_set
	|| cieiftransceiverfrequencyconfig.is_set
	|| cieiffillpatternconfig.is_set
	|| cieifignorebiterrorsconfig.is_set
	|| cieifignoreinterruptthresholdconfig.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifresetcount.yfilter)
	|| ydk::is_set(cieifkeepaliveenabled.yfilter)
	|| ydk::is_set(cieifstatechangereason.yfilter)
	|| ydk::is_set(cieifcarriertransitioncount.yfilter)
	|| ydk::is_set(cieifinterfacediscontinuitytime.yfilter)
	|| ydk::is_set(cieifdhcpmode.yfilter)
	|| ydk::is_set(cieifmtu.yfilter)
	|| ydk::is_set(cieifcontextname.yfilter)
	|| ydk::is_set(cieifoperstatuscause.yfilter)
	|| ydk::is_set(cieifoperstatuscausedescr.yfilter)
	|| ydk::is_set(cieifspeedreceive.yfilter)
	|| ydk::is_set(cieifhighspeedreceive.yfilter)
	|| ydk::is_set(cieifowner.yfilter)
	|| ydk::is_set(cieifsharedconfig.yfilter)
	|| ydk::is_set(cieifspeedgroupconfig.yfilter)
	|| ydk::is_set(cieiftransceiverfrequencyconfig.yfilter)
	|| ydk::is_set(cieiffillpatternconfig.yfilter)
	|| ydk::is_set(cieifignorebiterrorsconfig.yfilter)
	|| ydk::is_set(cieifignoreinterruptthresholdconfig.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfInterfaceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifresetcount.is_set || is_set(cieifresetcount.yfilter)) leaf_name_data.push_back(cieifresetcount.get_name_leafdata());
    if (cieifkeepaliveenabled.is_set || is_set(cieifkeepaliveenabled.yfilter)) leaf_name_data.push_back(cieifkeepaliveenabled.get_name_leafdata());
    if (cieifstatechangereason.is_set || is_set(cieifstatechangereason.yfilter)) leaf_name_data.push_back(cieifstatechangereason.get_name_leafdata());
    if (cieifcarriertransitioncount.is_set || is_set(cieifcarriertransitioncount.yfilter)) leaf_name_data.push_back(cieifcarriertransitioncount.get_name_leafdata());
    if (cieifinterfacediscontinuitytime.is_set || is_set(cieifinterfacediscontinuitytime.yfilter)) leaf_name_data.push_back(cieifinterfacediscontinuitytime.get_name_leafdata());
    if (cieifdhcpmode.is_set || is_set(cieifdhcpmode.yfilter)) leaf_name_data.push_back(cieifdhcpmode.get_name_leafdata());
    if (cieifmtu.is_set || is_set(cieifmtu.yfilter)) leaf_name_data.push_back(cieifmtu.get_name_leafdata());
    if (cieifcontextname.is_set || is_set(cieifcontextname.yfilter)) leaf_name_data.push_back(cieifcontextname.get_name_leafdata());
    if (cieifoperstatuscause.is_set || is_set(cieifoperstatuscause.yfilter)) leaf_name_data.push_back(cieifoperstatuscause.get_name_leafdata());
    if (cieifoperstatuscausedescr.is_set || is_set(cieifoperstatuscausedescr.yfilter)) leaf_name_data.push_back(cieifoperstatuscausedescr.get_name_leafdata());
    if (cieifspeedreceive.is_set || is_set(cieifspeedreceive.yfilter)) leaf_name_data.push_back(cieifspeedreceive.get_name_leafdata());
    if (cieifhighspeedreceive.is_set || is_set(cieifhighspeedreceive.yfilter)) leaf_name_data.push_back(cieifhighspeedreceive.get_name_leafdata());
    if (cieifowner.is_set || is_set(cieifowner.yfilter)) leaf_name_data.push_back(cieifowner.get_name_leafdata());
    if (cieifsharedconfig.is_set || is_set(cieifsharedconfig.yfilter)) leaf_name_data.push_back(cieifsharedconfig.get_name_leafdata());
    if (cieifspeedgroupconfig.is_set || is_set(cieifspeedgroupconfig.yfilter)) leaf_name_data.push_back(cieifspeedgroupconfig.get_name_leafdata());
    if (cieiftransceiverfrequencyconfig.is_set || is_set(cieiftransceiverfrequencyconfig.yfilter)) leaf_name_data.push_back(cieiftransceiverfrequencyconfig.get_name_leafdata());
    if (cieiffillpatternconfig.is_set || is_set(cieiffillpatternconfig.yfilter)) leaf_name_data.push_back(cieiffillpatternconfig.get_name_leafdata());
    if (cieifignorebiterrorsconfig.is_set || is_set(cieifignorebiterrorsconfig.yfilter)) leaf_name_data.push_back(cieifignorebiterrorsconfig.get_name_leafdata());
    if (cieifignoreinterruptthresholdconfig.is_set || is_set(cieifignoreinterruptthresholdconfig.yfilter)) leaf_name_data.push_back(cieifignoreinterruptthresholdconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfResetCount")
    {
        cieifresetcount = value;
        cieifresetcount.value_namespace = name_space;
        cieifresetcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfKeepAliveEnabled")
    {
        cieifkeepaliveenabled = value;
        cieifkeepaliveenabled.value_namespace = name_space;
        cieifkeepaliveenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfStateChangeReason")
    {
        cieifstatechangereason = value;
        cieifstatechangereason.value_namespace = name_space;
        cieifstatechangereason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfCarrierTransitionCount")
    {
        cieifcarriertransitioncount = value;
        cieifcarriertransitioncount.value_namespace = name_space;
        cieifcarriertransitioncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInterfaceDiscontinuityTime")
    {
        cieifinterfacediscontinuitytime = value;
        cieifinterfacediscontinuitytime.value_namespace = name_space;
        cieifinterfacediscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDhcpMode")
    {
        cieifdhcpmode = value;
        cieifdhcpmode.value_namespace = name_space;
        cieifdhcpmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfMtu")
    {
        cieifmtu = value;
        cieifmtu.value_namespace = name_space;
        cieifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfContextName")
    {
        cieifcontextname = value;
        cieifcontextname.value_namespace = name_space;
        cieifcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOperStatusCause")
    {
        cieifoperstatuscause = value;
        cieifoperstatuscause.value_namespace = name_space;
        cieifoperstatuscause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOperStatusCauseDescr")
    {
        cieifoperstatuscausedescr = value;
        cieifoperstatuscausedescr.value_namespace = name_space;
        cieifoperstatuscausedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfSpeedReceive")
    {
        cieifspeedreceive = value;
        cieifspeedreceive.value_namespace = name_space;
        cieifspeedreceive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfHighSpeedReceive")
    {
        cieifhighspeedreceive = value;
        cieifhighspeedreceive.value_namespace = name_space;
        cieifhighspeedreceive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOwner")
    {
        cieifowner = value;
        cieifowner.value_namespace = name_space;
        cieifowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfSharedConfig")
    {
        cieifsharedconfig = value;
        cieifsharedconfig.value_namespace = name_space;
        cieifsharedconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfSpeedGroupConfig")
    {
        cieifspeedgroupconfig = value;
        cieifspeedgroupconfig.value_namespace = name_space;
        cieifspeedgroupconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfTransceiverFrequencyConfig")
    {
        cieiftransceiverfrequencyconfig = value;
        cieiftransceiverfrequencyconfig.value_namespace = name_space;
        cieiftransceiverfrequencyconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfFillPatternConfig")
    {
        cieiffillpatternconfig = value;
        cieiffillpatternconfig.value_namespace = name_space;
        cieiffillpatternconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIgnoreBitErrorsConfig")
    {
        cieifignorebiterrorsconfig = value;
        cieifignorebiterrorsconfig.value_namespace = name_space;
        cieifignorebiterrorsconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIgnoreInterruptThresholdConfig")
    {
        cieifignoreinterruptthresholdconfig = value;
        cieifignoreinterruptthresholdconfig.value_namespace = name_space;
        cieifignoreinterruptthresholdconfig.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfResetCount")
    {
        cieifresetcount.yfilter = yfilter;
    }
    if(value_path == "cieIfKeepAliveEnabled")
    {
        cieifkeepaliveenabled.yfilter = yfilter;
    }
    if(value_path == "cieIfStateChangeReason")
    {
        cieifstatechangereason.yfilter = yfilter;
    }
    if(value_path == "cieIfCarrierTransitionCount")
    {
        cieifcarriertransitioncount.yfilter = yfilter;
    }
    if(value_path == "cieIfInterfaceDiscontinuityTime")
    {
        cieifinterfacediscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "cieIfDhcpMode")
    {
        cieifdhcpmode.yfilter = yfilter;
    }
    if(value_path == "cieIfMtu")
    {
        cieifmtu.yfilter = yfilter;
    }
    if(value_path == "cieIfContextName")
    {
        cieifcontextname.yfilter = yfilter;
    }
    if(value_path == "cieIfOperStatusCause")
    {
        cieifoperstatuscause.yfilter = yfilter;
    }
    if(value_path == "cieIfOperStatusCauseDescr")
    {
        cieifoperstatuscausedescr.yfilter = yfilter;
    }
    if(value_path == "cieIfSpeedReceive")
    {
        cieifspeedreceive.yfilter = yfilter;
    }
    if(value_path == "cieIfHighSpeedReceive")
    {
        cieifhighspeedreceive.yfilter = yfilter;
    }
    if(value_path == "cieIfOwner")
    {
        cieifowner.yfilter = yfilter;
    }
    if(value_path == "cieIfSharedConfig")
    {
        cieifsharedconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfSpeedGroupConfig")
    {
        cieifspeedgroupconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfTransceiverFrequencyConfig")
    {
        cieiftransceiverfrequencyconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfFillPatternConfig")
    {
        cieiffillpatternconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfIgnoreBitErrorsConfig")
    {
        cieifignorebiterrorsconfig.yfilter = yfilter;
    }
    if(value_path == "cieIfIgnoreInterruptThresholdConfig")
    {
        cieifignoreinterruptthresholdconfig.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfResetCount" || name == "cieIfKeepAliveEnabled" || name == "cieIfStateChangeReason" || name == "cieIfCarrierTransitionCount" || name == "cieIfInterfaceDiscontinuityTime" || name == "cieIfDhcpMode" || name == "cieIfMtu" || name == "cieIfContextName" || name == "cieIfOperStatusCause" || name == "cieIfOperStatusCauseDescr" || name == "cieIfSpeedReceive" || name == "cieIfHighSpeedReceive" || name == "cieIfOwner" || name == "cieIfSharedConfig" || name == "cieIfSpeedGroupConfig" || name == "cieIfTransceiverFrequencyConfig" || name == "cieIfFillPatternConfig" || name == "cieIfIgnoreBitErrorsConfig" || name == "cieIfIgnoreInterruptThresholdConfig")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListTable()
    :
    cieifstatuslistentry(this, {"entphysicalindex", "cieifstatuslistindex"})
{

    yang_name = "cieIfStatusListTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfStatusListTable::~CieIfStatusListTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfStatusListTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifstatuslistentry.len(); index++)
    {
        if(cieifstatuslistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfStatusListTable::has_operation() const
{
    for (std::size_t index=0; index<cieifstatuslistentry.len(); index++)
    {
        if(cieifstatuslistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfStatusListTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfStatusListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfStatusListTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfStatusListTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfStatusListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfStatusListEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry>();
        c->parent = this;
        cieifstatuslistentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfStatusListTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifstatuslistentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfStatusListTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfStatusListTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfStatusListTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfStatusListEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::CieIfStatusListEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cieifstatuslistindex{YType::uint32, "cieIfStatusListIndex"},
    cieinterfacesindex{YType::str, "cieInterfacesIndex"},
    cieinterfacesopermode{YType::str, "cieInterfacesOperMode"},
    cieinterfacesopercause{YType::str, "cieInterfacesOperCause"},
    cieinterfaceownershipbitmap{YType::str, "cieInterfaceOwnershipBitmap"}
{

    yang_name = "cieIfStatusListEntry"; yang_parent_name = "cieIfStatusListTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::~CieIfStatusListEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cieifstatuslistindex.is_set
	|| cieinterfacesindex.is_set
	|| cieinterfacesopermode.is_set
	|| cieinterfacesopercause.is_set
	|| cieinterfaceownershipbitmap.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cieifstatuslistindex.yfilter)
	|| ydk::is_set(cieinterfacesindex.yfilter)
	|| ydk::is_set(cieinterfacesopermode.yfilter)
	|| ydk::is_set(cieinterfacesopercause.yfilter)
	|| ydk::is_set(cieinterfaceownershipbitmap.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfStatusListTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfStatusListEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cieifstatuslistindex, "cieIfStatusListIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cieifstatuslistindex.is_set || is_set(cieifstatuslistindex.yfilter)) leaf_name_data.push_back(cieifstatuslistindex.get_name_leafdata());
    if (cieinterfacesindex.is_set || is_set(cieinterfacesindex.yfilter)) leaf_name_data.push_back(cieinterfacesindex.get_name_leafdata());
    if (cieinterfacesopermode.is_set || is_set(cieinterfacesopermode.yfilter)) leaf_name_data.push_back(cieinterfacesopermode.get_name_leafdata());
    if (cieinterfacesopercause.is_set || is_set(cieinterfacesopercause.yfilter)) leaf_name_data.push_back(cieinterfacesopercause.get_name_leafdata());
    if (cieinterfaceownershipbitmap.is_set || is_set(cieinterfaceownershipbitmap.yfilter)) leaf_name_data.push_back(cieinterfaceownershipbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfStatusListIndex")
    {
        cieifstatuslistindex = value;
        cieifstatuslistindex.value_namespace = name_space;
        cieifstatuslistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfacesIndex")
    {
        cieinterfacesindex = value;
        cieinterfacesindex.value_namespace = name_space;
        cieinterfacesindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfacesOperMode")
    {
        cieinterfacesopermode = value;
        cieinterfacesopermode.value_namespace = name_space;
        cieinterfacesopermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfacesOperCause")
    {
        cieinterfacesopercause = value;
        cieinterfacesopercause.value_namespace = name_space;
        cieinterfacesopercause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieInterfaceOwnershipBitmap")
    {
        cieinterfaceownershipbitmap = value;
        cieinterfaceownershipbitmap.value_namespace = name_space;
        cieinterfaceownershipbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cieIfStatusListIndex")
    {
        cieifstatuslistindex.yfilter = yfilter;
    }
    if(value_path == "cieInterfacesIndex")
    {
        cieinterfacesindex.yfilter = yfilter;
    }
    if(value_path == "cieInterfacesOperMode")
    {
        cieinterfacesopermode.yfilter = yfilter;
    }
    if(value_path == "cieInterfacesOperCause")
    {
        cieinterfacesopercause.yfilter = yfilter;
    }
    if(value_path == "cieInterfaceOwnershipBitmap")
    {
        cieinterfaceownershipbitmap.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfStatusListTable::CieIfStatusListEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cieIfStatusListIndex" || name == "cieInterfacesIndex" || name == "cieInterfacesOperMode" || name == "cieInterfacesOperCause" || name == "cieInterfaceOwnershipBitmap")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsTable()
    :
    cieifvlstatsentry(this, {"ifindex"})
{

    yang_name = "cieIfVlStatsTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfVlStatsTable::~CieIfVlStatsTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfVlStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifvlstatsentry.len(); index++)
    {
        if(cieifvlstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfVlStatsTable::has_operation() const
{
    for (std::size_t index=0; index<cieifvlstatsentry.len(); index++)
    {
        if(cieifvlstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfVlStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfVlStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfVlStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfVlStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfVlStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfVlStatsEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry>();
        c->parent = this;
        cieifvlstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfVlStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifvlstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfVlStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfVlStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfVlStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfVlStatsEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::CieIfVlStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifnodropvlinpkts{YType::uint64, "cieIfNoDropVlInPkts"},
    cieifnodropvlinoctets{YType::uint64, "cieIfNoDropVlInOctets"},
    cieifnodropvloutpkts{YType::uint64, "cieIfNoDropVlOutPkts"},
    cieifnodropvloutoctets{YType::uint64, "cieIfNoDropVlOutOctets"},
    cieifdropvlinpkts{YType::uint64, "cieIfDropVlInPkts"},
    cieifdropvlinoctets{YType::uint64, "cieIfDropVlInOctets"},
    cieifdropvloutpkts{YType::uint64, "cieIfDropVlOutPkts"},
    cieifdropvloutoctets{YType::uint64, "cieIfDropVlOutOctets"}
{

    yang_name = "cieIfVlStatsEntry"; yang_parent_name = "cieIfVlStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::~CieIfVlStatsEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cieifnodropvlinpkts.is_set
	|| cieifnodropvlinoctets.is_set
	|| cieifnodropvloutpkts.is_set
	|| cieifnodropvloutoctets.is_set
	|| cieifdropvlinpkts.is_set
	|| cieifdropvlinoctets.is_set
	|| cieifdropvloutpkts.is_set
	|| cieifdropvloutoctets.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifnodropvlinpkts.yfilter)
	|| ydk::is_set(cieifnodropvlinoctets.yfilter)
	|| ydk::is_set(cieifnodropvloutpkts.yfilter)
	|| ydk::is_set(cieifnodropvloutoctets.yfilter)
	|| ydk::is_set(cieifdropvlinpkts.yfilter)
	|| ydk::is_set(cieifdropvlinoctets.yfilter)
	|| ydk::is_set(cieifdropvloutpkts.yfilter)
	|| ydk::is_set(cieifdropvloutoctets.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfVlStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfVlStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifnodropvlinpkts.is_set || is_set(cieifnodropvlinpkts.yfilter)) leaf_name_data.push_back(cieifnodropvlinpkts.get_name_leafdata());
    if (cieifnodropvlinoctets.is_set || is_set(cieifnodropvlinoctets.yfilter)) leaf_name_data.push_back(cieifnodropvlinoctets.get_name_leafdata());
    if (cieifnodropvloutpkts.is_set || is_set(cieifnodropvloutpkts.yfilter)) leaf_name_data.push_back(cieifnodropvloutpkts.get_name_leafdata());
    if (cieifnodropvloutoctets.is_set || is_set(cieifnodropvloutoctets.yfilter)) leaf_name_data.push_back(cieifnodropvloutoctets.get_name_leafdata());
    if (cieifdropvlinpkts.is_set || is_set(cieifdropvlinpkts.yfilter)) leaf_name_data.push_back(cieifdropvlinpkts.get_name_leafdata());
    if (cieifdropvlinoctets.is_set || is_set(cieifdropvlinoctets.yfilter)) leaf_name_data.push_back(cieifdropvlinoctets.get_name_leafdata());
    if (cieifdropvloutpkts.is_set || is_set(cieifdropvloutpkts.yfilter)) leaf_name_data.push_back(cieifdropvloutpkts.get_name_leafdata());
    if (cieifdropvloutoctets.is_set || is_set(cieifdropvloutoctets.yfilter)) leaf_name_data.push_back(cieifdropvloutoctets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlInPkts")
    {
        cieifnodropvlinpkts = value;
        cieifnodropvlinpkts.value_namespace = name_space;
        cieifnodropvlinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlInOctets")
    {
        cieifnodropvlinoctets = value;
        cieifnodropvlinoctets.value_namespace = name_space;
        cieifnodropvlinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlOutPkts")
    {
        cieifnodropvloutpkts = value;
        cieifnodropvloutpkts.value_namespace = name_space;
        cieifnodropvloutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfNoDropVlOutOctets")
    {
        cieifnodropvloutoctets = value;
        cieifnodropvloutoctets.value_namespace = name_space;
        cieifnodropvloutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlInPkts")
    {
        cieifdropvlinpkts = value;
        cieifdropvlinpkts.value_namespace = name_space;
        cieifdropvlinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlInOctets")
    {
        cieifdropvlinoctets = value;
        cieifdropvlinoctets.value_namespace = name_space;
        cieifdropvlinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlOutPkts")
    {
        cieifdropvloutpkts = value;
        cieifdropvloutpkts.value_namespace = name_space;
        cieifdropvloutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDropVlOutOctets")
    {
        cieifdropvloutoctets = value;
        cieifdropvloutoctets.value_namespace = name_space;
        cieifdropvloutoctets.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlInPkts")
    {
        cieifnodropvlinpkts.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlInOctets")
    {
        cieifnodropvlinoctets.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlOutPkts")
    {
        cieifnodropvloutpkts.yfilter = yfilter;
    }
    if(value_path == "cieIfNoDropVlOutOctets")
    {
        cieifnodropvloutoctets.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlInPkts")
    {
        cieifdropvlinpkts.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlInOctets")
    {
        cieifdropvlinoctets.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlOutPkts")
    {
        cieifdropvloutpkts.yfilter = yfilter;
    }
    if(value_path == "cieIfDropVlOutOctets")
    {
        cieifdropvloutoctets.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfVlStatsTable::CieIfVlStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfNoDropVlInPkts" || name == "cieIfNoDropVlInOctets" || name == "cieIfNoDropVlOutPkts" || name == "cieIfNoDropVlOutOctets" || name == "cieIfDropVlInPkts" || name == "cieIfDropVlInOctets" || name == "cieIfDropVlOutPkts" || name == "cieIfDropVlOutOctets")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceTable()
    :
    cieifindexpersistenceentry(this, {"ifindex"})
{

    yang_name = "cieIfIndexPersistenceTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::~CieIfIndexPersistenceTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifindexpersistenceentry.len(); index++)
    {
        if(cieifindexpersistenceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::has_operation() const
{
    for (std::size_t index=0; index<cieifindexpersistenceentry.len(); index++)
    {
        if(cieifindexpersistenceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfIndexPersistenceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfIndexPersistenceEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry>();
        c->parent = this;
        cieifindexpersistenceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifindexpersistenceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfIndexPersistenceEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::CieIfIndexPersistenceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifindexpersistenceenabled{YType::boolean, "cieIfIndexPersistenceEnabled"},
    cieifindexpersistencecontrol{YType::enumeration, "cieIfIndexPersistenceControl"}
{

    yang_name = "cieIfIndexPersistenceEntry"; yang_parent_name = "cieIfIndexPersistenceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::~CieIfIndexPersistenceEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cieifindexpersistenceenabled.is_set
	|| cieifindexpersistencecontrol.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifindexpersistenceenabled.yfilter)
	|| ydk::is_set(cieifindexpersistencecontrol.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfIndexPersistenceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfIndexPersistenceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifindexpersistenceenabled.is_set || is_set(cieifindexpersistenceenabled.yfilter)) leaf_name_data.push_back(cieifindexpersistenceenabled.get_name_leafdata());
    if (cieifindexpersistencecontrol.is_set || is_set(cieifindexpersistencecontrol.yfilter)) leaf_name_data.push_back(cieifindexpersistencecontrol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexPersistenceEnabled")
    {
        cieifindexpersistenceenabled = value;
        cieifindexpersistenceenabled.value_namespace = name_space;
        cieifindexpersistenceenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndexPersistenceControl")
    {
        cieifindexpersistencecontrol = value;
        cieifindexpersistencecontrol.value_namespace = name_space;
        cieifindexpersistencecontrol.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexPersistenceEnabled")
    {
        cieifindexpersistenceenabled.yfilter = yfilter;
    }
    if(value_path == "cieIfIndexPersistenceControl")
    {
        cieifindexpersistencecontrol.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfIndexPersistenceTable::CieIfIndexPersistenceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfIndexPersistenceEnabled" || name == "cieIfIndexPersistenceControl")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeTable()
    :
    cieifdot1qcustomethertypeentry(this, {"ifindex"})
{

    yang_name = "cieIfDot1qCustomEtherTypeTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::~CieIfDot1qCustomEtherTypeTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifdot1qcustomethertypeentry.len(); index++)
    {
        if(cieifdot1qcustomethertypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::has_operation() const
{
    for (std::size_t index=0; index<cieifdot1qcustomethertypeentry.len(); index++)
    {
        if(cieifdot1qcustomethertypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1qCustomEtherTypeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1qCustomEtherTypeEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry>();
        c->parent = this;
        cieifdot1qcustomethertypeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifdot1qcustomethertypeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfDot1qCustomEtherTypeEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::CieIfDot1qCustomEtherTypeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdot1qcustomadminethertype{YType::int32, "cieIfDot1qCustomAdminEtherType"},
    cieifdot1qcustomoperethertype{YType::int32, "cieIfDot1qCustomOperEtherType"}
{

    yang_name = "cieIfDot1qCustomEtherTypeEntry"; yang_parent_name = "cieIfDot1qCustomEtherTypeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::~CieIfDot1qCustomEtherTypeEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cieifdot1qcustomadminethertype.is_set
	|| cieifdot1qcustomoperethertype.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifdot1qcustomadminethertype.yfilter)
	|| ydk::is_set(cieifdot1qcustomoperethertype.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfDot1qCustomEtherTypeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1qCustomEtherTypeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdot1qcustomadminethertype.is_set || is_set(cieifdot1qcustomadminethertype.yfilter)) leaf_name_data.push_back(cieifdot1qcustomadminethertype.get_name_leafdata());
    if (cieifdot1qcustomoperethertype.is_set || is_set(cieifdot1qcustomoperethertype.yfilter)) leaf_name_data.push_back(cieifdot1qcustomoperethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDot1qCustomAdminEtherType")
    {
        cieifdot1qcustomadminethertype = value;
        cieifdot1qcustomadminethertype.value_namespace = name_space;
        cieifdot1qcustomadminethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDot1qCustomOperEtherType")
    {
        cieifdot1qcustomoperethertype = value;
        cieifdot1qcustomoperethertype.value_namespace = name_space;
        cieifdot1qcustomoperethertype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfDot1qCustomAdminEtherType")
    {
        cieifdot1qcustomadminethertype.yfilter = yfilter;
    }
    if(value_path == "cieIfDot1qCustomOperEtherType")
    {
        cieifdot1qcustomoperethertype.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfDot1qCustomEtherTypeTable::CieIfDot1qCustomEtherTypeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfDot1qCustomAdminEtherType" || name == "cieIfDot1qCustomOperEtherType")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilTable()
    :
    cieifutilentry(this, {"ifindex"})
{

    yang_name = "cieIfUtilTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfUtilTable::~CieIfUtilTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfUtilTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifutilentry.len(); index++)
    {
        if(cieifutilentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfUtilTable::has_operation() const
{
    for (std::size_t index=0; index<cieifutilentry.len(); index++)
    {
        if(cieifutilentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfUtilTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfUtilTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfUtilTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfUtilTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfUtilTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfUtilEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry>();
        c->parent = this;
        cieifutilentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfUtilTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifutilentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfUtilTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfUtilTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfUtilTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfUtilEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::CieIfUtilEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifinpktrate{YType::uint64, "cieIfInPktRate"},
    cieifinoctetrate{YType::uint64, "cieIfInOctetRate"},
    cieifoutpktrate{YType::uint64, "cieIfOutPktRate"},
    cieifoutoctetrate{YType::uint64, "cieIfOutOctetRate"},
    cieifinterval{YType::uint32, "cieIfInterval"}
{

    yang_name = "cieIfUtilEntry"; yang_parent_name = "cieIfUtilTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::~CieIfUtilEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cieifinpktrate.is_set
	|| cieifinoctetrate.is_set
	|| cieifoutpktrate.is_set
	|| cieifoutoctetrate.is_set
	|| cieifinterval.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifinpktrate.yfilter)
	|| ydk::is_set(cieifinoctetrate.yfilter)
	|| ydk::is_set(cieifoutpktrate.yfilter)
	|| ydk::is_set(cieifoutoctetrate.yfilter)
	|| ydk::is_set(cieifinterval.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfUtilTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfUtilEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifinpktrate.is_set || is_set(cieifinpktrate.yfilter)) leaf_name_data.push_back(cieifinpktrate.get_name_leafdata());
    if (cieifinoctetrate.is_set || is_set(cieifinoctetrate.yfilter)) leaf_name_data.push_back(cieifinoctetrate.get_name_leafdata());
    if (cieifoutpktrate.is_set || is_set(cieifoutpktrate.yfilter)) leaf_name_data.push_back(cieifoutpktrate.get_name_leafdata());
    if (cieifoutoctetrate.is_set || is_set(cieifoutoctetrate.yfilter)) leaf_name_data.push_back(cieifoutoctetrate.get_name_leafdata());
    if (cieifinterval.is_set || is_set(cieifinterval.yfilter)) leaf_name_data.push_back(cieifinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInPktRate")
    {
        cieifinpktrate = value;
        cieifinpktrate.value_namespace = name_space;
        cieifinpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInOctetRate")
    {
        cieifinoctetrate = value;
        cieifinoctetrate.value_namespace = name_space;
        cieifinoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOutPktRate")
    {
        cieifoutpktrate = value;
        cieifoutpktrate.value_namespace = name_space;
        cieifoutpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfOutOctetRate")
    {
        cieifoutoctetrate = value;
        cieifoutoctetrate.value_namespace = name_space;
        cieifoutoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfInterval")
    {
        cieifinterval = value;
        cieifinterval.value_namespace = name_space;
        cieifinterval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfInPktRate")
    {
        cieifinpktrate.yfilter = yfilter;
    }
    if(value_path == "cieIfInOctetRate")
    {
        cieifinoctetrate.yfilter = yfilter;
    }
    if(value_path == "cieIfOutPktRate")
    {
        cieifoutpktrate.yfilter = yfilter;
    }
    if(value_path == "cieIfOutOctetRate")
    {
        cieifoutoctetrate.yfilter = yfilter;
    }
    if(value_path == "cieIfInterval")
    {
        cieifinterval.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfUtilTable::CieIfUtilEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfInPktRate" || name == "cieIfInOctetRate" || name == "cieIfOutPktRate" || name == "cieIfOutOctetRate" || name == "cieIfInterval")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingTable()
    :
    cieifdot1dbasemappingentry(this, {"ifindex"})
{

    yang_name = "cieIfDot1dBaseMappingTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::~CieIfDot1dBaseMappingTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifdot1dbasemappingentry.len(); index++)
    {
        if(cieifdot1dbasemappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cieifdot1dbasemappingentry.len(); index++)
    {
        if(cieifdot1dbasemappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1dBaseMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1dBaseMappingEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry>();
        c->parent = this;
        cieifdot1dbasemappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifdot1dbasemappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfDot1dBaseMappingEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::CieIfDot1dBaseMappingEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdot1dbasemappingport{YType::int32, "cieIfDot1dBaseMappingPort"}
{

    yang_name = "cieIfDot1dBaseMappingEntry"; yang_parent_name = "cieIfDot1dBaseMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::~CieIfDot1dBaseMappingEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cieifdot1dbasemappingport.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cieifdot1dbasemappingport.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfDot1dBaseMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1dBaseMappingEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdot1dbasemappingport.is_set || is_set(cieifdot1dbasemappingport.yfilter)) leaf_name_data.push_back(cieifdot1dbasemappingport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfDot1dBaseMappingPort")
    {
        cieifdot1dbasemappingport = value;
        cieifdot1dbasemappingport.value_namespace = name_space;
        cieifdot1dbasemappingport.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cieIfDot1dBaseMappingPort")
    {
        cieifdot1dbasemappingport.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfDot1dBaseMappingTable::CieIfDot1dBaseMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cieIfDot1dBaseMappingPort")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingTable()
    :
    cieifnamemappingentry(this, {"cieifname"})
{

    yang_name = "cieIfNameMappingTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfNameMappingTable::~CieIfNameMappingTable()
{
}

bool CISCOIFEXTENSIONMIB::CieIfNameMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cieifnamemappingentry.len(); index++)
    {
        if(cieifnamemappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIFEXTENSIONMIB::CieIfNameMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cieifnamemappingentry.len(); index++)
    {
        if(cieifnamemappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfNameMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfNameMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfNameMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfNameMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfNameMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfNameMappingEntry")
    {
        auto c = std::make_shared<CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry>();
        c->parent = this;
        cieifnamemappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfNameMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cieifnamemappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIFEXTENSIONMIB::CieIfNameMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIFEXTENSIONMIB::CieIfNameMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIFEXTENSIONMIB::CieIfNameMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfNameMappingEntry")
        return true;
    return false;
}

CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::CieIfNameMappingEntry()
    :
    cieifname{YType::str, "cieIfName"},
    cieifindex{YType::int32, "cieIfIndex"}
{

    yang_name = "cieIfNameMappingEntry"; yang_parent_name = "cieIfNameMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::~CieIfNameMappingEntry()
{
}

bool CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return cieifname.is_set
	|| cieifindex.is_set;
}

bool CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cieifname.yfilter)
	|| ydk::is_set(cieifindex.yfilter);
}

std::string CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfNameMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfNameMappingEntry";
    ADD_KEY_TOKEN(cieifname, "cieIfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cieifname.is_set || is_set(cieifname.yfilter)) leaf_name_data.push_back(cieifname.get_name_leafdata());
    if (cieifindex.is_set || is_set(cieifindex.yfilter)) leaf_name_data.push_back(cieifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cieIfName")
    {
        cieifname = value;
        cieifname.value_namespace = name_space;
        cieifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cieIfIndex")
    {
        cieifindex = value;
        cieifindex.value_namespace = name_space;
        cieifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cieIfName")
    {
        cieifname.yfilter = yfilter;
    }
    if(value_path == "cieIfIndex")
    {
        cieifindex.yfilter = yfilter;
    }
}

bool CISCOIFEXTENSIONMIB::CieIfNameMappingTable::CieIfNameMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cieIfName" || name == "cieIfIndex")
        return true;
    return false;
}

const Enum::YLeaf IfIndexPersistenceState::disable {1, "disable"};
const Enum::YLeaf IfIndexPersistenceState::enable {2, "enable"};
const Enum::YLeaf IfIndexPersistenceState::global {3, "global"};

const Enum::YLeaf CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::CieStandardLinkUpDownVarbinds::standard {1, "standard"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::CieStandardLinkUpDownVarbinds::additional {2, "additional"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CiscoIfExtSystemConfig::CieStandardLinkUpDownVarbinds::other {3, "other"};

const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSharedConfig::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSharedConfig::ownerDedicated {2, "ownerDedicated"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSharedConfig::ownerShared {3, "ownerShared"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSharedConfig::sharedOnly {4, "sharedOnly"};

const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSpeedGroupConfig::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSpeedGroupConfig::tenG {2, "tenG"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSpeedGroupConfig::oneTwoFourEightG {3, "oneTwoFourEightG"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfSpeedGroupConfig::twoFourEightSixteenG {4, "twoFourEightSixteenG"};

const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfTransceiverFrequencyConfig::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfTransceiverFrequencyConfig::fibreChannel {2, "fibreChannel"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfTransceiverFrequencyConfig::ethernet {3, "ethernet"};

const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfFillPatternConfig::arbff8G {1, "arbff8G"};
const Enum::YLeaf CISCOIFEXTENSIONMIB::CieIfInterfaceTable::CieIfInterfaceEntry::CieIfFillPatternConfig::idle8G {2, "idle8G"};


}
}

