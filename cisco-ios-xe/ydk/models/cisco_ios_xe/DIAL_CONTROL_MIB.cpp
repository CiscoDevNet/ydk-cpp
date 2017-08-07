
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DIAL_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DIAL_CONTROL_MIB {

DialControlMib::DialControlMib()
    :
    callactivetable(std::make_shared<DialControlMib::Callactivetable>())
	,callhistory(std::make_shared<DialControlMib::Callhistory>())
	,callhistorytable(std::make_shared<DialControlMib::Callhistorytable>())
	,dialctlconfiguration(std::make_shared<DialControlMib::Dialctlconfiguration>())
	,dialctlpeercfgtable(std::make_shared<DialControlMib::Dialctlpeercfgtable>())
{
    callactivetable->parent = this;

    callhistory->parent = this;

    callhistorytable->parent = this;

    dialctlconfiguration->parent = this;

    dialctlpeercfgtable->parent = this;

    yang_name = "DIAL-CONTROL-MIB"; yang_parent_name = "DIAL-CONTROL-MIB";
}

DialControlMib::~DialControlMib()
{
}

bool DialControlMib::has_data() const
{
    return (callactivetable !=  nullptr && callactivetable->has_data())
	|| (callhistory !=  nullptr && callhistory->has_data())
	|| (callhistorytable !=  nullptr && callhistorytable->has_data())
	|| (dialctlconfiguration !=  nullptr && dialctlconfiguration->has_data())
	|| (dialctlpeercfgtable !=  nullptr && dialctlpeercfgtable->has_data());
}

bool DialControlMib::has_operation() const
{
    return is_set(yfilter)
	|| (callactivetable !=  nullptr && callactivetable->has_operation())
	|| (callhistory !=  nullptr && callhistory->has_operation())
	|| (callhistorytable !=  nullptr && callhistorytable->has_operation())
	|| (dialctlconfiguration !=  nullptr && dialctlconfiguration->has_operation())
	|| (dialctlpeercfgtable !=  nullptr && dialctlpeercfgtable->has_operation());
}

std::string DialControlMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB";

    return path_buffer.str();

}

const EntityPath DialControlMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DialControlMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callActiveTable")
    {
        if(callactivetable == nullptr)
        {
            callactivetable = std::make_shared<DialControlMib::Callactivetable>();
        }
        return callactivetable;
    }

    if(child_yang_name == "callHistory")
    {
        if(callhistory == nullptr)
        {
            callhistory = std::make_shared<DialControlMib::Callhistory>();
        }
        return callhistory;
    }

    if(child_yang_name == "callHistoryTable")
    {
        if(callhistorytable == nullptr)
        {
            callhistorytable = std::make_shared<DialControlMib::Callhistorytable>();
        }
        return callhistorytable;
    }

    if(child_yang_name == "dialCtlConfiguration")
    {
        if(dialctlconfiguration == nullptr)
        {
            dialctlconfiguration = std::make_shared<DialControlMib::Dialctlconfiguration>();
        }
        return dialctlconfiguration;
    }

    if(child_yang_name == "dialCtlPeerCfgTable")
    {
        if(dialctlpeercfgtable == nullptr)
        {
            dialctlpeercfgtable = std::make_shared<DialControlMib::Dialctlpeercfgtable>();
        }
        return dialctlpeercfgtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(callactivetable != nullptr)
    {
        children["callActiveTable"] = callactivetable;
    }

    if(callhistory != nullptr)
    {
        children["callHistory"] = callhistory;
    }

    if(callhistorytable != nullptr)
    {
        children["callHistoryTable"] = callhistorytable;
    }

    if(dialctlconfiguration != nullptr)
    {
        children["dialCtlConfiguration"] = dialctlconfiguration;
    }

    if(dialctlpeercfgtable != nullptr)
    {
        children["dialCtlPeerCfgTable"] = dialctlpeercfgtable;
    }

    return children;
}

void DialControlMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DialControlMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DialControlMib::clone_ptr() const
{
    return std::make_shared<DialControlMib>();
}

std::string DialControlMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DialControlMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DialControlMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DialControlMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DialControlMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveTable" || name == "callHistory" || name == "callHistoryTable" || name == "dialCtlConfiguration" || name == "dialCtlPeerCfgTable")
        return true;
    return false;
}

DialControlMib::Dialctlconfiguration::Dialctlconfiguration()
    :
    dialctlacceptmode{YType::enumeration, "dialCtlAcceptMode"},
    dialctltrapenable{YType::enumeration, "dialCtlTrapEnable"}
{
    yang_name = "dialCtlConfiguration"; yang_parent_name = "DIAL-CONTROL-MIB";
}

DialControlMib::Dialctlconfiguration::~Dialctlconfiguration()
{
}

bool DialControlMib::Dialctlconfiguration::has_data() const
{
    return dialctlacceptmode.is_set
	|| dialctltrapenable.is_set;
}

bool DialControlMib::Dialctlconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dialctlacceptmode.yfilter)
	|| ydk::is_set(dialctltrapenable.yfilter);
}

std::string DialControlMib::Dialctlconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialCtlConfiguration";

    return path_buffer.str();

}

const EntityPath DialControlMib::Dialctlconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dialctlacceptmode.is_set || is_set(dialctlacceptmode.yfilter)) leaf_name_data.push_back(dialctlacceptmode.get_name_leafdata());
    if (dialctltrapenable.is_set || is_set(dialctltrapenable.yfilter)) leaf_name_data.push_back(dialctltrapenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Dialctlconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Dialctlconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DialControlMib::Dialctlconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dialCtlAcceptMode")
    {
        dialctlacceptmode = value;
        dialctlacceptmode.value_namespace = name_space;
        dialctlacceptmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlTrapEnable")
    {
        dialctltrapenable = value;
        dialctltrapenable.value_namespace = name_space;
        dialctltrapenable.value_namespace_prefix = name_space_prefix;
    }
}

void DialControlMib::Dialctlconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dialCtlAcceptMode")
    {
        dialctlacceptmode.yfilter = yfilter;
    }
    if(value_path == "dialCtlTrapEnable")
    {
        dialctltrapenable.yfilter = yfilter;
    }
}

bool DialControlMib::Dialctlconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialCtlAcceptMode" || name == "dialCtlTrapEnable")
        return true;
    return false;
}

DialControlMib::Callhistory::Callhistory()
    :
    callhistoryretaintimer{YType::int32, "callHistoryRetainTimer"},
    callhistorytablemaxlength{YType::int32, "callHistoryTableMaxLength"}
{
    yang_name = "callHistory"; yang_parent_name = "DIAL-CONTROL-MIB";
}

DialControlMib::Callhistory::~Callhistory()
{
}

bool DialControlMib::Callhistory::has_data() const
{
    return callhistoryretaintimer.is_set
	|| callhistorytablemaxlength.is_set;
}

bool DialControlMib::Callhistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callhistoryretaintimer.yfilter)
	|| ydk::is_set(callhistorytablemaxlength.yfilter);
}

std::string DialControlMib::Callhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callHistory";

    return path_buffer.str();

}

