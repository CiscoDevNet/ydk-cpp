
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PING_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_PING_MIB {

CISCOPINGMIB::CISCOPINGMIB()
    :
    ciscopingtable(std::make_shared<CISCOPINGMIB::CiscoPingTable>())
{
    ciscopingtable->parent = this;

    yang_name = "CISCO-PING-MIB"; yang_parent_name = "CISCO-PING-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOPINGMIB::~CISCOPINGMIB()
{
}

bool CISCOPINGMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscopingtable !=  nullptr && ciscopingtable->has_data());
}

bool CISCOPINGMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscopingtable !=  nullptr && ciscopingtable->has_operation());
}

std::string CISCOPINGMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PING-MIB:CISCO-PING-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPINGMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPINGMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoPingTable")
    {
        if(ciscopingtable == nullptr)
        {
            ciscopingtable = std::make_shared<CISCOPINGMIB::CiscoPingTable>();
        }
        return ciscopingtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPINGMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscopingtable != nullptr)
    {
        children["ciscoPingTable"] = ciscopingtable;
    }

    return children;
}

void CISCOPINGMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPINGMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOPINGMIB::clone_ptr() const
{
    return std::make_shared<CISCOPINGMIB>();
}

std::string CISCOPINGMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOPINGMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOPINGMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOPINGMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOPINGMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoPingTable")
        return true;
    return false;
}

