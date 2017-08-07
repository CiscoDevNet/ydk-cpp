
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TOKEN_RING_RMON_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void TokenRingRmonMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> TokenRingRmonMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TokenRingRmonMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationConfigControlTable" || name == "ringStationConfigTable" || name == "ringStationControlTable" || name == "ringStationOrderTable" || name == "ringStationTable" || name == "sourceRoutingStatsTable" || name == "tokenRingMLHistoryTable" || name == "tokenRingMLStatsTable" || name == "tokenRingPHistoryTable" || name == "tokenRingPStatsTable")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Tokenringmlstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Tokenringmlstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Tokenringmlstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingMLStatsEntry")
        return true;
    return false;
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
    tokenringmlstatscreatetime{YType::uint32, "RMON2-MIB:tokenRingMLStatsCreateTime"},
    tokenringmlstatsdatasource{YType::str, "tokenRingMLStatsDataSource"},
    tokenringmlstatsdropevents{YType::uint32, "tokenRingMLStatsDropEvents"},
    tokenringmlstatsdroppedframes{YType::uint32, "RMON2-MIB:tokenRingMLStatsDroppedFrames"},
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
	|| tokenringmlstatscreatetime.is_set
	|| tokenringmlstatsdatasource.is_set
	|| tokenringmlstatsdropevents.is_set
	|| tokenringmlstatsdroppedframes.is_set
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
    return is_set(yfilter)
	|| ydk::is_set(tokenringmlstatsindex.yfilter)
	|| ydk::is_set(tokenringmlstatsaborterrors.yfilter)
	|| ydk::is_set(tokenringmlstatsacerrors.yfilter)
	|| ydk::is_set(tokenringmlstatsbeaconevents.yfilter)
	|| ydk::is_set(tokenringmlstatsbeaconpkts.yfilter)
	|| ydk::is_set(tokenringmlstatsbeacontime.yfilter)
	|| ydk::is_set(tokenringmlstatsbursterrors.yfilter)
	|| ydk::is_set(tokenringmlstatsclaimtokenevents.yfilter)
	|| ydk::is_set(tokenringmlstatsclaimtokenpkts.yfilter)
	|| ydk::is_set(tokenringmlstatscongestionerrors.yfilter)
	|| ydk::is_set(tokenringmlstatscreatetime.yfilter)
	|| ydk::is_set(tokenringmlstatsdatasource.yfilter)
	|| ydk::is_set(tokenringmlstatsdropevents.yfilter)
	|| ydk::is_set(tokenringmlstatsdroppedframes.yfilter)
	|| ydk::is_set(tokenringmlstatsframecopiederrors.yfilter)
	|| ydk::is_set(tokenringmlstatsfrequencyerrors.yfilter)
	|| ydk::is_set(tokenringmlstatsinternalerrors.yfilter)
	|| ydk::is_set(tokenringmlstatslineerrors.yfilter)
	|| ydk::is_set(tokenringmlstatslostframeerrors.yfilter)
	|| ydk::is_set(tokenringmlstatsmacoctets.yfilter)
	|| ydk::is_set(tokenringmlstatsmacpkts.yfilter)
	|| ydk::is_set(tokenringmlstatsnaunchanges.yfilter)
	|| ydk::is_set(tokenringmlstatsowner.yfilter)
	|| ydk::is_set(tokenringmlstatsringpollevents.yfilter)
	|| ydk::is_set(tokenringmlstatsringpurgeevents.yfilter)
	|| ydk::is_set(tokenringmlstatsringpurgepkts.yfilter)
	|| ydk::is_set(tokenringmlstatssofterrorreports.yfilter)
	|| ydk::is_set(tokenringmlstatsstatus.yfilter)
	|| ydk::is_set(tokenringmlstatstokenerrors.yfilter);
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

    if (tokenringmlstatsindex.is_set || is_set(tokenringmlstatsindex.yfilter)) leaf_name_data.push_back(tokenringmlstatsindex.get_name_leafdata());
    if (tokenringmlstatsaborterrors.is_set || is_set(tokenringmlstatsaborterrors.yfilter)) leaf_name_data.push_back(tokenringmlstatsaborterrors.get_name_leafdata());
    if (tokenringmlstatsacerrors.is_set || is_set(tokenringmlstatsacerrors.yfilter)) leaf_name_data.push_back(tokenringmlstatsacerrors.get_name_leafdata());
    if (tokenringmlstatsbeaconevents.is_set || is_set(tokenringmlstatsbeaconevents.yfilter)) leaf_name_data.push_back(tokenringmlstatsbeaconevents.get_name_leafdata());
    if (tokenringmlstatsbeaconpkts.is_set || is_set(tokenringmlstatsbeaconpkts.yfilter)) leaf_name_data.push_back(tokenringmlstatsbeaconpkts.get_name_leafdata());
    if (tokenringmlstatsbeacontime.is_set || is_set(tokenringmlstatsbeacontime.yfilter)) leaf_name_data.push_back(tokenringmlstatsbeacontime.get_name_leafdata());
    if (tokenringmlstatsbursterrors.is_set || is_set(tokenringmlstatsbursterrors.yfilter)) leaf_name_data.push_back(tokenringmlstatsbursterrors.get_name_leafdata());
    if (tokenringmlstatsclaimtokenevents.is_set || is_set(tokenringmlstatsclaimtokenevents.yfilter)) leaf_name_data.push_back(tokenringmlstatsclaimtokenevents.get_name_leafdata());
    if (tokenringmlstatsclaimtokenpkts.is_set || is_set(tokenringmlstatsclaimtokenpkts.yfilter)) leaf_name_data.push_back(tokenringmlstatsclaimtokenpkts.get_name_leafdata());
    if (tokenringmlstatscongestionerrors.is_set || is_set(tokenringmlstatscongestionerrors.yfilter)) leaf_name_data.push_back(tokenringmlstatscongestionerrors.get_name_leafdata());
    if (tokenringmlstatscreatetime.is_set || is_set(tokenringmlstatscreatetime.yfilter)) leaf_name_data.push_back(tokenringmlstatscreatetime.get_name_leafdata());
    if (tokenringmlstatsdatasource.is_set || is_set(tokenringmlstatsdatasource.yfilter)) leaf_name_data.push_back(tokenringmlstatsdatasource.get_name_leafdata());
    if (tokenringmlstatsdropevents.is_set || is_set(tokenringmlstatsdropevents.yfilter)) leaf_name_data.push_back(tokenringmlstatsdropevents.get_name_leafdata());
    if (tokenringmlstatsdroppedframes.is_set || is_set(tokenringmlstatsdroppedframes.yfilter)) leaf_name_data.push_back(tokenringmlstatsdroppedframes.get_name_leafdata());
    if (tokenringmlstatsframecopiederrors.is_set || is_set(tokenringmlstatsframecopiederrors.yfilter)) leaf_name_data.push_back(tokenringmlstatsframecopiederrors.get_name_leafdata());
    if (tokenringmlstatsfrequencyerrors.is_set || is_set(tokenringmlstatsfrequencyerrors.yfilter)) leaf_name_data.push_back(tokenringmlstatsfrequencyerrors.get_name_leafdata());
    if (tokenringmlstatsinternalerrors.is_set || is_set(tokenringmlstatsinternalerrors.yfilter)) leaf_name_data.push_back(tokenringmlstatsinternalerrors.get_name_leafdata());
    if (tokenringmlstatslineerrors.is_set || is_set(tokenringmlstatslineerrors.yfilter)) leaf_name_data.push_back(tokenringmlstatslineerrors.get_name_leafdata());
    if (tokenringmlstatslostframeerrors.is_set || is_set(tokenringmlstatslostframeerrors.yfilter)) leaf_name_data.push_back(tokenringmlstatslostframeerrors.get_name_leafdata());
    if (tokenringmlstatsmacoctets.is_set || is_set(tokenringmlstatsmacoctets.yfilter)) leaf_name_data.push_back(tokenringmlstatsmacoctets.get_name_leafdata());
    if (tokenringmlstatsmacpkts.is_set || is_set(tokenringmlstatsmacpkts.yfilter)) leaf_name_data.push_back(tokenringmlstatsmacpkts.get_name_leafdata());
    if (tokenringmlstatsnaunchanges.is_set || is_set(tokenringmlstatsnaunchanges.yfilter)) leaf_name_data.push_back(tokenringmlstatsnaunchanges.get_name_leafdata());
    if (tokenringmlstatsowner.is_set || is_set(tokenringmlstatsowner.yfilter)) leaf_name_data.push_back(tokenringmlstatsowner.get_name_leafdata());
    if (tokenringmlstatsringpollevents.is_set || is_set(tokenringmlstatsringpollevents.yfilter)) leaf_name_data.push_back(tokenringmlstatsringpollevents.get_name_leafdata());
    if (tokenringmlstatsringpurgeevents.is_set || is_set(tokenringmlstatsringpurgeevents.yfilter)) leaf_name_data.push_back(tokenringmlstatsringpurgeevents.get_name_leafdata());
    if (tokenringmlstatsringpurgepkts.is_set || is_set(tokenringmlstatsringpurgepkts.yfilter)) leaf_name_data.push_back(tokenringmlstatsringpurgepkts.get_name_leafdata());
    if (tokenringmlstatssofterrorreports.is_set || is_set(tokenringmlstatssofterrorreports.yfilter)) leaf_name_data.push_back(tokenringmlstatssofterrorreports.get_name_leafdata());
    if (tokenringmlstatsstatus.is_set || is_set(tokenringmlstatsstatus.yfilter)) leaf_name_data.push_back(tokenringmlstatsstatus.get_name_leafdata());
    if (tokenringmlstatstokenerrors.is_set || is_set(tokenringmlstatstokenerrors.yfilter)) leaf_name_data.push_back(tokenringmlstatstokenerrors.get_name_leafdata());


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

void TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tokenRingMLStatsIndex")
    {
        tokenringmlstatsindex = value;
        tokenringmlstatsindex.value_namespace = name_space;
        tokenringmlstatsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsAbortErrors")
    {
        tokenringmlstatsaborterrors = value;
        tokenringmlstatsaborterrors.value_namespace = name_space;
        tokenringmlstatsaborterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsACErrors")
    {
        tokenringmlstatsacerrors = value;
        tokenringmlstatsacerrors.value_namespace = name_space;
        tokenringmlstatsacerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsBeaconEvents")
    {
        tokenringmlstatsbeaconevents = value;
        tokenringmlstatsbeaconevents.value_namespace = name_space;
        tokenringmlstatsbeaconevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsBeaconPkts")
    {
        tokenringmlstatsbeaconpkts = value;
        tokenringmlstatsbeaconpkts.value_namespace = name_space;
        tokenringmlstatsbeaconpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsBeaconTime")
    {
        tokenringmlstatsbeacontime = value;
        tokenringmlstatsbeacontime.value_namespace = name_space;
        tokenringmlstatsbeacontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsBurstErrors")
    {
        tokenringmlstatsbursterrors = value;
        tokenringmlstatsbursterrors.value_namespace = name_space;
        tokenringmlstatsbursterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsClaimTokenEvents")
    {
        tokenringmlstatsclaimtokenevents = value;
        tokenringmlstatsclaimtokenevents.value_namespace = name_space;
        tokenringmlstatsclaimtokenevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsClaimTokenPkts")
    {
        tokenringmlstatsclaimtokenpkts = value;
        tokenringmlstatsclaimtokenpkts.value_namespace = name_space;
        tokenringmlstatsclaimtokenpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsCongestionErrors")
    {
        tokenringmlstatscongestionerrors = value;
        tokenringmlstatscongestionerrors.value_namespace = name_space;
        tokenringmlstatscongestionerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsCreateTime")
    {
        tokenringmlstatscreatetime = value;
        tokenringmlstatscreatetime.value_namespace = name_space;
        tokenringmlstatscreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsDataSource")
    {
        tokenringmlstatsdatasource = value;
        tokenringmlstatsdatasource.value_namespace = name_space;
        tokenringmlstatsdatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsDropEvents")
    {
        tokenringmlstatsdropevents = value;
        tokenringmlstatsdropevents.value_namespace = name_space;
        tokenringmlstatsdropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsDroppedFrames")
    {
        tokenringmlstatsdroppedframes = value;
        tokenringmlstatsdroppedframes.value_namespace = name_space;
        tokenringmlstatsdroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsFrameCopiedErrors")
    {
        tokenringmlstatsframecopiederrors = value;
        tokenringmlstatsframecopiederrors.value_namespace = name_space;
        tokenringmlstatsframecopiederrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsFrequencyErrors")
    {
        tokenringmlstatsfrequencyerrors = value;
        tokenringmlstatsfrequencyerrors.value_namespace = name_space;
        tokenringmlstatsfrequencyerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsInternalErrors")
    {
        tokenringmlstatsinternalerrors = value;
        tokenringmlstatsinternalerrors.value_namespace = name_space;
        tokenringmlstatsinternalerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsLineErrors")
    {
        tokenringmlstatslineerrors = value;
        tokenringmlstatslineerrors.value_namespace = name_space;
        tokenringmlstatslineerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsLostFrameErrors")
    {
        tokenringmlstatslostframeerrors = value;
        tokenringmlstatslostframeerrors.value_namespace = name_space;
        tokenringmlstatslostframeerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsMacOctets")
    {
        tokenringmlstatsmacoctets = value;
        tokenringmlstatsmacoctets.value_namespace = name_space;
        tokenringmlstatsmacoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsMacPkts")
    {
        tokenringmlstatsmacpkts = value;
        tokenringmlstatsmacpkts.value_namespace = name_space;
        tokenringmlstatsmacpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsNAUNChanges")
    {
        tokenringmlstatsnaunchanges = value;
        tokenringmlstatsnaunchanges.value_namespace = name_space;
        tokenringmlstatsnaunchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsOwner")
    {
        tokenringmlstatsowner = value;
        tokenringmlstatsowner.value_namespace = name_space;
        tokenringmlstatsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsRingPollEvents")
    {
        tokenringmlstatsringpollevents = value;
        tokenringmlstatsringpollevents.value_namespace = name_space;
        tokenringmlstatsringpollevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsRingPurgeEvents")
    {
        tokenringmlstatsringpurgeevents = value;
        tokenringmlstatsringpurgeevents.value_namespace = name_space;
        tokenringmlstatsringpurgeevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsRingPurgePkts")
    {
        tokenringmlstatsringpurgepkts = value;
        tokenringmlstatsringpurgepkts.value_namespace = name_space;
        tokenringmlstatsringpurgepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsSoftErrorReports")
    {
        tokenringmlstatssofterrorreports = value;
        tokenringmlstatssofterrorreports.value_namespace = name_space;
        tokenringmlstatssofterrorreports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsStatus")
    {
        tokenringmlstatsstatus = value;
        tokenringmlstatsstatus.value_namespace = name_space;
        tokenringmlstatsstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLStatsTokenErrors")
    {
        tokenringmlstatstokenerrors = value;
        tokenringmlstatstokenerrors.value_namespace = name_space;
        tokenringmlstatstokenerrors.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tokenRingMLStatsIndex")
    {
        tokenringmlstatsindex.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsAbortErrors")
    {
        tokenringmlstatsaborterrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsACErrors")
    {
        tokenringmlstatsacerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsBeaconEvents")
    {
        tokenringmlstatsbeaconevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsBeaconPkts")
    {
        tokenringmlstatsbeaconpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsBeaconTime")
    {
        tokenringmlstatsbeacontime.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsBurstErrors")
    {
        tokenringmlstatsbursterrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsClaimTokenEvents")
    {
        tokenringmlstatsclaimtokenevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsClaimTokenPkts")
    {
        tokenringmlstatsclaimtokenpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsCongestionErrors")
    {
        tokenringmlstatscongestionerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsCreateTime")
    {
        tokenringmlstatscreatetime.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsDataSource")
    {
        tokenringmlstatsdatasource.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsDropEvents")
    {
        tokenringmlstatsdropevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsDroppedFrames")
    {
        tokenringmlstatsdroppedframes.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsFrameCopiedErrors")
    {
        tokenringmlstatsframecopiederrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsFrequencyErrors")
    {
        tokenringmlstatsfrequencyerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsInternalErrors")
    {
        tokenringmlstatsinternalerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsLineErrors")
    {
        tokenringmlstatslineerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsLostFrameErrors")
    {
        tokenringmlstatslostframeerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsMacOctets")
    {
        tokenringmlstatsmacoctets.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsMacPkts")
    {
        tokenringmlstatsmacpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsNAUNChanges")
    {
        tokenringmlstatsnaunchanges.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsOwner")
    {
        tokenringmlstatsowner.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsRingPollEvents")
    {
        tokenringmlstatsringpollevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsRingPurgeEvents")
    {
        tokenringmlstatsringpurgeevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsRingPurgePkts")
    {
        tokenringmlstatsringpurgepkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsSoftErrorReports")
    {
        tokenringmlstatssofterrorreports.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsStatus")
    {
        tokenringmlstatsstatus.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLStatsTokenErrors")
    {
        tokenringmlstatstokenerrors.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingMLStatsIndex" || name == "tokenRingMLStatsAbortErrors" || name == "tokenRingMLStatsACErrors" || name == "tokenRingMLStatsBeaconEvents" || name == "tokenRingMLStatsBeaconPkts" || name == "tokenRingMLStatsBeaconTime" || name == "tokenRingMLStatsBurstErrors" || name == "tokenRingMLStatsClaimTokenEvents" || name == "tokenRingMLStatsClaimTokenPkts" || name == "tokenRingMLStatsCongestionErrors" || name == "tokenRingMLStatsCreateTime" || name == "tokenRingMLStatsDataSource" || name == "tokenRingMLStatsDropEvents" || name == "tokenRingMLStatsDroppedFrames" || name == "tokenRingMLStatsFrameCopiedErrors" || name == "tokenRingMLStatsFrequencyErrors" || name == "tokenRingMLStatsInternalErrors" || name == "tokenRingMLStatsLineErrors" || name == "tokenRingMLStatsLostFrameErrors" || name == "tokenRingMLStatsMacOctets" || name == "tokenRingMLStatsMacPkts" || name == "tokenRingMLStatsNAUNChanges" || name == "tokenRingMLStatsOwner" || name == "tokenRingMLStatsRingPollEvents" || name == "tokenRingMLStatsRingPurgeEvents" || name == "tokenRingMLStatsRingPurgePkts" || name == "tokenRingMLStatsSoftErrorReports" || name == "tokenRingMLStatsStatus" || name == "tokenRingMLStatsTokenErrors")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Tokenringpstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Tokenringpstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Tokenringpstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingPStatsEntry")
        return true;
    return false;
}

TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::Tokenringpstatsentry()
    :
    tokenringpstatsindex{YType::int32, "tokenRingPStatsIndex"},
    tokenringpstatscreatetime{YType::uint32, "RMON2-MIB:tokenRingPStatsCreateTime"},
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
    tokenringpstatsdroppedframes{YType::uint32, "RMON2-MIB:tokenRingPStatsDroppedFrames"},
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
	|| tokenringpstatscreatetime.is_set
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
	|| tokenringpstatsdroppedframes.is_set
	|| tokenringpstatsowner.is_set
	|| tokenringpstatsstatus.is_set;
}

bool TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tokenringpstatsindex.yfilter)
	|| ydk::is_set(tokenringpstatscreatetime.yfilter)
	|| ydk::is_set(tokenringpstatsdatabroadcastpkts.yfilter)
	|| ydk::is_set(tokenringpstatsdatamulticastpkts.yfilter)
	|| ydk::is_set(tokenringpstatsdataoctets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts1024to2047octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts128to255octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts18to63octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts2048to4095octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts256to511octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts4096to8191octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts512to1023octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts64to127octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapkts8192to18000octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatapktsgreaterthan18000octets.yfilter)
	|| ydk::is_set(tokenringpstatsdatasource.yfilter)
	|| ydk::is_set(tokenringpstatsdropevents.yfilter)
	|| ydk::is_set(tokenringpstatsdroppedframes.yfilter)
	|| ydk::is_set(tokenringpstatsowner.yfilter)
	|| ydk::is_set(tokenringpstatsstatus.yfilter);
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

    if (tokenringpstatsindex.is_set || is_set(tokenringpstatsindex.yfilter)) leaf_name_data.push_back(tokenringpstatsindex.get_name_leafdata());
    if (tokenringpstatscreatetime.is_set || is_set(tokenringpstatscreatetime.yfilter)) leaf_name_data.push_back(tokenringpstatscreatetime.get_name_leafdata());
    if (tokenringpstatsdatabroadcastpkts.is_set || is_set(tokenringpstatsdatabroadcastpkts.yfilter)) leaf_name_data.push_back(tokenringpstatsdatabroadcastpkts.get_name_leafdata());
    if (tokenringpstatsdatamulticastpkts.is_set || is_set(tokenringpstatsdatamulticastpkts.yfilter)) leaf_name_data.push_back(tokenringpstatsdatamulticastpkts.get_name_leafdata());
    if (tokenringpstatsdataoctets.is_set || is_set(tokenringpstatsdataoctets.yfilter)) leaf_name_data.push_back(tokenringpstatsdataoctets.get_name_leafdata());
    if (tokenringpstatsdatapkts.is_set || is_set(tokenringpstatsdatapkts.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts.get_name_leafdata());
    if (tokenringpstatsdatapkts1024to2047octets.is_set || is_set(tokenringpstatsdatapkts1024to2047octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts1024to2047octets.get_name_leafdata());
    if (tokenringpstatsdatapkts128to255octets.is_set || is_set(tokenringpstatsdatapkts128to255octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts128to255octets.get_name_leafdata());
    if (tokenringpstatsdatapkts18to63octets.is_set || is_set(tokenringpstatsdatapkts18to63octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts18to63octets.get_name_leafdata());
    if (tokenringpstatsdatapkts2048to4095octets.is_set || is_set(tokenringpstatsdatapkts2048to4095octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts2048to4095octets.get_name_leafdata());
    if (tokenringpstatsdatapkts256to511octets.is_set || is_set(tokenringpstatsdatapkts256to511octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts256to511octets.get_name_leafdata());
    if (tokenringpstatsdatapkts4096to8191octets.is_set || is_set(tokenringpstatsdatapkts4096to8191octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts4096to8191octets.get_name_leafdata());
    if (tokenringpstatsdatapkts512to1023octets.is_set || is_set(tokenringpstatsdatapkts512to1023octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts512to1023octets.get_name_leafdata());
    if (tokenringpstatsdatapkts64to127octets.is_set || is_set(tokenringpstatsdatapkts64to127octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts64to127octets.get_name_leafdata());
    if (tokenringpstatsdatapkts8192to18000octets.is_set || is_set(tokenringpstatsdatapkts8192to18000octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapkts8192to18000octets.get_name_leafdata());
    if (tokenringpstatsdatapktsgreaterthan18000octets.is_set || is_set(tokenringpstatsdatapktsgreaterthan18000octets.yfilter)) leaf_name_data.push_back(tokenringpstatsdatapktsgreaterthan18000octets.get_name_leafdata());
    if (tokenringpstatsdatasource.is_set || is_set(tokenringpstatsdatasource.yfilter)) leaf_name_data.push_back(tokenringpstatsdatasource.get_name_leafdata());
    if (tokenringpstatsdropevents.is_set || is_set(tokenringpstatsdropevents.yfilter)) leaf_name_data.push_back(tokenringpstatsdropevents.get_name_leafdata());
    if (tokenringpstatsdroppedframes.is_set || is_set(tokenringpstatsdroppedframes.yfilter)) leaf_name_data.push_back(tokenringpstatsdroppedframes.get_name_leafdata());
    if (tokenringpstatsowner.is_set || is_set(tokenringpstatsowner.yfilter)) leaf_name_data.push_back(tokenringpstatsowner.get_name_leafdata());
    if (tokenringpstatsstatus.is_set || is_set(tokenringpstatsstatus.yfilter)) leaf_name_data.push_back(tokenringpstatsstatus.get_name_leafdata());


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

void TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tokenRingPStatsIndex")
    {
        tokenringpstatsindex = value;
        tokenringpstatsindex.value_namespace = name_space;
        tokenringpstatsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsCreateTime")
    {
        tokenringpstatscreatetime = value;
        tokenringpstatscreatetime.value_namespace = name_space;
        tokenringpstatscreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataBroadcastPkts")
    {
        tokenringpstatsdatabroadcastpkts = value;
        tokenringpstatsdatabroadcastpkts.value_namespace = name_space;
        tokenringpstatsdatabroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataMulticastPkts")
    {
        tokenringpstatsdatamulticastpkts = value;
        tokenringpstatsdatamulticastpkts.value_namespace = name_space;
        tokenringpstatsdatamulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataOctets")
    {
        tokenringpstatsdataoctets = value;
        tokenringpstatsdataoctets.value_namespace = name_space;
        tokenringpstatsdataoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts")
    {
        tokenringpstatsdatapkts = value;
        tokenringpstatsdatapkts.value_namespace = name_space;
        tokenringpstatsdatapkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts1024to2047Octets")
    {
        tokenringpstatsdatapkts1024to2047octets = value;
        tokenringpstatsdatapkts1024to2047octets.value_namespace = name_space;
        tokenringpstatsdatapkts1024to2047octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts128to255Octets")
    {
        tokenringpstatsdatapkts128to255octets = value;
        tokenringpstatsdatapkts128to255octets.value_namespace = name_space;
        tokenringpstatsdatapkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts18to63Octets")
    {
        tokenringpstatsdatapkts18to63octets = value;
        tokenringpstatsdatapkts18to63octets.value_namespace = name_space;
        tokenringpstatsdatapkts18to63octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts2048to4095Octets")
    {
        tokenringpstatsdatapkts2048to4095octets = value;
        tokenringpstatsdatapkts2048to4095octets.value_namespace = name_space;
        tokenringpstatsdatapkts2048to4095octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts256to511Octets")
    {
        tokenringpstatsdatapkts256to511octets = value;
        tokenringpstatsdatapkts256to511octets.value_namespace = name_space;
        tokenringpstatsdatapkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts4096to8191Octets")
    {
        tokenringpstatsdatapkts4096to8191octets = value;
        tokenringpstatsdatapkts4096to8191octets.value_namespace = name_space;
        tokenringpstatsdatapkts4096to8191octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts512to1023Octets")
    {
        tokenringpstatsdatapkts512to1023octets = value;
        tokenringpstatsdatapkts512to1023octets.value_namespace = name_space;
        tokenringpstatsdatapkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts64to127Octets")
    {
        tokenringpstatsdatapkts64to127octets = value;
        tokenringpstatsdatapkts64to127octets.value_namespace = name_space;
        tokenringpstatsdatapkts64to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPkts8192to18000Octets")
    {
        tokenringpstatsdatapkts8192to18000octets = value;
        tokenringpstatsdatapkts8192to18000octets.value_namespace = name_space;
        tokenringpstatsdatapkts8192to18000octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataPktsGreaterThan18000Octets")
    {
        tokenringpstatsdatapktsgreaterthan18000octets = value;
        tokenringpstatsdatapktsgreaterthan18000octets.value_namespace = name_space;
        tokenringpstatsdatapktsgreaterthan18000octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDataSource")
    {
        tokenringpstatsdatasource = value;
        tokenringpstatsdatasource.value_namespace = name_space;
        tokenringpstatsdatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDropEvents")
    {
        tokenringpstatsdropevents = value;
        tokenringpstatsdropevents.value_namespace = name_space;
        tokenringpstatsdropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsDroppedFrames")
    {
        tokenringpstatsdroppedframes = value;
        tokenringpstatsdroppedframes.value_namespace = name_space;
        tokenringpstatsdroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsOwner")
    {
        tokenringpstatsowner = value;
        tokenringpstatsowner.value_namespace = name_space;
        tokenringpstatsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPStatsStatus")
    {
        tokenringpstatsstatus = value;
        tokenringpstatsstatus.value_namespace = name_space;
        tokenringpstatsstatus.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tokenRingPStatsIndex")
    {
        tokenringpstatsindex.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsCreateTime")
    {
        tokenringpstatscreatetime.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataBroadcastPkts")
    {
        tokenringpstatsdatabroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataMulticastPkts")
    {
        tokenringpstatsdatamulticastpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataOctets")
    {
        tokenringpstatsdataoctets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts")
    {
        tokenringpstatsdatapkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts1024to2047Octets")
    {
        tokenringpstatsdatapkts1024to2047octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts128to255Octets")
    {
        tokenringpstatsdatapkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts18to63Octets")
    {
        tokenringpstatsdatapkts18to63octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts2048to4095Octets")
    {
        tokenringpstatsdatapkts2048to4095octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts256to511Octets")
    {
        tokenringpstatsdatapkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts4096to8191Octets")
    {
        tokenringpstatsdatapkts4096to8191octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts512to1023Octets")
    {
        tokenringpstatsdatapkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts64to127Octets")
    {
        tokenringpstatsdatapkts64to127octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPkts8192to18000Octets")
    {
        tokenringpstatsdatapkts8192to18000octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataPktsGreaterThan18000Octets")
    {
        tokenringpstatsdatapktsgreaterthan18000octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDataSource")
    {
        tokenringpstatsdatasource.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDropEvents")
    {
        tokenringpstatsdropevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsDroppedFrames")
    {
        tokenringpstatsdroppedframes.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsOwner")
    {
        tokenringpstatsowner.yfilter = yfilter;
    }
    if(value_path == "tokenRingPStatsStatus")
    {
        tokenringpstatsstatus.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingPStatsIndex" || name == "tokenRingPStatsCreateTime" || name == "tokenRingPStatsDataBroadcastPkts" || name == "tokenRingPStatsDataMulticastPkts" || name == "tokenRingPStatsDataOctets" || name == "tokenRingPStatsDataPkts" || name == "tokenRingPStatsDataPkts1024to2047Octets" || name == "tokenRingPStatsDataPkts128to255Octets" || name == "tokenRingPStatsDataPkts18to63Octets" || name == "tokenRingPStatsDataPkts2048to4095Octets" || name == "tokenRingPStatsDataPkts256to511Octets" || name == "tokenRingPStatsDataPkts4096to8191Octets" || name == "tokenRingPStatsDataPkts512to1023Octets" || name == "tokenRingPStatsDataPkts64to127Octets" || name == "tokenRingPStatsDataPkts8192to18000Octets" || name == "tokenRingPStatsDataPktsGreaterThan18000Octets" || name == "tokenRingPStatsDataSource" || name == "tokenRingPStatsDropEvents" || name == "tokenRingPStatsDroppedFrames" || name == "tokenRingPStatsOwner" || name == "tokenRingPStatsStatus")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Tokenringmlhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Tokenringmlhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Tokenringmlhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingMLHistoryEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(tokenringmlhistoryindex.yfilter)
	|| ydk::is_set(tokenringmlhistorysampleindex.yfilter)
	|| ydk::is_set(tokenringmlhistoryaborterrors.yfilter)
	|| ydk::is_set(tokenringmlhistoryacerrors.yfilter)
	|| ydk::is_set(tokenringmlhistoryactivestations.yfilter)
	|| ydk::is_set(tokenringmlhistorybeaconevents.yfilter)
	|| ydk::is_set(tokenringmlhistorybeaconpkts.yfilter)
	|| ydk::is_set(tokenringmlhistorybeacontime.yfilter)
	|| ydk::is_set(tokenringmlhistorybursterrors.yfilter)
	|| ydk::is_set(tokenringmlhistoryclaimtokenevents.yfilter)
	|| ydk::is_set(tokenringmlhistoryclaimtokenpkts.yfilter)
	|| ydk::is_set(tokenringmlhistorycongestionerrors.yfilter)
	|| ydk::is_set(tokenringmlhistorydropevents.yfilter)
	|| ydk::is_set(tokenringmlhistoryframecopiederrors.yfilter)
	|| ydk::is_set(tokenringmlhistoryfrequencyerrors.yfilter)
	|| ydk::is_set(tokenringmlhistoryinternalerrors.yfilter)
	|| ydk::is_set(tokenringmlhistoryintervalstart.yfilter)
	|| ydk::is_set(tokenringmlhistorylineerrors.yfilter)
	|| ydk::is_set(tokenringmlhistorylostframeerrors.yfilter)
	|| ydk::is_set(tokenringmlhistorymacoctets.yfilter)
	|| ydk::is_set(tokenringmlhistorymacpkts.yfilter)
	|| ydk::is_set(tokenringmlhistorynaunchanges.yfilter)
	|| ydk::is_set(tokenringmlhistoryringpollevents.yfilter)
	|| ydk::is_set(tokenringmlhistoryringpurgeevents.yfilter)
	|| ydk::is_set(tokenringmlhistoryringpurgepkts.yfilter)
	|| ydk::is_set(tokenringmlhistorysofterrorreports.yfilter)
	|| ydk::is_set(tokenringmlhistorytokenerrors.yfilter);
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

    if (tokenringmlhistoryindex.is_set || is_set(tokenringmlhistoryindex.yfilter)) leaf_name_data.push_back(tokenringmlhistoryindex.get_name_leafdata());
    if (tokenringmlhistorysampleindex.is_set || is_set(tokenringmlhistorysampleindex.yfilter)) leaf_name_data.push_back(tokenringmlhistorysampleindex.get_name_leafdata());
    if (tokenringmlhistoryaborterrors.is_set || is_set(tokenringmlhistoryaborterrors.yfilter)) leaf_name_data.push_back(tokenringmlhistoryaborterrors.get_name_leafdata());
    if (tokenringmlhistoryacerrors.is_set || is_set(tokenringmlhistoryacerrors.yfilter)) leaf_name_data.push_back(tokenringmlhistoryacerrors.get_name_leafdata());
    if (tokenringmlhistoryactivestations.is_set || is_set(tokenringmlhistoryactivestations.yfilter)) leaf_name_data.push_back(tokenringmlhistoryactivestations.get_name_leafdata());
    if (tokenringmlhistorybeaconevents.is_set || is_set(tokenringmlhistorybeaconevents.yfilter)) leaf_name_data.push_back(tokenringmlhistorybeaconevents.get_name_leafdata());
    if (tokenringmlhistorybeaconpkts.is_set || is_set(tokenringmlhistorybeaconpkts.yfilter)) leaf_name_data.push_back(tokenringmlhistorybeaconpkts.get_name_leafdata());
    if (tokenringmlhistorybeacontime.is_set || is_set(tokenringmlhistorybeacontime.yfilter)) leaf_name_data.push_back(tokenringmlhistorybeacontime.get_name_leafdata());
    if (tokenringmlhistorybursterrors.is_set || is_set(tokenringmlhistorybursterrors.yfilter)) leaf_name_data.push_back(tokenringmlhistorybursterrors.get_name_leafdata());
    if (tokenringmlhistoryclaimtokenevents.is_set || is_set(tokenringmlhistoryclaimtokenevents.yfilter)) leaf_name_data.push_back(tokenringmlhistoryclaimtokenevents.get_name_leafdata());
    if (tokenringmlhistoryclaimtokenpkts.is_set || is_set(tokenringmlhistoryclaimtokenpkts.yfilter)) leaf_name_data.push_back(tokenringmlhistoryclaimtokenpkts.get_name_leafdata());
    if (tokenringmlhistorycongestionerrors.is_set || is_set(tokenringmlhistorycongestionerrors.yfilter)) leaf_name_data.push_back(tokenringmlhistorycongestionerrors.get_name_leafdata());
    if (tokenringmlhistorydropevents.is_set || is_set(tokenringmlhistorydropevents.yfilter)) leaf_name_data.push_back(tokenringmlhistorydropevents.get_name_leafdata());
    if (tokenringmlhistoryframecopiederrors.is_set || is_set(tokenringmlhistoryframecopiederrors.yfilter)) leaf_name_data.push_back(tokenringmlhistoryframecopiederrors.get_name_leafdata());
    if (tokenringmlhistoryfrequencyerrors.is_set || is_set(tokenringmlhistoryfrequencyerrors.yfilter)) leaf_name_data.push_back(tokenringmlhistoryfrequencyerrors.get_name_leafdata());
    if (tokenringmlhistoryinternalerrors.is_set || is_set(tokenringmlhistoryinternalerrors.yfilter)) leaf_name_data.push_back(tokenringmlhistoryinternalerrors.get_name_leafdata());
    if (tokenringmlhistoryintervalstart.is_set || is_set(tokenringmlhistoryintervalstart.yfilter)) leaf_name_data.push_back(tokenringmlhistoryintervalstart.get_name_leafdata());
    if (tokenringmlhistorylineerrors.is_set || is_set(tokenringmlhistorylineerrors.yfilter)) leaf_name_data.push_back(tokenringmlhistorylineerrors.get_name_leafdata());
    if (tokenringmlhistorylostframeerrors.is_set || is_set(tokenringmlhistorylostframeerrors.yfilter)) leaf_name_data.push_back(tokenringmlhistorylostframeerrors.get_name_leafdata());
    if (tokenringmlhistorymacoctets.is_set || is_set(tokenringmlhistorymacoctets.yfilter)) leaf_name_data.push_back(tokenringmlhistorymacoctets.get_name_leafdata());
    if (tokenringmlhistorymacpkts.is_set || is_set(tokenringmlhistorymacpkts.yfilter)) leaf_name_data.push_back(tokenringmlhistorymacpkts.get_name_leafdata());
    if (tokenringmlhistorynaunchanges.is_set || is_set(tokenringmlhistorynaunchanges.yfilter)) leaf_name_data.push_back(tokenringmlhistorynaunchanges.get_name_leafdata());
    if (tokenringmlhistoryringpollevents.is_set || is_set(tokenringmlhistoryringpollevents.yfilter)) leaf_name_data.push_back(tokenringmlhistoryringpollevents.get_name_leafdata());
    if (tokenringmlhistoryringpurgeevents.is_set || is_set(tokenringmlhistoryringpurgeevents.yfilter)) leaf_name_data.push_back(tokenringmlhistoryringpurgeevents.get_name_leafdata());
    if (tokenringmlhistoryringpurgepkts.is_set || is_set(tokenringmlhistoryringpurgepkts.yfilter)) leaf_name_data.push_back(tokenringmlhistoryringpurgepkts.get_name_leafdata());
    if (tokenringmlhistorysofterrorreports.is_set || is_set(tokenringmlhistorysofterrorreports.yfilter)) leaf_name_data.push_back(tokenringmlhistorysofterrorreports.get_name_leafdata());
    if (tokenringmlhistorytokenerrors.is_set || is_set(tokenringmlhistorytokenerrors.yfilter)) leaf_name_data.push_back(tokenringmlhistorytokenerrors.get_name_leafdata());


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

void TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tokenRingMLHistoryIndex")
    {
        tokenringmlhistoryindex = value;
        tokenringmlhistoryindex.value_namespace = name_space;
        tokenringmlhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistorySampleIndex")
    {
        tokenringmlhistorysampleindex = value;
        tokenringmlhistorysampleindex.value_namespace = name_space;
        tokenringmlhistorysampleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryAbortErrors")
    {
        tokenringmlhistoryaborterrors = value;
        tokenringmlhistoryaborterrors.value_namespace = name_space;
        tokenringmlhistoryaborterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryACErrors")
    {
        tokenringmlhistoryacerrors = value;
        tokenringmlhistoryacerrors.value_namespace = name_space;
        tokenringmlhistoryacerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryActiveStations")
    {
        tokenringmlhistoryactivestations = value;
        tokenringmlhistoryactivestations.value_namespace = name_space;
        tokenringmlhistoryactivestations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryBeaconEvents")
    {
        tokenringmlhistorybeaconevents = value;
        tokenringmlhistorybeaconevents.value_namespace = name_space;
        tokenringmlhistorybeaconevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryBeaconPkts")
    {
        tokenringmlhistorybeaconpkts = value;
        tokenringmlhistorybeaconpkts.value_namespace = name_space;
        tokenringmlhistorybeaconpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryBeaconTime")
    {
        tokenringmlhistorybeacontime = value;
        tokenringmlhistorybeacontime.value_namespace = name_space;
        tokenringmlhistorybeacontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryBurstErrors")
    {
        tokenringmlhistorybursterrors = value;
        tokenringmlhistorybursterrors.value_namespace = name_space;
        tokenringmlhistorybursterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryClaimTokenEvents")
    {
        tokenringmlhistoryclaimtokenevents = value;
        tokenringmlhistoryclaimtokenevents.value_namespace = name_space;
        tokenringmlhistoryclaimtokenevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryClaimTokenPkts")
    {
        tokenringmlhistoryclaimtokenpkts = value;
        tokenringmlhistoryclaimtokenpkts.value_namespace = name_space;
        tokenringmlhistoryclaimtokenpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryCongestionErrors")
    {
        tokenringmlhistorycongestionerrors = value;
        tokenringmlhistorycongestionerrors.value_namespace = name_space;
        tokenringmlhistorycongestionerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryDropEvents")
    {
        tokenringmlhistorydropevents = value;
        tokenringmlhistorydropevents.value_namespace = name_space;
        tokenringmlhistorydropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryFrameCopiedErrors")
    {
        tokenringmlhistoryframecopiederrors = value;
        tokenringmlhistoryframecopiederrors.value_namespace = name_space;
        tokenringmlhistoryframecopiederrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryFrequencyErrors")
    {
        tokenringmlhistoryfrequencyerrors = value;
        tokenringmlhistoryfrequencyerrors.value_namespace = name_space;
        tokenringmlhistoryfrequencyerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryInternalErrors")
    {
        tokenringmlhistoryinternalerrors = value;
        tokenringmlhistoryinternalerrors.value_namespace = name_space;
        tokenringmlhistoryinternalerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryIntervalStart")
    {
        tokenringmlhistoryintervalstart = value;
        tokenringmlhistoryintervalstart.value_namespace = name_space;
        tokenringmlhistoryintervalstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryLineErrors")
    {
        tokenringmlhistorylineerrors = value;
        tokenringmlhistorylineerrors.value_namespace = name_space;
        tokenringmlhistorylineerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryLostFrameErrors")
    {
        tokenringmlhistorylostframeerrors = value;
        tokenringmlhistorylostframeerrors.value_namespace = name_space;
        tokenringmlhistorylostframeerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryMacOctets")
    {
        tokenringmlhistorymacoctets = value;
        tokenringmlhistorymacoctets.value_namespace = name_space;
        tokenringmlhistorymacoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryMacPkts")
    {
        tokenringmlhistorymacpkts = value;
        tokenringmlhistorymacpkts.value_namespace = name_space;
        tokenringmlhistorymacpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryNAUNChanges")
    {
        tokenringmlhistorynaunchanges = value;
        tokenringmlhistorynaunchanges.value_namespace = name_space;
        tokenringmlhistorynaunchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryRingPollEvents")
    {
        tokenringmlhistoryringpollevents = value;
        tokenringmlhistoryringpollevents.value_namespace = name_space;
        tokenringmlhistoryringpollevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryRingPurgeEvents")
    {
        tokenringmlhistoryringpurgeevents = value;
        tokenringmlhistoryringpurgeevents.value_namespace = name_space;
        tokenringmlhistoryringpurgeevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryRingPurgePkts")
    {
        tokenringmlhistoryringpurgepkts = value;
        tokenringmlhistoryringpurgepkts.value_namespace = name_space;
        tokenringmlhistoryringpurgepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistorySoftErrorReports")
    {
        tokenringmlhistorysofterrorreports = value;
        tokenringmlhistorysofterrorreports.value_namespace = name_space;
        tokenringmlhistorysofterrorreports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingMLHistoryTokenErrors")
    {
        tokenringmlhistorytokenerrors = value;
        tokenringmlhistorytokenerrors.value_namespace = name_space;
        tokenringmlhistorytokenerrors.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tokenRingMLHistoryIndex")
    {
        tokenringmlhistoryindex.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistorySampleIndex")
    {
        tokenringmlhistorysampleindex.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryAbortErrors")
    {
        tokenringmlhistoryaborterrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryACErrors")
    {
        tokenringmlhistoryacerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryActiveStations")
    {
        tokenringmlhistoryactivestations.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryBeaconEvents")
    {
        tokenringmlhistorybeaconevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryBeaconPkts")
    {
        tokenringmlhistorybeaconpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryBeaconTime")
    {
        tokenringmlhistorybeacontime.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryBurstErrors")
    {
        tokenringmlhistorybursterrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryClaimTokenEvents")
    {
        tokenringmlhistoryclaimtokenevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryClaimTokenPkts")
    {
        tokenringmlhistoryclaimtokenpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryCongestionErrors")
    {
        tokenringmlhistorycongestionerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryDropEvents")
    {
        tokenringmlhistorydropevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryFrameCopiedErrors")
    {
        tokenringmlhistoryframecopiederrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryFrequencyErrors")
    {
        tokenringmlhistoryfrequencyerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryInternalErrors")
    {
        tokenringmlhistoryinternalerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryIntervalStart")
    {
        tokenringmlhistoryintervalstart.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryLineErrors")
    {
        tokenringmlhistorylineerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryLostFrameErrors")
    {
        tokenringmlhistorylostframeerrors.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryMacOctets")
    {
        tokenringmlhistorymacoctets.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryMacPkts")
    {
        tokenringmlhistorymacpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryNAUNChanges")
    {
        tokenringmlhistorynaunchanges.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryRingPollEvents")
    {
        tokenringmlhistoryringpollevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryRingPurgeEvents")
    {
        tokenringmlhistoryringpurgeevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryRingPurgePkts")
    {
        tokenringmlhistoryringpurgepkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistorySoftErrorReports")
    {
        tokenringmlhistorysofterrorreports.yfilter = yfilter;
    }
    if(value_path == "tokenRingMLHistoryTokenErrors")
    {
        tokenringmlhistorytokenerrors.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingMLHistoryIndex" || name == "tokenRingMLHistorySampleIndex" || name == "tokenRingMLHistoryAbortErrors" || name == "tokenRingMLHistoryACErrors" || name == "tokenRingMLHistoryActiveStations" || name == "tokenRingMLHistoryBeaconEvents" || name == "tokenRingMLHistoryBeaconPkts" || name == "tokenRingMLHistoryBeaconTime" || name == "tokenRingMLHistoryBurstErrors" || name == "tokenRingMLHistoryClaimTokenEvents" || name == "tokenRingMLHistoryClaimTokenPkts" || name == "tokenRingMLHistoryCongestionErrors" || name == "tokenRingMLHistoryDropEvents" || name == "tokenRingMLHistoryFrameCopiedErrors" || name == "tokenRingMLHistoryFrequencyErrors" || name == "tokenRingMLHistoryInternalErrors" || name == "tokenRingMLHistoryIntervalStart" || name == "tokenRingMLHistoryLineErrors" || name == "tokenRingMLHistoryLostFrameErrors" || name == "tokenRingMLHistoryMacOctets" || name == "tokenRingMLHistoryMacPkts" || name == "tokenRingMLHistoryNAUNChanges" || name == "tokenRingMLHistoryRingPollEvents" || name == "tokenRingMLHistoryRingPurgeEvents" || name == "tokenRingMLHistoryRingPurgePkts" || name == "tokenRingMLHistorySoftErrorReports" || name == "tokenRingMLHistoryTokenErrors")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Tokenringphistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Tokenringphistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Tokenringphistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingPHistoryEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(tokenringphistoryindex.yfilter)
	|| ydk::is_set(tokenringphistorysampleindex.yfilter)
	|| ydk::is_set(tokenringphistorydatabroadcastpkts.yfilter)
	|| ydk::is_set(tokenringphistorydatamulticastpkts.yfilter)
	|| ydk::is_set(tokenringphistorydataoctets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts1024to2047octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts128to255octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts18to63octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts2048to4095octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts256to511octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts4096to8191octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts512to1023octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts64to127octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapkts8192to18000octets.yfilter)
	|| ydk::is_set(tokenringphistorydatapktsgreaterthan18000octets.yfilter)
	|| ydk::is_set(tokenringphistorydropevents.yfilter)
	|| ydk::is_set(tokenringphistoryintervalstart.yfilter);
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

    if (tokenringphistoryindex.is_set || is_set(tokenringphistoryindex.yfilter)) leaf_name_data.push_back(tokenringphistoryindex.get_name_leafdata());
    if (tokenringphistorysampleindex.is_set || is_set(tokenringphistorysampleindex.yfilter)) leaf_name_data.push_back(tokenringphistorysampleindex.get_name_leafdata());
    if (tokenringphistorydatabroadcastpkts.is_set || is_set(tokenringphistorydatabroadcastpkts.yfilter)) leaf_name_data.push_back(tokenringphistorydatabroadcastpkts.get_name_leafdata());
    if (tokenringphistorydatamulticastpkts.is_set || is_set(tokenringphistorydatamulticastpkts.yfilter)) leaf_name_data.push_back(tokenringphistorydatamulticastpkts.get_name_leafdata());
    if (tokenringphistorydataoctets.is_set || is_set(tokenringphistorydataoctets.yfilter)) leaf_name_data.push_back(tokenringphistorydataoctets.get_name_leafdata());
    if (tokenringphistorydatapkts.is_set || is_set(tokenringphistorydatapkts.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts.get_name_leafdata());
    if (tokenringphistorydatapkts1024to2047octets.is_set || is_set(tokenringphistorydatapkts1024to2047octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts1024to2047octets.get_name_leafdata());
    if (tokenringphistorydatapkts128to255octets.is_set || is_set(tokenringphistorydatapkts128to255octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts128to255octets.get_name_leafdata());
    if (tokenringphistorydatapkts18to63octets.is_set || is_set(tokenringphistorydatapkts18to63octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts18to63octets.get_name_leafdata());
    if (tokenringphistorydatapkts2048to4095octets.is_set || is_set(tokenringphistorydatapkts2048to4095octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts2048to4095octets.get_name_leafdata());
    if (tokenringphistorydatapkts256to511octets.is_set || is_set(tokenringphistorydatapkts256to511octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts256to511octets.get_name_leafdata());
    if (tokenringphistorydatapkts4096to8191octets.is_set || is_set(tokenringphistorydatapkts4096to8191octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts4096to8191octets.get_name_leafdata());
    if (tokenringphistorydatapkts512to1023octets.is_set || is_set(tokenringphistorydatapkts512to1023octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts512to1023octets.get_name_leafdata());
    if (tokenringphistorydatapkts64to127octets.is_set || is_set(tokenringphistorydatapkts64to127octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts64to127octets.get_name_leafdata());
    if (tokenringphistorydatapkts8192to18000octets.is_set || is_set(tokenringphistorydatapkts8192to18000octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapkts8192to18000octets.get_name_leafdata());
    if (tokenringphistorydatapktsgreaterthan18000octets.is_set || is_set(tokenringphistorydatapktsgreaterthan18000octets.yfilter)) leaf_name_data.push_back(tokenringphistorydatapktsgreaterthan18000octets.get_name_leafdata());
    if (tokenringphistorydropevents.is_set || is_set(tokenringphistorydropevents.yfilter)) leaf_name_data.push_back(tokenringphistorydropevents.get_name_leafdata());
    if (tokenringphistoryintervalstart.is_set || is_set(tokenringphistoryintervalstart.yfilter)) leaf_name_data.push_back(tokenringphistoryintervalstart.get_name_leafdata());


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

void TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tokenRingPHistoryIndex")
    {
        tokenringphistoryindex = value;
        tokenringphistoryindex.value_namespace = name_space;
        tokenringphistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistorySampleIndex")
    {
        tokenringphistorysampleindex = value;
        tokenringphistorysampleindex.value_namespace = name_space;
        tokenringphistorysampleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataBroadcastPkts")
    {
        tokenringphistorydatabroadcastpkts = value;
        tokenringphistorydatabroadcastpkts.value_namespace = name_space;
        tokenringphistorydatabroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataMulticastPkts")
    {
        tokenringphistorydatamulticastpkts = value;
        tokenringphistorydatamulticastpkts.value_namespace = name_space;
        tokenringphistorydatamulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataOctets")
    {
        tokenringphistorydataoctets = value;
        tokenringphistorydataoctets.value_namespace = name_space;
        tokenringphistorydataoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts")
    {
        tokenringphistorydatapkts = value;
        tokenringphistorydatapkts.value_namespace = name_space;
        tokenringphistorydatapkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts1024to2047Octets")
    {
        tokenringphistorydatapkts1024to2047octets = value;
        tokenringphistorydatapkts1024to2047octets.value_namespace = name_space;
        tokenringphistorydatapkts1024to2047octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts128to255Octets")
    {
        tokenringphistorydatapkts128to255octets = value;
        tokenringphistorydatapkts128to255octets.value_namespace = name_space;
        tokenringphistorydatapkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts18to63Octets")
    {
        tokenringphistorydatapkts18to63octets = value;
        tokenringphistorydatapkts18to63octets.value_namespace = name_space;
        tokenringphistorydatapkts18to63octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts2048to4095Octets")
    {
        tokenringphistorydatapkts2048to4095octets = value;
        tokenringphistorydatapkts2048to4095octets.value_namespace = name_space;
        tokenringphistorydatapkts2048to4095octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts256to511Octets")
    {
        tokenringphistorydatapkts256to511octets = value;
        tokenringphistorydatapkts256to511octets.value_namespace = name_space;
        tokenringphistorydatapkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts4096to8191Octets")
    {
        tokenringphistorydatapkts4096to8191octets = value;
        tokenringphistorydatapkts4096to8191octets.value_namespace = name_space;
        tokenringphistorydatapkts4096to8191octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts512to1023Octets")
    {
        tokenringphistorydatapkts512to1023octets = value;
        tokenringphistorydatapkts512to1023octets.value_namespace = name_space;
        tokenringphistorydatapkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts64to127Octets")
    {
        tokenringphistorydatapkts64to127octets = value;
        tokenringphistorydatapkts64to127octets.value_namespace = name_space;
        tokenringphistorydatapkts64to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPkts8192to18000Octets")
    {
        tokenringphistorydatapkts8192to18000octets = value;
        tokenringphistorydatapkts8192to18000octets.value_namespace = name_space;
        tokenringphistorydatapkts8192to18000octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDataPktsGreaterThan18000Octets")
    {
        tokenringphistorydatapktsgreaterthan18000octets = value;
        tokenringphistorydatapktsgreaterthan18000octets.value_namespace = name_space;
        tokenringphistorydatapktsgreaterthan18000octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryDropEvents")
    {
        tokenringphistorydropevents = value;
        tokenringphistorydropevents.value_namespace = name_space;
        tokenringphistorydropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tokenRingPHistoryIntervalStart")
    {
        tokenringphistoryintervalstart = value;
        tokenringphistoryintervalstart.value_namespace = name_space;
        tokenringphistoryintervalstart.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tokenRingPHistoryIndex")
    {
        tokenringphistoryindex.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistorySampleIndex")
    {
        tokenringphistorysampleindex.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataBroadcastPkts")
    {
        tokenringphistorydatabroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataMulticastPkts")
    {
        tokenringphistorydatamulticastpkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataOctets")
    {
        tokenringphistorydataoctets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts")
    {
        tokenringphistorydatapkts.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts1024to2047Octets")
    {
        tokenringphistorydatapkts1024to2047octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts128to255Octets")
    {
        tokenringphistorydatapkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts18to63Octets")
    {
        tokenringphistorydatapkts18to63octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts2048to4095Octets")
    {
        tokenringphistorydatapkts2048to4095octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts256to511Octets")
    {
        tokenringphistorydatapkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts4096to8191Octets")
    {
        tokenringphistorydatapkts4096to8191octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts512to1023Octets")
    {
        tokenringphistorydatapkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts64to127Octets")
    {
        tokenringphistorydatapkts64to127octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPkts8192to18000Octets")
    {
        tokenringphistorydatapkts8192to18000octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDataPktsGreaterThan18000Octets")
    {
        tokenringphistorydatapktsgreaterthan18000octets.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryDropEvents")
    {
        tokenringphistorydropevents.yfilter = yfilter;
    }
    if(value_path == "tokenRingPHistoryIntervalStart")
    {
        tokenringphistoryintervalstart.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tokenRingPHistoryIndex" || name == "tokenRingPHistorySampleIndex" || name == "tokenRingPHistoryDataBroadcastPkts" || name == "tokenRingPHistoryDataMulticastPkts" || name == "tokenRingPHistoryDataOctets" || name == "tokenRingPHistoryDataPkts" || name == "tokenRingPHistoryDataPkts1024to2047Octets" || name == "tokenRingPHistoryDataPkts128to255Octets" || name == "tokenRingPHistoryDataPkts18to63Octets" || name == "tokenRingPHistoryDataPkts2048to4095Octets" || name == "tokenRingPHistoryDataPkts256to511Octets" || name == "tokenRingPHistoryDataPkts4096to8191Octets" || name == "tokenRingPHistoryDataPkts512to1023Octets" || name == "tokenRingPHistoryDataPkts64to127Octets" || name == "tokenRingPHistoryDataPkts8192to18000Octets" || name == "tokenRingPHistoryDataPktsGreaterThan18000Octets" || name == "tokenRingPHistoryDropEvents" || name == "tokenRingPHistoryIntervalStart")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Ringstationcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Ringstationcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Ringstationcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationControlEntry")
        return true;
    return false;
}

TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolentry()
    :
    ringstationcontrolifindex{YType::int32, "ringStationControlIfIndex"},
    ringstationcontrolactivemonitor{YType::str, "ringStationControlActiveMonitor"},
    ringstationcontrolactivestations{YType::int32, "ringStationControlActiveStations"},
    ringstationcontrolbeaconnaun{YType::str, "ringStationControlBeaconNAUN"},
    ringstationcontrolbeaconsender{YType::str, "ringStationControlBeaconSender"},
    ringstationcontrolcreatetime{YType::uint32, "RMON2-MIB:ringStationControlCreateTime"},
    ringstationcontroldroppedframes{YType::uint32, "RMON2-MIB:ringStationControlDroppedFrames"},
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
	|| ringstationcontrolcreatetime.is_set
	|| ringstationcontroldroppedframes.is_set
	|| ringstationcontrolorderchanges.is_set
	|| ringstationcontrolowner.is_set
	|| ringstationcontrolringstate.is_set
	|| ringstationcontrolstatus.is_set
	|| ringstationcontroltablesize.is_set;
}

bool TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ringstationcontrolifindex.yfilter)
	|| ydk::is_set(ringstationcontrolactivemonitor.yfilter)
	|| ydk::is_set(ringstationcontrolactivestations.yfilter)
	|| ydk::is_set(ringstationcontrolbeaconnaun.yfilter)
	|| ydk::is_set(ringstationcontrolbeaconsender.yfilter)
	|| ydk::is_set(ringstationcontrolcreatetime.yfilter)
	|| ydk::is_set(ringstationcontroldroppedframes.yfilter)
	|| ydk::is_set(ringstationcontrolorderchanges.yfilter)
	|| ydk::is_set(ringstationcontrolowner.yfilter)
	|| ydk::is_set(ringstationcontrolringstate.yfilter)
	|| ydk::is_set(ringstationcontrolstatus.yfilter)
	|| ydk::is_set(ringstationcontroltablesize.yfilter);
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

    if (ringstationcontrolifindex.is_set || is_set(ringstationcontrolifindex.yfilter)) leaf_name_data.push_back(ringstationcontrolifindex.get_name_leafdata());
    if (ringstationcontrolactivemonitor.is_set || is_set(ringstationcontrolactivemonitor.yfilter)) leaf_name_data.push_back(ringstationcontrolactivemonitor.get_name_leafdata());
    if (ringstationcontrolactivestations.is_set || is_set(ringstationcontrolactivestations.yfilter)) leaf_name_data.push_back(ringstationcontrolactivestations.get_name_leafdata());
    if (ringstationcontrolbeaconnaun.is_set || is_set(ringstationcontrolbeaconnaun.yfilter)) leaf_name_data.push_back(ringstationcontrolbeaconnaun.get_name_leafdata());
    if (ringstationcontrolbeaconsender.is_set || is_set(ringstationcontrolbeaconsender.yfilter)) leaf_name_data.push_back(ringstationcontrolbeaconsender.get_name_leafdata());
    if (ringstationcontrolcreatetime.is_set || is_set(ringstationcontrolcreatetime.yfilter)) leaf_name_data.push_back(ringstationcontrolcreatetime.get_name_leafdata());
    if (ringstationcontroldroppedframes.is_set || is_set(ringstationcontroldroppedframes.yfilter)) leaf_name_data.push_back(ringstationcontroldroppedframes.get_name_leafdata());
    if (ringstationcontrolorderchanges.is_set || is_set(ringstationcontrolorderchanges.yfilter)) leaf_name_data.push_back(ringstationcontrolorderchanges.get_name_leafdata());
    if (ringstationcontrolowner.is_set || is_set(ringstationcontrolowner.yfilter)) leaf_name_data.push_back(ringstationcontrolowner.get_name_leafdata());
    if (ringstationcontrolringstate.is_set || is_set(ringstationcontrolringstate.yfilter)) leaf_name_data.push_back(ringstationcontrolringstate.get_name_leafdata());
    if (ringstationcontrolstatus.is_set || is_set(ringstationcontrolstatus.yfilter)) leaf_name_data.push_back(ringstationcontrolstatus.get_name_leafdata());
    if (ringstationcontroltablesize.is_set || is_set(ringstationcontroltablesize.yfilter)) leaf_name_data.push_back(ringstationcontroltablesize.get_name_leafdata());


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

void TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ringStationControlIfIndex")
    {
        ringstationcontrolifindex = value;
        ringstationcontrolifindex.value_namespace = name_space;
        ringstationcontrolifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlActiveMonitor")
    {
        ringstationcontrolactivemonitor = value;
        ringstationcontrolactivemonitor.value_namespace = name_space;
        ringstationcontrolactivemonitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlActiveStations")
    {
        ringstationcontrolactivestations = value;
        ringstationcontrolactivestations.value_namespace = name_space;
        ringstationcontrolactivestations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlBeaconNAUN")
    {
        ringstationcontrolbeaconnaun = value;
        ringstationcontrolbeaconnaun.value_namespace = name_space;
        ringstationcontrolbeaconnaun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlBeaconSender")
    {
        ringstationcontrolbeaconsender = value;
        ringstationcontrolbeaconsender.value_namespace = name_space;
        ringstationcontrolbeaconsender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlCreateTime")
    {
        ringstationcontrolcreatetime = value;
        ringstationcontrolcreatetime.value_namespace = name_space;
        ringstationcontrolcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlDroppedFrames")
    {
        ringstationcontroldroppedframes = value;
        ringstationcontroldroppedframes.value_namespace = name_space;
        ringstationcontroldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlOrderChanges")
    {
        ringstationcontrolorderchanges = value;
        ringstationcontrolorderchanges.value_namespace = name_space;
        ringstationcontrolorderchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlOwner")
    {
        ringstationcontrolowner = value;
        ringstationcontrolowner.value_namespace = name_space;
        ringstationcontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlRingState")
    {
        ringstationcontrolringstate = value;
        ringstationcontrolringstate.value_namespace = name_space;
        ringstationcontrolringstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlStatus")
    {
        ringstationcontrolstatus = value;
        ringstationcontrolstatus.value_namespace = name_space;
        ringstationcontrolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationControlTableSize")
    {
        ringstationcontroltablesize = value;
        ringstationcontroltablesize.value_namespace = name_space;
        ringstationcontroltablesize.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ringStationControlIfIndex")
    {
        ringstationcontrolifindex.yfilter = yfilter;
    }
    if(value_path == "ringStationControlActiveMonitor")
    {
        ringstationcontrolactivemonitor.yfilter = yfilter;
    }
    if(value_path == "ringStationControlActiveStations")
    {
        ringstationcontrolactivestations.yfilter = yfilter;
    }
    if(value_path == "ringStationControlBeaconNAUN")
    {
        ringstationcontrolbeaconnaun.yfilter = yfilter;
    }
    if(value_path == "ringStationControlBeaconSender")
    {
        ringstationcontrolbeaconsender.yfilter = yfilter;
    }
    if(value_path == "ringStationControlCreateTime")
    {
        ringstationcontrolcreatetime.yfilter = yfilter;
    }
    if(value_path == "ringStationControlDroppedFrames")
    {
        ringstationcontroldroppedframes.yfilter = yfilter;
    }
    if(value_path == "ringStationControlOrderChanges")
    {
        ringstationcontrolorderchanges.yfilter = yfilter;
    }
    if(value_path == "ringStationControlOwner")
    {
        ringstationcontrolowner.yfilter = yfilter;
    }
    if(value_path == "ringStationControlRingState")
    {
        ringstationcontrolringstate.yfilter = yfilter;
    }
    if(value_path == "ringStationControlStatus")
    {
        ringstationcontrolstatus.yfilter = yfilter;
    }
    if(value_path == "ringStationControlTableSize")
    {
        ringstationcontroltablesize.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationControlIfIndex" || name == "ringStationControlActiveMonitor" || name == "ringStationControlActiveStations" || name == "ringStationControlBeaconNAUN" || name == "ringStationControlBeaconSender" || name == "ringStationControlCreateTime" || name == "ringStationControlDroppedFrames" || name == "ringStationControlOrderChanges" || name == "ringStationControlOwner" || name == "ringStationControlRingState" || name == "ringStationControlStatus" || name == "ringStationControlTableSize")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Ringstationtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Ringstationtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Ringstationtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ringstationifindex.yfilter)
	|| ydk::is_set(ringstationmacaddress.yfilter)
	|| ydk::is_set(ringstationaborterrors.yfilter)
	|| ydk::is_set(ringstationacerrors.yfilter)
	|| ydk::is_set(ringstationcongestionerrors.yfilter)
	|| ydk::is_set(ringstationduplicateaddresses.yfilter)
	|| ydk::is_set(ringstationframecopiederrors.yfilter)
	|| ydk::is_set(ringstationfrequencyerrors.yfilter)
	|| ydk::is_set(ringstationinbeaconerrors.yfilter)
	|| ydk::is_set(ringstationinbursterrors.yfilter)
	|| ydk::is_set(ringstationinlineerrors.yfilter)
	|| ydk::is_set(ringstationinsertions.yfilter)
	|| ydk::is_set(ringstationinternalerrors.yfilter)
	|| ydk::is_set(ringstationlastentertime.yfilter)
	|| ydk::is_set(ringstationlastexittime.yfilter)
	|| ydk::is_set(ringstationlastnaun.yfilter)
	|| ydk::is_set(ringstationlostframeerrors.yfilter)
	|| ydk::is_set(ringstationoutbeaconerrors.yfilter)
	|| ydk::is_set(ringstationoutbursterrors.yfilter)
	|| ydk::is_set(ringstationoutlineerrors.yfilter)
	|| ydk::is_set(ringstationstationstatus.yfilter)
	|| ydk::is_set(ringstationtokenerrors.yfilter);
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

    if (ringstationifindex.is_set || is_set(ringstationifindex.yfilter)) leaf_name_data.push_back(ringstationifindex.get_name_leafdata());
    if (ringstationmacaddress.is_set || is_set(ringstationmacaddress.yfilter)) leaf_name_data.push_back(ringstationmacaddress.get_name_leafdata());
    if (ringstationaborterrors.is_set || is_set(ringstationaborterrors.yfilter)) leaf_name_data.push_back(ringstationaborterrors.get_name_leafdata());
    if (ringstationacerrors.is_set || is_set(ringstationacerrors.yfilter)) leaf_name_data.push_back(ringstationacerrors.get_name_leafdata());
    if (ringstationcongestionerrors.is_set || is_set(ringstationcongestionerrors.yfilter)) leaf_name_data.push_back(ringstationcongestionerrors.get_name_leafdata());
    if (ringstationduplicateaddresses.is_set || is_set(ringstationduplicateaddresses.yfilter)) leaf_name_data.push_back(ringstationduplicateaddresses.get_name_leafdata());
    if (ringstationframecopiederrors.is_set || is_set(ringstationframecopiederrors.yfilter)) leaf_name_data.push_back(ringstationframecopiederrors.get_name_leafdata());
    if (ringstationfrequencyerrors.is_set || is_set(ringstationfrequencyerrors.yfilter)) leaf_name_data.push_back(ringstationfrequencyerrors.get_name_leafdata());
    if (ringstationinbeaconerrors.is_set || is_set(ringstationinbeaconerrors.yfilter)) leaf_name_data.push_back(ringstationinbeaconerrors.get_name_leafdata());
    if (ringstationinbursterrors.is_set || is_set(ringstationinbursterrors.yfilter)) leaf_name_data.push_back(ringstationinbursterrors.get_name_leafdata());
    if (ringstationinlineerrors.is_set || is_set(ringstationinlineerrors.yfilter)) leaf_name_data.push_back(ringstationinlineerrors.get_name_leafdata());
    if (ringstationinsertions.is_set || is_set(ringstationinsertions.yfilter)) leaf_name_data.push_back(ringstationinsertions.get_name_leafdata());
    if (ringstationinternalerrors.is_set || is_set(ringstationinternalerrors.yfilter)) leaf_name_data.push_back(ringstationinternalerrors.get_name_leafdata());
    if (ringstationlastentertime.is_set || is_set(ringstationlastentertime.yfilter)) leaf_name_data.push_back(ringstationlastentertime.get_name_leafdata());
    if (ringstationlastexittime.is_set || is_set(ringstationlastexittime.yfilter)) leaf_name_data.push_back(ringstationlastexittime.get_name_leafdata());
    if (ringstationlastnaun.is_set || is_set(ringstationlastnaun.yfilter)) leaf_name_data.push_back(ringstationlastnaun.get_name_leafdata());
    if (ringstationlostframeerrors.is_set || is_set(ringstationlostframeerrors.yfilter)) leaf_name_data.push_back(ringstationlostframeerrors.get_name_leafdata());
    if (ringstationoutbeaconerrors.is_set || is_set(ringstationoutbeaconerrors.yfilter)) leaf_name_data.push_back(ringstationoutbeaconerrors.get_name_leafdata());
    if (ringstationoutbursterrors.is_set || is_set(ringstationoutbursterrors.yfilter)) leaf_name_data.push_back(ringstationoutbursterrors.get_name_leafdata());
    if (ringstationoutlineerrors.is_set || is_set(ringstationoutlineerrors.yfilter)) leaf_name_data.push_back(ringstationoutlineerrors.get_name_leafdata());
    if (ringstationstationstatus.is_set || is_set(ringstationstationstatus.yfilter)) leaf_name_data.push_back(ringstationstationstatus.get_name_leafdata());
    if (ringstationtokenerrors.is_set || is_set(ringstationtokenerrors.yfilter)) leaf_name_data.push_back(ringstationtokenerrors.get_name_leafdata());


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

void TokenRingRmonMib::Ringstationtable::Ringstationentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ringStationIfIndex")
    {
        ringstationifindex = value;
        ringstationifindex.value_namespace = name_space;
        ringstationifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationMacAddress")
    {
        ringstationmacaddress = value;
        ringstationmacaddress.value_namespace = name_space;
        ringstationmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationAbortErrors")
    {
        ringstationaborterrors = value;
        ringstationaborterrors.value_namespace = name_space;
        ringstationaborterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationACErrors")
    {
        ringstationacerrors = value;
        ringstationacerrors.value_namespace = name_space;
        ringstationacerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationCongestionErrors")
    {
        ringstationcongestionerrors = value;
        ringstationcongestionerrors.value_namespace = name_space;
        ringstationcongestionerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationDuplicateAddresses")
    {
        ringstationduplicateaddresses = value;
        ringstationduplicateaddresses.value_namespace = name_space;
        ringstationduplicateaddresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationFrameCopiedErrors")
    {
        ringstationframecopiederrors = value;
        ringstationframecopiederrors.value_namespace = name_space;
        ringstationframecopiederrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationFrequencyErrors")
    {
        ringstationfrequencyerrors = value;
        ringstationfrequencyerrors.value_namespace = name_space;
        ringstationfrequencyerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationInBeaconErrors")
    {
        ringstationinbeaconerrors = value;
        ringstationinbeaconerrors.value_namespace = name_space;
        ringstationinbeaconerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationInBurstErrors")
    {
        ringstationinbursterrors = value;
        ringstationinbursterrors.value_namespace = name_space;
        ringstationinbursterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationInLineErrors")
    {
        ringstationinlineerrors = value;
        ringstationinlineerrors.value_namespace = name_space;
        ringstationinlineerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationInsertions")
    {
        ringstationinsertions = value;
        ringstationinsertions.value_namespace = name_space;
        ringstationinsertions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationInternalErrors")
    {
        ringstationinternalerrors = value;
        ringstationinternalerrors.value_namespace = name_space;
        ringstationinternalerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationLastEnterTime")
    {
        ringstationlastentertime = value;
        ringstationlastentertime.value_namespace = name_space;
        ringstationlastentertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationLastExitTime")
    {
        ringstationlastexittime = value;
        ringstationlastexittime.value_namespace = name_space;
        ringstationlastexittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationLastNAUN")
    {
        ringstationlastnaun = value;
        ringstationlastnaun.value_namespace = name_space;
        ringstationlastnaun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationLostFrameErrors")
    {
        ringstationlostframeerrors = value;
        ringstationlostframeerrors.value_namespace = name_space;
        ringstationlostframeerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationOutBeaconErrors")
    {
        ringstationoutbeaconerrors = value;
        ringstationoutbeaconerrors.value_namespace = name_space;
        ringstationoutbeaconerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationOutBurstErrors")
    {
        ringstationoutbursterrors = value;
        ringstationoutbursterrors.value_namespace = name_space;
        ringstationoutbursterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationOutLineErrors")
    {
        ringstationoutlineerrors = value;
        ringstationoutlineerrors.value_namespace = name_space;
        ringstationoutlineerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationStationStatus")
    {
        ringstationstationstatus = value;
        ringstationstationstatus.value_namespace = name_space;
        ringstationstationstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationTokenErrors")
    {
        ringstationtokenerrors = value;
        ringstationtokenerrors.value_namespace = name_space;
        ringstationtokenerrors.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Ringstationtable::Ringstationentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ringStationIfIndex")
    {
        ringstationifindex.yfilter = yfilter;
    }
    if(value_path == "ringStationMacAddress")
    {
        ringstationmacaddress.yfilter = yfilter;
    }
    if(value_path == "ringStationAbortErrors")
    {
        ringstationaborterrors.yfilter = yfilter;
    }
    if(value_path == "ringStationACErrors")
    {
        ringstationacerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationCongestionErrors")
    {
        ringstationcongestionerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationDuplicateAddresses")
    {
        ringstationduplicateaddresses.yfilter = yfilter;
    }
    if(value_path == "ringStationFrameCopiedErrors")
    {
        ringstationframecopiederrors.yfilter = yfilter;
    }
    if(value_path == "ringStationFrequencyErrors")
    {
        ringstationfrequencyerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationInBeaconErrors")
    {
        ringstationinbeaconerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationInBurstErrors")
    {
        ringstationinbursterrors.yfilter = yfilter;
    }
    if(value_path == "ringStationInLineErrors")
    {
        ringstationinlineerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationInsertions")
    {
        ringstationinsertions.yfilter = yfilter;
    }
    if(value_path == "ringStationInternalErrors")
    {
        ringstationinternalerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationLastEnterTime")
    {
        ringstationlastentertime.yfilter = yfilter;
    }
    if(value_path == "ringStationLastExitTime")
    {
        ringstationlastexittime.yfilter = yfilter;
    }
    if(value_path == "ringStationLastNAUN")
    {
        ringstationlastnaun.yfilter = yfilter;
    }
    if(value_path == "ringStationLostFrameErrors")
    {
        ringstationlostframeerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationOutBeaconErrors")
    {
        ringstationoutbeaconerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationOutBurstErrors")
    {
        ringstationoutbursterrors.yfilter = yfilter;
    }
    if(value_path == "ringStationOutLineErrors")
    {
        ringstationoutlineerrors.yfilter = yfilter;
    }
    if(value_path == "ringStationStationStatus")
    {
        ringstationstationstatus.yfilter = yfilter;
    }
    if(value_path == "ringStationTokenErrors")
    {
        ringstationtokenerrors.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Ringstationtable::Ringstationentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationIfIndex" || name == "ringStationMacAddress" || name == "ringStationAbortErrors" || name == "ringStationACErrors" || name == "ringStationCongestionErrors" || name == "ringStationDuplicateAddresses" || name == "ringStationFrameCopiedErrors" || name == "ringStationFrequencyErrors" || name == "ringStationInBeaconErrors" || name == "ringStationInBurstErrors" || name == "ringStationInLineErrors" || name == "ringStationInsertions" || name == "ringStationInternalErrors" || name == "ringStationLastEnterTime" || name == "ringStationLastExitTime" || name == "ringStationLastNAUN" || name == "ringStationLostFrameErrors" || name == "ringStationOutBeaconErrors" || name == "ringStationOutBurstErrors" || name == "ringStationOutLineErrors" || name == "ringStationStationStatus" || name == "ringStationTokenErrors")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Ringstationordertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Ringstationordertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Ringstationordertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationOrderEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ringstationorderifindex.yfilter)
	|| ydk::is_set(ringstationorderorderindex.yfilter)
	|| ydk::is_set(ringstationordermacaddress.yfilter);
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

    if (ringstationorderifindex.is_set || is_set(ringstationorderifindex.yfilter)) leaf_name_data.push_back(ringstationorderifindex.get_name_leafdata());
    if (ringstationorderorderindex.is_set || is_set(ringstationorderorderindex.yfilter)) leaf_name_data.push_back(ringstationorderorderindex.get_name_leafdata());
    if (ringstationordermacaddress.is_set || is_set(ringstationordermacaddress.yfilter)) leaf_name_data.push_back(ringstationordermacaddress.get_name_leafdata());


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

void TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ringStationOrderIfIndex")
    {
        ringstationorderifindex = value;
        ringstationorderifindex.value_namespace = name_space;
        ringstationorderifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationOrderOrderIndex")
    {
        ringstationorderorderindex = value;
        ringstationorderorderindex.value_namespace = name_space;
        ringstationorderorderindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationOrderMacAddress")
    {
        ringstationordermacaddress = value;
        ringstationordermacaddress.value_namespace = name_space;
        ringstationordermacaddress.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ringStationOrderIfIndex")
    {
        ringstationorderifindex.yfilter = yfilter;
    }
    if(value_path == "ringStationOrderOrderIndex")
    {
        ringstationorderorderindex.yfilter = yfilter;
    }
    if(value_path == "ringStationOrderMacAddress")
    {
        ringstationordermacaddress.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Ringstationordertable::Ringstationorderentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationOrderIfIndex" || name == "ringStationOrderOrderIndex" || name == "ringStationOrderMacAddress")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Ringstationconfigcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Ringstationconfigcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Ringstationconfigcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationConfigControlEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ringstationconfigcontrolifindex.yfilter)
	|| ydk::is_set(ringstationconfigcontrolmacaddress.yfilter)
	|| ydk::is_set(ringstationconfigcontrolremove.yfilter)
	|| ydk::is_set(ringstationconfigcontrolupdatestats.yfilter);
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

    if (ringstationconfigcontrolifindex.is_set || is_set(ringstationconfigcontrolifindex.yfilter)) leaf_name_data.push_back(ringstationconfigcontrolifindex.get_name_leafdata());
    if (ringstationconfigcontrolmacaddress.is_set || is_set(ringstationconfigcontrolmacaddress.yfilter)) leaf_name_data.push_back(ringstationconfigcontrolmacaddress.get_name_leafdata());
    if (ringstationconfigcontrolremove.is_set || is_set(ringstationconfigcontrolremove.yfilter)) leaf_name_data.push_back(ringstationconfigcontrolremove.get_name_leafdata());
    if (ringstationconfigcontrolupdatestats.is_set || is_set(ringstationconfigcontrolupdatestats.yfilter)) leaf_name_data.push_back(ringstationconfigcontrolupdatestats.get_name_leafdata());


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

void TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ringStationConfigControlIfIndex")
    {
        ringstationconfigcontrolifindex = value;
        ringstationconfigcontrolifindex.value_namespace = name_space;
        ringstationconfigcontrolifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigControlMacAddress")
    {
        ringstationconfigcontrolmacaddress = value;
        ringstationconfigcontrolmacaddress.value_namespace = name_space;
        ringstationconfigcontrolmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigControlRemove")
    {
        ringstationconfigcontrolremove = value;
        ringstationconfigcontrolremove.value_namespace = name_space;
        ringstationconfigcontrolremove.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigControlUpdateStats")
    {
        ringstationconfigcontrolupdatestats = value;
        ringstationconfigcontrolupdatestats.value_namespace = name_space;
        ringstationconfigcontrolupdatestats.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ringStationConfigControlIfIndex")
    {
        ringstationconfigcontrolifindex.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigControlMacAddress")
    {
        ringstationconfigcontrolmacaddress.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigControlRemove")
    {
        ringstationconfigcontrolremove.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigControlUpdateStats")
    {
        ringstationconfigcontrolupdatestats.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationConfigControlIfIndex" || name == "ringStationConfigControlMacAddress" || name == "ringStationConfigControlRemove" || name == "ringStationConfigControlUpdateStats")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Ringstationconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Ringstationconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Ringstationconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationConfigEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ringstationconfigifindex.yfilter)
	|| ydk::is_set(ringstationconfigmacaddress.yfilter)
	|| ydk::is_set(ringstationconfigfunctionaladdress.yfilter)
	|| ydk::is_set(ringstationconfiggroupaddress.yfilter)
	|| ydk::is_set(ringstationconfiglocation.yfilter)
	|| ydk::is_set(ringstationconfigmicrocode.yfilter)
	|| ydk::is_set(ringstationconfigupdatetime.yfilter);
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

    if (ringstationconfigifindex.is_set || is_set(ringstationconfigifindex.yfilter)) leaf_name_data.push_back(ringstationconfigifindex.get_name_leafdata());
    if (ringstationconfigmacaddress.is_set || is_set(ringstationconfigmacaddress.yfilter)) leaf_name_data.push_back(ringstationconfigmacaddress.get_name_leafdata());
    if (ringstationconfigfunctionaladdress.is_set || is_set(ringstationconfigfunctionaladdress.yfilter)) leaf_name_data.push_back(ringstationconfigfunctionaladdress.get_name_leafdata());
    if (ringstationconfiggroupaddress.is_set || is_set(ringstationconfiggroupaddress.yfilter)) leaf_name_data.push_back(ringstationconfiggroupaddress.get_name_leafdata());
    if (ringstationconfiglocation.is_set || is_set(ringstationconfiglocation.yfilter)) leaf_name_data.push_back(ringstationconfiglocation.get_name_leafdata());
    if (ringstationconfigmicrocode.is_set || is_set(ringstationconfigmicrocode.yfilter)) leaf_name_data.push_back(ringstationconfigmicrocode.get_name_leafdata());
    if (ringstationconfigupdatetime.is_set || is_set(ringstationconfigupdatetime.yfilter)) leaf_name_data.push_back(ringstationconfigupdatetime.get_name_leafdata());


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

void TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ringStationConfigIfIndex")
    {
        ringstationconfigifindex = value;
        ringstationconfigifindex.value_namespace = name_space;
        ringstationconfigifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigMacAddress")
    {
        ringstationconfigmacaddress = value;
        ringstationconfigmacaddress.value_namespace = name_space;
        ringstationconfigmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigFunctionalAddress")
    {
        ringstationconfigfunctionaladdress = value;
        ringstationconfigfunctionaladdress.value_namespace = name_space;
        ringstationconfigfunctionaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigGroupAddress")
    {
        ringstationconfiggroupaddress = value;
        ringstationconfiggroupaddress.value_namespace = name_space;
        ringstationconfiggroupaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigLocation")
    {
        ringstationconfiglocation = value;
        ringstationconfiglocation.value_namespace = name_space;
        ringstationconfiglocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigMicrocode")
    {
        ringstationconfigmicrocode = value;
        ringstationconfigmicrocode.value_namespace = name_space;
        ringstationconfigmicrocode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ringStationConfigUpdateTime")
    {
        ringstationconfigupdatetime = value;
        ringstationconfigupdatetime.value_namespace = name_space;
        ringstationconfigupdatetime.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ringStationConfigIfIndex")
    {
        ringstationconfigifindex.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigMacAddress")
    {
        ringstationconfigmacaddress.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigFunctionalAddress")
    {
        ringstationconfigfunctionaladdress.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigGroupAddress")
    {
        ringstationconfiggroupaddress.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigLocation")
    {
        ringstationconfiglocation.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigMicrocode")
    {
        ringstationconfigmicrocode.yfilter = yfilter;
    }
    if(value_path == "ringStationConfigUpdateTime")
    {
        ringstationconfigupdatetime.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ringStationConfigIfIndex" || name == "ringStationConfigMacAddress" || name == "ringStationConfigFunctionalAddress" || name == "ringStationConfigGroupAddress" || name == "ringStationConfigLocation" || name == "ringStationConfigMicrocode" || name == "ringStationConfigUpdateTime")
        return true;
    return false;
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
    return is_set(yfilter);
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

void TokenRingRmonMib::Sourceroutingstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TokenRingRmonMib::Sourceroutingstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TokenRingRmonMib::Sourceroutingstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourceRoutingStatsEntry")
        return true;
    return false;
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
    sourceroutingstatscreatetime{YType::uint32, "RMON2-MIB:sourceRoutingStatsCreateTime"},
    sourceroutingstatsdroppedframes{YType::uint32, "RMON2-MIB:sourceRoutingStatsDroppedFrames"},
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
	|| sourceroutingstatscreatetime.is_set
	|| sourceroutingstatsdroppedframes.is_set
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
    return is_set(yfilter)
	|| ydk::is_set(sourceroutingstatsifindex.yfilter)
	|| ydk::is_set(sourceroutingstats1hopframes.yfilter)
	|| ydk::is_set(sourceroutingstats2hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstats3hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstats4hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstats5hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstats6hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstats7hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstats8hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstatsallroutesbroadcastframes.yfilter)
	|| ydk::is_set(sourceroutingstatsallroutesbroadcastoctets.yfilter)
	|| ydk::is_set(sourceroutingstatscreatetime.yfilter)
	|| ydk::is_set(sourceroutingstatsdroppedframes.yfilter)
	|| ydk::is_set(sourceroutingstatsinframes.yfilter)
	|| ydk::is_set(sourceroutingstatsinoctets.yfilter)
	|| ydk::is_set(sourceroutingstatslocalllcframes.yfilter)
	|| ydk::is_set(sourceroutingstatsmorethan8hopsframes.yfilter)
	|| ydk::is_set(sourceroutingstatsoutframes.yfilter)
	|| ydk::is_set(sourceroutingstatsoutoctets.yfilter)
	|| ydk::is_set(sourceroutingstatsowner.yfilter)
	|| ydk::is_set(sourceroutingstatsringnumber.yfilter)
	|| ydk::is_set(sourceroutingstatssingleroutebroadcastframes.yfilter)
	|| ydk::is_set(sourceroutingstatssingleroutesbroadcastoctets.yfilter)
	|| ydk::is_set(sourceroutingstatsstatus.yfilter)
	|| ydk::is_set(sourceroutingstatsthroughframes.yfilter)
	|| ydk::is_set(sourceroutingstatsthroughoctets.yfilter);
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

    if (sourceroutingstatsifindex.is_set || is_set(sourceroutingstatsifindex.yfilter)) leaf_name_data.push_back(sourceroutingstatsifindex.get_name_leafdata());
    if (sourceroutingstats1hopframes.is_set || is_set(sourceroutingstats1hopframes.yfilter)) leaf_name_data.push_back(sourceroutingstats1hopframes.get_name_leafdata());
    if (sourceroutingstats2hopsframes.is_set || is_set(sourceroutingstats2hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstats2hopsframes.get_name_leafdata());
    if (sourceroutingstats3hopsframes.is_set || is_set(sourceroutingstats3hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstats3hopsframes.get_name_leafdata());
    if (sourceroutingstats4hopsframes.is_set || is_set(sourceroutingstats4hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstats4hopsframes.get_name_leafdata());
    if (sourceroutingstats5hopsframes.is_set || is_set(sourceroutingstats5hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstats5hopsframes.get_name_leafdata());
    if (sourceroutingstats6hopsframes.is_set || is_set(sourceroutingstats6hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstats6hopsframes.get_name_leafdata());
    if (sourceroutingstats7hopsframes.is_set || is_set(sourceroutingstats7hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstats7hopsframes.get_name_leafdata());
    if (sourceroutingstats8hopsframes.is_set || is_set(sourceroutingstats8hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstats8hopsframes.get_name_leafdata());
    if (sourceroutingstatsallroutesbroadcastframes.is_set || is_set(sourceroutingstatsallroutesbroadcastframes.yfilter)) leaf_name_data.push_back(sourceroutingstatsallroutesbroadcastframes.get_name_leafdata());
    if (sourceroutingstatsallroutesbroadcastoctets.is_set || is_set(sourceroutingstatsallroutesbroadcastoctets.yfilter)) leaf_name_data.push_back(sourceroutingstatsallroutesbroadcastoctets.get_name_leafdata());
    if (sourceroutingstatscreatetime.is_set || is_set(sourceroutingstatscreatetime.yfilter)) leaf_name_data.push_back(sourceroutingstatscreatetime.get_name_leafdata());
    if (sourceroutingstatsdroppedframes.is_set || is_set(sourceroutingstatsdroppedframes.yfilter)) leaf_name_data.push_back(sourceroutingstatsdroppedframes.get_name_leafdata());
    if (sourceroutingstatsinframes.is_set || is_set(sourceroutingstatsinframes.yfilter)) leaf_name_data.push_back(sourceroutingstatsinframes.get_name_leafdata());
    if (sourceroutingstatsinoctets.is_set || is_set(sourceroutingstatsinoctets.yfilter)) leaf_name_data.push_back(sourceroutingstatsinoctets.get_name_leafdata());
    if (sourceroutingstatslocalllcframes.is_set || is_set(sourceroutingstatslocalllcframes.yfilter)) leaf_name_data.push_back(sourceroutingstatslocalllcframes.get_name_leafdata());
    if (sourceroutingstatsmorethan8hopsframes.is_set || is_set(sourceroutingstatsmorethan8hopsframes.yfilter)) leaf_name_data.push_back(sourceroutingstatsmorethan8hopsframes.get_name_leafdata());
    if (sourceroutingstatsoutframes.is_set || is_set(sourceroutingstatsoutframes.yfilter)) leaf_name_data.push_back(sourceroutingstatsoutframes.get_name_leafdata());
    if (sourceroutingstatsoutoctets.is_set || is_set(sourceroutingstatsoutoctets.yfilter)) leaf_name_data.push_back(sourceroutingstatsoutoctets.get_name_leafdata());
    if (sourceroutingstatsowner.is_set || is_set(sourceroutingstatsowner.yfilter)) leaf_name_data.push_back(sourceroutingstatsowner.get_name_leafdata());
    if (sourceroutingstatsringnumber.is_set || is_set(sourceroutingstatsringnumber.yfilter)) leaf_name_data.push_back(sourceroutingstatsringnumber.get_name_leafdata());
    if (sourceroutingstatssingleroutebroadcastframes.is_set || is_set(sourceroutingstatssingleroutebroadcastframes.yfilter)) leaf_name_data.push_back(sourceroutingstatssingleroutebroadcastframes.get_name_leafdata());
    if (sourceroutingstatssingleroutesbroadcastoctets.is_set || is_set(sourceroutingstatssingleroutesbroadcastoctets.yfilter)) leaf_name_data.push_back(sourceroutingstatssingleroutesbroadcastoctets.get_name_leafdata());
    if (sourceroutingstatsstatus.is_set || is_set(sourceroutingstatsstatus.yfilter)) leaf_name_data.push_back(sourceroutingstatsstatus.get_name_leafdata());
    if (sourceroutingstatsthroughframes.is_set || is_set(sourceroutingstatsthroughframes.yfilter)) leaf_name_data.push_back(sourceroutingstatsthroughframes.get_name_leafdata());
    if (sourceroutingstatsthroughoctets.is_set || is_set(sourceroutingstatsthroughoctets.yfilter)) leaf_name_data.push_back(sourceroutingstatsthroughoctets.get_name_leafdata());


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

void TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourceRoutingStatsIfIndex")
    {
        sourceroutingstatsifindex = value;
        sourceroutingstatsifindex.value_namespace = name_space;
        sourceroutingstatsifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats1HopFrames")
    {
        sourceroutingstats1hopframes = value;
        sourceroutingstats1hopframes.value_namespace = name_space;
        sourceroutingstats1hopframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats2HopsFrames")
    {
        sourceroutingstats2hopsframes = value;
        sourceroutingstats2hopsframes.value_namespace = name_space;
        sourceroutingstats2hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats3HopsFrames")
    {
        sourceroutingstats3hopsframes = value;
        sourceroutingstats3hopsframes.value_namespace = name_space;
        sourceroutingstats3hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats4HopsFrames")
    {
        sourceroutingstats4hopsframes = value;
        sourceroutingstats4hopsframes.value_namespace = name_space;
        sourceroutingstats4hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats5HopsFrames")
    {
        sourceroutingstats5hopsframes = value;
        sourceroutingstats5hopsframes.value_namespace = name_space;
        sourceroutingstats5hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats6HopsFrames")
    {
        sourceroutingstats6hopsframes = value;
        sourceroutingstats6hopsframes.value_namespace = name_space;
        sourceroutingstats6hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats7HopsFrames")
    {
        sourceroutingstats7hopsframes = value;
        sourceroutingstats7hopsframes.value_namespace = name_space;
        sourceroutingstats7hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStats8HopsFrames")
    {
        sourceroutingstats8hopsframes = value;
        sourceroutingstats8hopsframes.value_namespace = name_space;
        sourceroutingstats8hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsAllRoutesBroadcastFrames")
    {
        sourceroutingstatsallroutesbroadcastframes = value;
        sourceroutingstatsallroutesbroadcastframes.value_namespace = name_space;
        sourceroutingstatsallroutesbroadcastframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsAllRoutesBroadcastOctets")
    {
        sourceroutingstatsallroutesbroadcastoctets = value;
        sourceroutingstatsallroutesbroadcastoctets.value_namespace = name_space;
        sourceroutingstatsallroutesbroadcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsCreateTime")
    {
        sourceroutingstatscreatetime = value;
        sourceroutingstatscreatetime.value_namespace = name_space;
        sourceroutingstatscreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsDroppedFrames")
    {
        sourceroutingstatsdroppedframes = value;
        sourceroutingstatsdroppedframes.value_namespace = name_space;
        sourceroutingstatsdroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsInFrames")
    {
        sourceroutingstatsinframes = value;
        sourceroutingstatsinframes.value_namespace = name_space;
        sourceroutingstatsinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsInOctets")
    {
        sourceroutingstatsinoctets = value;
        sourceroutingstatsinoctets.value_namespace = name_space;
        sourceroutingstatsinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsLocalLLCFrames")
    {
        sourceroutingstatslocalllcframes = value;
        sourceroutingstatslocalllcframes.value_namespace = name_space;
        sourceroutingstatslocalllcframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsMoreThan8HopsFrames")
    {
        sourceroutingstatsmorethan8hopsframes = value;
        sourceroutingstatsmorethan8hopsframes.value_namespace = name_space;
        sourceroutingstatsmorethan8hopsframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsOutFrames")
    {
        sourceroutingstatsoutframes = value;
        sourceroutingstatsoutframes.value_namespace = name_space;
        sourceroutingstatsoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsOutOctets")
    {
        sourceroutingstatsoutoctets = value;
        sourceroutingstatsoutoctets.value_namespace = name_space;
        sourceroutingstatsoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsOwner")
    {
        sourceroutingstatsowner = value;
        sourceroutingstatsowner.value_namespace = name_space;
        sourceroutingstatsowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsRingNumber")
    {
        sourceroutingstatsringnumber = value;
        sourceroutingstatsringnumber.value_namespace = name_space;
        sourceroutingstatsringnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsSingleRouteBroadcastFrames")
    {
        sourceroutingstatssingleroutebroadcastframes = value;
        sourceroutingstatssingleroutebroadcastframes.value_namespace = name_space;
        sourceroutingstatssingleroutebroadcastframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsSingleRoutesBroadcastOctets")
    {
        sourceroutingstatssingleroutesbroadcastoctets = value;
        sourceroutingstatssingleroutesbroadcastoctets.value_namespace = name_space;
        sourceroutingstatssingleroutesbroadcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsStatus")
    {
        sourceroutingstatsstatus = value;
        sourceroutingstatsstatus.value_namespace = name_space;
        sourceroutingstatsstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsThroughFrames")
    {
        sourceroutingstatsthroughframes = value;
        sourceroutingstatsthroughframes.value_namespace = name_space;
        sourceroutingstatsthroughframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceRoutingStatsThroughOctets")
    {
        sourceroutingstatsthroughoctets = value;
        sourceroutingstatsthroughoctets.value_namespace = name_space;
        sourceroutingstatsthroughoctets.value_namespace_prefix = name_space_prefix;
    }
}

void TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourceRoutingStatsIfIndex")
    {
        sourceroutingstatsifindex.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats1HopFrames")
    {
        sourceroutingstats1hopframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats2HopsFrames")
    {
        sourceroutingstats2hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats3HopsFrames")
    {
        sourceroutingstats3hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats4HopsFrames")
    {
        sourceroutingstats4hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats5HopsFrames")
    {
        sourceroutingstats5hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats6HopsFrames")
    {
        sourceroutingstats6hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats7HopsFrames")
    {
        sourceroutingstats7hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStats8HopsFrames")
    {
        sourceroutingstats8hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsAllRoutesBroadcastFrames")
    {
        sourceroutingstatsallroutesbroadcastframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsAllRoutesBroadcastOctets")
    {
        sourceroutingstatsallroutesbroadcastoctets.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsCreateTime")
    {
        sourceroutingstatscreatetime.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsDroppedFrames")
    {
        sourceroutingstatsdroppedframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsInFrames")
    {
        sourceroutingstatsinframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsInOctets")
    {
        sourceroutingstatsinoctets.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsLocalLLCFrames")
    {
        sourceroutingstatslocalllcframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsMoreThan8HopsFrames")
    {
        sourceroutingstatsmorethan8hopsframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsOutFrames")
    {
        sourceroutingstatsoutframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsOutOctets")
    {
        sourceroutingstatsoutoctets.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsOwner")
    {
        sourceroutingstatsowner.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsRingNumber")
    {
        sourceroutingstatsringnumber.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsSingleRouteBroadcastFrames")
    {
        sourceroutingstatssingleroutebroadcastframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsSingleRoutesBroadcastOctets")
    {
        sourceroutingstatssingleroutesbroadcastoctets.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsStatus")
    {
        sourceroutingstatsstatus.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsThroughFrames")
    {
        sourceroutingstatsthroughframes.yfilter = yfilter;
    }
    if(value_path == "sourceRoutingStatsThroughOctets")
    {
        sourceroutingstatsthroughoctets.yfilter = yfilter;
    }
}

bool TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourceRoutingStatsIfIndex" || name == "sourceRoutingStats1HopFrames" || name == "sourceRoutingStats2HopsFrames" || name == "sourceRoutingStats3HopsFrames" || name == "sourceRoutingStats4HopsFrames" || name == "sourceRoutingStats5HopsFrames" || name == "sourceRoutingStats6HopsFrames" || name == "sourceRoutingStats7HopsFrames" || name == "sourceRoutingStats8HopsFrames" || name == "sourceRoutingStatsAllRoutesBroadcastFrames" || name == "sourceRoutingStatsAllRoutesBroadcastOctets" || name == "sourceRoutingStatsCreateTime" || name == "sourceRoutingStatsDroppedFrames" || name == "sourceRoutingStatsInFrames" || name == "sourceRoutingStatsInOctets" || name == "sourceRoutingStatsLocalLLCFrames" || name == "sourceRoutingStatsMoreThan8HopsFrames" || name == "sourceRoutingStatsOutFrames" || name == "sourceRoutingStatsOutOctets" || name == "sourceRoutingStatsOwner" || name == "sourceRoutingStatsRingNumber" || name == "sourceRoutingStatsSingleRouteBroadcastFrames" || name == "sourceRoutingStatsSingleRoutesBroadcastOctets" || name == "sourceRoutingStatsStatus" || name == "sourceRoutingStatsThroughFrames" || name == "sourceRoutingStatsThroughOctets")
        return true;
    return false;
}

const Enum::YLeaf Entrystatus::valid {1, "valid"};
const Enum::YLeaf Entrystatus::createRequest {2, "createRequest"};
const Enum::YLeaf Entrystatus::underCreation {3, "underCreation"};
const Enum::YLeaf Entrystatus::invalid {4, "invalid"};

const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate::normalOperation {1, "normalOperation"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate::ringPurgeState {2, "ringPurgeState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate::claimTokenState {3, "claimTokenState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate::beaconFrameStreamingState {4, "beaconFrameStreamingState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate::beaconBitStreamingState {5, "beaconBitStreamingState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate::beaconRingSignalLossState {6, "beaconRingSignalLossState"};
const Enum::YLeaf TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate::beaconSetRecoveryModeState {7, "beaconSetRecoveryModeState"};

const Enum::YLeaf TokenRingRmonMib::Ringstationtable::Ringstationentry::Ringstationstationstatus::active {1, "active"};
const Enum::YLeaf TokenRingRmonMib::Ringstationtable::Ringstationentry::Ringstationstationstatus::inactive {2, "inactive"};
const Enum::YLeaf TokenRingRmonMib::Ringstationtable::Ringstationentry::Ringstationstationstatus::forcedRemoval {3, "forcedRemoval"};

const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolremove::stable {1, "stable"};
const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolremove::removing {2, "removing"};

const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolupdatestats::stable {1, "stable"};
const Enum::YLeaf TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolupdatestats::updating {2, "updating"};


}
}