const EntityPath DialControlMib::Callhistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callhistoryretaintimer.is_set || is_set(callhistoryretaintimer.yfilter)) leaf_name_data.push_back(callhistoryretaintimer.get_name_leafdata());
    if (callhistorytablemaxlength.is_set || is_set(callhistorytablemaxlength.yfilter)) leaf_name_data.push_back(callhistorytablemaxlength.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Callhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Callhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DialControlMib::Callhistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callHistoryRetainTimer")
    {
        callhistoryretaintimer = value;
        callhistoryretaintimer.value_namespace = name_space;
        callhistoryretaintimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryTableMaxLength")
    {
        callhistorytablemaxlength = value;
        callhistorytablemaxlength.value_namespace = name_space;
        callhistorytablemaxlength.value_namespace_prefix = name_space_prefix;
    }
}

void DialControlMib::Callhistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callHistoryRetainTimer")
    {
        callhistoryretaintimer.yfilter = yfilter;
    }
    if(value_path == "callHistoryTableMaxLength")
    {
        callhistorytablemaxlength.yfilter = yfilter;
    }
}

bool DialControlMib::Callhistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callHistoryRetainTimer" || name == "callHistoryTableMaxLength")
        return true;
    return false;
}

DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgtable()
{
    yang_name = "dialCtlPeerCfgTable"; yang_parent_name = "DIAL-CONTROL-MIB";
}

DialControlMib::Dialctlpeercfgtable::~Dialctlpeercfgtable()
{
}

