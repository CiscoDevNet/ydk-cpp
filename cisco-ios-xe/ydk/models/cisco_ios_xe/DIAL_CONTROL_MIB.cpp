
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DIAL_CONTROL_MIB.hpp"

namespace ydk {
namespace DIAL_CONTROL_MIB {

DialControlMib::DialControlMib()
    :
    callactivetable_(std::make_shared<DialControlMib::Callactivetable>())
	,callhistory_(std::make_shared<DialControlMib::Callhistory>())
	,callhistorytable_(std::make_shared<DialControlMib::Callhistorytable>())
	,dialctlconfiguration_(std::make_shared<DialControlMib::Dialctlconfiguration>())
	,dialctlpeercfgtable_(std::make_shared<DialControlMib::Dialctlpeercfgtable>())
{
    callactivetable_->parent = this;

    callhistory_->parent = this;

    callhistorytable_->parent = this;

    dialctlconfiguration_->parent = this;

    dialctlpeercfgtable_->parent = this;

    yang_name = "DIAL-CONTROL-MIB"; yang_parent_name = "DIAL-CONTROL-MIB";
}

DialControlMib::~DialControlMib()
{
}

bool DialControlMib::has_data() const
{
    return (callactivetable_ !=  nullptr && callactivetable_->has_data())
	|| (callhistory_ !=  nullptr && callhistory_->has_data())
	|| (callhistorytable_ !=  nullptr && callhistorytable_->has_data())
	|| (dialctlconfiguration_ !=  nullptr && dialctlconfiguration_->has_data())
	|| (dialctlpeercfgtable_ !=  nullptr && dialctlpeercfgtable_->has_data());
}

bool DialControlMib::has_operation() const
{
    return is_set(operation)
	|| (callactivetable_ !=  nullptr && callactivetable_->has_operation())
	|| (callhistory_ !=  nullptr && callhistory_->has_operation())
	|| (callhistorytable_ !=  nullptr && callhistorytable_->has_operation())
	|| (dialctlconfiguration_ !=  nullptr && dialctlconfiguration_->has_operation())
	|| (dialctlpeercfgtable_ !=  nullptr && dialctlpeercfgtable_->has_operation());
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
        if(callactivetable_ == nullptr)
        {
            callactivetable_ = std::make_shared<DialControlMib::Callactivetable>();
        }
        return callactivetable_;
    }

    if(child_yang_name == "callHistory")
    {
        if(callhistory_ == nullptr)
        {
            callhistory_ = std::make_shared<DialControlMib::Callhistory>();
        }
        return callhistory_;
    }

    if(child_yang_name == "callHistoryTable")
    {
        if(callhistorytable_ == nullptr)
        {
            callhistorytable_ = std::make_shared<DialControlMib::Callhistorytable>();
        }
        return callhistorytable_;
    }

    if(child_yang_name == "dialCtlConfiguration")
    {
        if(dialctlconfiguration_ == nullptr)
        {
            dialctlconfiguration_ = std::make_shared<DialControlMib::Dialctlconfiguration>();
        }
        return dialctlconfiguration_;
    }

    if(child_yang_name == "dialCtlPeerCfgTable")
    {
        if(dialctlpeercfgtable_ == nullptr)
        {
            dialctlpeercfgtable_ = std::make_shared<DialControlMib::Dialctlpeercfgtable>();
        }
        return dialctlpeercfgtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(callactivetable_ != nullptr)
    {
        children["callActiveTable"] = callactivetable_;
    }

    if(callhistory_ != nullptr)
    {
        children["callHistory"] = callhistory_;
    }

    if(callhistorytable_ != nullptr)
    {
        children["callHistoryTable"] = callhistorytable_;
    }

    if(dialctlconfiguration_ != nullptr)
    {
        children["dialCtlConfiguration"] = dialctlconfiguration_;
    }

    if(dialctlpeercfgtable_ != nullptr)
    {
        children["dialCtlPeerCfgTable"] = dialctlpeercfgtable_;
    }

    return children;
}

void DialControlMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(dialctlacceptmode.operation)
	|| is_set(dialctltrapenable.operation);
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

