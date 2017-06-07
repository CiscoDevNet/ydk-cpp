
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TOKEN_RING_RMON_MIB.hpp"

namespace ydk {
namespace TOKEN_RING_RMON_MIB {

TokenRingRmonMib::TokenRingRmonMib()
    :
    ringstationconfigcontroltable(std::make_shared<TokenRingRmonMib::Ringstationconfigcontroltable>())
	,ringstationconfigtable(std::make_shared<TokenRingRmonMib::Ringstationconfigtable>())
	,ringstationcontroltable(std::make_shared<TokenRingRmonMib::Ringstationcontroltable>())
	,ringstationordertable(std::make_shared<TokenRingRmonMib::Ringstationordertable>())
	,ringstationtable(std::make_shared<TokenRingRmonMib::Ringstationtable>())
	,sourceroutingstatstable(std::make_shared<TokenRingRmonMib::Sourceroutingstatstable>())
	,tokenringmlhistorytable(std::make_shared<TokenRingRmonMib::Tokenringmlhistorytable>())
	,tokenringmlstatstable(std::make_shared<TokenRingRmonMib::Tokenringmlstatstable>())
	,tokenringphistorytable(std::make_shared<TokenRingRmonMib::Tokenringphistorytable>())
	,tokenringpstatstable(std::make_shared<TokenRingRmonMib::Tokenringpstatstable>())
{
    ringstationconfigcontroltable->parent = this;

    ringstationconfigtable->parent = this;

    ringstationcontroltable->parent = this;

    ringstationordertable->parent = this;

    ringstationtable->parent = this;

    sourceroutingstatstable->parent = this;

    tokenringmlhistorytable->parent = this;

    tokenringmlstatstable->parent = this;

    tokenringphistorytable->parent = this;

    tokenringpstatstable->parent = this;

    yang_name = "TOKEN-RING-RMON-MIB"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::~TokenRingRmonMib()
{
}

bool TokenRingRmonMib::has_data() const
{
    return (ringstationconfigcontroltable !=  nullptr && ringstationconfigcontroltable->has_data())
	|| (ringstationconfigtable !=  nullptr && ringstationconfigtable->has_data())
	|| (ringstationcontroltable !=  nullptr && ringstationcontroltable->has_data())
	|| (ringstationordertable !=  nullptr && ringstationordertable->has_data())
	|| (ringstationtable !=  nullptr && ringstationtable->has_data())
	|| (sourceroutingstatstable !=  nullptr && sourceroutingstatstable->has_data())
	|| (tokenringmlhistorytable !=  nullptr && tokenringmlhistorytable->has_data())
	|| (tokenringmlstatstable !=  nullptr && tokenringmlstatstable->has_data())
	|| (tokenringphistorytable !=  nullptr && tokenringphistorytable->has_data())
	|| (tokenringpstatstable !=  nullptr && tokenringpstatstable->has_data());
}

bool TokenRingRmonMib::has_operation() const
{
    return is_set(operation)
	|| (ringstationconfigcontroltable !=  nullptr && ringstationconfigcontroltable->has_operation())
	|| (ringstationconfigtable !=  nullptr && ringstationconfigtable->has_operation())
	|| (ringstationcontroltable !=  nullptr && ringstationcontroltable->has_operation())
	|| (ringstationordertable !=  nullptr && ringstationordertable->has_operation())
	|| (ringstationtable !=  nullptr && ringstationtable->has_operation())
	|| (sourceroutingstatstable !=  nullptr && sourceroutingstatstable->has_operation())
	|| (tokenringmlhistorytable !=  nullptr && tokenringmlhistorytable->has_operation())
	|| (tokenringmlstatstable !=  nullptr && tokenringmlstatstable->has_operation())
	|| (tokenringphistorytable !=  nullptr && tokenringphistorytable->has_operation())
	|| (tokenringpstatstable !=  nullptr && tokenringpstatstable->has_operation());
}

std::string TokenRingRmonMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> TokenRingRmonMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ringStationConfigControlTable")
    {
        if(ringstationconfigcontroltable == nullptr)
        {
            ringstationconfigcontroltable = std::make_shared<TokenRingRmonMib::Ringstationconfigcontroltable>();
        }
        return ringstationconfigcontroltable;
    }

    if(child_yang_name == "ringStationConfigTable")
    {
        if(ringstationconfigtable == nullptr)
        {
            ringstationconfigtable = std::make_shared<TokenRingRmonMib::Ringstationconfigtable>();
        }
        return ringstationconfigtable;
    }

    if(child_yang_name == "ringStationControlTable")
    {
        if(ringstationcontroltable == nullptr)
        {
            ringstationcontroltable = std::make_shared<TokenRingRmonMib::Ringstationcontroltable>();
        }
        return ringstationcontroltable;
    }

    if(child_yang_name == "ringStationOrderTable")
    {
        if(ringstationordertable == nullptr)
        {
            ringstationordertable = std::make_shared<TokenRingRmonMib::Ringstationordertable>();
        }
        return ringstationordertable;
    }

    if(child_yang_name == "ringStationTable")
    {
        if(ringstationtable == nullptr)
        {
            ringstationtable = std::make_shared<TokenRingRmonMib::Ringstationtable>();
        }
        return ringstationtable;
    }

    if(child_yang_name == "sourceRoutingStatsTable")
    {
        if(sourceroutingstatstable == nullptr)
        {
            sourceroutingstatstable = std::make_shared<TokenRingRmonMib::Sourceroutingstatstable>();
        }
        return sourceroutingstatstable;
    }

    if(child_yang_name == "tokenRingMLHistoryTable")
    {
        if(tokenringmlhistorytable == nullptr)
        {
            tokenringmlhistorytable = std::make_shared<TokenRingRmonMib::Tokenringmlhistorytable>();
        }
        return tokenringmlhistorytable;
    }

    if(child_yang_name == "tokenRingMLStatsTable")
    {
        if(tokenringmlstatstable == nullptr)
        {
            tokenringmlstatstable = std::make_shared<TokenRingRmonMib::Tokenringmlstatstable>();
        }
        return tokenringmlstatstable;
    }

    if(child_yang_name == "tokenRingPHistoryTable")
    {
        if(tokenringphistorytable == nullptr)
        {
            tokenringphistorytable = std::make_shared<TokenRingRmonMib::Tokenringphistorytable>();
        }
        return tokenringphistorytable;
    }

    if(child_yang_name == "tokenRingPStatsTable")
    {
        if(tokenringpstatstable == nullptr)
        {
            tokenringpstatstable = std::make_shared<TokenRingRmonMib::Tokenringpstatstable>();
        }
        return tokenringpstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ringstationconfigcontroltable != nullptr)
    {
        children["ringStationConfigControlTable"] = ringstationconfigcontroltable;
    }

    if(ringstationconfigtable != nullptr)
    {
        children["ringStationConfigTable"] = ringstationconfigtable;
    }

    if(ringstationcontroltable != nullptr)
    {
        children["ringStationControlTable"] = ringstationcontroltable;
    }

    if(ringstationordertable != nullptr)
    {
        children["ringStationOrderTable"] = ringstationordertable;
    }

    if(ringstationtable != nullptr)
    {
        children["ringStationTable"] = ringstationtable;
    }

    if(sourceroutingstatstable != nullptr)
    {
        children["sourceRoutingStatsTable"] = sourceroutingstatstable;
    }

    if(tokenringmlhistorytable != nullptr)
    {
        children["tokenRingMLHistoryTable"] = tokenringmlhistorytable;
    }

    if(tokenringmlstatstable != nullptr)
    {
        children["tokenRingMLStatsTable"] = tokenringmlstatstable;
    }

    if(tokenringphistorytable != nullptr)
    {
        children["tokenRingPHistoryTable"] = tokenringphistorytable;
    }

    if(tokenringpstatstable != nullptr)
    {
        children["tokenRingPStatsTable"] = tokenringpstatstable;
    }

    return children;
}

void TokenRingRmonMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TokenRingRmonMib::clone_ptr() const
{
    return std::make_shared<TokenRingRmonMib>();
}

std::string TokenRingRmonMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TokenRingRmonMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TokenRingRmonMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatstable()
{
    yang_name = "tokenRingMLStatsTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Tokenringmlstatstable::~Tokenringmlstatstable()
{
}

bool TokenRingRmonMib::Tokenringmlstatstable::has_data() const
{
    for (std::size_t index=0; index<tokenringmlstatsentry.size(); index++)
    {
        if(tokenringmlstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Tokenringmlstatstable::has_operation() const
{
    for (std::size_t index=0; index<tokenringmlstatsentry.size(); index++)
    {
        if(tokenringmlstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Tokenringmlstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingMLStatsTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringmlstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringmlstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tokenRingMLStatsEntry")
    {
        for(auto const & c : tokenringmlstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry>();
        c->parent = this;
        tokenringmlstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringmlstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tokenringmlstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Tokenringmlstatstable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::Tokenringmlstatsentry()
    :
    tokenringmlstatsindex{YType::int32, "tokenRingMLStatsIndex"},
    tokenringmlstatsaborterrors{YType::uint32, "tokenRingMLStatsAbortErrors"},
    tokenringmlstatsacerrors{YType::uint32, "tokenRingMLStatsACErrors"},
    tokenringmlstatsbeaconevents{YType::uint32, "tokenRingMLStatsBeaconEvents"},
    tokenringmlstatsbeaconpkts{YType::uint32, "tokenRingMLStatsBeaconPkts"},
    tokenringmlstatsbeacontime{YType::int32, "tokenRingMLStatsBeaconTime"},
    tokenringmlstatsbursterrors{YType::uint32, "tokenRingMLStatsBurstErrors"},
    tokenringmlstatsclaimtokenevents{YType::uint32, "tokenRingMLStatsClaimTokenEvents"},
    tokenringmlstatsclaimtokenpkts{YType::uint32, "tokenRingMLStatsClaimTokenPkts"},
    tokenringmlstatscongestionerrors{YType::uint32, "tokenRingMLStatsCongestionErrors"},
    tokenringmlstatsdatasource{YType::str, "tokenRingMLStatsDataSource"},
    tokenringmlstatsdropevents{YType::uint32, "tokenRingMLStatsDropEvents"},
    tokenringmlstatsframecopiederrors{YType::uint32, "tokenRingMLStatsFrameCopiedErrors"},
    tokenringmlstatsfrequencyerrors{YType::uint32, "tokenRingMLStatsFrequencyErrors"},
    tokenringmlstatsinternalerrors{YType::uint32, "tokenRingMLStatsInternalErrors"},
    tokenringmlstatslineerrors{YType::uint32, "tokenRingMLStatsLineErrors"},
    tokenringmlstatslostframeerrors{YType::uint32, "tokenRingMLStatsLostFrameErrors"},
    tokenringmlstatsmacoctets{YType::uint32, "tokenRingMLStatsMacOctets"},
    tokenringmlstatsmacpkts{YType::uint32, "tokenRingMLStatsMacPkts"},
    tokenringmlstatsnaunchanges{YType::uint32, "tokenRingMLStatsNAUNChanges"},
    tokenringmlstatsowner{YType::str, "tokenRingMLStatsOwner"},
    tokenringmlstatsringpollevents{YType::uint32, "tokenRingMLStatsRingPollEvents"},
    tokenringmlstatsringpurgeevents{YType::uint32, "tokenRingMLStatsRingPurgeEvents"},
    tokenringmlstatsringpurgepkts{YType::uint32, "tokenRingMLStatsRingPurgePkts"},
    tokenringmlstatssofterrorreports{YType::uint32, "tokenRingMLStatsSoftErrorReports"},
    tokenringmlstatsstatus{YType::enumeration, "tokenRingMLStatsStatus"},
    tokenringmlstatstokenerrors{YType::uint32, "tokenRingMLStatsTokenErrors"}
{
    yang_name = "tokenRingMLStatsEntry"; yang_parent_name = "tokenRingMLStatsTable";
}

TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::~Tokenringmlstatsentry()
{
}

bool TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::has_data() const
{
    return tokenringmlstatsindex.is_set
	|| tokenringmlstatsaborterrors.is_set
	|| tokenringmlstatsacerrors.is_set
	|| tokenringmlstatsbeaconevents.is_set
	|| tokenringmlstatsbeaconpkts.is_set
	|| tokenringmlstatsbeacontime.is_set
	|| tokenringmlstatsbursterrors.is_set
	|| tokenringmlstatsclaimtokenevents.is_set
	|| tokenringmlstatsclaimtokenpkts.is_set
	|| tokenringmlstatscongestionerrors.is_set
	|| tokenringmlstatsdatasource.is_set
	|| tokenringmlstatsdropevents.is_set
	|| tokenringmlstatsframecopiederrors.is_set
	|| tokenringmlstatsfrequencyerrors.is_set
	|| tokenringmlstatsinternalerrors.is_set
	|| tokenringmlstatslineerrors.is_set
	|| tokenringmlstatslostframeerrors.is_set
	|| tokenringmlstatsmacoctets.is_set
	|| tokenringmlstatsmacpkts.is_set
	|| tokenringmlstatsnaunchanges.is_set
	|| tokenringmlstatsowner.is_set
	|| tokenringmlstatsringpollevents.is_set
	|| tokenringmlstatsringpurgeevents.is_set
	|| tokenringmlstatsringpurgepkts.is_set
	|| tokenringmlstatssofterrorreports.is_set
	|| tokenringmlstatsstatus.is_set
	|| tokenringmlstatstokenerrors.is_set;
}

bool TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tokenringmlstatsindex.operation)
	|| is_set(tokenringmlstatsaborterrors.operation)
	|| is_set(tokenringmlstatsacerrors.operation)
	|| is_set(tokenringmlstatsbeaconevents.operation)
	|| is_set(tokenringmlstatsbeaconpkts.operation)
	|| is_set(tokenringmlstatsbeacontime.operation)
	|| is_set(tokenringmlstatsbursterrors.operation)
	|| is_set(tokenringmlstatsclaimtokenevents.operation)
	|| is_set(tokenringmlstatsclaimtokenpkts.operation)
	|| is_set(tokenringmlstatscongestionerrors.operation)
	|| is_set(tokenringmlstatsdatasource.operation)
	|| is_set(tokenringmlstatsdropevents.operation)
	|| is_set(tokenringmlstatsframecopiederrors.operation)
	|| is_set(tokenringmlstatsfrequencyerrors.operation)
	|| is_set(tokenringmlstatsinternalerrors.operation)
	|| is_set(tokenringmlstatslineerrors.operation)
	|| is_set(tokenringmlstatslostframeerrors.operation)
	|| is_set(tokenringmlstatsmacoctets.operation)
	|| is_set(tokenringmlstatsmacpkts.operation)
	|| is_set(tokenringmlstatsnaunchanges.operation)
	|| is_set(tokenringmlstatsowner.operation)
	|| is_set(tokenringmlstatsringpollevents.operation)
	|| is_set(tokenringmlstatsringpurgeevents.operation)
	|| is_set(tokenringmlstatsringpurgepkts.operation)
	|| is_set(tokenringmlstatssofterrorreports.operation)
	|| is_set(tokenringmlstatsstatus.operation)
	|| is_set(tokenringmlstatstokenerrors.operation);
}

std::string TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingMLStatsEntry" <<"[tokenRingMLStatsIndex='" <<tokenringmlstatsindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/tokenRingMLStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tokenringmlstatsindex.is_set || is_set(tokenringmlstatsindex.operation)) leaf_name_data.push_back(tokenringmlstatsindex.get_name_leafdata());
    if (tokenringmlstatsaborterrors.is_set || is_set(tokenringmlstatsaborterrors.operation)) leaf_name_data.push_back(tokenringmlstatsaborterrors.get_name_leafdata());
    if (tokenringmlstatsacerrors.is_set || is_set(tokenringmlstatsacerrors.operation)) leaf_name_data.push_back(tokenringmlstatsacerrors.get_name_leafdata());
    if (tokenringmlstatsbeaconevents.is_set || is_set(tokenringmlstatsbeaconevents.operation)) leaf_name_data.push_back(tokenringmlstatsbeaconevents.get_name_leafdata());
    if (tokenringmlstatsbeaconpkts.is_set || is_set(tokenringmlstatsbeaconpkts.operation)) leaf_name_data.push_back(tokenringmlstatsbeaconpkts.get_name_leafdata());
    if (tokenringmlstatsbeacontime.is_set || is_set(tokenringmlstatsbeacontime.operation)) leaf_name_data.push_back(tokenringmlstatsbeacontime.get_name_leafdata());
    if (tokenringmlstatsbursterrors.is_set || is_set(tokenringmlstatsbursterrors.operation)) leaf_name_data.push_back(tokenringmlstatsbursterrors.get_name_leafdata());
    if (tokenringmlstatsclaimtokenevents.is_set || is_set(tokenringmlstatsclaimtokenevents.operation)) leaf_name_data.push_back(tokenringmlstatsclaimtokenevents.get_name_leafdata());
    if (tokenringmlstatsclaimtokenpkts.is_set || is_set(tokenringmlstatsclaimtokenpkts.operation)) leaf_name_data.push_back(tokenringmlstatsclaimtokenpkts.get_name_leafdata());
    if (tokenringmlstatscongestionerrors.is_set || is_set(tokenringmlstatscongestionerrors.operation)) leaf_name_data.push_back(tokenringmlstatscongestionerrors.get_name_leafdata());
    if (tokenringmlstatsdatasource.is_set || is_set(tokenringmlstatsdatasource.operation)) leaf_name_data.push_back(tokenringmlstatsdatasource.get_name_leafdata());
    if (tokenringmlstatsdropevents.is_set || is_set(tokenringmlstatsdropevents.operation)) leaf_name_data.push_back(tokenringmlstatsdropevents.get_name_leafdata());
    if (tokenringmlstatsframecopiederrors.is_set || is_set(tokenringmlstatsframecopiederrors.operation)) leaf_name_data.push_back(tokenringmlstatsframecopiederrors.get_name_leafdata());
    if (tokenringmlstatsfrequencyerrors.is_set || is_set(tokenringmlstatsfrequencyerrors.operation)) leaf_name_data.push_back(tokenringmlstatsfrequencyerrors.get_name_leafdata());
    if (tokenringmlstatsinternalerrors.is_set || is_set(tokenringmlstatsinternalerrors.operation)) leaf_name_data.push_back(tokenringmlstatsinternalerrors.get_name_leafdata());
    if (tokenringmlstatslineerrors.is_set || is_set(tokenringmlstatslineerrors.operation)) leaf_name_data.push_back(tokenringmlstatslineerrors.get_name_leafdata());
    if (tokenringmlstatslostframeerrors.is_set || is_set(tokenringmlstatslostframeerrors.operation)) leaf_name_data.push_back(tokenringmlstatslostframeerrors.get_name_leafdata());
    if (tokenringmlstatsmacoctets.is_set || is_set(tokenringmlstatsmacoctets.operation)) leaf_name_data.push_back(tokenringmlstatsmacoctets.get_name_leafdata());
    if (tokenringmlstatsmacpkts.is_set || is_set(tokenringmlstatsmacpkts.operation)) leaf_name_data.push_back(tokenringmlstatsmacpkts.get_name_leafdata());
    if (tokenringmlstatsnaunchanges.is_set || is_set(tokenringmlstatsnaunchanges.operation)) leaf_name_data.push_back(tokenringmlstatsnaunchanges.get_name_leafdata());
    if (tokenringmlstatsowner.is_set || is_set(tokenringmlstatsowner.operation)) leaf_name_data.push_back(tokenringmlstatsowner.get_name_leafdata());
    if (tokenringmlstatsringpollevents.is_set || is_set(tokenringmlstatsringpollevents.operation)) leaf_name_data.push_back(tokenringmlstatsringpollevents.get_name_leafdata());
    if (tokenringmlstatsringpurgeevents.is_set || is_set(tokenringmlstatsringpurgeevents.operation)) leaf_name_data.push_back(tokenringmlstatsringpurgeevents.get_name_leafdata());
    if (tokenringmlstatsringpurgepkts.is_set || is_set(tokenringmlstatsringpurgepkts.operation)) leaf_name_data.push_back(tokenringmlstatsringpurgepkts.get_name_leafdata());
    if (tokenringmlstatssofterrorreports.is_set || is_set(tokenringmlstatssofterrorreports.operation)) leaf_name_data.push_back(tokenringmlstatssofterrorreports.get_name_leafdata());
    if (tokenringmlstatsstatus.is_set || is_set(tokenringmlstatsstatus.operation)) leaf_name_data.push_back(tokenringmlstatsstatus.get_name_leafdata());
    if (tokenringmlstatstokenerrors.is_set || is_set(tokenringmlstatstokenerrors.operation)) leaf_name_data.push_back(tokenringmlstatstokenerrors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tokenRingMLStatsIndex")
    {
        tokenringmlstatsindex = value;
    }
    if(value_path == "tokenRingMLStatsAbortErrors")
    {
        tokenringmlstatsaborterrors = value;
    }
    if(value_path == "tokenRingMLStatsACErrors")
    {
        tokenringmlstatsacerrors = value;
    }
    if(value_path == "tokenRingMLStatsBeaconEvents")
    {
        tokenringmlstatsbeaconevents = value;
    }
    if(value_path == "tokenRingMLStatsBeaconPkts")
    {
        tokenringmlstatsbeaconpkts = value;
    }
    if(value_path == "tokenRingMLStatsBeaconTime")
    {
        tokenringmlstatsbeacontime = value;
    }
    if(value_path == "tokenRingMLStatsBurstErrors")
    {
        tokenringmlstatsbursterrors = value;
    }
    if(value_path == "tokenRingMLStatsClaimTokenEvents")
    {
        tokenringmlstatsclaimtokenevents = value;
    }
    if(value_path == "tokenRingMLStatsClaimTokenPkts")
    {
        tokenringmlstatsclaimtokenpkts = value;
    }
    if(value_path == "tokenRingMLStatsCongestionErrors")
    {
        tokenringmlstatscongestionerrors = value;
    }
    if(value_path == "tokenRingMLStatsDataSource")
    {
        tokenringmlstatsdatasource = value;
    }
    if(value_path == "tokenRingMLStatsDropEvents")
    {
        tokenringmlstatsdropevents = value;
    }
    if(value_path == "tokenRingMLStatsFrameCopiedErrors")
    {
        tokenringmlstatsframecopiederrors = value;
    }
    if(value_path == "tokenRingMLStatsFrequencyErrors")
    {
        tokenringmlstatsfrequencyerrors = value;
    }
    if(value_path == "tokenRingMLStatsInternalErrors")
    {
        tokenringmlstatsinternalerrors = value;
    }
    if(value_path == "tokenRingMLStatsLineErrors")
    {
        tokenringmlstatslineerrors = value;
    }
    if(value_path == "tokenRingMLStatsLostFrameErrors")
    {
        tokenringmlstatslostframeerrors = value;
    }
    if(value_path == "tokenRingMLStatsMacOctets")
    {
        tokenringmlstatsmacoctets = value;
    }
    if(value_path == "tokenRingMLStatsMacPkts")
    {
        tokenringmlstatsmacpkts = value;
    }
    if(value_path == "tokenRingMLStatsNAUNChanges")
    {
        tokenringmlstatsnaunchanges = value;
    }
    if(value_path == "tokenRingMLStatsOwner")
    {
        tokenringmlstatsowner = value;
    }
    if(value_path == "tokenRingMLStatsRingPollEvents")
    {
        tokenringmlstatsringpollevents = value;
    }
    if(value_path == "tokenRingMLStatsRingPurgeEvents")
    {
        tokenringmlstatsringpurgeevents = value;
    }
    if(value_path == "tokenRingMLStatsRingPurgePkts")
    {
        tokenringmlstatsringpurgepkts = value;
    }
    if(value_path == "tokenRingMLStatsSoftErrorReports")
    {
        tokenringmlstatssofterrorreports = value;
    }
    if(value_path == "tokenRingMLStatsStatus")
    {
        tokenringmlstatsstatus = value;
    }
    if(value_path == "tokenRingMLStatsTokenErrors")
    {
        tokenringmlstatstokenerrors = value;
    }
}

TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatstable()
{
    yang_name = "tokenRingPStatsTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Tokenringpstatstable::~Tokenringpstatstable()
{
}

bool TokenRingRmonMib::Tokenringpstatstable::has_data() const
{
    for (std::size_t index=0; index<tokenringpstatsentry.size(); index++)
    {
        if(tokenringpstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Tokenringpstatstable::has_operation() const
{
    for (std::size_t index=0; index<tokenringpstatsentry.size(); index++)
    {
        if(tokenringpstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Tokenringpstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingPStatsTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringpstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringpstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tokenRingPStatsEntry")
    {
        for(auto const & c : tokenringpstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry>();
        c->parent = this;
        tokenringpstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringpstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tokenringpstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Tokenringpstatstable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::Tokenringpstatsentry()
    :
    tokenringpstatsindex{YType::int32, "tokenRingPStatsIndex"},
    tokenringpstatsdatabroadcastpkts{YType::uint32, "tokenRingPStatsDataBroadcastPkts"},
    tokenringpstatsdatamulticastpkts{YType::uint32, "tokenRingPStatsDataMulticastPkts"},
    tokenringpstatsdataoctets{YType::uint32, "tokenRingPStatsDataOctets"},
    tokenringpstatsdatapkts{YType::uint32, "tokenRingPStatsDataPkts"},
    tokenringpstatsdatapkts1024to2047octets{YType::uint32, "tokenRingPStatsDataPkts1024to2047Octets"},
    tokenringpstatsdatapkts128to255octets{YType::uint32, "tokenRingPStatsDataPkts128to255Octets"},
    tokenringpstatsdatapkts18to63octets{YType::uint32, "tokenRingPStatsDataPkts18to63Octets"},
    tokenringpstatsdatapkts2048to4095octets{YType::uint32, "tokenRingPStatsDataPkts2048to4095Octets"},
    tokenringpstatsdatapkts256to511octets{YType::uint32, "tokenRingPStatsDataPkts256to511Octets"},
    tokenringpstatsdatapkts4096to8191octets{YType::uint32, "tokenRingPStatsDataPkts4096to8191Octets"},
    tokenringpstatsdatapkts512to1023octets{YType::uint32, "tokenRingPStatsDataPkts512to1023Octets"},
    tokenringpstatsdatapkts64to127octets{YType::uint32, "tokenRingPStatsDataPkts64to127Octets"},
    tokenringpstatsdatapkts8192to18000octets{YType::uint32, "tokenRingPStatsDataPkts8192to18000Octets"},
    tokenringpstatsdatapktsgreaterthan18000octets{YType::uint32, "tokenRingPStatsDataPktsGreaterThan18000Octets"},
    tokenringpstatsdatasource{YType::str, "tokenRingPStatsDataSource"},
    tokenringpstatsdropevents{YType::uint32, "tokenRingPStatsDropEvents"},
    tokenringpstatsowner{YType::str, "tokenRingPStatsOwner"},
    tokenringpstatsstatus{YType::enumeration, "tokenRingPStatsStatus"}
{
    yang_name = "tokenRingPStatsEntry"; yang_parent_name = "tokenRingPStatsTable";
}

TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::~Tokenringpstatsentry()
{
}

bool TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::has_data() const
{
    return tokenringpstatsindex.is_set
	|| tokenringpstatsdatabroadcastpkts.is_set
	|| tokenringpstatsdatamulticastpkts.is_set
	|| tokenringpstatsdataoctets.is_set
	|| tokenringpstatsdatapkts.is_set
	|| tokenringpstatsdatapkts1024to2047octets.is_set
	|| tokenringpstatsdatapkts128to255octets.is_set
	|| tokenringpstatsdatapkts18to63octets.is_set
	|| tokenringpstatsdatapkts2048to4095octets.is_set
	|| tokenringpstatsdatapkts256to511octets.is_set
	|| tokenringpstatsdatapkts4096to8191octets.is_set
	|| tokenringpstatsdatapkts512to1023octets.is_set
	|| tokenringpstatsdatapkts64to127octets.is_set
	|| tokenringpstatsdatapkts8192to18000octets.is_set
	|| tokenringpstatsdatapktsgreaterthan18000octets.is_set
	|| tokenringpstatsdatasource.is_set
	|| tokenringpstatsdropevents.is_set
	|| tokenringpstatsowner.is_set
	|| tokenringpstatsstatus.is_set;
}

bool TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tokenringpstatsindex.operation)
	|| is_set(tokenringpstatsdatabroadcastpkts.operation)
	|| is_set(tokenringpstatsdatamulticastpkts.operation)
	|| is_set(tokenringpstatsdataoctets.operation)
	|| is_set(tokenringpstatsdatapkts.operation)
	|| is_set(tokenringpstatsdatapkts1024to2047octets.operation)
	|| is_set(tokenringpstatsdatapkts128to255octets.operation)
	|| is_set(tokenringpstatsdatapkts18to63octets.operation)
	|| is_set(tokenringpstatsdatapkts2048to4095octets.operation)
	|| is_set(tokenringpstatsdatapkts256to511octets.operation)
	|| is_set(tokenringpstatsdatapkts4096to8191octets.operation)
	|| is_set(tokenringpstatsdatapkts512to1023octets.operation)
	|| is_set(tokenringpstatsdatapkts64to127octets.operation)
	|| is_set(tokenringpstatsdatapkts8192to18000octets.operation)
	|| is_set(tokenringpstatsdatapktsgreaterthan18000octets.operation)
	|| is_set(tokenringpstatsdatasource.operation)
	|| is_set(tokenringpstatsdropevents.operation)
	|| is_set(tokenringpstatsowner.operation)
	|| is_set(tokenringpstatsstatus.operation);
}

std::string TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingPStatsEntry" <<"[tokenRingPStatsIndex='" <<tokenringpstatsindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/tokenRingPStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tokenringpstatsindex.is_set || is_set(tokenringpstatsindex.operation)) leaf_name_data.push_back(tokenringpstatsindex.get_name_leafdata());
    if (tokenringpstatsdatabroadcastpkts.is_set || is_set(tokenringpstatsdatabroadcastpkts.operation)) leaf_name_data.push_back(tokenringpstatsdatabroadcastpkts.get_name_leafdata());
    if (tokenringpstatsdatamulticastpkts.is_set || is_set(tokenringpstatsdatamulticastpkts.operation)) leaf_name_data.push_back(tokenringpstatsdatamulticastpkts.get_name_leafdata());
    if (tokenringpstatsdataoctets.is_set || is_set(tokenringpstatsdataoctets.operation)) leaf_name_data.push_back(tokenringpstatsdataoctets.get_name_leafdata());
    if (tokenringpstatsdatapkts.is_set || is_set(tokenringpstatsdatapkts.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts.get_name_leafdata());
    if (tokenringpstatsdatapkts1024to2047octets.is_set || is_set(tokenringpstatsdatapkts1024to2047octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts1024to2047octets.get_name_leafdata());
    if (tokenringpstatsdatapkts128to255octets.is_set || is_set(tokenringpstatsdatapkts128to255octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts128to255octets.get_name_leafdata());
    if (tokenringpstatsdatapkts18to63octets.is_set || is_set(tokenringpstatsdatapkts18to63octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts18to63octets.get_name_leafdata());
    if (tokenringpstatsdatapkts2048to4095octets.is_set || is_set(tokenringpstatsdatapkts2048to4095octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts2048to4095octets.get_name_leafdata());
    if (tokenringpstatsdatapkts256to511octets.is_set || is_set(tokenringpstatsdatapkts256to511octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts256to511octets.get_name_leafdata());
    if (tokenringpstatsdatapkts4096to8191octets.is_set || is_set(tokenringpstatsdatapkts4096to8191octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts4096to8191octets.get_name_leafdata());
    if (tokenringpstatsdatapkts512to1023octets.is_set || is_set(tokenringpstatsdatapkts512to1023octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts512to1023octets.get_name_leafdata());
    if (tokenringpstatsdatapkts64to127octets.is_set || is_set(tokenringpstatsdatapkts64to127octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts64to127octets.get_name_leafdata());
    if (tokenringpstatsdatapkts8192to18000octets.is_set || is_set(tokenringpstatsdatapkts8192to18000octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapkts8192to18000octets.get_name_leafdata());
    if (tokenringpstatsdatapktsgreaterthan18000octets.is_set || is_set(tokenringpstatsdatapktsgreaterthan18000octets.operation)) leaf_name_data.push_back(tokenringpstatsdatapktsgreaterthan18000octets.get_name_leafdata());
    if (tokenringpstatsdatasource.is_set || is_set(tokenringpstatsdatasource.operation)) leaf_name_data.push_back(tokenringpstatsdatasource.get_name_leafdata());
    if (tokenringpstatsdropevents.is_set || is_set(tokenringpstatsdropevents.operation)) leaf_name_data.push_back(tokenringpstatsdropevents.get_name_leafdata());
    if (tokenringpstatsowner.is_set || is_set(tokenringpstatsowner.operation)) leaf_name_data.push_back(tokenringpstatsowner.get_name_leafdata());
    if (tokenringpstatsstatus.is_set || is_set(tokenringpstatsstatus.operation)) leaf_name_data.push_back(tokenringpstatsstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tokenRingPStatsIndex")
    {
        tokenringpstatsindex = value;
    }
    if(value_path == "tokenRingPStatsDataBroadcastPkts")
    {
        tokenringpstatsdatabroadcastpkts = value;
    }
    if(value_path == "tokenRingPStatsDataMulticastPkts")
    {
        tokenringpstatsdatamulticastpkts = value;
    }
    if(value_path == "tokenRingPStatsDataOctets")
    {
        tokenringpstatsdataoctets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts")
    {
        tokenringpstatsdatapkts = value;
    }
    if(value_path == "tokenRingPStatsDataPkts1024to2047Octets")
    {
        tokenringpstatsdatapkts1024to2047octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts128to255Octets")
    {
        tokenringpstatsdatapkts128to255octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts18to63Octets")
    {
        tokenringpstatsdatapkts18to63octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts2048to4095Octets")
    {
        tokenringpstatsdatapkts2048to4095octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts256to511Octets")
    {
        tokenringpstatsdatapkts256to511octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts4096to8191Octets")
    {
        tokenringpstatsdatapkts4096to8191octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts512to1023Octets")
    {
        tokenringpstatsdatapkts512to1023octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts64to127Octets")
    {
        tokenringpstatsdatapkts64to127octets = value;
    }
    if(value_path == "tokenRingPStatsDataPkts8192to18000Octets")
    {
        tokenringpstatsdatapkts8192to18000octets = value;
    }
    if(value_path == "tokenRingPStatsDataPktsGreaterThan18000Octets")
    {
        tokenringpstatsdatapktsgreaterthan18000octets = value;
    }
    if(value_path == "tokenRingPStatsDataSource")
    {
        tokenringpstatsdatasource = value;
    }
    if(value_path == "tokenRingPStatsDropEvents")
    {
        tokenringpstatsdropevents = value;
    }
    if(value_path == "tokenRingPStatsOwner")
    {
        tokenringpstatsowner = value;
    }
    if(value_path == "tokenRingPStatsStatus")
    {
        tokenringpstatsstatus = value;
    }
}

TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistorytable()
{
    yang_name = "tokenRingMLHistoryTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Tokenringmlhistorytable::~Tokenringmlhistorytable()
{
}

bool TokenRingRmonMib::Tokenringmlhistorytable::has_data() const
{
    for (std::size_t index=0; index<tokenringmlhistoryentry.size(); index++)
    {
        if(tokenringmlhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Tokenringmlhistorytable::has_operation() const
{
    for (std::size_t index=0; index<tokenringmlhistoryentry.size(); index++)
    {
        if(tokenringmlhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Tokenringmlhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingMLHistoryTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringmlhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringmlhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tokenRingMLHistoryEntry")
    {
        for(auto const & c : tokenringmlhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry>();
        c->parent = this;
        tokenringmlhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringmlhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tokenringmlhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Tokenringmlhistorytable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::Tokenringmlhistoryentry()
    :
    tokenringmlhistoryindex{YType::int32, "tokenRingMLHistoryIndex"},
    tokenringmlhistorysampleindex{YType::int32, "tokenRingMLHistorySampleIndex"},
    tokenringmlhistoryaborterrors{YType::uint32, "tokenRingMLHistoryAbortErrors"},
    tokenringmlhistoryacerrors{YType::uint32, "tokenRingMLHistoryACErrors"},
    tokenringmlhistoryactivestations{YType::int32, "tokenRingMLHistoryActiveStations"},
    tokenringmlhistorybeaconevents{YType::uint32, "tokenRingMLHistoryBeaconEvents"},
    tokenringmlhistorybeaconpkts{YType::uint32, "tokenRingMLHistoryBeaconPkts"},
    tokenringmlhistorybeacontime{YType::int32, "tokenRingMLHistoryBeaconTime"},
    tokenringmlhistorybursterrors{YType::uint32, "tokenRingMLHistoryBurstErrors"},
    tokenringmlhistoryclaimtokenevents{YType::uint32, "tokenRingMLHistoryClaimTokenEvents"},
    tokenringmlhistoryclaimtokenpkts{YType::uint32, "tokenRingMLHistoryClaimTokenPkts"},
    tokenringmlhistorycongestionerrors{YType::uint32, "tokenRingMLHistoryCongestionErrors"},
    tokenringmlhistorydropevents{YType::uint32, "tokenRingMLHistoryDropEvents"},
    tokenringmlhistoryframecopiederrors{YType::uint32, "tokenRingMLHistoryFrameCopiedErrors"},
    tokenringmlhistoryfrequencyerrors{YType::uint32, "tokenRingMLHistoryFrequencyErrors"},
    tokenringmlhistoryinternalerrors{YType::uint32, "tokenRingMLHistoryInternalErrors"},
    tokenringmlhistoryintervalstart{YType::uint32, "tokenRingMLHistoryIntervalStart"},
    tokenringmlhistorylineerrors{YType::uint32, "tokenRingMLHistoryLineErrors"},
    tokenringmlhistorylostframeerrors{YType::uint32, "tokenRingMLHistoryLostFrameErrors"},
    tokenringmlhistorymacoctets{YType::uint32, "tokenRingMLHistoryMacOctets"},
    tokenringmlhistorymacpkts{YType::uint32, "tokenRingMLHistoryMacPkts"},
    tokenringmlhistorynaunchanges{YType::uint32, "tokenRingMLHistoryNAUNChanges"},
    tokenringmlhistoryringpollevents{YType::uint32, "tokenRingMLHistoryRingPollEvents"},
    tokenringmlhistoryringpurgeevents{YType::uint32, "tokenRingMLHistoryRingPurgeEvents"},
    tokenringmlhistoryringpurgepkts{YType::uint32, "tokenRingMLHistoryRingPurgePkts"},
    tokenringmlhistorysofterrorreports{YType::uint32, "tokenRingMLHistorySoftErrorReports"},
    tokenringmlhistorytokenerrors{YType::uint32, "tokenRingMLHistoryTokenErrors"}
{
    yang_name = "tokenRingMLHistoryEntry"; yang_parent_name = "tokenRingMLHistoryTable";
}

TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::~Tokenringmlhistoryentry()
{
}

bool TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::has_data() const
{
    return tokenringmlhistoryindex.is_set
	|| tokenringmlhistorysampleindex.is_set
	|| tokenringmlhistoryaborterrors.is_set
	|| tokenringmlhistoryacerrors.is_set
	|| tokenringmlhistoryactivestations.is_set
	|| tokenringmlhistorybeaconevents.is_set
	|| tokenringmlhistorybeaconpkts.is_set
	|| tokenringmlhistorybeacontime.is_set
	|| tokenringmlhistorybursterrors.is_set
	|| tokenringmlhistoryclaimtokenevents.is_set
	|| tokenringmlhistoryclaimtokenpkts.is_set
	|| tokenringmlhistorycongestionerrors.is_set
	|| tokenringmlhistorydropevents.is_set
	|| tokenringmlhistoryframecopiederrors.is_set
	|| tokenringmlhistoryfrequencyerrors.is_set
	|| tokenringmlhistoryinternalerrors.is_set
	|| tokenringmlhistoryintervalstart.is_set
	|| tokenringmlhistorylineerrors.is_set
	|| tokenringmlhistorylostframeerrors.is_set
	|| tokenringmlhistorymacoctets.is_set
	|| tokenringmlhistorymacpkts.is_set
	|| tokenringmlhistorynaunchanges.is_set
	|| tokenringmlhistoryringpollevents.is_set
	|| tokenringmlhistoryringpurgeevents.is_set
	|| tokenringmlhistoryringpurgepkts.is_set
	|| tokenringmlhistorysofterrorreports.is_set
	|| tokenringmlhistorytokenerrors.is_set;
}

bool TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tokenringmlhistoryindex.operation)
	|| is_set(tokenringmlhistorysampleindex.operation)
	|| is_set(tokenringmlhistoryaborterrors.operation)
	|| is_set(tokenringmlhistoryacerrors.operation)
	|| is_set(tokenringmlhistoryactivestations.operation)
	|| is_set(tokenringmlhistorybeaconevents.operation)
	|| is_set(tokenringmlhistorybeaconpkts.operation)
	|| is_set(tokenringmlhistorybeacontime.operation)
	|| is_set(tokenringmlhistorybursterrors.operation)
	|| is_set(tokenringmlhistoryclaimtokenevents.operation)
	|| is_set(tokenringmlhistoryclaimtokenpkts.operation)
	|| is_set(tokenringmlhistorycongestionerrors.operation)
	|| is_set(tokenringmlhistorydropevents.operation)
	|| is_set(tokenringmlhistoryframecopiederrors.operation)
	|| is_set(tokenringmlhistoryfrequencyerrors.operation)
	|| is_set(tokenringmlhistoryinternalerrors.operation)
	|| is_set(tokenringmlhistoryintervalstart.operation)
	|| is_set(tokenringmlhistorylineerrors.operation)
	|| is_set(tokenringmlhistorylostframeerrors.operation)
	|| is_set(tokenringmlhistorymacoctets.operation)
	|| is_set(tokenringmlhistorymacpkts.operation)
	|| is_set(tokenringmlhistorynaunchanges.operation)
	|| is_set(tokenringmlhistoryringpollevents.operation)
	|| is_set(tokenringmlhistoryringpurgeevents.operation)
	|| is_set(tokenringmlhistoryringpurgepkts.operation)
	|| is_set(tokenringmlhistorysofterrorreports.operation)
	|| is_set(tokenringmlhistorytokenerrors.operation);
}

std::string TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingMLHistoryEntry" <<"[tokenRingMLHistoryIndex='" <<tokenringmlhistoryindex <<"']" <<"[tokenRingMLHistorySampleIndex='" <<tokenringmlhistorysampleindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/tokenRingMLHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tokenringmlhistoryindex.is_set || is_set(tokenringmlhistoryindex.operation)) leaf_name_data.push_back(tokenringmlhistoryindex.get_name_leafdata());
    if (tokenringmlhistorysampleindex.is_set || is_set(tokenringmlhistorysampleindex.operation)) leaf_name_data.push_back(tokenringmlhistorysampleindex.get_name_leafdata());
    if (tokenringmlhistoryaborterrors.is_set || is_set(tokenringmlhistoryaborterrors.operation)) leaf_name_data.push_back(tokenringmlhistoryaborterrors.get_name_leafdata());
    if (tokenringmlhistoryacerrors.is_set || is_set(tokenringmlhistoryacerrors.operation)) leaf_name_data.push_back(tokenringmlhistoryacerrors.get_name_leafdata());
    if (tokenringmlhistoryactivestations.is_set || is_set(tokenringmlhistoryactivestations.operation)) leaf_name_data.push_back(tokenringmlhistoryactivestations.get_name_leafdata());
    if (tokenringmlhistorybeaconevents.is_set || is_set(tokenringmlhistorybeaconevents.operation)) leaf_name_data.push_back(tokenringmlhistorybeaconevents.get_name_leafdata());
    if (tokenringmlhistorybeaconpkts.is_set || is_set(tokenringmlhistorybeaconpkts.operation)) leaf_name_data.push_back(tokenringmlhistorybeaconpkts.get_name_leafdata());
    if (tokenringmlhistorybeacontime.is_set || is_set(tokenringmlhistorybeacontime.operation)) leaf_name_data.push_back(tokenringmlhistorybeacontime.get_name_leafdata());
    if (tokenringmlhistorybursterrors.is_set || is_set(tokenringmlhistorybursterrors.operation)) leaf_name_data.push_back(tokenringmlhistorybursterrors.get_name_leafdata());
    if (tokenringmlhistoryclaimtokenevents.is_set || is_set(tokenringmlhistoryclaimtokenevents.operation)) leaf_name_data.push_back(tokenringmlhistoryclaimtokenevents.get_name_leafdata());
    if (tokenringmlhistoryclaimtokenpkts.is_set || is_set(tokenringmlhistoryclaimtokenpkts.operation)) leaf_name_data.push_back(tokenringmlhistoryclaimtokenpkts.get_name_leafdata());
    if (tokenringmlhistorycongestionerrors.is_set || is_set(tokenringmlhistorycongestionerrors.operation)) leaf_name_data.push_back(tokenringmlhistorycongestionerrors.get_name_leafdata());
    if (tokenringmlhistorydropevents.is_set || is_set(tokenringmlhistorydropevents.operation)) leaf_name_data.push_back(tokenringmlhistorydropevents.get_name_leafdata());
    if (tokenringmlhistoryframecopiederrors.is_set || is_set(tokenringmlhistoryframecopiederrors.operation)) leaf_name_data.push_back(tokenringmlhistoryframecopiederrors.get_name_leafdata());
    if (tokenringmlhistoryfrequencyerrors.is_set || is_set(tokenringmlhistoryfrequencyerrors.operation)) leaf_name_data.push_back(tokenringmlhistoryfrequencyerrors.get_name_leafdata());
    if (tokenringmlhistoryinternalerrors.is_set || is_set(tokenringmlhistoryinternalerrors.operation)) leaf_name_data.push_back(tokenringmlhistoryinternalerrors.get_name_leafdata());
    if (tokenringmlhistoryintervalstart.is_set || is_set(tokenringmlhistoryintervalstart.operation)) leaf_name_data.push_back(tokenringmlhistoryintervalstart.get_name_leafdata());
    if (tokenringmlhistorylineerrors.is_set || is_set(tokenringmlhistorylineerrors.operation)) leaf_name_data.push_back(tokenringmlhistorylineerrors.get_name_leafdata());
    if (tokenringmlhistorylostframeerrors.is_set || is_set(tokenringmlhistorylostframeerrors.operation)) leaf_name_data.push_back(tokenringmlhistorylostframeerrors.get_name_leafdata());
    if (tokenringmlhistorymacoctets.is_set || is_set(tokenringmlhistorymacoctets.operation)) leaf_name_data.push_back(tokenringmlhistorymacoctets.get_name_leafdata());
    if (tokenringmlhistorymacpkts.is_set || is_set(tokenringmlhistorymacpkts.operation)) leaf_name_data.push_back(tokenringmlhistorymacpkts.get_name_leafdata());
    if (tokenringmlhistorynaunchanges.is_set || is_set(tokenringmlhistorynaunchanges.operation)) leaf_name_data.push_back(tokenringmlhistorynaunchanges.get_name_leafdata());
    if (tokenringmlhistoryringpollevents.is_set || is_set(tokenringmlhistoryringpollevents.operation)) leaf_name_data.push_back(tokenringmlhistoryringpollevents.get_name_leafdata());
    if (tokenringmlhistoryringpurgeevents.is_set || is_set(tokenringmlhistoryringpurgeevents.operation)) leaf_name_data.push_back(tokenringmlhistoryringpurgeevents.get_name_leafdata());
    if (tokenringmlhistoryringpurgepkts.is_set || is_set(tokenringmlhistoryringpurgepkts.operation)) leaf_name_data.push_back(tokenringmlhistoryringpurgepkts.get_name_leafdata());
    if (tokenringmlhistorysofterrorreports.is_set || is_set(tokenringmlhistorysofterrorreports.operation)) leaf_name_data.push_back(tokenringmlhistorysofterrorreports.get_name_leafdata());
    if (tokenringmlhistorytokenerrors.is_set || is_set(tokenringmlhistorytokenerrors.operation)) leaf_name_data.push_back(tokenringmlhistorytokenerrors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tokenRingMLHistoryIndex")
    {
        tokenringmlhistoryindex = value;
    }
    if(value_path == "tokenRingMLHistorySampleIndex")
    {
        tokenringmlhistorysampleindex = value;
    }
    if(value_path == "tokenRingMLHistoryAbortErrors")
    {
        tokenringmlhistoryaborterrors = value;
    }
    if(value_path == "tokenRingMLHistoryACErrors")
    {
        tokenringmlhistoryacerrors = value;
    }
    if(value_path == "tokenRingMLHistoryActiveStations")
    {
        tokenringmlhistoryactivestations = value;
    }
    if(value_path == "tokenRingMLHistoryBeaconEvents")
    {
        tokenringmlhistorybeaconevents = value;
    }
    if(value_path == "tokenRingMLHistoryBeaconPkts")
    {
        tokenringmlhistorybeaconpkts = value;
    }
    if(value_path == "tokenRingMLHistoryBeaconTime")
    {
        tokenringmlhistorybeacontime = value;
    }
    if(value_path == "tokenRingMLHistoryBurstErrors")
    {
        tokenringmlhistorybursterrors = value;
    }
    if(value_path == "tokenRingMLHistoryClaimTokenEvents")
    {
        tokenringmlhistoryclaimtokenevents = value;
    }
    if(value_path == "tokenRingMLHistoryClaimTokenPkts")
    {
        tokenringmlhistoryclaimtokenpkts = value;
    }
    if(value_path == "tokenRingMLHistoryCongestionErrors")
    {
        tokenringmlhistorycongestionerrors = value;
    }
    if(value_path == "tokenRingMLHistoryDropEvents")
    {
        tokenringmlhistorydropevents = value;
    }
    if(value_path == "tokenRingMLHistoryFrameCopiedErrors")
    {
        tokenringmlhistoryframecopiederrors = value;
    }
    if(value_path == "tokenRingMLHistoryFrequencyErrors")
    {
        tokenringmlhistoryfrequencyerrors = value;
    }
    if(value_path == "tokenRingMLHistoryInternalErrors")
    {
        tokenringmlhistoryinternalerrors = value;
    }
    if(value_path == "tokenRingMLHistoryIntervalStart")
    {
        tokenringmlhistoryintervalstart = value;
    }
    if(value_path == "tokenRingMLHistoryLineErrors")
    {
        tokenringmlhistorylineerrors = value;
    }
    if(value_path == "tokenRingMLHistoryLostFrameErrors")
    {
        tokenringmlhistorylostframeerrors = value;
    }
    if(value_path == "tokenRingMLHistoryMacOctets")
    {
        tokenringmlhistorymacoctets = value;
    }
    if(value_path == "tokenRingMLHistoryMacPkts")
    {
        tokenringmlhistorymacpkts = value;
    }
    if(value_path == "tokenRingMLHistoryNAUNChanges")
    {
        tokenringmlhistorynaunchanges = value;
    }
    if(value_path == "tokenRingMLHistoryRingPollEvents")
    {
        tokenringmlhistoryringpollevents = value;
    }
    if(value_path == "tokenRingMLHistoryRingPurgeEvents")
    {
        tokenringmlhistoryringpurgeevents = value;
    }
    if(value_path == "tokenRingMLHistoryRingPurgePkts")
    {
        tokenringmlhistoryringpurgepkts = value;
    }
    if(value_path == "tokenRingMLHistorySoftErrorReports")
    {
        tokenringmlhistorysofterrorreports = value;
    }
    if(value_path == "tokenRingMLHistoryTokenErrors")
    {
        tokenringmlhistorytokenerrors = value;
    }
}

TokenRingRmonMib::Tokenringphistorytable::Tokenringphistorytable()
{
    yang_name = "tokenRingPHistoryTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Tokenringphistorytable::~Tokenringphistorytable()
{
}

bool TokenRingRmonMib::Tokenringphistorytable::has_data() const
{
    for (std::size_t index=0; index<tokenringphistoryentry.size(); index++)
    {
        if(tokenringphistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Tokenringphistorytable::has_operation() const
{
    for (std::size_t index=0; index<tokenringphistoryentry.size(); index++)
    {
        if(tokenringphistoryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Tokenringphistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingPHistoryTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringphistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringphistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tokenRingPHistoryEntry")
    {
        for(auto const & c : tokenringphistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry>();
        c->parent = this;
        tokenringphistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringphistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tokenringphistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Tokenringphistorytable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::Tokenringphistoryentry()
    :
    tokenringphistoryindex{YType::int32, "tokenRingPHistoryIndex"},
    tokenringphistorysampleindex{YType::int32, "tokenRingPHistorySampleIndex"},
    tokenringphistorydatabroadcastpkts{YType::uint32, "tokenRingPHistoryDataBroadcastPkts"},
    tokenringphistorydatamulticastpkts{YType::uint32, "tokenRingPHistoryDataMulticastPkts"},
    tokenringphistorydataoctets{YType::uint32, "tokenRingPHistoryDataOctets"},
    tokenringphistorydatapkts{YType::uint32, "tokenRingPHistoryDataPkts"},
    tokenringphistorydatapkts1024to2047octets{YType::uint32, "tokenRingPHistoryDataPkts1024to2047Octets"},
    tokenringphistorydatapkts128to255octets{YType::uint32, "tokenRingPHistoryDataPkts128to255Octets"},
    tokenringphistorydatapkts18to63octets{YType::uint32, "tokenRingPHistoryDataPkts18to63Octets"},
    tokenringphistorydatapkts2048to4095octets{YType::uint32, "tokenRingPHistoryDataPkts2048to4095Octets"},
    tokenringphistorydatapkts256to511octets{YType::uint32, "tokenRingPHistoryDataPkts256to511Octets"},
    tokenringphistorydatapkts4096to8191octets{YType::uint32, "tokenRingPHistoryDataPkts4096to8191Octets"},
    tokenringphistorydatapkts512to1023octets{YType::uint32, "tokenRingPHistoryDataPkts512to1023Octets"},
    tokenringphistorydatapkts64to127octets{YType::uint32, "tokenRingPHistoryDataPkts64to127Octets"},
    tokenringphistorydatapkts8192to18000octets{YType::uint32, "tokenRingPHistoryDataPkts8192to18000Octets"},
    tokenringphistorydatapktsgreaterthan18000octets{YType::uint32, "tokenRingPHistoryDataPktsGreaterThan18000Octets"},
    tokenringphistorydropevents{YType::uint32, "tokenRingPHistoryDropEvents"},
    tokenringphistoryintervalstart{YType::uint32, "tokenRingPHistoryIntervalStart"}
{
    yang_name = "tokenRingPHistoryEntry"; yang_parent_name = "tokenRingPHistoryTable";
}

TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::~Tokenringphistoryentry()
{
}

bool TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::has_data() const
{
    return tokenringphistoryindex.is_set
	|| tokenringphistorysampleindex.is_set
	|| tokenringphistorydatabroadcastpkts.is_set
	|| tokenringphistorydatamulticastpkts.is_set
	|| tokenringphistorydataoctets.is_set
	|| tokenringphistorydatapkts.is_set
	|| tokenringphistorydatapkts1024to2047octets.is_set
	|| tokenringphistorydatapkts128to255octets.is_set
	|| tokenringphistorydatapkts18to63octets.is_set
	|| tokenringphistorydatapkts2048to4095octets.is_set
	|| tokenringphistorydatapkts256to511octets.is_set
	|| tokenringphistorydatapkts4096to8191octets.is_set
	|| tokenringphistorydatapkts512to1023octets.is_set
	|| tokenringphistorydatapkts64to127octets.is_set
	|| tokenringphistorydatapkts8192to18000octets.is_set
	|| tokenringphistorydatapktsgreaterthan18000octets.is_set
	|| tokenringphistorydropevents.is_set
	|| tokenringphistoryintervalstart.is_set;
}

bool TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tokenringphistoryindex.operation)
	|| is_set(tokenringphistorysampleindex.operation)
	|| is_set(tokenringphistorydatabroadcastpkts.operation)
	|| is_set(tokenringphistorydatamulticastpkts.operation)
	|| is_set(tokenringphistorydataoctets.operation)
	|| is_set(tokenringphistorydatapkts.operation)
	|| is_set(tokenringphistorydatapkts1024to2047octets.operation)
	|| is_set(tokenringphistorydatapkts128to255octets.operation)
	|| is_set(tokenringphistorydatapkts18to63octets.operation)
	|| is_set(tokenringphistorydatapkts2048to4095octets.operation)
	|| is_set(tokenringphistorydatapkts256to511octets.operation)
	|| is_set(tokenringphistorydatapkts4096to8191octets.operation)
	|| is_set(tokenringphistorydatapkts512to1023octets.operation)
	|| is_set(tokenringphistorydatapkts64to127octets.operation)
	|| is_set(tokenringphistorydatapkts8192to18000octets.operation)
	|| is_set(tokenringphistorydatapktsgreaterthan18000octets.operation)
	|| is_set(tokenringphistorydropevents.operation)
	|| is_set(tokenringphistoryintervalstart.operation);
}

std::string TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tokenRingPHistoryEntry" <<"[tokenRingPHistoryIndex='" <<tokenringphistoryindex <<"']" <<"[tokenRingPHistorySampleIndex='" <<tokenringphistorysampleindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/tokenRingPHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tokenringphistoryindex.is_set || is_set(tokenringphistoryindex.operation)) leaf_name_data.push_back(tokenringphistoryindex.get_name_leafdata());
    if (tokenringphistorysampleindex.is_set || is_set(tokenringphistorysampleindex.operation)) leaf_name_data.push_back(tokenringphistorysampleindex.get_name_leafdata());
    if (tokenringphistorydatabroadcastpkts.is_set || is_set(tokenringphistorydatabroadcastpkts.operation)) leaf_name_data.push_back(tokenringphistorydatabroadcastpkts.get_name_leafdata());
    if (tokenringphistorydatamulticastpkts.is_set || is_set(tokenringphistorydatamulticastpkts.operation)) leaf_name_data.push_back(tokenringphistorydatamulticastpkts.get_name_leafdata());
    if (tokenringphistorydataoctets.is_set || is_set(tokenringphistorydataoctets.operation)) leaf_name_data.push_back(tokenringphistorydataoctets.get_name_leafdata());
    if (tokenringphistorydatapkts.is_set || is_set(tokenringphistorydatapkts.operation)) leaf_name_data.push_back(tokenringphistorydatapkts.get_name_leafdata());
    if (tokenringphistorydatapkts1024to2047octets.is_set || is_set(tokenringphistorydatapkts1024to2047octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts1024to2047octets.get_name_leafdata());
    if (tokenringphistorydatapkts128to255octets.is_set || is_set(tokenringphistorydatapkts128to255octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts128to255octets.get_name_leafdata());
    if (tokenringphistorydatapkts18to63octets.is_set || is_set(tokenringphistorydatapkts18to63octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts18to63octets.get_name_leafdata());
    if (tokenringphistorydatapkts2048to4095octets.is_set || is_set(tokenringphistorydatapkts2048to4095octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts2048to4095octets.get_name_leafdata());
    if (tokenringphistorydatapkts256to511octets.is_set || is_set(tokenringphistorydatapkts256to511octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts256to511octets.get_name_leafdata());
    if (tokenringphistorydatapkts4096to8191octets.is_set || is_set(tokenringphistorydatapkts4096to8191octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts4096to8191octets.get_name_leafdata());
    if (tokenringphistorydatapkts512to1023octets.is_set || is_set(tokenringphistorydatapkts512to1023octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts512to1023octets.get_name_leafdata());
    if (tokenringphistorydatapkts64to127octets.is_set || is_set(tokenringphistorydatapkts64to127octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts64to127octets.get_name_leafdata());
    if (tokenringphistorydatapkts8192to18000octets.is_set || is_set(tokenringphistorydatapkts8192to18000octets.operation)) leaf_name_data.push_back(tokenringphistorydatapkts8192to18000octets.get_name_leafdata());
    if (tokenringphistorydatapktsgreaterthan18000octets.is_set || is_set(tokenringphistorydatapktsgreaterthan18000octets.operation)) leaf_name_data.push_back(tokenringphistorydatapktsgreaterthan18000octets.get_name_leafdata());
    if (tokenringphistorydropevents.is_set || is_set(tokenringphistorydropevents.operation)) leaf_name_data.push_back(tokenringphistorydropevents.get_name_leafdata());
    if (tokenringphistoryintervalstart.is_set || is_set(tokenringphistoryintervalstart.operation)) leaf_name_data.push_back(tokenringphistoryintervalstart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tokenRingPHistoryIndex")
    {
        tokenringphistoryindex = value;
    }
    if(value_path == "tokenRingPHistorySampleIndex")
    {
        tokenringphistorysampleindex = value;
    }
    if(value_path == "tokenRingPHistoryDataBroadcastPkts")
    {
        tokenringphistorydatabroadcastpkts = value;
    }
    if(value_path == "tokenRingPHistoryDataMulticastPkts")
    {
        tokenringphistorydatamulticastpkts = value;
    }
    if(value_path == "tokenRingPHistoryDataOctets")
    {
        tokenringphistorydataoctets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts")
    {
        tokenringphistorydatapkts = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts1024to2047Octets")
    {
        tokenringphistorydatapkts1024to2047octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts128to255Octets")
    {
        tokenringphistorydatapkts128to255octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts18to63Octets")
    {
        tokenringphistorydatapkts18to63octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts2048to4095Octets")
    {
        tokenringphistorydatapkts2048to4095octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts256to511Octets")
    {
        tokenringphistorydatapkts256to511octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts4096to8191Octets")
    {
        tokenringphistorydatapkts4096to8191octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts512to1023Octets")
    {
        tokenringphistorydatapkts512to1023octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts64to127Octets")
    {
        tokenringphistorydatapkts64to127octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPkts8192to18000Octets")
    {
        tokenringphistorydatapkts8192to18000octets = value;
    }
    if(value_path == "tokenRingPHistoryDataPktsGreaterThan18000Octets")
    {
        tokenringphistorydatapktsgreaterthan18000octets = value;
    }
    if(value_path == "tokenRingPHistoryDropEvents")
    {
        tokenringphistorydropevents = value;
    }
    if(value_path == "tokenRingPHistoryIntervalStart")
    {
        tokenringphistoryintervalstart = value;
    }
}

TokenRingRmonMib::Ringstationcontroltable::Ringstationcontroltable()
{
    yang_name = "ringStationControlTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Ringstationcontroltable::~Ringstationcontroltable()
{
}

bool TokenRingRmonMib::Ringstationcontroltable::has_data() const
{
    for (std::size_t index=0; index<ringstationcontrolentry.size(); index++)
    {
        if(ringstationcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Ringstationcontroltable::has_operation() const
{
    for (std::size_t index=0; index<ringstationcontrolentry.size(); index++)
    {
        if(ringstationcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Ringstationcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationControlTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationcontroltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ringStationControlEntry")
    {
        for(auto const & c : ringstationcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry>();
        c->parent = this;
        ringstationcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ringstationcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Ringstationcontroltable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolentry()
    :
    ringstationcontrolifindex{YType::int32, "ringStationControlIfIndex"},
    ringstationcontrolactivemonitor{YType::str, "ringStationControlActiveMonitor"},
    ringstationcontrolactivestations{YType::int32, "ringStationControlActiveStations"},
    ringstationcontrolbeaconnaun{YType::str, "ringStationControlBeaconNAUN"},
    ringstationcontrolbeaconsender{YType::str, "ringStationControlBeaconSender"},
    ringstationcontrolorderchanges{YType::uint32, "ringStationControlOrderChanges"},
    ringstationcontrolowner{YType::str, "ringStationControlOwner"},
    ringstationcontrolringstate{YType::enumeration, "ringStationControlRingState"},
    ringstationcontrolstatus{YType::enumeration, "ringStationControlStatus"},
    ringstationcontroltablesize{YType::int32, "ringStationControlTableSize"}
{
    yang_name = "ringStationControlEntry"; yang_parent_name = "ringStationControlTable";
}

TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::~Ringstationcontrolentry()
{
}

bool TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::has_data() const
{
    return ringstationcontrolifindex.is_set
	|| ringstationcontrolactivemonitor.is_set
	|| ringstationcontrolactivestations.is_set
	|| ringstationcontrolbeaconnaun.is_set
	|| ringstationcontrolbeaconsender.is_set
	|| ringstationcontrolorderchanges.is_set
	|| ringstationcontrolowner.is_set
	|| ringstationcontrolringstate.is_set
	|| ringstationcontrolstatus.is_set
	|| ringstationcontroltablesize.is_set;
}

bool TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ringstationcontrolifindex.operation)
	|| is_set(ringstationcontrolactivemonitor.operation)
	|| is_set(ringstationcontrolactivestations.operation)
	|| is_set(ringstationcontrolbeaconnaun.operation)
	|| is_set(ringstationcontrolbeaconsender.operation)
	|| is_set(ringstationcontrolorderchanges.operation)
	|| is_set(ringstationcontrolowner.operation)
	|| is_set(ringstationcontrolringstate.operation)
	|| is_set(ringstationcontrolstatus.operation)
	|| is_set(ringstationcontroltablesize.operation);
}

std::string TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationControlEntry" <<"[ringStationControlIfIndex='" <<ringstationcontrolifindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/ringStationControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ringstationcontrolifindex.is_set || is_set(ringstationcontrolifindex.operation)) leaf_name_data.push_back(ringstationcontrolifindex.get_name_leafdata());
    if (ringstationcontrolactivemonitor.is_set || is_set(ringstationcontrolactivemonitor.operation)) leaf_name_data.push_back(ringstationcontrolactivemonitor.get_name_leafdata());
    if (ringstationcontrolactivestations.is_set || is_set(ringstationcontrolactivestations.operation)) leaf_name_data.push_back(ringstationcontrolactivestations.get_name_leafdata());
    if (ringstationcontrolbeaconnaun.is_set || is_set(ringstationcontrolbeaconnaun.operation)) leaf_name_data.push_back(ringstationcontrolbeaconnaun.get_name_leafdata());
    if (ringstationcontrolbeaconsender.is_set || is_set(ringstationcontrolbeaconsender.operation)) leaf_name_data.push_back(ringstationcontrolbeaconsender.get_name_leafdata());
    if (ringstationcontrolorderchanges.is_set || is_set(ringstationcontrolorderchanges.operation)) leaf_name_data.push_back(ringstationcontrolorderchanges.get_name_leafdata());
    if (ringstationcontrolowner.is_set || is_set(ringstationcontrolowner.operation)) leaf_name_data.push_back(ringstationcontrolowner.get_name_leafdata());
    if (ringstationcontrolringstate.is_set || is_set(ringstationcontrolringstate.operation)) leaf_name_data.push_back(ringstationcontrolringstate.get_name_leafdata());
    if (ringstationcontrolstatus.is_set || is_set(ringstationcontrolstatus.operation)) leaf_name_data.push_back(ringstationcontrolstatus.get_name_leafdata());
    if (ringstationcontroltablesize.is_set || is_set(ringstationcontroltablesize.operation)) leaf_name_data.push_back(ringstationcontroltablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ringStationControlIfIndex")
    {
        ringstationcontrolifindex = value;
    }
    if(value_path == "ringStationControlActiveMonitor")
    {
        ringstationcontrolactivemonitor = value;
    }
    if(value_path == "ringStationControlActiveStations")
    {
        ringstationcontrolactivestations = value;
    }
    if(value_path == "ringStationControlBeaconNAUN")
    {
        ringstationcontrolbeaconnaun = value;
    }
    if(value_path == "ringStationControlBeaconSender")
    {
        ringstationcontrolbeaconsender = value;
    }
    if(value_path == "ringStationControlOrderChanges")
    {
        ringstationcontrolorderchanges = value;
    }
    if(value_path == "ringStationControlOwner")
    {
        ringstationcontrolowner = value;
    }
    if(value_path == "ringStationControlRingState")
    {
        ringstationcontrolringstate = value;
    }
    if(value_path == "ringStationControlStatus")
    {
        ringstationcontrolstatus = value;
    }
    if(value_path == "ringStationControlTableSize")
    {
        ringstationcontroltablesize = value;
    }
}

TokenRingRmonMib::Ringstationtable::Ringstationtable()
{
    yang_name = "ringStationTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Ringstationtable::~Ringstationtable()
{
}

bool TokenRingRmonMib::Ringstationtable::has_data() const
{
    for (std::size_t index=0; index<ringstationentry.size(); index++)
    {
        if(ringstationentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Ringstationtable::has_operation() const
{
    for (std::size_t index=0; index<ringstationentry.size(); index++)
    {
        if(ringstationentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Ringstationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ringStationEntry")
    {
        for(auto const & c : ringstationentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Ringstationtable::Ringstationentry>();
        c->parent = this;
        ringstationentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ringstationentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Ringstationtable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Ringstationtable::Ringstationentry::Ringstationentry()
    :
    ringstationifindex{YType::int32, "ringStationIfIndex"},
    ringstationmacaddress{YType::str, "ringStationMacAddress"},
    ringstationaborterrors{YType::uint32, "ringStationAbortErrors"},
    ringstationacerrors{YType::uint32, "ringStationACErrors"},
    ringstationcongestionerrors{YType::uint32, "ringStationCongestionErrors"},
    ringstationduplicateaddresses{YType::uint32, "ringStationDuplicateAddresses"},
    ringstationframecopiederrors{YType::uint32, "ringStationFrameCopiedErrors"},
    ringstationfrequencyerrors{YType::uint32, "ringStationFrequencyErrors"},
    ringstationinbeaconerrors{YType::uint32, "ringStationInBeaconErrors"},
    ringstationinbursterrors{YType::uint32, "ringStationInBurstErrors"},
    ringstationinlineerrors{YType::uint32, "ringStationInLineErrors"},
    ringstationinsertions{YType::uint32, "ringStationInsertions"},
    ringstationinternalerrors{YType::uint32, "ringStationInternalErrors"},
    ringstationlastentertime{YType::uint32, "ringStationLastEnterTime"},
    ringstationlastexittime{YType::uint32, "ringStationLastExitTime"},
    ringstationlastnaun{YType::str, "ringStationLastNAUN"},
    ringstationlostframeerrors{YType::uint32, "ringStationLostFrameErrors"},
    ringstationoutbeaconerrors{YType::uint32, "ringStationOutBeaconErrors"},
    ringstationoutbursterrors{YType::uint32, "ringStationOutBurstErrors"},
    ringstationoutlineerrors{YType::uint32, "ringStationOutLineErrors"},
    ringstationstationstatus{YType::enumeration, "ringStationStationStatus"},
    ringstationtokenerrors{YType::uint32, "ringStationTokenErrors"}
{
    yang_name = "ringStationEntry"; yang_parent_name = "ringStationTable";
}

TokenRingRmonMib::Ringstationtable::Ringstationentry::~Ringstationentry()
{
}

bool TokenRingRmonMib::Ringstationtable::Ringstationentry::has_data() const
{
    return ringstationifindex.is_set
	|| ringstationmacaddress.is_set
	|| ringstationaborterrors.is_set
	|| ringstationacerrors.is_set
	|| ringstationcongestionerrors.is_set
	|| ringstationduplicateaddresses.is_set
	|| ringstationframecopiederrors.is_set
	|| ringstationfrequencyerrors.is_set
	|| ringstationinbeaconerrors.is_set
	|| ringstationinbursterrors.is_set
	|| ringstationinlineerrors.is_set
	|| ringstationinsertions.is_set
	|| ringstationinternalerrors.is_set
	|| ringstationlastentertime.is_set
	|| ringstationlastexittime.is_set
	|| ringstationlastnaun.is_set
	|| ringstationlostframeerrors.is_set
	|| ringstationoutbeaconerrors.is_set
	|| ringstationoutbursterrors.is_set
	|| ringstationoutlineerrors.is_set
	|| ringstationstationstatus.is_set
	|| ringstationtokenerrors.is_set;
}

bool TokenRingRmonMib::Ringstationtable::Ringstationentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ringstationifindex.operation)
	|| is_set(ringstationmacaddress.operation)
	|| is_set(ringstationaborterrors.operation)
	|| is_set(ringstationacerrors.operation)
	|| is_set(ringstationcongestionerrors.operation)
	|| is_set(ringstationduplicateaddresses.operation)
	|| is_set(ringstationframecopiederrors.operation)
	|| is_set(ringstationfrequencyerrors.operation)
	|| is_set(ringstationinbeaconerrors.operation)
	|| is_set(ringstationinbursterrors.operation)
	|| is_set(ringstationinlineerrors.operation)
	|| is_set(ringstationinsertions.operation)
	|| is_set(ringstationinternalerrors.operation)
	|| is_set(ringstationlastentertime.operation)
	|| is_set(ringstationlastexittime.operation)
	|| is_set(ringstationlastnaun.operation)
	|| is_set(ringstationlostframeerrors.operation)
	|| is_set(ringstationoutbeaconerrors.operation)
	|| is_set(ringstationoutbursterrors.operation)
	|| is_set(ringstationoutlineerrors.operation)
	|| is_set(ringstationstationstatus.operation)
	|| is_set(ringstationtokenerrors.operation);
}

std::string TokenRingRmonMib::Ringstationtable::Ringstationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationEntry" <<"[ringStationIfIndex='" <<ringstationifindex <<"']" <<"[ringStationMacAddress='" <<ringstationmacaddress <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationtable::Ringstationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/ringStationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ringstationifindex.is_set || is_set(ringstationifindex.operation)) leaf_name_data.push_back(ringstationifindex.get_name_leafdata());
    if (ringstationmacaddress.is_set || is_set(ringstationmacaddress.operation)) leaf_name_data.push_back(ringstationmacaddress.get_name_leafdata());
    if (ringstationaborterrors.is_set || is_set(ringstationaborterrors.operation)) leaf_name_data.push_back(ringstationaborterrors.get_name_leafdata());
    if (ringstationacerrors.is_set || is_set(ringstationacerrors.operation)) leaf_name_data.push_back(ringstationacerrors.get_name_leafdata());
    if (ringstationcongestionerrors.is_set || is_set(ringstationcongestionerrors.operation)) leaf_name_data.push_back(ringstationcongestionerrors.get_name_leafdata());
    if (ringstationduplicateaddresses.is_set || is_set(ringstationduplicateaddresses.operation)) leaf_name_data.push_back(ringstationduplicateaddresses.get_name_leafdata());
    if (ringstationframecopiederrors.is_set || is_set(ringstationframecopiederrors.operation)) leaf_name_data.push_back(ringstationframecopiederrors.get_name_leafdata());
    if (ringstationfrequencyerrors.is_set || is_set(ringstationfrequencyerrors.operation)) leaf_name_data.push_back(ringstationfrequencyerrors.get_name_leafdata());
    if (ringstationinbeaconerrors.is_set || is_set(ringstationinbeaconerrors.operation)) leaf_name_data.push_back(ringstationinbeaconerrors.get_name_leafdata());
    if (ringstationinbursterrors.is_set || is_set(ringstationinbursterrors.operation)) leaf_name_data.push_back(ringstationinbursterrors.get_name_leafdata());
    if (ringstationinlineerrors.is_set || is_set(ringstationinlineerrors.operation)) leaf_name_data.push_back(ringstationinlineerrors.get_name_leafdata());
    if (ringstationinsertions.is_set || is_set(ringstationinsertions.operation)) leaf_name_data.push_back(ringstationinsertions.get_name_leafdata());
    if (ringstationinternalerrors.is_set || is_set(ringstationinternalerrors.operation)) leaf_name_data.push_back(ringstationinternalerrors.get_name_leafdata());
    if (ringstationlastentertime.is_set || is_set(ringstationlastentertime.operation)) leaf_name_data.push_back(ringstationlastentertime.get_name_leafdata());
    if (ringstationlastexittime.is_set || is_set(ringstationlastexittime.operation)) leaf_name_data.push_back(ringstationlastexittime.get_name_leafdata());
    if (ringstationlastnaun.is_set || is_set(ringstationlastnaun.operation)) leaf_name_data.push_back(ringstationlastnaun.get_name_leafdata());
    if (ringstationlostframeerrors.is_set || is_set(ringstationlostframeerrors.operation)) leaf_name_data.push_back(ringstationlostframeerrors.get_name_leafdata());
    if (ringstationoutbeaconerrors.is_set || is_set(ringstationoutbeaconerrors.operation)) leaf_name_data.push_back(ringstationoutbeaconerrors.get_name_leafdata());
    if (ringstationoutbursterrors.is_set || is_set(ringstationoutbursterrors.operation)) leaf_name_data.push_back(ringstationoutbursterrors.get_name_leafdata());
    if (ringstationoutlineerrors.is_set || is_set(ringstationoutlineerrors.operation)) leaf_name_data.push_back(ringstationoutlineerrors.get_name_leafdata());
    if (ringstationstationstatus.is_set || is_set(ringstationstationstatus.operation)) leaf_name_data.push_back(ringstationstationstatus.get_name_leafdata());
    if (ringstationtokenerrors.is_set || is_set(ringstationtokenerrors.operation)) leaf_name_data.push_back(ringstationtokenerrors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationtable::Ringstationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationtable::Ringstationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Ringstationtable::Ringstationentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ringStationIfIndex")
    {
        ringstationifindex = value;
    }
    if(value_path == "ringStationMacAddress")
    {
        ringstationmacaddress = value;
    }
    if(value_path == "ringStationAbortErrors")
    {
        ringstationaborterrors = value;
    }
    if(value_path == "ringStationACErrors")
    {
        ringstationacerrors = value;
    }
    if(value_path == "ringStationCongestionErrors")
    {
        ringstationcongestionerrors = value;
    }
    if(value_path == "ringStationDuplicateAddresses")
    {
        ringstationduplicateaddresses = value;
    }
    if(value_path == "ringStationFrameCopiedErrors")
    {
        ringstationframecopiederrors = value;
    }
    if(value_path == "ringStationFrequencyErrors")
    {
        ringstationfrequencyerrors = value;
    }
    if(value_path == "ringStationInBeaconErrors")
    {
        ringstationinbeaconerrors = value;
    }
    if(value_path == "ringStationInBurstErrors")
    {
        ringstationinbursterrors = value;
    }
    if(value_path == "ringStationInLineErrors")
    {
        ringstationinlineerrors = value;
    }
    if(value_path == "ringStationInsertions")
    {
        ringstationinsertions = value;
    }
    if(value_path == "ringStationInternalErrors")
    {
        ringstationinternalerrors = value;
    }
    if(value_path == "ringStationLastEnterTime")
    {
        ringstationlastentertime = value;
    }
    if(value_path == "ringStationLastExitTime")
    {
        ringstationlastexittime = value;
    }
    if(value_path == "ringStationLastNAUN")
    {
        ringstationlastnaun = value;
    }
    if(value_path == "ringStationLostFrameErrors")
    {
        ringstationlostframeerrors = value;
    }
    if(value_path == "ringStationOutBeaconErrors")
    {
        ringstationoutbeaconerrors = value;
    }
    if(value_path == "ringStationOutBurstErrors")
    {
        ringstationoutbursterrors = value;
    }
    if(value_path == "ringStationOutLineErrors")
    {
        ringstationoutlineerrors = value;
    }
    if(value_path == "ringStationStationStatus")
    {
        ringstationstationstatus = value;
    }
    if(value_path == "ringStationTokenErrors")
    {
        ringstationtokenerrors = value;
    }
}

TokenRingRmonMib::Ringstationordertable::Ringstationordertable()
{
    yang_name = "ringStationOrderTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Ringstationordertable::~Ringstationordertable()
{
}

bool TokenRingRmonMib::Ringstationordertable::has_data() const
{
    for (std::size_t index=0; index<ringstationorderentry.size(); index++)
    {
        if(ringstationorderentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Ringstationordertable::has_operation() const
{
    for (std::size_t index=0; index<ringstationorderentry.size(); index++)
    {
        if(ringstationorderentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Ringstationordertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationOrderTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationordertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationordertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ringStationOrderEntry")
    {
        for(auto const & c : ringstationorderentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Ringstationordertable::Ringstationorderentry>();
        c->parent = this;
        ringstationorderentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationordertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ringstationorderentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Ringstationordertable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::Ringstationorderentry()
    :
    ringstationorderifindex{YType::int32, "ringStationOrderIfIndex"},
    ringstationorderorderindex{YType::int32, "ringStationOrderOrderIndex"},
    ringstationordermacaddress{YType::str, "ringStationOrderMacAddress"}
{
    yang_name = "ringStationOrderEntry"; yang_parent_name = "ringStationOrderTable";
}

TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::~Ringstationorderentry()
{
}

bool TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::has_data() const
{
    return ringstationorderifindex.is_set
	|| ringstationorderorderindex.is_set
	|| ringstationordermacaddress.is_set;
}

bool TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ringstationorderifindex.operation)
	|| is_set(ringstationorderorderindex.operation)
	|| is_set(ringstationordermacaddress.operation);
}

std::string TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationOrderEntry" <<"[ringStationOrderIfIndex='" <<ringstationorderifindex <<"']" <<"[ringStationOrderOrderIndex='" <<ringstationorderorderindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/ringStationOrderTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ringstationorderifindex.is_set || is_set(ringstationorderifindex.operation)) leaf_name_data.push_back(ringstationorderifindex.get_name_leafdata());
    if (ringstationorderorderindex.is_set || is_set(ringstationorderorderindex.operation)) leaf_name_data.push_back(ringstationorderorderindex.get_name_leafdata());
    if (ringstationordermacaddress.is_set || is_set(ringstationordermacaddress.operation)) leaf_name_data.push_back(ringstationordermacaddress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ringStationOrderIfIndex")
    {
        ringstationorderifindex = value;
    }
    if(value_path == "ringStationOrderOrderIndex")
    {
        ringstationorderorderindex = value;
    }
    if(value_path == "ringStationOrderMacAddress")
    {
        ringstationordermacaddress = value;
    }
}

TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontroltable()
{
    yang_name = "ringStationConfigControlTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Ringstationconfigcontroltable::~Ringstationconfigcontroltable()
{
}

bool TokenRingRmonMib::Ringstationconfigcontroltable::has_data() const
{
    for (std::size_t index=0; index<ringstationconfigcontrolentry.size(); index++)
    {
        if(ringstationconfigcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Ringstationconfigcontroltable::has_operation() const
{
    for (std::size_t index=0; index<ringstationconfigcontrolentry.size(); index++)
    {
        if(ringstationconfigcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Ringstationconfigcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationConfigControlTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationconfigcontroltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationconfigcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ringStationConfigControlEntry")
    {
        for(auto const & c : ringstationconfigcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry>();
        c->parent = this;
        ringstationconfigcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationconfigcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ringstationconfigcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Ringstationconfigcontroltable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolentry()
    :
    ringstationconfigcontrolifindex{YType::int32, "ringStationConfigControlIfIndex"},
    ringstationconfigcontrolmacaddress{YType::str, "ringStationConfigControlMacAddress"},
    ringstationconfigcontrolremove{YType::enumeration, "ringStationConfigControlRemove"},
    ringstationconfigcontrolupdatestats{YType::enumeration, "ringStationConfigControlUpdateStats"}
{
    yang_name = "ringStationConfigControlEntry"; yang_parent_name = "ringStationConfigControlTable";
}

TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::~Ringstationconfigcontrolentry()
{
}

bool TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::has_data() const
{
    return ringstationconfigcontrolifindex.is_set
	|| ringstationconfigcontrolmacaddress.is_set
	|| ringstationconfigcontrolremove.is_set
	|| ringstationconfigcontrolupdatestats.is_set;
}

bool TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ringstationconfigcontrolifindex.operation)
	|| is_set(ringstationconfigcontrolmacaddress.operation)
	|| is_set(ringstationconfigcontrolremove.operation)
	|| is_set(ringstationconfigcontrolupdatestats.operation);
}

std::string TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationConfigControlEntry" <<"[ringStationConfigControlIfIndex='" <<ringstationconfigcontrolifindex <<"']" <<"[ringStationConfigControlMacAddress='" <<ringstationconfigcontrolmacaddress <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/ringStationConfigControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ringstationconfigcontrolifindex.is_set || is_set(ringstationconfigcontrolifindex.operation)) leaf_name_data.push_back(ringstationconfigcontrolifindex.get_name_leafdata());
    if (ringstationconfigcontrolmacaddress.is_set || is_set(ringstationconfigcontrolmacaddress.operation)) leaf_name_data.push_back(ringstationconfigcontrolmacaddress.get_name_leafdata());
    if (ringstationconfigcontrolremove.is_set || is_set(ringstationconfigcontrolremove.operation)) leaf_name_data.push_back(ringstationconfigcontrolremove.get_name_leafdata());
    if (ringstationconfigcontrolupdatestats.is_set || is_set(ringstationconfigcontrolupdatestats.operation)) leaf_name_data.push_back(ringstationconfigcontrolupdatestats.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ringStationConfigControlIfIndex")
    {
        ringstationconfigcontrolifindex = value;
    }
    if(value_path == "ringStationConfigControlMacAddress")
    {
        ringstationconfigcontrolmacaddress = value;
    }
    if(value_path == "ringStationConfigControlRemove")
    {
        ringstationconfigcontrolremove = value;
    }
    if(value_path == "ringStationConfigControlUpdateStats")
    {
        ringstationconfigcontrolupdatestats = value;
    }
}

TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigtable()
{
    yang_name = "ringStationConfigTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Ringstationconfigtable::~Ringstationconfigtable()
{
}

bool TokenRingRmonMib::Ringstationconfigtable::has_data() const
{
    for (std::size_t index=0; index<ringstationconfigentry.size(); index++)
    {
        if(ringstationconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Ringstationconfigtable::has_operation() const
{
    for (std::size_t index=0; index<ringstationconfigentry.size(); index++)
    {
        if(ringstationconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Ringstationconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationConfigTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ringStationConfigEntry")
    {
        for(auto const & c : ringstationconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry>();
        c->parent = this;
        ringstationconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ringstationconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Ringstationconfigtable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::Ringstationconfigentry()
    :
    ringstationconfigifindex{YType::int32, "ringStationConfigIfIndex"},
    ringstationconfigmacaddress{YType::str, "ringStationConfigMacAddress"},
    ringstationconfigfunctionaladdress{YType::str, "ringStationConfigFunctionalAddress"},
    ringstationconfiggroupaddress{YType::str, "ringStationConfigGroupAddress"},
    ringstationconfiglocation{YType::str, "ringStationConfigLocation"},
    ringstationconfigmicrocode{YType::str, "ringStationConfigMicrocode"},
    ringstationconfigupdatetime{YType::uint32, "ringStationConfigUpdateTime"}
{
    yang_name = "ringStationConfigEntry"; yang_parent_name = "ringStationConfigTable";
}

TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::~Ringstationconfigentry()
{
}

bool TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::has_data() const
{
    return ringstationconfigifindex.is_set
	|| ringstationconfigmacaddress.is_set
	|| ringstationconfigfunctionaladdress.is_set
	|| ringstationconfiggroupaddress.is_set
	|| ringstationconfiglocation.is_set
	|| ringstationconfigmicrocode.is_set
	|| ringstationconfigupdatetime.is_set;
}

bool TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ringstationconfigifindex.operation)
	|| is_set(ringstationconfigmacaddress.operation)
	|| is_set(ringstationconfigfunctionaladdress.operation)
	|| is_set(ringstationconfiggroupaddress.operation)
	|| is_set(ringstationconfiglocation.operation)
	|| is_set(ringstationconfigmicrocode.operation)
	|| is_set(ringstationconfigupdatetime.operation);
}

std::string TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ringStationConfigEntry" <<"[ringStationConfigIfIndex='" <<ringstationconfigifindex <<"']" <<"[ringStationConfigMacAddress='" <<ringstationconfigmacaddress <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/ringStationConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ringstationconfigifindex.is_set || is_set(ringstationconfigifindex.operation)) leaf_name_data.push_back(ringstationconfigifindex.get_name_leafdata());
    if (ringstationconfigmacaddress.is_set || is_set(ringstationconfigmacaddress.operation)) leaf_name_data.push_back(ringstationconfigmacaddress.get_name_leafdata());
    if (ringstationconfigfunctionaladdress.is_set || is_set(ringstationconfigfunctionaladdress.operation)) leaf_name_data.push_back(ringstationconfigfunctionaladdress.get_name_leafdata());
    if (ringstationconfiggroupaddress.is_set || is_set(ringstationconfiggroupaddress.operation)) leaf_name_data.push_back(ringstationconfiggroupaddress.get_name_leafdata());
    if (ringstationconfiglocation.is_set || is_set(ringstationconfiglocation.operation)) leaf_name_data.push_back(ringstationconfiglocation.get_name_leafdata());
    if (ringstationconfigmicrocode.is_set || is_set(ringstationconfigmicrocode.operation)) leaf_name_data.push_back(ringstationconfigmicrocode.get_name_leafdata());
    if (ringstationconfigupdatetime.is_set || is_set(ringstationconfigupdatetime.operation)) leaf_name_data.push_back(ringstationconfigupdatetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ringStationConfigIfIndex")
    {
        ringstationconfigifindex = value;
    }
    if(value_path == "ringStationConfigMacAddress")
    {
        ringstationconfigmacaddress = value;
    }
    if(value_path == "ringStationConfigFunctionalAddress")
    {
        ringstationconfigfunctionaladdress = value;
    }
    if(value_path == "ringStationConfigGroupAddress")
    {
        ringstationconfiggroupaddress = value;
    }
    if(value_path == "ringStationConfigLocation")
    {
        ringstationconfiglocation = value;
    }
    if(value_path == "ringStationConfigMicrocode")
    {
        ringstationconfigmicrocode = value;
    }
    if(value_path == "ringStationConfigUpdateTime")
    {
        ringstationconfigupdatetime = value;
    }
}

TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatstable()
{
    yang_name = "sourceRoutingStatsTable"; yang_parent_name = "TOKEN-RING-RMON-MIB";
}

TokenRingRmonMib::Sourceroutingstatstable::~Sourceroutingstatstable()
{
}

bool TokenRingRmonMib::Sourceroutingstatstable::has_data() const
{
    for (std::size_t index=0; index<sourceroutingstatsentry.size(); index++)
    {
        if(sourceroutingstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenRingRmonMib::Sourceroutingstatstable::has_operation() const
{
    for (std::size_t index=0; index<sourceroutingstatsentry.size(); index++)
    {
        if(sourceroutingstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenRingRmonMib::Sourceroutingstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourceRoutingStatsTable";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Sourceroutingstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Sourceroutingstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sourceRoutingStatsEntry")
    {
        for(auto const & c : sourceroutingstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry>();
        c->parent = this;
        sourceroutingstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Sourceroutingstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sourceroutingstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenRingRmonMib::Sourceroutingstatstable::set_value(const std::string & value_path, std::string value)
{
}

TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::Sourceroutingstatsentry()
    :
    sourceroutingstatsifindex{YType::int32, "sourceRoutingStatsIfIndex"},
    sourceroutingstats1hopframes{YType::uint32, "sourceRoutingStats1HopFrames"},
    sourceroutingstats2hopsframes{YType::uint32, "sourceRoutingStats2HopsFrames"},
    sourceroutingstats3hopsframes{YType::uint32, "sourceRoutingStats3HopsFrames"},
    sourceroutingstats4hopsframes{YType::uint32, "sourceRoutingStats4HopsFrames"},
    sourceroutingstats5hopsframes{YType::uint32, "sourceRoutingStats5HopsFrames"},
    sourceroutingstats6hopsframes{YType::uint32, "sourceRoutingStats6HopsFrames"},
    sourceroutingstats7hopsframes{YType::uint32, "sourceRoutingStats7HopsFrames"},
    sourceroutingstats8hopsframes{YType::uint32, "sourceRoutingStats8HopsFrames"},
    sourceroutingstatsallroutesbroadcastframes{YType::uint32, "sourceRoutingStatsAllRoutesBroadcastFrames"},
    sourceroutingstatsallroutesbroadcastoctets{YType::uint32, "sourceRoutingStatsAllRoutesBroadcastOctets"},
    sourceroutingstatsinframes{YType::uint32, "sourceRoutingStatsInFrames"},
    sourceroutingstatsinoctets{YType::uint32, "sourceRoutingStatsInOctets"},
    sourceroutingstatslocalllcframes{YType::uint32, "sourceRoutingStatsLocalLLCFrames"},
    sourceroutingstatsmorethan8hopsframes{YType::uint32, "sourceRoutingStatsMoreThan8HopsFrames"},
    sourceroutingstatsoutframes{YType::uint32, "sourceRoutingStatsOutFrames"},
    sourceroutingstatsoutoctets{YType::uint32, "sourceRoutingStatsOutOctets"},
    sourceroutingstatsowner{YType::str, "sourceRoutingStatsOwner"},
    sourceroutingstatsringnumber{YType::int32, "sourceRoutingStatsRingNumber"},
    sourceroutingstatssingleroutebroadcastframes{YType::uint32, "sourceRoutingStatsSingleRouteBroadcastFrames"},
    sourceroutingstatssingleroutesbroadcastoctets{YType::uint32, "sourceRoutingStatsSingleRoutesBroadcastOctets"},
    sourceroutingstatsstatus{YType::enumeration, "sourceRoutingStatsStatus"},
    sourceroutingstatsthroughframes{YType::uint32, "sourceRoutingStatsThroughFrames"},
    sourceroutingstatsthroughoctets{YType::uint32, "sourceRoutingStatsThroughOctets"}
{
    yang_name = "sourceRoutingStatsEntry"; yang_parent_name = "sourceRoutingStatsTable";
}

TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::~Sourceroutingstatsentry()
{
}

bool TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::has_data() const
{
    return sourceroutingstatsifindex.is_set
	|| sourceroutingstats1hopframes.is_set
	|| sourceroutingstats2hopsframes.is_set
	|| sourceroutingstats3hopsframes.is_set
	|| sourceroutingstats4hopsframes.is_set
	|| sourceroutingstats5hopsframes.is_set
	|| sourceroutingstats6hopsframes.is_set
	|| sourceroutingstats7hopsframes.is_set
	|| sourceroutingstats8hopsframes.is_set
	|| sourceroutingstatsallroutesbroadcastframes.is_set
	|| sourceroutingstatsallroutesbroadcastoctets.is_set
	|| sourceroutingstatsinframes.is_set
	|| sourceroutingstatsinoctets.is_set
	|| sourceroutingstatslocalllcframes.is_set
	|| sourceroutingstatsmorethan8hopsframes.is_set
	|| sourceroutingstatsoutframes.is_set
	|| sourceroutingstatsoutoctets.is_set
	|| sourceroutingstatsowner.is_set
	|| sourceroutingstatsringnumber.is_set
	|| sourceroutingstatssingleroutebroadcastframes.is_set
	|| sourceroutingstatssingleroutesbroadcastoctets.is_set
	|| sourceroutingstatsstatus.is_set
	|| sourceroutingstatsthroughframes.is_set
	|| sourceroutingstatsthroughoctets.is_set;
}

bool TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(sourceroutingstatsifindex.operation)
	|| is_set(sourceroutingstats1hopframes.operation)
	|| is_set(sourceroutingstats2hopsframes.operation)
	|| is_set(sourceroutingstats3hopsframes.operation)
	|| is_set(sourceroutingstats4hopsframes.operation)
	|| is_set(sourceroutingstats5hopsframes.operation)
	|| is_set(sourceroutingstats6hopsframes.operation)
	|| is_set(sourceroutingstats7hopsframes.operation)
	|| is_set(sourceroutingstats8hopsframes.operation)
	|| is_set(sourceroutingstatsallroutesbroadcastframes.operation)
	|| is_set(sourceroutingstatsallroutesbroadcastoctets.operation)
	|| is_set(sourceroutingstatsinframes.operation)
	|| is_set(sourceroutingstatsinoctets.operation)
	|| is_set(sourceroutingstatslocalllcframes.operation)
	|| is_set(sourceroutingstatsmorethan8hopsframes.operation)
	|| is_set(sourceroutingstatsoutframes.operation)
	|| is_set(sourceroutingstatsoutoctets.operation)
	|| is_set(sourceroutingstatsowner.operation)
	|| is_set(sourceroutingstatsringnumber.operation)
	|| is_set(sourceroutingstatssingleroutebroadcastframes.operation)
	|| is_set(sourceroutingstatssingleroutesbroadcastoctets.operation)
	|| is_set(sourceroutingstatsstatus.operation)
	|| is_set(sourceroutingstatsthroughframes.operation)
	|| is_set(sourceroutingstatsthroughoctets.operation);
}

std::string TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourceRoutingStatsEntry" <<"[sourceRoutingStatsIfIndex='" <<sourceroutingstatsifindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKEN-RING-RMON-MIB:TOKEN-RING-RMON-MIB/sourceRoutingStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourceroutingstatsifindex.is_set || is_set(sourceroutingstatsifindex.operation)) leaf_name_data.push_back(sourceroutingstatsifindex.get_name_leafdata());
    if (sourceroutingstats1hopframes.is_set || is_set(sourceroutingstats1hopframes.operation)) leaf_name_data.push_back(sourceroutingstats1hopframes.get_name_leafdata());
    if (sourceroutingstats2hopsframes.is_set || is_set(sourceroutingstats2hopsframes.operation)) leaf_name_data.push_back(sourceroutingstats2hopsframes.get_name_leafdata());
    if (sourceroutingstats3hopsframes.is_set || is_set(sourceroutingstats3hopsframes.operation)) leaf_name_data.push_back(sourceroutingstats3hopsframes.get_name_leafdata());
    if (sourceroutingstats4hopsframes.is_set || is_set(sourceroutingstats4hopsframes.operation)) leaf_name_data.push_back(sourceroutingstats4hopsframes.get_name_leafdata());
    if (sourceroutingstats5hopsframes.is_set || is_set(sourceroutingstats5hopsframes.operation)) leaf_name_data.push_back(sourceroutingstats5hopsframes.get_name_leafdata());
    if (sourceroutingstats6hopsframes.is_set || is_set(sourceroutingstats6hopsframes.operation)) leaf_name_data.push_back(sourceroutingstats6hopsframes.get_name_leafdata());
    if (sourceroutingstats7hopsframes.is_set || is_set(sourceroutingstats7hopsframes.operation)) leaf_name_data.push_back(sourceroutingstats7hopsframes.get_name_leafdata());
    if (sourceroutingstats8hopsframes.is_set || is_set(sourceroutingstats8hopsframes.operation)) leaf_name_data.push_back(sourceroutingstats8hopsframes.get_name_leafdata());
    if (sourceroutingstatsallroutesbroadcastframes.is_set || is_set(sourceroutingstatsallroutesbroadcastframes.operation)) leaf_name_data.push_back(sourceroutingstatsallroutesbroadcastframes.get_name_leafdata());
    if (sourceroutingstatsallroutesbroadcastoctets.is_set || is_set(sourceroutingstatsallroutesbroadcastoctets.operation)) leaf_name_data.push_back(sourceroutingstatsallroutesbroadcastoctets.get_name_leafdata());
    if (sourceroutingstatsinframes.is_set || is_set(sourceroutingstatsinframes.operation)) leaf_name_data.push_back(sourceroutingstatsinframes.get_name_leafdata());
    if (sourceroutingstatsinoctets.is_set || is_set(sourceroutingstatsinoctets.operation)) leaf_name_data.push_back(sourceroutingstatsinoctets.get_name_leafdata());
    if (sourceroutingstatslocalllcframes.is_set || is_set(sourceroutingstatslocalllcframes.operation)) leaf_name_data.push_back(sourceroutingstatslocalllcframes.get_name_leafdata());
    if (sourceroutingstatsmorethan8hopsframes.is_set || is_set(sourceroutingstatsmorethan8hopsframes.operation)) leaf_name_data.push_back(sourceroutingstatsmorethan8hopsframes.get_name_leafdata());
    if (sourceroutingstatsoutframes.is_set || is_set(sourceroutingstatsoutframes.operation)) leaf_name_data.push_back(sourceroutingstatsoutframes.get_name_leafdata());
    if (sourceroutingstatsoutoctets.is_set || is_set(sourceroutingstatsoutoctets.operation)) leaf_name_data.push_back(sourceroutingstatsoutoctets.get_name_leafdata());
    if (sourceroutingstatsowner.is_set || is_set(sourceroutingstatsowner.operation)) leaf_name_data.push_back(sourceroutingstatsowner.get_name_leafdata());
    if (sourceroutingstatsringnumber.is_set || is_set(sourceroutingstatsringnumber.operation)) leaf_name_data.push_back(sourceroutingstatsringnumber.get_name_leafdata());
    if (sourceroutingstatssingleroutebroadcastframes.is_set || is_set(sourceroutingstatssingleroutebroadcastframes.operation)) leaf_name_data.push_back(sourceroutingstatssingleroutebroadcastframes.get_name_leafdata());
    if (sourceroutingstatssingleroutesbroadcastoctets.is_set || is_set(sourceroutingstatssingleroutesbroadcastoctets.operation)) leaf_name_data.push_back(sourceroutingstatssingleroutesbroadcastoctets.get_name_leafdata());
    if (sourceroutingstatsstatus.is_set || is_set(sourceroutingstatsstatus.operation)) leaf_name_data.push_back(sourceroutingstatsstatus.get_name_leafdata());
    if (sourceroutingstatsthroughframes.is_set || is_set(sourceroutingstatsthroughframes.operation)) leaf_name_data.push_back(sourceroutingstatsthroughframes.get_name_leafdata());
    if (sourceroutingstatsthroughoctets.is_set || is_set(sourceroutingstatsthroughoctets.operation)) leaf_name_data.push_back(sourceroutingstatsthroughoctets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sourceRoutingStatsIfIndex")
    {
        sourceroutingstatsifindex = value;
    }
    if(value_path == "sourceRoutingStats1HopFrames")
    {
        sourceroutingstats1hopframes = value;
    }
    if(value_path == "sourceRoutingStats2HopsFrames")
    {
        sourceroutingstats2hopsframes = value;
    }
    if(value_path == "sourceRoutingStats3HopsFrames")
    {
        sourceroutingstats3hopsframes = value;
    }
    if(value_path == "sourceRoutingStats4HopsFrames")
    {
        sourceroutingstats4hopsframes = value;
    }
    if(value_path == "sourceRoutingStats5HopsFrames")
    {
        sourceroutingstats5hopsframes = value;
    }
    if(value_path == "sourceRoutingStats6HopsFrames")
    {
        sourceroutingstats6hopsframes = value;
    }
    if(value_path == "sourceRoutingStats7HopsFrames")
    {
        sourceroutingstats7hopsframes = value;
    }
    if(value_path == "sourceRoutingStats8HopsFrames")
    {
        sourceroutingstats8hopsframes = value;
    }
    if(value_path == "sourceRoutingStatsAllRoutesBroadcastFrames")
    {
        sourceroutingstatsallroutesbroadcastframes = value;
    }
    if(value_path == "sourceRoutingStatsAllRoutesBroadcastOctets")
    {
        sourceroutingstatsallroutesbroadcastoctets = value;
    }
    if(value_path == "sourceRoutingStatsInFrames")
    {
        sourceroutingstatsinframes = value;
    }
    if(value_path == "sourceRoutingStatsInOctets")
    {
        sourceroutingstatsinoctets = value;
    }
    if(value_path == "sourceRoutingStatsLocalLLCFrames")
    {
        sourceroutingstatslocalllcframes = value;
    }
    if(value_path == "sourceRoutingStatsMoreThan8HopsFrames")
    {
        sourceroutingstatsmorethan8hopsframes = value;
    }
    if(value_path == "sourceRoutingStatsOutFrames")
    {
        sourceroutingstatsoutframes = value;
    }
    if(value_path == "sourceRoutingStatsOutOctets")
    {
        sourceroutingstatsoutoctets = value;
    }
    if(value_path == "sourceRoutingStatsOwner")
    {
        sourceroutingstatsowner = value;
    }
    if(value_path == "sourceRoutingStatsRingNumber")
    {
        sourceroutingstatsringnumber = value;
    }
    if(value_path == "sourceRoutingStatsSingleRouteBroadcastFrames")
    {
        sourceroutingstatssingleroutebroadcastframes = value;
    }
    if(value_path == "sourceRoutingStatsSingleRoutesBroadcastOctets")
    {
        sourceroutingstatssingleroutesbroadcastoctets = value;
    }
    if(value_path == "sourceRoutingStatsStatus")
    {
        sourceroutingstatsstatus = value;
    }
    if(value_path == "sourceRoutingStatsThroughFrames")
    {
        sourceroutingstatsthroughframes = value;
    }
    if(value_path == "sourceRoutingStatsThroughOctets")
    {
        sourceroutingstatsthroughoctets = value;
    }
}

const Enum::YLeaf EntrystatusEnum::valid {1, "valid"};
const Enum::YLeaf EntrystatusEnum::createRequest {2, "createRequest"};
const Enum::YLeaf EntrystatusEnum::underCreation {3, "underCreation"};
const Enum::YLeaf EntrystatusEnum::invalid {4, "invalid"};

const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum::normalOperation {1, "normalOperation"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum::ringPurgeState {2, "ringPurgeState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum::claimTokenState {3, "claimTokenState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum::beaconFrameStreamingState {4, "beaconFrameStreamingState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum::beaconBitStreamingState {5, "beaconBitStreamingState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum::beaconRingSignalLossState {6, "beaconRingSignalLossState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum::beaconSetRecoveryModeState {7, "beaconSetRecoveryModeState"};

const Enum::YLeaf TokenRingRmonMib::Ringstationtable::Ringstationentry::RingstationstationstatusEnum::active {1, "active"};
const Enum::YLeaf TokenRingRmonMib::Ringstationtable::Ringstationentry::RingstationstationstatusEnum::inactive {2, "inactive"};
const Enum::YLeaf TokenRingRmonMib::Ringstationtable::Ringstationentry::RingstationstationstatusEnum::forcedRemoval {3, "forcedRemoval"};

const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::RingstationconfigcontrolremoveEnum::stable {1, "stable"};
const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::RingstationconfigcontrolremoveEnum::removing {2, "removing"};

const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::RingstationconfigcontrolupdatestatsEnum::stable {1, "stable"};
const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::RingstationconfigcontrolupdatestatsEnum::updating {2, "updating"};


}
}