bool DialControlMib::Dialctlpeercfgtable::has_data() const
{
    for (std::size_t index=0; index<dialctlpeercfgentry.size(); index++)
    {
        if(dialctlpeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DialControlMib::Dialctlpeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<dialctlpeercfgentry.size(); index++)
    {
        if(dialctlpeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DialControlMib::Dialctlpeercfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialCtlPeerCfgTable";

    return path_buffer.str();

}

const EntityPath DialControlMib::Dialctlpeercfgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Dialctlpeercfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialCtlPeerCfgEntry")
    {
        for(auto const & c : dialctlpeercfgentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry>();
        c->parent = this;
        dialctlpeercfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Dialctlpeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dialctlpeercfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DialControlMib::Dialctlpeercfgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DialControlMib::Dialctlpeercfgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DialControlMib::Dialctlpeercfgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialCtlPeerCfgEntry")
        return true;
    return false;
}

DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgentry()
    :
    dialctlpeercfgid{YType::int32, "dialCtlPeerCfgId"},
    ifindex{YType::str, "ifIndex"},
    dialctlpeercfgansweraddress{YType::str, "dialCtlPeerCfgAnswerAddress"},
    dialctlpeercfgcallretries{YType::int32, "dialCtlPeerCfgCallRetries"},
    dialctlpeercfgcarrierdelay{YType::int32, "dialCtlPeerCfgCarrierDelay"},
    dialctlpeercfgclosedusergroup{YType::str, "dialCtlPeerCfgClosedUserGroup"},
    dialctlpeercfgfailuredelay{YType::int32, "dialCtlPeerCfgFailureDelay"},
    dialctlpeercfgiftype{YType::enumeration, "dialCtlPeerCfgIfType"},
    dialctlpeercfginactivitytimer{YType::int32, "dialCtlPeerCfgInactivityTimer"},
    dialctlpeercfginfotype{YType::enumeration, "dialCtlPeerCfgInfoType"},
    dialctlpeercfglowerif{YType::int32, "dialCtlPeerCfgLowerIf"},
    dialctlpeercfgmaxduration{YType::int32, "dialCtlPeerCfgMaxDuration"},
    dialctlpeercfgminduration{YType::int32, "dialCtlPeerCfgMinDuration"},
    dialctlpeercfgoriginateaddress{YType::str, "dialCtlPeerCfgOriginateAddress"},
    dialctlpeercfgpermission{YType::enumeration, "dialCtlPeerCfgPermission"},
    dialctlpeercfgretrydelay{YType::int32, "dialCtlPeerCfgRetryDelay"},
    dialctlpeercfgspeed{YType::int32, "dialCtlPeerCfgSpeed"},
    dialctlpeercfgstatus{YType::enumeration, "dialCtlPeerCfgStatus"},
    dialctlpeercfgsubaddress{YType::str, "dialCtlPeerCfgSubAddress"},
    dialctlpeercfgtrapenable{YType::enumeration, "dialCtlPeerCfgTrapEnable"},
    dialctlpeerstatsacceptcalls{YType::uint32, "dialCtlPeerStatsAcceptCalls"},
    dialctlpeerstatschargedunits{YType::uint32, "dialCtlPeerStatsChargedUnits"},
    dialctlpeerstatsconnecttime{YType::uint32, "dialCtlPeerStatsConnectTime"},
    dialctlpeerstatsfailcalls{YType::uint32, "dialCtlPeerStatsFailCalls"},
    dialctlpeerstatslastdisconnectcause{YType::str, "dialCtlPeerStatsLastDisconnectCause"},
    dialctlpeerstatslastdisconnecttext{YType::str, "dialCtlPeerStatsLastDisconnectText"},
    dialctlpeerstatslastsetuptime{YType::uint32, "dialCtlPeerStatsLastSetupTime"},
    dialctlpeerstatsrefusecalls{YType::uint32, "dialCtlPeerStatsRefuseCalls"},
    dialctlpeerstatssuccesscalls{YType::uint32, "dialCtlPeerStatsSuccessCalls"}
{
    yang_name = "dialCtlPeerCfgEntry"; yang_parent_name = "dialCtlPeerCfgTable";
}

DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::~Dialctlpeercfgentry()
{
}

bool DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::has_data() const
{
    return dialctlpeercfgid.is_set
	|| ifindex.is_set
	|| dialctlpeercfgansweraddress.is_set
	|| dialctlpeercfgcallretries.is_set
	|| dialctlpeercfgcarrierdelay.is_set
	|| dialctlpeercfgclosedusergroup.is_set
	|| dialctlpeercfgfailuredelay.is_set
	|| dialctlpeercfgiftype.is_set
	|| dialctlpeercfginactivitytimer.is_set
	|| dialctlpeercfginfotype.is_set
	|| dialctlpeercfglowerif.is_set
	|| dialctlpeercfgmaxduration.is_set
	|| dialctlpeercfgminduration.is_set
	|| dialctlpeercfgoriginateaddress.is_set
	|| dialctlpeercfgpermission.is_set
	|| dialctlpeercfgretrydelay.is_set
	|| dialctlpeercfgspeed.is_set
	|| dialctlpeercfgstatus.is_set
	|| dialctlpeercfgsubaddress.is_set
	|| dialctlpeercfgtrapenable.is_set
	|| dialctlpeerstatsacceptcalls.is_set
	|| dialctlpeerstatschargedunits.is_set
	|| dialctlpeerstatsconnecttime.is_set
	|| dialctlpeerstatsfailcalls.is_set
	|| dialctlpeerstatslastdisconnectcause.is_set
	|| dialctlpeerstatslastdisconnecttext.is_set
	|| dialctlpeerstatslastsetuptime.is_set
	|| dialctlpeerstatsrefusecalls.is_set
	|| dialctlpeerstatssuccesscalls.is_set;
}

bool DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dialctlpeercfgid.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(dialctlpeercfgansweraddress.yfilter)
	|| ydk::is_set(dialctlpeercfgcallretries.yfilter)
	|| ydk::is_set(dialctlpeercfgcarrierdelay.yfilter)
	|| ydk::is_set(dialctlpeercfgclosedusergroup.yfilter)
	|| ydk::is_set(dialctlpeercfgfailuredelay.yfilter)
	|| ydk::is_set(dialctlpeercfgiftype.yfilter)
	|| ydk::is_set(dialctlpeercfginactivitytimer.yfilter)
	|| ydk::is_set(dialctlpeercfginfotype.yfilter)
	|| ydk::is_set(dialctlpeercfglowerif.yfilter)
	|| ydk::is_set(dialctlpeercfgmaxduration.yfilter)
	|| ydk::is_set(dialctlpeercfgminduration.yfilter)
	|| ydk::is_set(dialctlpeercfgoriginateaddress.yfilter)
	|| ydk::is_set(dialctlpeercfgpermission.yfilter)
	|| ydk::is_set(dialctlpeercfgretrydelay.yfilter)
	|| ydk::is_set(dialctlpeercfgspeed.yfilter)
	|| ydk::is_set(dialctlpeercfgstatus.yfilter)
	|| ydk::is_set(dialctlpeercfgsubaddress.yfilter)
	|| ydk::is_set(dialctlpeercfgtrapenable.yfilter)
	|| ydk::is_set(dialctlpeerstatsacceptcalls.yfilter)
	|| ydk::is_set(dialctlpeerstatschargedunits.yfilter)
	|| ydk::is_set(dialctlpeerstatsconnecttime.yfilter)
	|| ydk::is_set(dialctlpeerstatsfailcalls.yfilter)
	|| ydk::is_set(dialctlpeerstatslastdisconnectcause.yfilter)
	|| ydk::is_set(dialctlpeerstatslastdisconnecttext.yfilter)
	|| ydk::is_set(dialctlpeerstatslastsetuptime.yfilter)
	|| ydk::is_set(dialctlpeerstatsrefusecalls.yfilter)
	|| ydk::is_set(dialctlpeerstatssuccesscalls.yfilter);
}

std::string DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialCtlPeerCfgEntry" <<"[dialCtlPeerCfgId='" <<dialctlpeercfgid <<"']" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/dialCtlPeerCfgTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dialctlpeercfgid.is_set || is_set(dialctlpeercfgid.yfilter)) leaf_name_data.push_back(dialctlpeercfgid.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dialctlpeercfgansweraddress.is_set || is_set(dialctlpeercfgansweraddress.yfilter)) leaf_name_data.push_back(dialctlpeercfgansweraddress.get_name_leafdata());
    if (dialctlpeercfgcallretries.is_set || is_set(dialctlpeercfgcallretries.yfilter)) leaf_name_data.push_back(dialctlpeercfgcallretries.get_name_leafdata());
    if (dialctlpeercfgcarrierdelay.is_set || is_set(dialctlpeercfgcarrierdelay.yfilter)) leaf_name_data.push_back(dialctlpeercfgcarrierdelay.get_name_leafdata());
    if (dialctlpeercfgclosedusergroup.is_set || is_set(dialctlpeercfgclosedusergroup.yfilter)) leaf_name_data.push_back(dialctlpeercfgclosedusergroup.get_name_leafdata());
    if (dialctlpeercfgfailuredelay.is_set || is_set(dialctlpeercfgfailuredelay.yfilter)) leaf_name_data.push_back(dialctlpeercfgfailuredelay.get_name_leafdata());
    if (dialctlpeercfgiftype.is_set || is_set(dialctlpeercfgiftype.yfilter)) leaf_name_data.push_back(dialctlpeercfgiftype.get_name_leafdata());
    if (dialctlpeercfginactivitytimer.is_set || is_set(dialctlpeercfginactivitytimer.yfilter)) leaf_name_data.push_back(dialctlpeercfginactivitytimer.get_name_leafdata());
    if (dialctlpeercfginfotype.is_set || is_set(dialctlpeercfginfotype.yfilter)) leaf_name_data.push_back(dialctlpeercfginfotype.get_name_leafdata());
    if (dialctlpeercfglowerif.is_set || is_set(dialctlpeercfglowerif.yfilter)) leaf_name_data.push_back(dialctlpeercfglowerif.get_name_leafdata());
    if (dialctlpeercfgmaxduration.is_set || is_set(dialctlpeercfgmaxduration.yfilter)) leaf_name_data.push_back(dialctlpeercfgmaxduration.get_name_leafdata());
    if (dialctlpeercfgminduration.is_set || is_set(dialctlpeercfgminduration.yfilter)) leaf_name_data.push_back(dialctlpeercfgminduration.get_name_leafdata());
    if (dialctlpeercfgoriginateaddress.is_set || is_set(dialctlpeercfgoriginateaddress.yfilter)) leaf_name_data.push_back(dialctlpeercfgoriginateaddress.get_name_leafdata());
    if (dialctlpeercfgpermission.is_set || is_set(dialctlpeercfgpermission.yfilter)) leaf_name_data.push_back(dialctlpeercfgpermission.get_name_leafdata());
    if (dialctlpeercfgretrydelay.is_set || is_set(dialctlpeercfgretrydelay.yfilter)) leaf_name_data.push_back(dialctlpeercfgretrydelay.get_name_leafdata());
    if (dialctlpeercfgspeed.is_set || is_set(dialctlpeercfgspeed.yfilter)) leaf_name_data.push_back(dialctlpeercfgspeed.get_name_leafdata());
    if (dialctlpeercfgstatus.is_set || is_set(dialctlpeercfgstatus.yfilter)) leaf_name_data.push_back(dialctlpeercfgstatus.get_name_leafdata());
    if (dialctlpeercfgsubaddress.is_set || is_set(dialctlpeercfgsubaddress.yfilter)) leaf_name_data.push_back(dialctlpeercfgsubaddress.get_name_leafdata());
    if (dialctlpeercfgtrapenable.is_set || is_set(dialctlpeercfgtrapenable.yfilter)) leaf_name_data.push_back(dialctlpeercfgtrapenable.get_name_leafdata());
    if (dialctlpeerstatsacceptcalls.is_set || is_set(dialctlpeerstatsacceptcalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatsacceptcalls.get_name_leafdata());
    if (dialctlpeerstatschargedunits.is_set || is_set(dialctlpeerstatschargedunits.yfilter)) leaf_name_data.push_back(dialctlpeerstatschargedunits.get_name_leafdata());
    if (dialctlpeerstatsconnecttime.is_set || is_set(dialctlpeerstatsconnecttime.yfilter)) leaf_name_data.push_back(dialctlpeerstatsconnecttime.get_name_leafdata());
    if (dialctlpeerstatsfailcalls.is_set || is_set(dialctlpeerstatsfailcalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatsfailcalls.get_name_leafdata());
    if (dialctlpeerstatslastdisconnectcause.is_set || is_set(dialctlpeerstatslastdisconnectcause.yfilter)) leaf_name_data.push_back(dialctlpeerstatslastdisconnectcause.get_name_leafdata());
    if (dialctlpeerstatslastdisconnecttext.is_set || is_set(dialctlpeerstatslastdisconnecttext.yfilter)) leaf_name_data.push_back(dialctlpeerstatslastdisconnecttext.get_name_leafdata());
    if (dialctlpeerstatslastsetuptime.is_set || is_set(dialctlpeerstatslastsetuptime.yfilter)) leaf_name_data.push_back(dialctlpeerstatslastsetuptime.get_name_leafdata());
    if (dialctlpeerstatsrefusecalls.is_set || is_set(dialctlpeerstatsrefusecalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatsrefusecalls.get_name_leafdata());
    if (dialctlpeerstatssuccesscalls.is_set || is_set(dialctlpeerstatssuccesscalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatssuccesscalls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dialCtlPeerCfgId")
    {
        dialctlpeercfgid = value;
        dialctlpeercfgid.value_namespace = name_space;
        dialctlpeercfgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgAnswerAddress")
    {
        dialctlpeercfgansweraddress = value;
        dialctlpeercfgansweraddress.value_namespace = name_space;
        dialctlpeercfgansweraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgCallRetries")
    {
        dialctlpeercfgcallretries = value;
        dialctlpeercfgcallretries.value_namespace = name_space;
        dialctlpeercfgcallretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgCarrierDelay")
    {
        dialctlpeercfgcarrierdelay = value;
        dialctlpeercfgcarrierdelay.value_namespace = name_space;
        dialctlpeercfgcarrierdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgClosedUserGroup")
    {
        dialctlpeercfgclosedusergroup = value;
        dialctlpeercfgclosedusergroup.value_namespace = name_space;
        dialctlpeercfgclosedusergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgFailureDelay")
    {
        dialctlpeercfgfailuredelay = value;
        dialctlpeercfgfailuredelay.value_namespace = name_space;
        dialctlpeercfgfailuredelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgIfType")
    {
        dialctlpeercfgiftype = value;
        dialctlpeercfgiftype.value_namespace = name_space;
        dialctlpeercfgiftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgInactivityTimer")
    {
        dialctlpeercfginactivitytimer = value;
        dialctlpeercfginactivitytimer.value_namespace = name_space;
        dialctlpeercfginactivitytimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgInfoType")
    {
        dialctlpeercfginfotype = value;
        dialctlpeercfginfotype.value_namespace = name_space;
        dialctlpeercfginfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgLowerIf")
    {
        dialctlpeercfglowerif = value;
        dialctlpeercfglowerif.value_namespace = name_space;
        dialctlpeercfglowerif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgMaxDuration")
    {
        dialctlpeercfgmaxduration = value;
        dialctlpeercfgmaxduration.value_namespace = name_space;
        dialctlpeercfgmaxduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgMinDuration")
    {
        dialctlpeercfgminduration = value;
        dialctlpeercfgminduration.value_namespace = name_space;
        dialctlpeercfgminduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgOriginateAddress")
    {
        dialctlpeercfgoriginateaddress = value;
        dialctlpeercfgoriginateaddress.value_namespace = name_space;
        dialctlpeercfgoriginateaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgPermission")
    {
        dialctlpeercfgpermission = value;
        dialctlpeercfgpermission.value_namespace = name_space;
        dialctlpeercfgpermission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgRetryDelay")
    {
        dialctlpeercfgretrydelay = value;
        dialctlpeercfgretrydelay.value_namespace = name_space;
        dialctlpeercfgretrydelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgSpeed")
    {
        dialctlpeercfgspeed = value;
        dialctlpeercfgspeed.value_namespace = name_space;
        dialctlpeercfgspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgStatus")
    {
        dialctlpeercfgstatus = value;
        dialctlpeercfgstatus.value_namespace = name_space;
        dialctlpeercfgstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgSubAddress")
    {
        dialctlpeercfgsubaddress = value;
        dialctlpeercfgsubaddress.value_namespace = name_space;
        dialctlpeercfgsubaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgTrapEnable")
    {
        dialctlpeercfgtrapenable = value;
        dialctlpeercfgtrapenable.value_namespace = name_space;
        dialctlpeercfgtrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsAcceptCalls")
    {
        dialctlpeerstatsacceptcalls = value;
        dialctlpeerstatsacceptcalls.value_namespace = name_space;
        dialctlpeerstatsacceptcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsChargedUnits")
    {
        dialctlpeerstatschargedunits = value;
        dialctlpeerstatschargedunits.value_namespace = name_space;
        dialctlpeerstatschargedunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsConnectTime")
    {
        dialctlpeerstatsconnecttime = value;
        dialctlpeerstatsconnecttime.value_namespace = name_space;
        dialctlpeerstatsconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsFailCalls")
    {
        dialctlpeerstatsfailcalls = value;
        dialctlpeerstatsfailcalls.value_namespace = name_space;
        dialctlpeerstatsfailcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsLastDisconnectCause")
    {
        dialctlpeerstatslastdisconnectcause = value;
        dialctlpeerstatslastdisconnectcause.value_namespace = name_space;
        dialctlpeerstatslastdisconnectcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsLastDisconnectText")
    {
        dialctlpeerstatslastdisconnecttext = value;
        dialctlpeerstatslastdisconnecttext.value_namespace = name_space;
        dialctlpeerstatslastdisconnecttext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsLastSetupTime")
    {
        dialctlpeerstatslastsetuptime = value;
        dialctlpeerstatslastsetuptime.value_namespace = name_space;
        dialctlpeerstatslastsetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsRefuseCalls")
    {
        dialctlpeerstatsrefusecalls = value;
        dialctlpeerstatsrefusecalls.value_namespace = name_space;
        dialctlpeerstatsrefusecalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsSuccessCalls")
    {
        dialctlpeerstatssuccesscalls = value;
        dialctlpeerstatssuccesscalls.value_namespace = name_space;
        dialctlpeerstatssuccesscalls.value_namespace_prefix = name_space_prefix;
    }
}

void DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dialCtlPeerCfgId")
    {
        dialctlpeercfgid.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgAnswerAddress")
    {
        dialctlpeercfgansweraddress.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgCallRetries")
    {
        dialctlpeercfgcallretries.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgCarrierDelay")
    {
        dialctlpeercfgcarrierdelay.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgClosedUserGroup")
    {
        dialctlpeercfgclosedusergroup.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgFailureDelay")
    {
        dialctlpeercfgfailuredelay.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgIfType")
    {
        dialctlpeercfgiftype.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgInactivityTimer")
    {
        dialctlpeercfginactivitytimer.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgInfoType")
    {
        dialctlpeercfginfotype.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgLowerIf")
    {
        dialctlpeercfglowerif.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgMaxDuration")
    {
        dialctlpeercfgmaxduration.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgMinDuration")
    {
        dialctlpeercfgminduration.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgOriginateAddress")
    {
        dialctlpeercfgoriginateaddress.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgPermission")
    {
        dialctlpeercfgpermission.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgRetryDelay")
    {
        dialctlpeercfgretrydelay.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgSpeed")
    {
        dialctlpeercfgspeed.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgStatus")
    {
        dialctlpeercfgstatus.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgSubAddress")
    {
        dialctlpeercfgsubaddress.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgTrapEnable")
    {
        dialctlpeercfgtrapenable.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsAcceptCalls")
    {
        dialctlpeerstatsacceptcalls.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsChargedUnits")
    {
        dialctlpeerstatschargedunits.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsConnectTime")
    {
        dialctlpeerstatsconnecttime.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsFailCalls")
    {
        dialctlpeerstatsfailcalls.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsLastDisconnectCause")
    {
        dialctlpeerstatslastdisconnectcause.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsLastDisconnectText")
    {
        dialctlpeerstatslastdisconnecttext.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsLastSetupTime")
    {
        dialctlpeerstatslastsetuptime.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsRefuseCalls")
    {
        dialctlpeerstatsrefusecalls.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsSuccessCalls")
    {
        dialctlpeerstatssuccesscalls.yfilter = yfilter;
    }
}

bool DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialCtlPeerCfgId" || name == "ifIndex" || name == "dialCtlPeerCfgAnswerAddress" || name == "dialCtlPeerCfgCallRetries" || name == "dialCtlPeerCfgCarrierDelay" || name == "dialCtlPeerCfgClosedUserGroup" || name == "dialCtlPeerCfgFailureDelay" || name == "dialCtlPeerCfgIfType" || name == "dialCtlPeerCfgInactivityTimer" || name == "dialCtlPeerCfgInfoType" || name == "dialCtlPeerCfgLowerIf" || name == "dialCtlPeerCfgMaxDuration" || name == "dialCtlPeerCfgMinDuration" || name == "dialCtlPeerCfgOriginateAddress" || name == "dialCtlPeerCfgPermission" || name == "dialCtlPeerCfgRetryDelay" || name == "dialCtlPeerCfgSpeed" || name == "dialCtlPeerCfgStatus" || name == "dialCtlPeerCfgSubAddress" || name == "dialCtlPeerCfgTrapEnable" || name == "dialCtlPeerStatsAcceptCalls" || name == "dialCtlPeerStatsChargedUnits" || name == "dialCtlPeerStatsConnectTime" || name == "dialCtlPeerStatsFailCalls" || name == "dialCtlPeerStatsLastDisconnectCause" || name == "dialCtlPeerStatsLastDisconnectText" || name == "dialCtlPeerStatsLastSetupTime" || name == "dialCtlPeerStatsRefuseCalls" || name == "dialCtlPeerStatsSuccessCalls")
        return true;
    return false;
}

DialControlMib::Callactivetable::Callactivetable()
{
    yang_name = "callActiveTable"; yang_parent_name = "DIAL-CONTROL-MIB";
}

DialControlMib::Callactivetable::~Callactivetable()
{
}

bool DialControlMib::Callactivetable::has_data() const
{
    for (std::size_t index=0; index<callactiveentry.size(); index++)
    {
        if(callactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool DialControlMib::Callactivetable::has_operation() const
{
    for (std::size_t index=0; index<callactiveentry.size(); index++)
    {
        if(callactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DialControlMib::Callactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callActiveTable";

    return path_buffer.str();

}

const EntityPath DialControlMib::Callactivetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Callactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callActiveEntry")
    {
        for(auto const & c : callactiveentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DialControlMib::Callactivetable::Callactiveentry>();
        c->parent = this;
        callactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Callactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : callactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DialControlMib::Callactivetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DialControlMib::Callactivetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DialControlMib::Callactivetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveEntry")
        return true;
    return false;
}

DialControlMib::Callactivetable::Callactiveentry::Callactiveentry()
    :
    callactivesetuptime{YType::uint32, "callActiveSetupTime"},
    callactiveindex{YType::int32, "callActiveIndex"},
    callactivecallorigin{YType::enumeration, "callActiveCallOrigin"},
    callactivecallstate{YType::enumeration, "callActiveCallState"},
    callactivechargedunits{YType::uint32, "callActiveChargedUnits"},
    callactiveconnecttime{YType::uint32, "callActiveConnectTime"},
    callactiveinfotype{YType::enumeration, "callActiveInfoType"},
    callactivelogicalifindex{YType::int32, "callActiveLogicalIfIndex"},
    callactivepeeraddress{YType::str, "callActivePeerAddress"},
    callactivepeerid{YType::int32, "callActivePeerId"},
    callactivepeerifindex{YType::int32, "callActivePeerIfIndex"},
    callactivepeersubaddress{YType::str, "callActivePeerSubAddress"},
    callactivereceivebytes{YType::uint32, "callActiveReceiveBytes"},
    callactivereceivepackets{YType::uint32, "callActiveReceivePackets"},
    callactivetransmitbytes{YType::uint32, "callActiveTransmitBytes"},
    callactivetransmitpackets{YType::uint32, "callActiveTransmitPackets"}
{
    yang_name = "callActiveEntry"; yang_parent_name = "callActiveTable";
}

DialControlMib::Callactivetable::Callactiveentry::~Callactiveentry()
{
}

bool DialControlMib::Callactivetable::Callactiveentry::has_data() const
{
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| callactivecallorigin.is_set
	|| callactivecallstate.is_set
	|| callactivechargedunits.is_set
	|| callactiveconnecttime.is_set
	|| callactiveinfotype.is_set
	|| callactivelogicalifindex.is_set
	|| callactivepeeraddress.is_set
	|| callactivepeerid.is_set
	|| callactivepeerifindex.is_set
	|| callactivepeersubaddress.is_set
	|| callactivereceivebytes.is_set
	|| callactivereceivepackets.is_set
	|| callactivetransmitbytes.is_set
	|| callactivetransmitpackets.is_set;
}

bool DialControlMib::Callactivetable::Callactiveentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(callactivecallorigin.yfilter)
	|| ydk::is_set(callactivecallstate.yfilter)
	|| ydk::is_set(callactivechargedunits.yfilter)
	|| ydk::is_set(callactiveconnecttime.yfilter)
	|| ydk::is_set(callactiveinfotype.yfilter)
	|| ydk::is_set(callactivelogicalifindex.yfilter)
	|| ydk::is_set(callactivepeeraddress.yfilter)
	|| ydk::is_set(callactivepeerid.yfilter)
	|| ydk::is_set(callactivepeerifindex.yfilter)
	|| ydk::is_set(callactivepeersubaddress.yfilter)
	|| ydk::is_set(callactivereceivebytes.yfilter)
	|| ydk::is_set(callactivereceivepackets.yfilter)
	|| ydk::is_set(callactivetransmitbytes.yfilter)
	|| ydk::is_set(callactivetransmitpackets.yfilter);
}

std::string DialControlMib::Callactivetable::Callactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callActiveEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";

    return path_buffer.str();

}

const EntityPath DialControlMib::Callactivetable::Callactiveentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/callActiveTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (callactivecallorigin.is_set || is_set(callactivecallorigin.yfilter)) leaf_name_data.push_back(callactivecallorigin.get_name_leafdata());
    if (callactivecallstate.is_set || is_set(callactivecallstate.yfilter)) leaf_name_data.push_back(callactivecallstate.get_name_leafdata());
    if (callactivechargedunits.is_set || is_set(callactivechargedunits.yfilter)) leaf_name_data.push_back(callactivechargedunits.get_name_leafdata());
    if (callactiveconnecttime.is_set || is_set(callactiveconnecttime.yfilter)) leaf_name_data.push_back(callactiveconnecttime.get_name_leafdata());
    if (callactiveinfotype.is_set || is_set(callactiveinfotype.yfilter)) leaf_name_data.push_back(callactiveinfotype.get_name_leafdata());
    if (callactivelogicalifindex.is_set || is_set(callactivelogicalifindex.yfilter)) leaf_name_data.push_back(callactivelogicalifindex.get_name_leafdata());
    if (callactivepeeraddress.is_set || is_set(callactivepeeraddress.yfilter)) leaf_name_data.push_back(callactivepeeraddress.get_name_leafdata());
    if (callactivepeerid.is_set || is_set(callactivepeerid.yfilter)) leaf_name_data.push_back(callactivepeerid.get_name_leafdata());
    if (callactivepeerifindex.is_set || is_set(callactivepeerifindex.yfilter)) leaf_name_data.push_back(callactivepeerifindex.get_name_leafdata());
    if (callactivepeersubaddress.is_set || is_set(callactivepeersubaddress.yfilter)) leaf_name_data.push_back(callactivepeersubaddress.get_name_leafdata());
    if (callactivereceivebytes.is_set || is_set(callactivereceivebytes.yfilter)) leaf_name_data.push_back(callactivereceivebytes.get_name_leafdata());
    if (callactivereceivepackets.is_set || is_set(callactivereceivepackets.yfilter)) leaf_name_data.push_back(callactivereceivepackets.get_name_leafdata());
    if (callactivetransmitbytes.is_set || is_set(callactivetransmitbytes.yfilter)) leaf_name_data.push_back(callactivetransmitbytes.get_name_leafdata());
    if (callactivetransmitpackets.is_set || is_set(callactivetransmitpackets.yfilter)) leaf_name_data.push_back(callactivetransmitpackets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Callactivetable::Callactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Callactivetable::Callactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DialControlMib::Callactivetable::Callactiveentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
        callactivesetuptime.value_namespace = name_space;
        callactivesetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
        callactiveindex.value_namespace = name_space;
        callactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveCallOrigin")
    {
        callactivecallorigin = value;
        callactivecallorigin.value_namespace = name_space;
        callactivecallorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveCallState")
    {
        callactivecallstate = value;
        callactivecallstate.value_namespace = name_space;
        callactivecallstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveChargedUnits")
    {
        callactivechargedunits = value;
        callactivechargedunits.value_namespace = name_space;
        callactivechargedunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveConnectTime")
    {
        callactiveconnecttime = value;
        callactiveconnecttime.value_namespace = name_space;
        callactiveconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveInfoType")
    {
        callactiveinfotype = value;
        callactiveinfotype.value_namespace = name_space;
        callactiveinfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveLogicalIfIndex")
    {
        callactivelogicalifindex = value;
        callactivelogicalifindex.value_namespace = name_space;
        callactivelogicalifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActivePeerAddress")
    {
        callactivepeeraddress = value;
        callactivepeeraddress.value_namespace = name_space;
        callactivepeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActivePeerId")
    {
        callactivepeerid = value;
        callactivepeerid.value_namespace = name_space;
        callactivepeerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActivePeerIfIndex")
    {
        callactivepeerifindex = value;
        callactivepeerifindex.value_namespace = name_space;
        callactivepeerifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActivePeerSubAddress")
    {
        callactivepeersubaddress = value;
        callactivepeersubaddress.value_namespace = name_space;
        callactivepeersubaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveReceiveBytes")
    {
        callactivereceivebytes = value;
        callactivereceivebytes.value_namespace = name_space;
        callactivereceivebytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveReceivePackets")
    {
        callactivereceivepackets = value;
        callactivereceivepackets.value_namespace = name_space;
        callactivereceivepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveTransmitBytes")
    {
        callactivetransmitbytes = value;
        callactivetransmitbytes.value_namespace = name_space;
        callactivetransmitbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveTransmitPackets")
    {
        callactivetransmitpackets = value;
        callactivetransmitpackets.value_namespace = name_space;
        callactivetransmitpackets.value_namespace_prefix = name_space_prefix;
    }
}

void DialControlMib::Callactivetable::Callactiveentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "callActiveCallOrigin")
    {
        callactivecallorigin.yfilter = yfilter;
    }
    if(value_path == "callActiveCallState")
    {
        callactivecallstate.yfilter = yfilter;
    }
    if(value_path == "callActiveChargedUnits")
    {
        callactivechargedunits.yfilter = yfilter;
    }
    if(value_path == "callActiveConnectTime")
    {
        callactiveconnecttime.yfilter = yfilter;
    }
    if(value_path == "callActiveInfoType")
    {
        callactiveinfotype.yfilter = yfilter;
    }
    if(value_path == "callActiveLogicalIfIndex")
    {
        callactivelogicalifindex.yfilter = yfilter;
    }
    if(value_path == "callActivePeerAddress")
    {
        callactivepeeraddress.yfilter = yfilter;
    }
    if(value_path == "callActivePeerId")
    {
        callactivepeerid.yfilter = yfilter;
    }
    if(value_path == "callActivePeerIfIndex")
    {
        callactivepeerifindex.yfilter = yfilter;
    }
    if(value_path == "callActivePeerSubAddress")
    {
        callactivepeersubaddress.yfilter = yfilter;
    }
    if(value_path == "callActiveReceiveBytes")
    {
        callactivereceivebytes.yfilter = yfilter;
    }
    if(value_path == "callActiveReceivePackets")
    {
        callactivereceivepackets.yfilter = yfilter;
    }
    if(value_path == "callActiveTransmitBytes")
    {
        callactivetransmitbytes.yfilter = yfilter;
    }
    if(value_path == "callActiveTransmitPackets")
    {
        callactivetransmitpackets.yfilter = yfilter;
    }
}

bool DialControlMib::Callactivetable::Callactiveentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "callActiveCallOrigin" || name == "callActiveCallState" || name == "callActiveChargedUnits" || name == "callActiveConnectTime" || name == "callActiveInfoType" || name == "callActiveLogicalIfIndex" || name == "callActivePeerAddress" || name == "callActivePeerId" || name == "callActivePeerIfIndex" || name == "callActivePeerSubAddress" || name == "callActiveReceiveBytes" || name == "callActiveReceivePackets" || name == "callActiveTransmitBytes" || name == "callActiveTransmitPackets")
        return true;
    return false;
}

DialControlMib::Callhistorytable::Callhistorytable()
{
    yang_name = "callHistoryTable"; yang_parent_name = "DIAL-CONTROL-MIB";
}

DialControlMib::Callhistorytable::~Callhistorytable()
{
}

bool DialControlMib::Callhistorytable::has_data() const
{
    for (std::size_t index=0; index<callhistoryentry.size(); index++)
    {
        if(callhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool DialControlMib::Callhistorytable::has_operation() const
{
    for (std::size_t index=0; index<callhistoryentry.size(); index++)
    {
        if(callhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DialControlMib::Callhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callHistoryTable";

    return path_buffer.str();

}

const EntityPath DialControlMib::Callhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Callhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callHistoryEntry")
    {
        for(auto const & c : callhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DialControlMib::Callhistorytable::Callhistoryentry>();
        c->parent = this;
        callhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Callhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : callhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DialControlMib::Callhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DialControlMib::Callhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DialControlMib::Callhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callHistoryEntry")
        return true;
    return false;
}

DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryentry()
    :
    callactivesetuptime{YType::str, "callActiveSetupTime"},
    callactiveindex{YType::str, "callActiveIndex"},
    callhistorycallorigin{YType::enumeration, "callHistoryCallOrigin"},
    callhistorychargedunits{YType::uint32, "callHistoryChargedUnits"},
    callhistoryconnecttime{YType::uint32, "callHistoryConnectTime"},
    callhistorydisconnectcause{YType::str, "callHistoryDisconnectCause"},
    callhistorydisconnecttext{YType::str, "callHistoryDisconnectText"},
    callhistorydisconnecttime{YType::uint32, "callHistoryDisconnectTime"},
    callhistoryinfotype{YType::enumeration, "callHistoryInfoType"},
    callhistorylogicalifindex{YType::int32, "callHistoryLogicalIfIndex"},
    callhistorypeeraddress{YType::str, "callHistoryPeerAddress"},
    callhistorypeerid{YType::int32, "callHistoryPeerId"},
    callhistorypeerifindex{YType::int32, "callHistoryPeerIfIndex"},
    callhistorypeersubaddress{YType::str, "callHistoryPeerSubAddress"},
    callhistoryreceivebytes{YType::uint32, "callHistoryReceiveBytes"},
    callhistoryreceivepackets{YType::uint32, "callHistoryReceivePackets"},
    callhistorytransmitbytes{YType::uint32, "callHistoryTransmitBytes"},
    callhistorytransmitpackets{YType::uint32, "callHistoryTransmitPackets"}
{
    yang_name = "callHistoryEntry"; yang_parent_name = "callHistoryTable";
}

DialControlMib::Callhistorytable::Callhistoryentry::~Callhistoryentry()
{
}

bool DialControlMib::Callhistorytable::Callhistoryentry::has_data() const
{
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| callhistorycallorigin.is_set
	|| callhistorychargedunits.is_set
	|| callhistoryconnecttime.is_set
	|| callhistorydisconnectcause.is_set
	|| callhistorydisconnecttext.is_set
	|| callhistorydisconnecttime.is_set
	|| callhistoryinfotype.is_set
	|| callhistorylogicalifindex.is_set
	|| callhistorypeeraddress.is_set
	|| callhistorypeerid.is_set
	|| callhistorypeerifindex.is_set
	|| callhistorypeersubaddress.is_set
	|| callhistoryreceivebytes.is_set
	|| callhistoryreceivepackets.is_set
	|| callhistorytransmitbytes.is_set
	|| callhistorytransmitpackets.is_set;
}

bool DialControlMib::Callhistorytable::Callhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(callhistorycallorigin.yfilter)
	|| ydk::is_set(callhistorychargedunits.yfilter)
	|| ydk::is_set(callhistoryconnecttime.yfilter)
	|| ydk::is_set(callhistorydisconnectcause.yfilter)
	|| ydk::is_set(callhistorydisconnecttext.yfilter)
	|| ydk::is_set(callhistorydisconnecttime.yfilter)
	|| ydk::is_set(callhistoryinfotype.yfilter)
	|| ydk::is_set(callhistorylogicalifindex.yfilter)
	|| ydk::is_set(callhistorypeeraddress.yfilter)
	|| ydk::is_set(callhistorypeerid.yfilter)
	|| ydk::is_set(callhistorypeerifindex.yfilter)
	|| ydk::is_set(callhistorypeersubaddress.yfilter)
	|| ydk::is_set(callhistoryreceivebytes.yfilter)
	|| ydk::is_set(callhistoryreceivepackets.yfilter)
	|| ydk::is_set(callhistorytransmitbytes.yfilter)
	|| ydk::is_set(callhistorytransmitpackets.yfilter);
}

std::string DialControlMib::Callhistorytable::Callhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callHistoryEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";

    return path_buffer.str();

}

const EntityPath DialControlMib::Callhistorytable::Callhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/callHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (callhistorycallorigin.is_set || is_set(callhistorycallorigin.yfilter)) leaf_name_data.push_back(callhistorycallorigin.get_name_leafdata());
    if (callhistorychargedunits.is_set || is_set(callhistorychargedunits.yfilter)) leaf_name_data.push_back(callhistorychargedunits.get_name_leafdata());
    if (callhistoryconnecttime.is_set || is_set(callhistoryconnecttime.yfilter)) leaf_name_data.push_back(callhistoryconnecttime.get_name_leafdata());
    if (callhistorydisconnectcause.is_set || is_set(callhistorydisconnectcause.yfilter)) leaf_name_data.push_back(callhistorydisconnectcause.get_name_leafdata());
    if (callhistorydisconnecttext.is_set || is_set(callhistorydisconnecttext.yfilter)) leaf_name_data.push_back(callhistorydisconnecttext.get_name_leafdata());
    if (callhistorydisconnecttime.is_set || is_set(callhistorydisconnecttime.yfilter)) leaf_name_data.push_back(callhistorydisconnecttime.get_name_leafdata());
    if (callhistoryinfotype.is_set || is_set(callhistoryinfotype.yfilter)) leaf_name_data.push_back(callhistoryinfotype.get_name_leafdata());
    if (callhistorylogicalifindex.is_set || is_set(callhistorylogicalifindex.yfilter)) leaf_name_data.push_back(callhistorylogicalifindex.get_name_leafdata());
    if (callhistorypeeraddress.is_set || is_set(callhistorypeeraddress.yfilter)) leaf_name_data.push_back(callhistorypeeraddress.get_name_leafdata());
    if (callhistorypeerid.is_set || is_set(callhistorypeerid.yfilter)) leaf_name_data.push_back(callhistorypeerid.get_name_leafdata());
    if (callhistorypeerifindex.is_set || is_set(callhistorypeerifindex.yfilter)) leaf_name_data.push_back(callhistorypeerifindex.get_name_leafdata());
    if (callhistorypeersubaddress.is_set || is_set(callhistorypeersubaddress.yfilter)) leaf_name_data.push_back(callhistorypeersubaddress.get_name_leafdata());
    if (callhistoryreceivebytes.is_set || is_set(callhistoryreceivebytes.yfilter)) leaf_name_data.push_back(callhistoryreceivebytes.get_name_leafdata());
    if (callhistoryreceivepackets.is_set || is_set(callhistoryreceivepackets.yfilter)) leaf_name_data.push_back(callhistoryreceivepackets.get_name_leafdata());
    if (callhistorytransmitbytes.is_set || is_set(callhistorytransmitbytes.yfilter)) leaf_name_data.push_back(callhistorytransmitbytes.get_name_leafdata());
    if (callhistorytransmitpackets.is_set || is_set(callhistorytransmitpackets.yfilter)) leaf_name_data.push_back(callhistorytransmitpackets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DialControlMib::Callhistorytable::Callhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Callhistorytable::Callhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DialControlMib::Callhistorytable::Callhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
        callactivesetuptime.value_namespace = name_space;
        callactivesetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
        callactiveindex.value_namespace = name_space;
        callactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryCallOrigin")
    {
        callhistorycallorigin = value;
        callhistorycallorigin.value_namespace = name_space;
        callhistorycallorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryChargedUnits")
    {
        callhistorychargedunits = value;
        callhistorychargedunits.value_namespace = name_space;
        callhistorychargedunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryConnectTime")
    {
        callhistoryconnecttime = value;
        callhistoryconnecttime.value_namespace = name_space;
        callhistoryconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryDisconnectCause")
    {
        callhistorydisconnectcause = value;
        callhistorydisconnectcause.value_namespace = name_space;
        callhistorydisconnectcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryDisconnectText")
    {
        callhistorydisconnecttext = value;
        callhistorydisconnecttext.value_namespace = name_space;
        callhistorydisconnecttext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryDisconnectTime")
    {
        callhistorydisconnecttime = value;
        callhistorydisconnecttime.value_namespace = name_space;
        callhistorydisconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryInfoType")
    {
        callhistoryinfotype = value;
        callhistoryinfotype.value_namespace = name_space;
        callhistoryinfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryLogicalIfIndex")
    {
        callhistorylogicalifindex = value;
        callhistorylogicalifindex.value_namespace = name_space;
        callhistorylogicalifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryPeerAddress")
    {
        callhistorypeeraddress = value;
        callhistorypeeraddress.value_namespace = name_space;
        callhistorypeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryPeerId")
    {
        callhistorypeerid = value;
        callhistorypeerid.value_namespace = name_space;
        callhistorypeerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryPeerIfIndex")
    {
        callhistorypeerifindex = value;
        callhistorypeerifindex.value_namespace = name_space;
        callhistorypeerifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryPeerSubAddress")
    {
        callhistorypeersubaddress = value;
        callhistorypeersubaddress.value_namespace = name_space;
        callhistorypeersubaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryReceiveBytes")
    {
        callhistoryreceivebytes = value;
        callhistoryreceivebytes.value_namespace = name_space;
        callhistoryreceivebytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryReceivePackets")
    {
        callhistoryreceivepackets = value;
        callhistoryreceivepackets.value_namespace = name_space;
        callhistoryreceivepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryTransmitBytes")
    {
        callhistorytransmitbytes = value;
        callhistorytransmitbytes.value_namespace = name_space;
        callhistorytransmitbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryTransmitPackets")
    {
        callhistorytransmitpackets = value;
        callhistorytransmitpackets.value_namespace = name_space;
        callhistorytransmitpackets.value_namespace_prefix = name_space_prefix;
    }
}

void DialControlMib::Callhistorytable::Callhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "callHistoryCallOrigin")
    {
        callhistorycallorigin.yfilter = yfilter;
    }
    if(value_path == "callHistoryChargedUnits")
    {
        callhistorychargedunits.yfilter = yfilter;
    }
    if(value_path == "callHistoryConnectTime")
    {
        callhistoryconnecttime.yfilter = yfilter;
    }
    if(value_path == "callHistoryDisconnectCause")
    {
        callhistorydisconnectcause.yfilter = yfilter;
    }
    if(value_path == "callHistoryDisconnectText")
    {
        callhistorydisconnecttext.yfilter = yfilter;
    }
    if(value_path == "callHistoryDisconnectTime")
    {
        callhistorydisconnecttime.yfilter = yfilter;
    }
    if(value_path == "callHistoryInfoType")
    {
        callhistoryinfotype.yfilter = yfilter;
    }
    if(value_path == "callHistoryLogicalIfIndex")
    {
        callhistorylogicalifindex.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerAddress")
    {
        callhistorypeeraddress.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerId")
    {
        callhistorypeerid.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerIfIndex")
    {
        callhistorypeerifindex.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerSubAddress")
    {
        callhistorypeersubaddress.yfilter = yfilter;
    }
    if(value_path == "callHistoryReceiveBytes")
    {
        callhistoryreceivebytes.yfilter = yfilter;
    }
    if(value_path == "callHistoryReceivePackets")
    {
        callhistoryreceivepackets.yfilter = yfilter;
    }
    if(value_path == "callHistoryTransmitBytes")
    {
        callhistorytransmitbytes.yfilter = yfilter;
    }
    if(value_path == "callHistoryTransmitPackets")
    {
        callhistorytransmitpackets.yfilter = yfilter;
    }
}

bool DialControlMib::Callhistorytable::Callhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "callHistoryCallOrigin" || name == "callHistoryChargedUnits" || name == "callHistoryConnectTime" || name == "callHistoryDisconnectCause" || name == "callHistoryDisconnectText" || name == "callHistoryDisconnectTime" || name == "callHistoryInfoType" || name == "callHistoryLogicalIfIndex" || name == "callHistoryPeerAddress" || name == "callHistoryPeerId" || name == "callHistoryPeerIfIndex" || name == "callHistoryPeerSubAddress" || name == "callHistoryReceiveBytes" || name == "callHistoryReceivePackets" || name == "callHistoryTransmitBytes" || name == "callHistoryTransmitPackets")
        return true;
    return false;
}

const Enum::YLeaf DialControlMib::Dialctlconfiguration::Dialctlacceptmode::acceptNone {1, "acceptNone"};
const Enum::YLeaf DialControlMib::Dialctlconfiguration::Dialctlacceptmode::acceptAll {2, "acceptAll"};
const Enum::YLeaf DialControlMib::Dialctlconfiguration::Dialctlacceptmode::acceptKnown {3, "acceptKnown"};

const Enum::YLeaf DialControlMib::Dialctlconfiguration::Dialctltrapenable::enabled {1, "enabled"};
const Enum::YLeaf DialControlMib::Dialctlconfiguration::Dialctltrapenable::disabled {2, "disabled"};

const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::other {1, "other"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::speech {2, "speech"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::audio31 {6, "audio31"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::audio7 {7, "audio7"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::video {8, "video"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype::fax {10, "fax"};

const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgpermission::originate {1, "originate"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgpermission::answer {2, "answer"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgpermission::both {3, "both"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgpermission::callback {4, "callback"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgpermission::none {5, "none"};

const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgtrapenable::enabled {1, "enabled"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgtrapenable::disabled {2, "disabled"};

const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactivecallstate::unknown {1, "unknown"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactivecallstate::connecting {2, "connecting"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactivecallstate::connected {3, "connected"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactivecallstate::active {4, "active"};

const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactivecallorigin::originate {1, "originate"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactivecallorigin::answer {2, "answer"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactivecallorigin::callback {3, "callback"};

const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::other {1, "other"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::speech {2, "speech"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::audio31 {6, "audio31"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::audio7 {7, "audio7"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::video {8, "video"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype::fax {10, "fax"};

const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistorycallorigin::originate {1, "originate"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistorycallorigin::answer {2, "answer"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistorycallorigin::callback {3, "callback"};

const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::other {1, "other"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::speech {2, "speech"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::audio31 {6, "audio31"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::audio7 {7, "audio7"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::video {8, "video"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype::fax {10, "fax"};


}
}

