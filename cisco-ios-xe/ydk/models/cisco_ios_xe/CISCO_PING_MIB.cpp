
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PING_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_PING_MIB {

CiscoPingMib::CiscoPingMib()
    :
    ciscopingtable(std::make_shared<CiscoPingMib::Ciscopingtable>())
{
    ciscopingtable->parent = this;

    yang_name = "CISCO-PING-MIB"; yang_parent_name = "CISCO-PING-MIB";
}

CiscoPingMib::~CiscoPingMib()
{
}

bool CiscoPingMib::has_data() const
{
    return (ciscopingtable !=  nullptr && ciscopingtable->has_data());
}

bool CiscoPingMib::has_operation() const
{
    return is_set(yfilter)
	|| (ciscopingtable !=  nullptr && ciscopingtable->has_operation());
}

std::string CiscoPingMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PING-MIB:CISCO-PING-MIB";

    return path_buffer.str();

}

const EntityPath CiscoPingMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoPingMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoPingTable")
    {
        if(ciscopingtable == nullptr)
        {
            ciscopingtable = std::make_shared<CiscoPingMib::Ciscopingtable>();
        }
        return ciscopingtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPingMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscopingtable != nullptr)
    {
        children["ciscoPingTable"] = ciscopingtable;
    }

    return children;
}

void CiscoPingMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPingMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoPingMib::clone_ptr() const
{
    return std::make_shared<CiscoPingMib>();
}

std::string CiscoPingMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoPingMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoPingMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoPingMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoPingMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoPingTable")
        return true;
    return false;
}

CiscoPingMib::Ciscopingtable::Ciscopingtable()
{
    yang_name = "ciscoPingTable"; yang_parent_name = "CISCO-PING-MIB";
}

CiscoPingMib::Ciscopingtable::~Ciscopingtable()
{
}

