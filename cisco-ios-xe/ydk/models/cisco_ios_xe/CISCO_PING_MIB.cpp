
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PING_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoPingMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation);
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

void CiscoPingMib::Ciscopingtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscopingserialnumber.operation)
	|| is_set(ciscopingaddress.operation)
	|| is_set(ciscopingavgrtt.operation)
	|| is_set(ciscopingcompleted.operation)
	|| is_set(ciscopingdelay.operation)
	|| is_set(ciscopingentryowner.operation)
	|| is_set(ciscopingentrystatus.operation)
	|| is_set(ciscopingmaxrtt.operation)
	|| is_set(ciscopingminrtt.operation)
	|| is_set(ciscopingpacketcount.operation)
	|| is_set(ciscopingpacketsize.operation)
	|| is_set(ciscopingpackettimeout.operation)
	|| is_set(ciscopingprotocol.operation)
	|| is_set(ciscopingreceivedpackets.operation)
	|| is_set(ciscopingsentpackets.operation)
	|| is_set(ciscopingtraponcompletion.operation)
	|| is_set(ciscopingvrfname.operation);
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

    if (ciscopingserialnumber.is_set || is_set(ciscopingserialnumber.operation)) leaf_name_data.push_back(ciscopingserialnumber.get_name_leafdata());
    if (ciscopingaddress.is_set || is_set(ciscopingaddress.operation)) leaf_name_data.push_back(ciscopingaddress.get_name_leafdata());
    if (ciscopingavgrtt.is_set || is_set(ciscopingavgrtt.operation)) leaf_name_data.push_back(ciscopingavgrtt.get_name_leafdata());
    if (ciscopingcompleted.is_set || is_set(ciscopingcompleted.operation)) leaf_name_data.push_back(ciscopingcompleted.get_name_leafdata());
    if (ciscopingdelay.is_set || is_set(ciscopingdelay.operation)) leaf_name_data.push_back(ciscopingdelay.get_name_leafdata());
    if (ciscopingentryowner.is_set || is_set(ciscopingentryowner.operation)) leaf_name_data.push_back(ciscopingentryowner.get_name_leafdata());
    if (ciscopingentrystatus.is_set || is_set(ciscopingentrystatus.operation)) leaf_name_data.push_back(ciscopingentrystatus.get_name_leafdata());
    if (ciscopingmaxrtt.is_set || is_set(ciscopingmaxrtt.operation)) leaf_name_data.push_back(ciscopingmaxrtt.get_name_leafdata());
    if (ciscopingminrtt.is_set || is_set(ciscopingminrtt.operation)) leaf_name_data.push_back(ciscopingminrtt.get_name_leafdata());
    if (ciscopingpacketcount.is_set || is_set(ciscopingpacketcount.operation)) leaf_name_data.push_back(ciscopingpacketcount.get_name_leafdata());
    if (ciscopingpacketsize.is_set || is_set(ciscopingpacketsize.operation)) leaf_name_data.push_back(ciscopingpacketsize.get_name_leafdata());
    if (ciscopingpackettimeout.is_set || is_set(ciscopingpackettimeout.operation)) leaf_name_data.push_back(ciscopingpackettimeout.get_name_leafdata());
    if (ciscopingprotocol.is_set || is_set(ciscopingprotocol.operation)) leaf_name_data.push_back(ciscopingprotocol.get_name_leafdata());
    if (ciscopingreceivedpackets.is_set || is_set(ciscopingreceivedpackets.operation)) leaf_name_data.push_back(ciscopingreceivedpackets.get_name_leafdata());
    if (ciscopingsentpackets.is_set || is_set(ciscopingsentpackets.operation)) leaf_name_data.push_back(ciscopingsentpackets.get_name_leafdata());
    if (ciscopingtraponcompletion.is_set || is_set(ciscopingtraponcompletion.operation)) leaf_name_data.push_back(ciscopingtraponcompletion.get_name_leafdata());
    if (ciscopingvrfname.is_set || is_set(ciscopingvrfname.operation)) leaf_name_data.push_back(ciscopingvrfname.get_name_leafdata());


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

void CiscoPingMib::Ciscopingtable::Ciscopingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoPingSerialNumber")
    {
        ciscopingserialnumber = value;
    }
    if(value_path == "ciscoPingAddress")
    {
        ciscopingaddress = value;
    }
    if(value_path == "ciscoPingAvgRtt")
    {
        ciscopingavgrtt = value;
    }
    if(value_path == "ciscoPingCompleted")
    {
        ciscopingcompleted = value;
    }
    if(value_path == "ciscoPingDelay")
    {
        ciscopingdelay = value;
    }
    if(value_path == "ciscoPingEntryOwner")
    {
        ciscopingentryowner = value;
    }
    if(value_path == "ciscoPingEntryStatus")
    {
        ciscopingentrystatus = value;
    }
    if(value_path == "ciscoPingMaxRtt")
    {
        ciscopingmaxrtt = value;
    }
    if(value_path == "ciscoPingMinRtt")
    {
        ciscopingminrtt = value;
    }
    if(value_path == "ciscoPingPacketCount")
    {
        ciscopingpacketcount = value;
    }
    if(value_path == "ciscoPingPacketSize")
    {
        ciscopingpacketsize = value;
    }
    if(value_path == "ciscoPingPacketTimeout")
    {
        ciscopingpackettimeout = value;
    }
    if(value_path == "ciscoPingProtocol")
    {
        ciscopingprotocol = value;
    }
    if(value_path == "ciscoPingReceivedPackets")
    {
        ciscopingreceivedpackets = value;
    }
    if(value_path == "ciscoPingSentPackets")
    {
        ciscopingsentpackets = value;
    }
    if(value_path == "ciscoPingTrapOnCompletion")
    {
        ciscopingtraponcompletion = value;
    }
    if(value_path == "ciscoPingVrfName")
    {
        ciscopingvrfname = value;
    }
}


}
}