CISCOPINGMIB::CiscoPingTable::CiscoPingTable()
    :
    ciscopingentry(this, {"ciscopingserialnumber"})
{

    yang_name = "ciscoPingTable"; yang_parent_name = "CISCO-PING-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPINGMIB::CiscoPingTable::~CiscoPingTable()
{
}

bool CISCOPINGMIB::CiscoPingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscopingentry.len(); index++)
    {
        if(ciscopingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPINGMIB::CiscoPingTable::has_operation() const
{
    for (std::size_t index=0; index<ciscopingentry.len(); index++)
    {
        if(ciscopingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPINGMIB::CiscoPingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PING-MIB:CISCO-PING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPINGMIB::CiscoPingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPINGMIB::CiscoPingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPINGMIB::CiscoPingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoPingEntry")
    {
        auto c = std::make_shared<CISCOPINGMIB::CiscoPingTable::CiscoPingEntry>();
        c->parent = this;
        ciscopingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPINGMIB::CiscoPingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscopingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPINGMIB::CiscoPingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPINGMIB::CiscoPingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPINGMIB::CiscoPingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoPingEntry")
        return true;
    return false;
}

CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::CiscoPingEntry()
    :
    ciscopingserialnumber{YType::int32, "ciscoPingSerialNumber"},
    ciscopingprotocol{YType::enumeration, "ciscoPingProtocol"},
    ciscopingaddress{YType::str, "ciscoPingAddress"},
    ciscopingpacketcount{YType::int32, "ciscoPingPacketCount"},
    ciscopingpacketsize{YType::int32, "ciscoPingPacketSize"},
    ciscopingpackettimeout{YType::int32, "ciscoPingPacketTimeout"},
    ciscopingdelay{YType::int32, "ciscoPingDelay"},
    ciscopingtraponcompletion{YType::boolean, "ciscoPingTrapOnCompletion"},
    ciscopingsentpackets{YType::uint32, "ciscoPingSentPackets"},
    ciscopingreceivedpackets{YType::uint32, "ciscoPingReceivedPackets"},
    ciscopingminrtt{YType::int32, "ciscoPingMinRtt"},
    ciscopingavgrtt{YType::int32, "ciscoPingAvgRtt"},
    ciscopingmaxrtt{YType::int32, "ciscoPingMaxRtt"},
    ciscopingcompleted{YType::boolean, "ciscoPingCompleted"},
    ciscopingentryowner{YType::str, "ciscoPingEntryOwner"},
    ciscopingentrystatus{YType::enumeration, "ciscoPingEntryStatus"},
    ciscopingvrfname{YType::str, "ciscoPingVrfName"}
{

    yang_name = "ciscoPingEntry"; yang_parent_name = "ciscoPingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::~CiscoPingEntry()
{
}

bool CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscopingserialnumber.is_set
	|| ciscopingprotocol.is_set
	|| ciscopingaddress.is_set
	|| ciscopingpacketcount.is_set
	|| ciscopingpacketsize.is_set
	|| ciscopingpackettimeout.is_set
	|| ciscopingdelay.is_set
	|| ciscopingtraponcompletion.is_set
	|| ciscopingsentpackets.is_set
	|| ciscopingreceivedpackets.is_set
	|| ciscopingminrtt.is_set
	|| ciscopingavgrtt.is_set
	|| ciscopingmaxrtt.is_set
	|| ciscopingcompleted.is_set
	|| ciscopingentryowner.is_set
	|| ciscopingentrystatus.is_set
	|| ciscopingvrfname.is_set;
}

bool CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscopingserialnumber.yfilter)
	|| ydk::is_set(ciscopingprotocol.yfilter)
	|| ydk::is_set(ciscopingaddress.yfilter)
	|| ydk::is_set(ciscopingpacketcount.yfilter)
	|| ydk::is_set(ciscopingpacketsize.yfilter)
	|| ydk::is_set(ciscopingpackettimeout.yfilter)
	|| ydk::is_set(ciscopingdelay.yfilter)
	|| ydk::is_set(ciscopingtraponcompletion.yfilter)
	|| ydk::is_set(ciscopingsentpackets.yfilter)
	|| ydk::is_set(ciscopingreceivedpackets.yfilter)
	|| ydk::is_set(ciscopingminrtt.yfilter)
	|| ydk::is_set(ciscopingavgrtt.yfilter)
	|| ydk::is_set(ciscopingmaxrtt.yfilter)
	|| ydk::is_set(ciscopingcompleted.yfilter)
	|| ydk::is_set(ciscopingentryowner.yfilter)
	|| ydk::is_set(ciscopingentrystatus.yfilter)
	|| ydk::is_set(ciscopingvrfname.yfilter);
}

std::string CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PING-MIB:CISCO-PING-MIB/ciscoPingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPingEntry";
    ADD_KEY_TOKEN(ciscopingserialnumber, "ciscoPingSerialNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscopingserialnumber.is_set || is_set(ciscopingserialnumber.yfilter)) leaf_name_data.push_back(ciscopingserialnumber.get_name_leafdata());
    if (ciscopingprotocol.is_set || is_set(ciscopingprotocol.yfilter)) leaf_name_data.push_back(ciscopingprotocol.get_name_leafdata());
    if (ciscopingaddress.is_set || is_set(ciscopingaddress.yfilter)) leaf_name_data.push_back(ciscopingaddress.get_name_leafdata());
    if (ciscopingpacketcount.is_set || is_set(ciscopingpacketcount.yfilter)) leaf_name_data.push_back(ciscopingpacketcount.get_name_leafdata());
    if (ciscopingpacketsize.is_set || is_set(ciscopingpacketsize.yfilter)) leaf_name_data.push_back(ciscopingpacketsize.get_name_leafdata());
    if (ciscopingpackettimeout.is_set || is_set(ciscopingpackettimeout.yfilter)) leaf_name_data.push_back(ciscopingpackettimeout.get_name_leafdata());
    if (ciscopingdelay.is_set || is_set(ciscopingdelay.yfilter)) leaf_name_data.push_back(ciscopingdelay.get_name_leafdata());
    if (ciscopingtraponcompletion.is_set || is_set(ciscopingtraponcompletion.yfilter)) leaf_name_data.push_back(ciscopingtraponcompletion.get_name_leafdata());
    if (ciscopingsentpackets.is_set || is_set(ciscopingsentpackets.yfilter)) leaf_name_data.push_back(ciscopingsentpackets.get_name_leafdata());
    if (ciscopingreceivedpackets.is_set || is_set(ciscopingreceivedpackets.yfilter)) leaf_name_data.push_back(ciscopingreceivedpackets.get_name_leafdata());
    if (ciscopingminrtt.is_set || is_set(ciscopingminrtt.yfilter)) leaf_name_data.push_back(ciscopingminrtt.get_name_leafdata());
    if (ciscopingavgrtt.is_set || is_set(ciscopingavgrtt.yfilter)) leaf_name_data.push_back(ciscopingavgrtt.get_name_leafdata());
    if (ciscopingmaxrtt.is_set || is_set(ciscopingmaxrtt.yfilter)) leaf_name_data.push_back(ciscopingmaxrtt.get_name_leafdata());
    if (ciscopingcompleted.is_set || is_set(ciscopingcompleted.yfilter)) leaf_name_data.push_back(ciscopingcompleted.get_name_leafdata());
    if (ciscopingentryowner.is_set || is_set(ciscopingentryowner.yfilter)) leaf_name_data.push_back(ciscopingentryowner.get_name_leafdata());
    if (ciscopingentrystatus.is_set || is_set(ciscopingentrystatus.yfilter)) leaf_name_data.push_back(ciscopingentrystatus.get_name_leafdata());
    if (ciscopingvrfname.is_set || is_set(ciscopingvrfname.yfilter)) leaf_name_data.push_back(ciscopingvrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoPingSerialNumber")
    {
        ciscopingserialnumber = value;
        ciscopingserialnumber.value_namespace = name_space;
        ciscopingserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingProtocol")
    {
        ciscopingprotocol = value;
        ciscopingprotocol.value_namespace = name_space;
        ciscopingprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingAddress")
    {
        ciscopingaddress = value;
        ciscopingaddress.value_namespace = name_space;
        ciscopingaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingPacketCount")
    {
        ciscopingpacketcount = value;
        ciscopingpacketcount.value_namespace = name_space;
        ciscopingpacketcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingPacketSize")
    {
        ciscopingpacketsize = value;
        ciscopingpacketsize.value_namespace = name_space;
        ciscopingpacketsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingPacketTimeout")
    {
        ciscopingpackettimeout = value;
        ciscopingpackettimeout.value_namespace = name_space;
        ciscopingpackettimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingDelay")
    {
        ciscopingdelay = value;
        ciscopingdelay.value_namespace = name_space;
        ciscopingdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingTrapOnCompletion")
    {
        ciscopingtraponcompletion = value;
        ciscopingtraponcompletion.value_namespace = name_space;
        ciscopingtraponcompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingSentPackets")
    {
        ciscopingsentpackets = value;
        ciscopingsentpackets.value_namespace = name_space;
        ciscopingsentpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingReceivedPackets")
    {
        ciscopingreceivedpackets = value;
        ciscopingreceivedpackets.value_namespace = name_space;
        ciscopingreceivedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingMinRtt")
    {
        ciscopingminrtt = value;
        ciscopingminrtt.value_namespace = name_space;
        ciscopingminrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingAvgRtt")
    {
        ciscopingavgrtt = value;
        ciscopingavgrtt.value_namespace = name_space;
        ciscopingavgrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingMaxRtt")
    {
        ciscopingmaxrtt = value;
        ciscopingmaxrtt.value_namespace = name_space;
        ciscopingmaxrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingCompleted")
    {
        ciscopingcompleted = value;
        ciscopingcompleted.value_namespace = name_space;
        ciscopingcompleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingEntryOwner")
    {
        ciscopingentryowner = value;
        ciscopingentryowner.value_namespace = name_space;
        ciscopingentryowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingEntryStatus")
    {
        ciscopingentrystatus = value;
        ciscopingentrystatus.value_namespace = name_space;
        ciscopingentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingVrfName")
    {
        ciscopingvrfname = value;
        ciscopingvrfname.value_namespace = name_space;
        ciscopingvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoPingSerialNumber")
    {
        ciscopingserialnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoPingProtocol")
    {
        ciscopingprotocol.yfilter = yfilter;
    }
    if(value_path == "ciscoPingAddress")
    {
        ciscopingaddress.yfilter = yfilter;
    }
    if(value_path == "ciscoPingPacketCount")
    {
        ciscopingpacketcount.yfilter = yfilter;
    }
    if(value_path == "ciscoPingPacketSize")
    {
        ciscopingpacketsize.yfilter = yfilter;
    }
    if(value_path == "ciscoPingPacketTimeout")
    {
        ciscopingpackettimeout.yfilter = yfilter;
    }
    if(value_path == "ciscoPingDelay")
    {
        ciscopingdelay.yfilter = yfilter;
    }
    if(value_path == "ciscoPingTrapOnCompletion")
    {
        ciscopingtraponcompletion.yfilter = yfilter;
    }
    if(value_path == "ciscoPingSentPackets")
    {
        ciscopingsentpackets.yfilter = yfilter;
    }
    if(value_path == "ciscoPingReceivedPackets")
    {
        ciscopingreceivedpackets.yfilter = yfilter;
    }
    if(value_path == "ciscoPingMinRtt")
    {
        ciscopingminrtt.yfilter = yfilter;
    }
    if(value_path == "ciscoPingAvgRtt")
    {
        ciscopingavgrtt.yfilter = yfilter;
    }
    if(value_path == "ciscoPingMaxRtt")
    {
        ciscopingmaxrtt.yfilter = yfilter;
    }
    if(value_path == "ciscoPingCompleted")
    {
        ciscopingcompleted.yfilter = yfilter;
    }
    if(value_path == "ciscoPingEntryOwner")
    {
        ciscopingentryowner.yfilter = yfilter;
    }
    if(value_path == "ciscoPingEntryStatus")
    {
        ciscopingentrystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoPingVrfName")
    {
        ciscopingvrfname.yfilter = yfilter;
    }
}

bool CISCOPINGMIB::CiscoPingTable::CiscoPingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoPingSerialNumber" || name == "ciscoPingProtocol" || name == "ciscoPingAddress" || name == "ciscoPingPacketCount" || name == "ciscoPingPacketSize" || name == "ciscoPingPacketTimeout" || name == "ciscoPingDelay" || name == "ciscoPingTrapOnCompletion" || name == "ciscoPingSentPackets" || name == "ciscoPingReceivedPackets" || name == "ciscoPingMinRtt" || name == "ciscoPingAvgRtt" || name == "ciscoPingMaxRtt" || name == "ciscoPingCompleted" || name == "ciscoPingEntryOwner" || name == "ciscoPingEntryStatus" || name == "ciscoPingVrfName")
        return true;
    return false;
}


}
}