bool CiscoPingMib::Ciscopingtable::has_data() const
{
    for (std::size_t index=0; index<ciscopingentry.size(); index++)
    {
        if(ciscopingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPingMib::Ciscopingtable::has_operation() const
{
    for (std::size_t index=0; index<ciscopingentry.size(); index++)
    {
        if(ciscopingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoPingMib::Ciscopingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPingTable";

    return path_buffer.str();

}

const EntityPath CiscoPingMib::Ciscopingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PING-MIB:CISCO-PING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPingMib::Ciscopingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoPingEntry")
    {
        for(auto const & c : ciscopingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPingMib::Ciscopingtable::Ciscopingentry>();
        c->parent = this;
        ciscopingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPingMib::Ciscopingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscopingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPingMib::Ciscopingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoPingMib::Ciscopingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoPingMib::Ciscopingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoPingEntry")
        return true;
    return false;
}

CiscoPingMib::Ciscopingtable::Ciscopingentry::Ciscopingentry()
    :
    ciscopingserialnumber{YType::int32, "ciscoPingSerialNumber"},
    ciscopingaddress{YType::str, "ciscoPingAddress"},
    ciscopingavgrtt{YType::int32, "ciscoPingAvgRtt"},
    ciscopingcompleted{YType::boolean, "ciscoPingCompleted"},
    ciscopingdelay{YType::int32, "ciscoPingDelay"},
    ciscopingentryowner{YType::str, "ciscoPingEntryOwner"},
    ciscopingentrystatus{YType::enumeration, "ciscoPingEntryStatus"},
    ciscopingmaxrtt{YType::int32, "ciscoPingMaxRtt"},
    ciscopingminrtt{YType::int32, "ciscoPingMinRtt"},
    ciscopingpacketcount{YType::int32, "ciscoPingPacketCount"},
    ciscopingpacketsize{YType::int32, "ciscoPingPacketSize"},
    ciscopingpackettimeout{YType::int32, "ciscoPingPacketTimeout"},
    ciscopingprotocol{YType::enumeration, "ciscoPingProtocol"},
    ciscopingreceivedpackets{YType::uint32, "ciscoPingReceivedPackets"},
    ciscopingsentpackets{YType::uint32, "ciscoPingSentPackets"},
    ciscopingtraponcompletion{YType::boolean, "ciscoPingTrapOnCompletion"},
    ciscopingvrfname{YType::str, "ciscoPingVrfName"}
{
    yang_name = "ciscoPingEntry"; yang_parent_name = "ciscoPingTable";
}

CiscoPingMib::Ciscopingtable::Ciscopingentry::~Ciscopingentry()
{
}

bool CiscoPingMib::Ciscopingtable::Ciscopingentry::has_data() const
{
    return ciscopingserialnumber.is_set
	|| ciscopingaddress.is_set
	|| ciscopingavgrtt.is_set
	|| ciscopingcompleted.is_set
	|| ciscopingdelay.is_set
	|| ciscopingentryowner.is_set
	|| ciscopingentrystatus.is_set
	|| ciscopingmaxrtt.is_set
	|| ciscopingminrtt.is_set
	|| ciscopingpacketcount.is_set
	|| ciscopingpacketsize.is_set
	|| ciscopingpackettimeout.is_set
	|| ciscopingprotocol.is_set
	|| ciscopingreceivedpackets.is_set
	|| ciscopingsentpackets.is_set
	|| ciscopingtraponcompletion.is_set
	|| ciscopingvrfname.is_set;
}

bool CiscoPingMib::Ciscopingtable::Ciscopingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscopingserialnumber.yfilter)
	|| ydk::is_set(ciscopingaddress.yfilter)
	|| ydk::is_set(ciscopingavgrtt.yfilter)
	|| ydk::is_set(ciscopingcompleted.yfilter)
	|| ydk::is_set(ciscopingdelay.yfilter)
	|| ydk::is_set(ciscopingentryowner.yfilter)
	|| ydk::is_set(ciscopingentrystatus.yfilter)
	|| ydk::is_set(ciscopingmaxrtt.yfilter)
	|| ydk::is_set(ciscopingminrtt.yfilter)
	|| ydk::is_set(ciscopingpacketcount.yfilter)
	|| ydk::is_set(ciscopingpacketsize.yfilter)
	|| ydk::is_set(ciscopingpackettimeout.yfilter)
	|| ydk::is_set(ciscopingprotocol.yfilter)
	|| ydk::is_set(ciscopingreceivedpackets.yfilter)
	|| ydk::is_set(ciscopingsentpackets.yfilter)
	|| ydk::is_set(ciscopingtraponcompletion.yfilter)
	|| ydk::is_set(ciscopingvrfname.yfilter);
}

std::string CiscoPingMib::Ciscopingtable::Ciscopingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPingEntry" <<"[ciscoPingSerialNumber='" <<ciscopingserialnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPingMib::Ciscopingtable::Ciscopingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PING-MIB:CISCO-PING-MIB/ciscoPingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscopingserialnumber.is_set || is_set(ciscopingserialnumber.yfilter)) leaf_name_data.push_back(ciscopingserialnumber.get_name_leafdata());
    if (ciscopingaddress.is_set || is_set(ciscopingaddress.yfilter)) leaf_name_data.push_back(ciscopingaddress.get_name_leafdata());
    if (ciscopingavgrtt.is_set || is_set(ciscopingavgrtt.yfilter)) leaf_name_data.push_back(ciscopingavgrtt.get_name_leafdata());
    if (ciscopingcompleted.is_set || is_set(ciscopingcompleted.yfilter)) leaf_name_data.push_back(ciscopingcompleted.get_name_leafdata());
    if (ciscopingdelay.is_set || is_set(ciscopingdelay.yfilter)) leaf_name_data.push_back(ciscopingdelay.get_name_leafdata());
    if (ciscopingentryowner.is_set || is_set(ciscopingentryowner.yfilter)) leaf_name_data.push_back(ciscopingentryowner.get_name_leafdata());
    if (ciscopingentrystatus.is_set || is_set(ciscopingentrystatus.yfilter)) leaf_name_data.push_back(ciscopingentrystatus.get_name_leafdata());
    if (ciscopingmaxrtt.is_set || is_set(ciscopingmaxrtt.yfilter)) leaf_name_data.push_back(ciscopingmaxrtt.get_name_leafdata());
    if (ciscopingminrtt.is_set || is_set(ciscopingminrtt.yfilter)) leaf_name_data.push_back(ciscopingminrtt.get_name_leafdata());
    if (ciscopingpacketcount.is_set || is_set(ciscopingpacketcount.yfilter)) leaf_name_data.push_back(ciscopingpacketcount.get_name_leafdata());
    if (ciscopingpacketsize.is_set || is_set(ciscopingpacketsize.yfilter)) leaf_name_data.push_back(ciscopingpacketsize.get_name_leafdata());
    if (ciscopingpackettimeout.is_set || is_set(ciscopingpackettimeout.yfilter)) leaf_name_data.push_back(ciscopingpackettimeout.get_name_leafdata());
    if (ciscopingprotocol.is_set || is_set(ciscopingprotocol.yfilter)) leaf_name_data.push_back(ciscopingprotocol.get_name_leafdata());
    if (ciscopingreceivedpackets.is_set || is_set(ciscopingreceivedpackets.yfilter)) leaf_name_data.push_back(ciscopingreceivedpackets.get_name_leafdata());
    if (ciscopingsentpackets.is_set || is_set(ciscopingsentpackets.yfilter)) leaf_name_data.push_back(ciscopingsentpackets.get_name_leafdata());
    if (ciscopingtraponcompletion.is_set || is_set(ciscopingtraponcompletion.yfilter)) leaf_name_data.push_back(ciscopingtraponcompletion.get_name_leafdata());
    if (ciscopingvrfname.is_set || is_set(ciscopingvrfname.yfilter)) leaf_name_data.push_back(ciscopingvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPingMib::Ciscopingtable::Ciscopingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPingMib::Ciscopingtable::Ciscopingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPingMib::Ciscopingtable::Ciscopingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoPingSerialNumber")
    {
        ciscopingserialnumber = value;
        ciscopingserialnumber.value_namespace = name_space;
        ciscopingserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingAddress")
    {
        ciscopingaddress = value;
        ciscopingaddress.value_namespace = name_space;
        ciscopingaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingAvgRtt")
    {
        ciscopingavgrtt = value;
        ciscopingavgrtt.value_namespace = name_space;
        ciscopingavgrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingCompleted")
    {
        ciscopingcompleted = value;
        ciscopingcompleted.value_namespace = name_space;
        ciscopingcompleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingDelay")
    {
        ciscopingdelay = value;
        ciscopingdelay.value_namespace = name_space;
        ciscopingdelay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciscoPingMaxRtt")
    {
        ciscopingmaxrtt = value;
        ciscopingmaxrtt.value_namespace = name_space;
        ciscopingmaxrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingMinRtt")
    {
        ciscopingminrtt = value;
        ciscopingminrtt.value_namespace = name_space;
        ciscopingminrtt.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciscoPingProtocol")
    {
        ciscopingprotocol = value;
        ciscopingprotocol.value_namespace = name_space;
        ciscopingprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingReceivedPackets")
    {
        ciscopingreceivedpackets = value;
        ciscopingreceivedpackets.value_namespace = name_space;
        ciscopingreceivedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingSentPackets")
    {
        ciscopingsentpackets = value;
        ciscopingsentpackets.value_namespace = name_space;
        ciscopingsentpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingTrapOnCompletion")
    {
        ciscopingtraponcompletion = value;
        ciscopingtraponcompletion.value_namespace = name_space;
        ciscopingtraponcompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPingVrfName")
    {
        ciscopingvrfname = value;
        ciscopingvrfname.value_namespace = name_space;
        ciscopingvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoPingMib::Ciscopingtable::Ciscopingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoPingSerialNumber")
    {
        ciscopingserialnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoPingAddress")
    {
        ciscopingaddress.yfilter = yfilter;
    }
    if(value_path == "ciscoPingAvgRtt")
    {
        ciscopingavgrtt.yfilter = yfilter;
    }
    if(value_path == "ciscoPingCompleted")
    {
        ciscopingcompleted.yfilter = yfilter;
    }
    if(value_path == "ciscoPingDelay")
    {
        ciscopingdelay.yfilter = yfilter;
    }
    if(value_path == "ciscoPingEntryOwner")
    {
        ciscopingentryowner.yfilter = yfilter;
    }
    if(value_path == "ciscoPingEntryStatus")
    {
        ciscopingentrystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoPingMaxRtt")
    {
        ciscopingmaxrtt.yfilter = yfilter;
    }
    if(value_path == "ciscoPingMinRtt")
    {
        ciscopingminrtt.yfilter = yfilter;
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
    if(value_path == "ciscoPingProtocol")
    {
        ciscopingprotocol.yfilter = yfilter;
    }
    if(value_path == "ciscoPingReceivedPackets")
    {
        ciscopingreceivedpackets.yfilter = yfilter;
    }
    if(value_path == "ciscoPingSentPackets")
    {
        ciscopingsentpackets.yfilter = yfilter;
    }
    if(value_path == "ciscoPingTrapOnCompletion")
    {
        ciscopingtraponcompletion.yfilter = yfilter;
    }
    if(value_path == "ciscoPingVrfName")
    {
        ciscopingvrfname.yfilter = yfilter;
    }
}

bool CiscoPingMib::Ciscopingtable::Ciscopingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoPingSerialNumber" || name == "ciscoPingAddress" || name == "ciscoPingAvgRtt" || name == "ciscoPingCompleted" || name == "ciscoPingDelay" || name == "ciscoPingEntryOwner" || name == "ciscoPingEntryStatus" || name == "ciscoPingMaxRtt" || name == "ciscoPingMinRtt" || name == "ciscoPingPacketCount" || name == "ciscoPingPacketSize" || name == "ciscoPingPacketTimeout" || name == "ciscoPingProtocol" || name == "ciscoPingReceivedPackets" || name == "ciscoPingSentPackets" || name == "ciscoPingTrapOnCompletion" || name == "ciscoPingVrfName")
        return true;
    return false;
}


}
}