    if (dialctlacceptmode.is_set || is_set(dialctlacceptmode.operation)) leaf_name_data.push_back(dialctlacceptmode.get_name_leafdata());
    if (dialctltrapenable.is_set || is_set(dialctltrapenable.operation)) leaf_name_data.push_back(dialctltrapenable.get_name_leafdata());


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

void DialControlMib::Dialctlconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dialCtlAcceptMode")
    {
        dialctlacceptmode = value;
    }
    if(value_path == "dialCtlTrapEnable")
    {
        dialctltrapenable = value;
    }
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
    return is_set(operation)
	|| is_set(callhistoryretaintimer.operation)
	|| is_set(callhistorytablemaxlength.operation);
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

    if (callhistoryretaintimer.is_set || is_set(callhistoryretaintimer.operation)) leaf_name_data.push_back(callhistoryretaintimer.get_name_leafdata());
    if (callhistorytablemaxlength.is_set || is_set(callhistorytablemaxlength.operation)) leaf_name_data.push_back(callhistorytablemaxlength.get_name_leafdata());


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

void DialControlMib::Callhistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "callHistoryRetainTimer")
    {
        callhistoryretaintimer = value;
    }
    if(value_path == "callHistoryTableMaxLength")
    {
        callhistorytablemaxlength = value;
    }
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
    for (std::size_t index=0; index<dialctlpeercfgentry_.size(); index++)
    {
        if(dialctlpeercfgentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DialControlMib::Dialctlpeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<dialctlpeercfgentry_.size(); index++)
    {
        if(dialctlpeercfgentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : dialctlpeercfgentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry>();
        c->parent = this;
        dialctlpeercfgentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Dialctlpeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dialctlpeercfgentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DialControlMib::Dialctlpeercfgtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(dialctlpeercfgid.operation)
	|| is_set(ifindex.operation)
	|| is_set(dialctlpeercfgansweraddress.operation)
	|| is_set(dialctlpeercfgcallretries.operation)
	|| is_set(dialctlpeercfgcarrierdelay.operation)
	|| is_set(dialctlpeercfgclosedusergroup.operation)
	|| is_set(dialctlpeercfgfailuredelay.operation)
	|| is_set(dialctlpeercfgiftype.operation)
	|| is_set(dialctlpeercfginactivitytimer.operation)
	|| is_set(dialctlpeercfginfotype.operation)
	|| is_set(dialctlpeercfglowerif.operation)
	|| is_set(dialctlpeercfgmaxduration.operation)
	|| is_set(dialctlpeercfgminduration.operation)
	|| is_set(dialctlpeercfgoriginateaddress.operation)
	|| is_set(dialctlpeercfgpermission.operation)
	|| is_set(dialctlpeercfgretrydelay.operation)
	|| is_set(dialctlpeercfgspeed.operation)
	|| is_set(dialctlpeercfgstatus.operation)
	|| is_set(dialctlpeercfgsubaddress.operation)
	|| is_set(dialctlpeercfgtrapenable.operation)
	|| is_set(dialctlpeerstatsacceptcalls.operation)
	|| is_set(dialctlpeerstatschargedunits.operation)
	|| is_set(dialctlpeerstatsconnecttime.operation)
	|| is_set(dialctlpeerstatsfailcalls.operation)
	|| is_set(dialctlpeerstatslastdisconnectcause.operation)
	|| is_set(dialctlpeerstatslastdisconnecttext.operation)
	|| is_set(dialctlpeerstatslastsetuptime.operation)
	|| is_set(dialctlpeerstatsrefusecalls.operation)
	|| is_set(dialctlpeerstatssuccesscalls.operation);
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

    if (dialctlpeercfgid.is_set || is_set(dialctlpeercfgid.operation)) leaf_name_data.push_back(dialctlpeercfgid.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dialctlpeercfgansweraddress.is_set || is_set(dialctlpeercfgansweraddress.operation)) leaf_name_data.push_back(dialctlpeercfgansweraddress.get_name_leafdata());
    if (dialctlpeercfgcallretries.is_set || is_set(dialctlpeercfgcallretries.operation)) leaf_name_data.push_back(dialctlpeercfgcallretries.get_name_leafdata());
    if (dialctlpeercfgcarrierdelay.is_set || is_set(dialctlpeercfgcarrierdelay.operation)) leaf_name_data.push_back(dialctlpeercfgcarrierdelay.get_name_leafdata());
    if (dialctlpeercfgclosedusergroup.is_set || is_set(dialctlpeercfgclosedusergroup.operation)) leaf_name_data.push_back(dialctlpeercfgclosedusergroup.get_name_leafdata());
    if (dialctlpeercfgfailuredelay.is_set || is_set(dialctlpeercfgfailuredelay.operation)) leaf_name_data.push_back(dialctlpeercfgfailuredelay.get_name_leafdata());
    if (dialctlpeercfgiftype.is_set || is_set(dialctlpeercfgiftype.operation)) leaf_name_data.push_back(dialctlpeercfgiftype.get_name_leafdata());
    if (dialctlpeercfginactivitytimer.is_set || is_set(dialctlpeercfginactivitytimer.operation)) leaf_name_data.push_back(dialctlpeercfginactivitytimer.get_name_leafdata());
    if (dialctlpeercfginfotype.is_set || is_set(dialctlpeercfginfotype.operation)) leaf_name_data.push_back(dialctlpeercfginfotype.get_name_leafdata());
    if (dialctlpeercfglowerif.is_set || is_set(dialctlpeercfglowerif.operation)) leaf_name_data.push_back(dialctlpeercfglowerif.get_name_leafdata());
    if (dialctlpeercfgmaxduration.is_set || is_set(dialctlpeercfgmaxduration.operation)) leaf_name_data.push_back(dialctlpeercfgmaxduration.get_name_leafdata());
    if (dialctlpeercfgminduration.is_set || is_set(dialctlpeercfgminduration.operation)) leaf_name_data.push_back(dialctlpeercfgminduration.get_name_leafdata());
    if (dialctlpeercfgoriginateaddress.is_set || is_set(dialctlpeercfgoriginateaddress.operation)) leaf_name_data.push_back(dialctlpeercfgoriginateaddress.get_name_leafdata());
    if (dialctlpeercfgpermission.is_set || is_set(dialctlpeercfgpermission.operation)) leaf_name_data.push_back(dialctlpeercfgpermission.get_name_leafdata());
    if (dialctlpeercfgretrydelay.is_set || is_set(dialctlpeercfgretrydelay.operation)) leaf_name_data.push_back(dialctlpeercfgretrydelay.get_name_leafdata());
    if (dialctlpeercfgspeed.is_set || is_set(dialctlpeercfgspeed.operation)) leaf_name_data.push_back(dialctlpeercfgspeed.get_name_leafdata());
    if (dialctlpeercfgstatus.is_set || is_set(dialctlpeercfgstatus.operation)) leaf_name_data.push_back(dialctlpeercfgstatus.get_name_leafdata());
    if (dialctlpeercfgsubaddress.is_set || is_set(dialctlpeercfgsubaddress.operation)) leaf_name_data.push_back(dialctlpeercfgsubaddress.get_name_leafdata());
    if (dialctlpeercfgtrapenable.is_set || is_set(dialctlpeercfgtrapenable.operation)) leaf_name_data.push_back(dialctlpeercfgtrapenable.get_name_leafdata());
    if (dialctlpeerstatsacceptcalls.is_set || is_set(dialctlpeerstatsacceptcalls.operation)) leaf_name_data.push_back(dialctlpeerstatsacceptcalls.get_name_leafdata());
    if (dialctlpeerstatschargedunits.is_set || is_set(dialctlpeerstatschargedunits.operation)) leaf_name_data.push_back(dialctlpeerstatschargedunits.get_name_leafdata());
    if (dialctlpeerstatsconnecttime.is_set || is_set(dialctlpeerstatsconnecttime.operation)) leaf_name_data.push_back(dialctlpeerstatsconnecttime.get_name_leafdata());
    if (dialctlpeerstatsfailcalls.is_set || is_set(dialctlpeerstatsfailcalls.operation)) leaf_name_data.push_back(dialctlpeerstatsfailcalls.get_name_leafdata());
    if (dialctlpeerstatslastdisconnectcause.is_set || is_set(dialctlpeerstatslastdisconnectcause.operation)) leaf_name_data.push_back(dialctlpeerstatslastdisconnectcause.get_name_leafdata());
    if (dialctlpeerstatslastdisconnecttext.is_set || is_set(dialctlpeerstatslastdisconnecttext.operation)) leaf_name_data.push_back(dialctlpeerstatslastdisconnecttext.get_name_leafdata());
    if (dialctlpeerstatslastsetuptime.is_set || is_set(dialctlpeerstatslastsetuptime.operation)) leaf_name_data.push_back(dialctlpeerstatslastsetuptime.get_name_leafdata());
    if (dialctlpeerstatsrefusecalls.is_set || is_set(dialctlpeerstatsrefusecalls.operation)) leaf_name_data.push_back(dialctlpeerstatsrefusecalls.get_name_leafdata());
    if (dialctlpeerstatssuccesscalls.is_set || is_set(dialctlpeerstatssuccesscalls.operation)) leaf_name_data.push_back(dialctlpeerstatssuccesscalls.get_name_leafdata());


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

void DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dialCtlPeerCfgId")
    {
        dialctlpeercfgid = value;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "dialCtlPeerCfgAnswerAddress")
    {
        dialctlpeercfgansweraddress = value;
    }
    if(value_path == "dialCtlPeerCfgCallRetries")
    {
        dialctlpeercfgcallretries = value;
    }
    if(value_path == "dialCtlPeerCfgCarrierDelay")
    {
        dialctlpeercfgcarrierdelay = value;
    }
    if(value_path == "dialCtlPeerCfgClosedUserGroup")
    {
        dialctlpeercfgclosedusergroup = value;
    }
    if(value_path == "dialCtlPeerCfgFailureDelay")
    {
        dialctlpeercfgfailuredelay = value;
    }
    if(value_path == "dialCtlPeerCfgIfType")
    {
        dialctlpeercfgiftype = value;
    }
    if(value_path == "dialCtlPeerCfgInactivityTimer")
    {
        dialctlpeercfginactivitytimer = value;
    }
    if(value_path == "dialCtlPeerCfgInfoType")
    {
        dialctlpeercfginfotype = value;
    }
    if(value_path == "dialCtlPeerCfgLowerIf")
    {
        dialctlpeercfglowerif = value;
    }
    if(value_path == "dialCtlPeerCfgMaxDuration")
    {
        dialctlpeercfgmaxduration = value;
    }
    if(value_path == "dialCtlPeerCfgMinDuration")
    {
        dialctlpeercfgminduration = value;
    }
    if(value_path == "dialCtlPeerCfgOriginateAddress")
    {
        dialctlpeercfgoriginateaddress = value;
    }
    if(value_path == "dialCtlPeerCfgPermission")
    {
        dialctlpeercfgpermission = value;
    }
    if(value_path == "dialCtlPeerCfgRetryDelay")
    {
        dialctlpeercfgretrydelay = value;
    }
    if(value_path == "dialCtlPeerCfgSpeed")
    {
        dialctlpeercfgspeed = value;
    }
    if(value_path == "dialCtlPeerCfgStatus")
    {
        dialctlpeercfgstatus = value;
    }
    if(value_path == "dialCtlPeerCfgSubAddress")
    {
        dialctlpeercfgsubaddress = value;
    }
    if(value_path == "dialCtlPeerCfgTrapEnable")
    {
        dialctlpeercfgtrapenable = value;
    }
    if(value_path == "dialCtlPeerStatsAcceptCalls")
    {
        dialctlpeerstatsacceptcalls = value;
    }
    if(value_path == "dialCtlPeerStatsChargedUnits")
    {
        dialctlpeerstatschargedunits = value;
    }
    if(value_path == "dialCtlPeerStatsConnectTime")
    {
        dialctlpeerstatsconnecttime = value;
    }
    if(value_path == "dialCtlPeerStatsFailCalls")
    {
        dialctlpeerstatsfailcalls = value;
    }
    if(value_path == "dialCtlPeerStatsLastDisconnectCause")
    {
        dialctlpeerstatslastdisconnectcause = value;
    }
    if(value_path == "dialCtlPeerStatsLastDisconnectText")
    {
        dialctlpeerstatslastdisconnecttext = value;
    }
    if(value_path == "dialCtlPeerStatsLastSetupTime")
    {
        dialctlpeerstatslastsetuptime = value;
    }
    if(value_path == "dialCtlPeerStatsRefuseCalls")
    {
        dialctlpeerstatsrefusecalls = value;
    }
    if(value_path == "dialCtlPeerStatsSuccessCalls")
    {
        dialctlpeerstatssuccesscalls = value;
    }
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
    for (std::size_t index=0; index<callactiveentry_.size(); index++)
    {
        if(callactiveentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DialControlMib::Callactivetable::has_operation() const
{
    for (std::size_t index=0; index<callactiveentry_.size(); index++)
    {
        if(callactiveentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : callactiveentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DialControlMib::Callactivetable::Callactiveentry>();
        c->parent = this;
        callactiveentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Callactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : callactiveentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DialControlMib::Callactivetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(callactivesetuptime.operation)
	|| is_set(callactiveindex.operation)
	|| is_set(callactivecallorigin.operation)
	|| is_set(callactivecallstate.operation)
	|| is_set(callactivechargedunits.operation)
	|| is_set(callactiveconnecttime.operation)
	|| is_set(callactiveinfotype.operation)
	|| is_set(callactivelogicalifindex.operation)
	|| is_set(callactivepeeraddress.operation)
	|| is_set(callactivepeerid.operation)
	|| is_set(callactivepeerifindex.operation)
	|| is_set(callactivepeersubaddress.operation)
	|| is_set(callactivereceivebytes.operation)
	|| is_set(callactivereceivepackets.operation)
	|| is_set(callactivetransmitbytes.operation)
	|| is_set(callactivetransmitpackets.operation);
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

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.operation)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.operation)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (callactivecallorigin.is_set || is_set(callactivecallorigin.operation)) leaf_name_data.push_back(callactivecallorigin.get_name_leafdata());
    if (callactivecallstate.is_set || is_set(callactivecallstate.operation)) leaf_name_data.push_back(callactivecallstate.get_name_leafdata());
    if (callactivechargedunits.is_set || is_set(callactivechargedunits.operation)) leaf_name_data.push_back(callactivechargedunits.get_name_leafdata());
    if (callactiveconnecttime.is_set || is_set(callactiveconnecttime.operation)) leaf_name_data.push_back(callactiveconnecttime.get_name_leafdata());
    if (callactiveinfotype.is_set || is_set(callactiveinfotype.operation)) leaf_name_data.push_back(callactiveinfotype.get_name_leafdata());
    if (callactivelogicalifindex.is_set || is_set(callactivelogicalifindex.operation)) leaf_name_data.push_back(callactivelogicalifindex.get_name_leafdata());
    if (callactivepeeraddress.is_set || is_set(callactivepeeraddress.operation)) leaf_name_data.push_back(callactivepeeraddress.get_name_leafdata());
    if (callactivepeerid.is_set || is_set(callactivepeerid.operation)) leaf_name_data.push_back(callactivepeerid.get_name_leafdata());
    if (callactivepeerifindex.is_set || is_set(callactivepeerifindex.operation)) leaf_name_data.push_back(callactivepeerifindex.get_name_leafdata());
    if (callactivepeersubaddress.is_set || is_set(callactivepeersubaddress.operation)) leaf_name_data.push_back(callactivepeersubaddress.get_name_leafdata());
    if (callactivereceivebytes.is_set || is_set(callactivereceivebytes.operation)) leaf_name_data.push_back(callactivereceivebytes.get_name_leafdata());
    if (callactivereceivepackets.is_set || is_set(callactivereceivepackets.operation)) leaf_name_data.push_back(callactivereceivepackets.get_name_leafdata());
    if (callactivetransmitbytes.is_set || is_set(callactivetransmitbytes.operation)) leaf_name_data.push_back(callactivetransmitbytes.get_name_leafdata());
    if (callactivetransmitpackets.is_set || is_set(callactivetransmitpackets.operation)) leaf_name_data.push_back(callactivetransmitpackets.get_name_leafdata());


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

void DialControlMib::Callactivetable::Callactiveentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
    }
    if(value_path == "callActiveCallOrigin")
    {
        callactivecallorigin = value;
    }
    if(value_path == "callActiveCallState")
    {
        callactivecallstate = value;
    }
    if(value_path == "callActiveChargedUnits")
    {
        callactivechargedunits = value;
    }
    if(value_path == "callActiveConnectTime")
    {
        callactiveconnecttime = value;
    }
    if(value_path == "callActiveInfoType")
    {
        callactiveinfotype = value;
    }
    if(value_path == "callActiveLogicalIfIndex")
    {
        callactivelogicalifindex = value;
    }
    if(value_path == "callActivePeerAddress")
    {
        callactivepeeraddress = value;
    }
    if(value_path == "callActivePeerId")
    {
        callactivepeerid = value;
    }
    if(value_path == "callActivePeerIfIndex")
    {
        callactivepeerifindex = value;
    }
    if(value_path == "callActivePeerSubAddress")
    {
        callactivepeersubaddress = value;
    }
    if(value_path == "callActiveReceiveBytes")
    {
        callactivereceivebytes = value;
    }
    if(value_path == "callActiveReceivePackets")
    {
        callactivereceivepackets = value;
    }
    if(value_path == "callActiveTransmitBytes")
    {
        callactivetransmitbytes = value;
    }
    if(value_path == "callActiveTransmitPackets")
    {
        callactivetransmitpackets = value;
    }
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
    for (std::size_t index=0; index<callhistoryentry_.size(); index++)
    {
        if(callhistoryentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DialControlMib::Callhistorytable::has_operation() const
{
    for (std::size_t index=0; index<callhistoryentry_.size(); index++)
    {
        if(callhistoryentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : callhistoryentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DialControlMib::Callhistorytable::Callhistoryentry>();
        c->parent = this;
        callhistoryentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DialControlMib::Callhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : callhistoryentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DialControlMib::Callhistorytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(callactivesetuptime.operation)
	|| is_set(callactiveindex.operation)
	|| is_set(callhistorycallorigin.operation)
	|| is_set(callhistorychargedunits.operation)
	|| is_set(callhistoryconnecttime.operation)
	|| is_set(callhistorydisconnectcause.operation)
	|| is_set(callhistorydisconnecttext.operation)
	|| is_set(callhistorydisconnecttime.operation)
	|| is_set(callhistoryinfotype.operation)
	|| is_set(callhistorylogicalifindex.operation)
	|| is_set(callhistorypeeraddress.operation)
	|| is_set(callhistorypeerid.operation)
	|| is_set(callhistorypeerifindex.operation)
	|| is_set(callhistorypeersubaddress.operation)
	|| is_set(callhistoryreceivebytes.operation)
	|| is_set(callhistoryreceivepackets.operation)
	|| is_set(callhistorytransmitbytes.operation)
	|| is_set(callhistorytransmitpackets.operation);
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

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.operation)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.operation)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (callhistorycallorigin.is_set || is_set(callhistorycallorigin.operation)) leaf_name_data.push_back(callhistorycallorigin.get_name_leafdata());
    if (callhistorychargedunits.is_set || is_set(callhistorychargedunits.operation)) leaf_name_data.push_back(callhistorychargedunits.get_name_leafdata());
    if (callhistoryconnecttime.is_set || is_set(callhistoryconnecttime.operation)) leaf_name_data.push_back(callhistoryconnecttime.get_name_leafdata());
    if (callhistorydisconnectcause.is_set || is_set(callhistorydisconnectcause.operation)) leaf_name_data.push_back(callhistorydisconnectcause.get_name_leafdata());
    if (callhistorydisconnecttext.is_set || is_set(callhistorydisconnecttext.operation)) leaf_name_data.push_back(callhistorydisconnecttext.get_name_leafdata());
    if (callhistorydisconnecttime.is_set || is_set(callhistorydisconnecttime.operation)) leaf_name_data.push_back(callhistorydisconnecttime.get_name_leafdata());
    if (callhistoryinfotype.is_set || is_set(callhistoryinfotype.operation)) leaf_name_data.push_back(callhistoryinfotype.get_name_leafdata());
    if (callhistorylogicalifindex.is_set || is_set(callhistorylogicalifindex.operation)) leaf_name_data.push_back(callhistorylogicalifindex.get_name_leafdata());
    if (callhistorypeeraddress.is_set || is_set(callhistorypeeraddress.operation)) leaf_name_data.push_back(callhistorypeeraddress.get_name_leafdata());
    if (callhistorypeerid.is_set || is_set(callhistorypeerid.operation)) leaf_name_data.push_back(callhistorypeerid.get_name_leafdata());
    if (callhistorypeerifindex.is_set || is_set(callhistorypeerifindex.operation)) leaf_name_data.push_back(callhistorypeerifindex.get_name_leafdata());
    if (callhistorypeersubaddress.is_set || is_set(callhistorypeersubaddress.operation)) leaf_name_data.push_back(callhistorypeersubaddress.get_name_leafdata());
    if (callhistoryreceivebytes.is_set || is_set(callhistoryreceivebytes.operation)) leaf_name_data.push_back(callhistoryreceivebytes.get_name_leafdata());
    if (callhistoryreceivepackets.is_set || is_set(callhistoryreceivepackets.operation)) leaf_name_data.push_back(callhistoryreceivepackets.get_name_leafdata());
    if (callhistorytransmitbytes.is_set || is_set(callhistorytransmitbytes.operation)) leaf_name_data.push_back(callhistorytransmitbytes.get_name_leafdata());
    if (callhistorytransmitpackets.is_set || is_set(callhistorytransmitpackets.operation)) leaf_name_data.push_back(callhistorytransmitpackets.get_name_leafdata());


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

void DialControlMib::Callhistorytable::Callhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
    }
    if(value_path == "callHistoryCallOrigin")
    {
        callhistorycallorigin = value;
    }
    if(value_path == "callHistoryChargedUnits")
    {
        callhistorychargedunits = value;
    }
    if(value_path == "callHistoryConnectTime")
    {
        callhistoryconnecttime = value;
    }
    if(value_path == "callHistoryDisconnectCause")
    {
        callhistorydisconnectcause = value;
    }
    if(value_path == "callHistoryDisconnectText")
    {
        callhistorydisconnecttext = value;
    }
    if(value_path == "callHistoryDisconnectTime")
    {
        callhistorydisconnecttime = value;
    }
    if(value_path == "callHistoryInfoType")
    {
        callhistoryinfotype = value;
    }
    if(value_path == "callHistoryLogicalIfIndex")
    {
        callhistorylogicalifindex = value;
    }
    if(value_path == "callHistoryPeerAddress")
    {
        callhistorypeeraddress = value;
    }
    if(value_path == "callHistoryPeerId")
    {
        callhistorypeerid = value;
    }
    if(value_path == "callHistoryPeerIfIndex")
    {
        callhistorypeerifindex = value;
    }
    if(value_path == "callHistoryPeerSubAddress")
    {
        callhistorypeersubaddress = value;
    }
    if(value_path == "callHistoryReceiveBytes")
    {
        callhistoryreceivebytes = value;
    }
    if(value_path == "callHistoryReceivePackets")
    {
        callhistoryreceivepackets = value;
    }
    if(value_path == "callHistoryTransmitBytes")
    {
        callhistorytransmitbytes = value;
    }
    if(value_path == "callHistoryTransmitPackets")
    {
        callhistorytransmitpackets = value;
    }
}

const Enum::YLeaf DialControlMib::Dialctlconfiguration::DialctlacceptmodeEnum::acceptNone {1, "acceptNone"};
const Enum::YLeaf DialControlMib::Dialctlconfiguration::DialctlacceptmodeEnum::acceptAll {2, "acceptAll"};
const Enum::YLeaf DialControlMib::Dialctlconfiguration::DialctlacceptmodeEnum::acceptKnown {3, "acceptKnown"};

const Enum::YLeaf DialControlMib::Dialctlconfiguration::DialctltrapenableEnum::enabled {1, "enabled"};
const Enum::YLeaf DialControlMib::Dialctlconfiguration::DialctltrapenableEnum::disabled {2, "disabled"};

const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::other {1, "other"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::speech {2, "speech"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::audio31 {6, "audio31"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::audio7 {7, "audio7"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::video {8, "video"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum::fax {10, "fax"};

const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgpermissionEnum::originate {1, "originate"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgpermissionEnum::answer {2, "answer"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgpermissionEnum::both {3, "both"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgpermissionEnum::callback {4, "callback"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgpermissionEnum::none {5, "none"};

const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgtrapenableEnum::enabled {1, "enabled"};
const Enum::YLeaf DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgtrapenableEnum::disabled {2, "disabled"};

const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactivecallstateEnum::unknown {1, "unknown"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactivecallstateEnum::connecting {2, "connecting"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactivecallstateEnum::connected {3, "connected"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactivecallstateEnum::active {4, "active"};

const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactivecalloriginEnum::originate {1, "originate"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactivecalloriginEnum::answer {2, "answer"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactivecalloriginEnum::callback {3, "callback"};

const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::other {1, "other"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::speech {2, "speech"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::audio31 {6, "audio31"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::audio7 {7, "audio7"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::video {8, "video"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum::fax {10, "fax"};

const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistorycalloriginEnum::originate {1, "originate"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistorycalloriginEnum::answer {2, "answer"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistorycalloriginEnum::callback {3, "callback"};

const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::other {1, "other"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::speech {2, "speech"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::audio31 {6, "audio31"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::audio7 {7, "audio7"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::video {8, "video"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum::fax {10, "fax"};


}
}

