
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DIAL_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DIAL_CONTROL_MIB {

DIALCONTROLMIB::DIALCONTROLMIB()
    :
    dialctlconfiguration(std::make_shared<DIALCONTROLMIB::DialCtlConfiguration>())
    , callhistory(std::make_shared<DIALCONTROLMIB::CallHistory>())
    , dialctlpeercfgtable(std::make_shared<DIALCONTROLMIB::DialCtlPeerCfgTable>())
    , callactivetable(std::make_shared<DIALCONTROLMIB::CallActiveTable>())
    , callhistorytable(std::make_shared<DIALCONTROLMIB::CallHistoryTable>())
{
    dialctlconfiguration->parent = this;
    callhistory->parent = this;
    dialctlpeercfgtable->parent = this;
    callactivetable->parent = this;
    callhistorytable->parent = this;

    yang_name = "DIAL-CONTROL-MIB"; yang_parent_name = "DIAL-CONTROL-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DIALCONTROLMIB::~DIALCONTROLMIB()
{
}

bool DIALCONTROLMIB::has_data() const
{
    if (is_presence_container) return true;
    return (dialctlconfiguration !=  nullptr && dialctlconfiguration->has_data())
	|| (callhistory !=  nullptr && callhistory->has_data())
	|| (dialctlpeercfgtable !=  nullptr && dialctlpeercfgtable->has_data())
	|| (callactivetable !=  nullptr && callactivetable->has_data())
	|| (callhistorytable !=  nullptr && callhistorytable->has_data());
}

bool DIALCONTROLMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dialctlconfiguration !=  nullptr && dialctlconfiguration->has_operation())
	|| (callhistory !=  nullptr && callhistory->has_operation())
	|| (dialctlpeercfgtable !=  nullptr && dialctlpeercfgtable->has_operation())
	|| (callactivetable !=  nullptr && callactivetable->has_operation())
	|| (callhistorytable !=  nullptr && callhistorytable->has_operation());
}

std::string DIALCONTROLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialCtlConfiguration")
    {
        if(dialctlconfiguration == nullptr)
        {
            dialctlconfiguration = std::make_shared<DIALCONTROLMIB::DialCtlConfiguration>();
        }
        return dialctlconfiguration;
    }

    if(child_yang_name == "callHistory")
    {
        if(callhistory == nullptr)
        {
            callhistory = std::make_shared<DIALCONTROLMIB::CallHistory>();
        }
        return callhistory;
    }

    if(child_yang_name == "dialCtlPeerCfgTable")
    {
        if(dialctlpeercfgtable == nullptr)
        {
            dialctlpeercfgtable = std::make_shared<DIALCONTROLMIB::DialCtlPeerCfgTable>();
        }
        return dialctlpeercfgtable;
    }

    if(child_yang_name == "callActiveTable")
    {
        if(callactivetable == nullptr)
        {
            callactivetable = std::make_shared<DIALCONTROLMIB::CallActiveTable>();
        }
        return callactivetable;
    }

    if(child_yang_name == "callHistoryTable")
    {
        if(callhistorytable == nullptr)
        {
            callhistorytable = std::make_shared<DIALCONTROLMIB::CallHistoryTable>();
        }
        return callhistorytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dialctlconfiguration != nullptr)
    {
        _children["dialCtlConfiguration"] = dialctlconfiguration;
    }

    if(callhistory != nullptr)
    {
        _children["callHistory"] = callhistory;
    }

    if(dialctlpeercfgtable != nullptr)
    {
        _children["dialCtlPeerCfgTable"] = dialctlpeercfgtable;
    }

    if(callactivetable != nullptr)
    {
        _children["callActiveTable"] = callactivetable;
    }

    if(callhistorytable != nullptr)
    {
        _children["callHistoryTable"] = callhistorytable;
    }

    return _children;
}

void DIALCONTROLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIALCONTROLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::clone_ptr() const
{
    return std::make_shared<DIALCONTROLMIB>();
}

std::string DIALCONTROLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DIALCONTROLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DIALCONTROLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DIALCONTROLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DIALCONTROLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialCtlConfiguration" || name == "callHistory" || name == "dialCtlPeerCfgTable" || name == "callActiveTable" || name == "callHistoryTable")
        return true;
    return false;
}

DIALCONTROLMIB::DialCtlConfiguration::DialCtlConfiguration()
    :
    dialctlacceptmode{YType::enumeration, "dialCtlAcceptMode"},
    dialctltrapenable{YType::enumeration, "dialCtlTrapEnable"}
{

    yang_name = "dialCtlConfiguration"; yang_parent_name = "DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::DialCtlConfiguration::~DialCtlConfiguration()
{
}

bool DIALCONTROLMIB::DialCtlConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return dialctlacceptmode.is_set
	|| dialctltrapenable.is_set;
}

bool DIALCONTROLMIB::DialCtlConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dialctlacceptmode.yfilter)
	|| ydk::is_set(dialctltrapenable.yfilter);
}

std::string DIALCONTROLMIB::DialCtlConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::DialCtlConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialCtlConfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::DialCtlConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dialctlacceptmode.is_set || is_set(dialctlacceptmode.yfilter)) leaf_name_data.push_back(dialctlacceptmode.get_name_leafdata());
    if (dialctltrapenable.is_set || is_set(dialctltrapenable.yfilter)) leaf_name_data.push_back(dialctltrapenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::DialCtlConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::DialCtlConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIALCONTROLMIB::DialCtlConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void DIALCONTROLMIB::DialCtlConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool DIALCONTROLMIB::DialCtlConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialCtlAcceptMode" || name == "dialCtlTrapEnable")
        return true;
    return false;
}

DIALCONTROLMIB::CallHistory::CallHistory()
    :
    callhistorytablemaxlength{YType::int32, "callHistoryTableMaxLength"},
    callhistoryretaintimer{YType::int32, "callHistoryRetainTimer"}
{

    yang_name = "callHistory"; yang_parent_name = "DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::CallHistory::~CallHistory()
{
}

bool DIALCONTROLMIB::CallHistory::has_data() const
{
    if (is_presence_container) return true;
    return callhistorytablemaxlength.is_set
	|| callhistoryretaintimer.is_set;
}

bool DIALCONTROLMIB::CallHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callhistorytablemaxlength.yfilter)
	|| ydk::is_set(callhistoryretaintimer.yfilter);
}

std::string DIALCONTROLMIB::CallHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::CallHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::CallHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callhistorytablemaxlength.is_set || is_set(callhistorytablemaxlength.yfilter)) leaf_name_data.push_back(callhistorytablemaxlength.get_name_leafdata());
    if (callhistoryretaintimer.is_set || is_set(callhistoryretaintimer.yfilter)) leaf_name_data.push_back(callhistoryretaintimer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::CallHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::CallHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIALCONTROLMIB::CallHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callHistoryTableMaxLength")
    {
        callhistorytablemaxlength = value;
        callhistorytablemaxlength.value_namespace = name_space;
        callhistorytablemaxlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryRetainTimer")
    {
        callhistoryretaintimer = value;
        callhistoryretaintimer.value_namespace = name_space;
        callhistoryretaintimer.value_namespace_prefix = name_space_prefix;
    }
}

void DIALCONTROLMIB::CallHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callHistoryTableMaxLength")
    {
        callhistorytablemaxlength.yfilter = yfilter;
    }
    if(value_path == "callHistoryRetainTimer")
    {
        callhistoryretaintimer.yfilter = yfilter;
    }
}

bool DIALCONTROLMIB::CallHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callHistoryTableMaxLength" || name == "callHistoryRetainTimer")
        return true;
    return false;
}

DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgTable()
    :
    dialctlpeercfgentry(this, {"dialctlpeercfgid", "ifindex"})
{

    yang_name = "dialCtlPeerCfgTable"; yang_parent_name = "DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::DialCtlPeerCfgTable::~DialCtlPeerCfgTable()
{
}

bool DIALCONTROLMIB::DialCtlPeerCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dialctlpeercfgentry.len(); index++)
    {
        if(dialctlpeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIALCONTROLMIB::DialCtlPeerCfgTable::has_operation() const
{
    for (std::size_t index=0; index<dialctlpeercfgentry.len(); index++)
    {
        if(dialctlpeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIALCONTROLMIB::DialCtlPeerCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::DialCtlPeerCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialCtlPeerCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::DialCtlPeerCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::DialCtlPeerCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialCtlPeerCfgEntry")
    {
        auto ent_ = std::make_shared<DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry>();
        ent_->parent = this;
        dialctlpeercfgentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::DialCtlPeerCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dialctlpeercfgentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIALCONTROLMIB::DialCtlPeerCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIALCONTROLMIB::DialCtlPeerCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIALCONTROLMIB::DialCtlPeerCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialCtlPeerCfgEntry")
        return true;
    return false;
}

DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgEntry()
    :
    dialctlpeercfgid{YType::int32, "dialCtlPeerCfgId"},
    ifindex{YType::str, "ifIndex"},
    dialctlpeercfgiftype{YType::enumeration, "dialCtlPeerCfgIfType"},
    dialctlpeercfglowerif{YType::int32, "dialCtlPeerCfgLowerIf"},
    dialctlpeercfgoriginateaddress{YType::str, "dialCtlPeerCfgOriginateAddress"},
    dialctlpeercfgansweraddress{YType::str, "dialCtlPeerCfgAnswerAddress"},
    dialctlpeercfgsubaddress{YType::str, "dialCtlPeerCfgSubAddress"},
    dialctlpeercfgclosedusergroup{YType::str, "dialCtlPeerCfgClosedUserGroup"},
    dialctlpeercfgspeed{YType::int32, "dialCtlPeerCfgSpeed"},
    dialctlpeercfginfotype{YType::enumeration, "dialCtlPeerCfgInfoType"},
    dialctlpeercfgpermission{YType::enumeration, "dialCtlPeerCfgPermission"},
    dialctlpeercfginactivitytimer{YType::int32, "dialCtlPeerCfgInactivityTimer"},
    dialctlpeercfgminduration{YType::int32, "dialCtlPeerCfgMinDuration"},
    dialctlpeercfgmaxduration{YType::int32, "dialCtlPeerCfgMaxDuration"},
    dialctlpeercfgcarrierdelay{YType::int32, "dialCtlPeerCfgCarrierDelay"},
    dialctlpeercfgcallretries{YType::int32, "dialCtlPeerCfgCallRetries"},
    dialctlpeercfgretrydelay{YType::int32, "dialCtlPeerCfgRetryDelay"},
    dialctlpeercfgfailuredelay{YType::int32, "dialCtlPeerCfgFailureDelay"},
    dialctlpeercfgtrapenable{YType::enumeration, "dialCtlPeerCfgTrapEnable"},
    dialctlpeercfgstatus{YType::enumeration, "dialCtlPeerCfgStatus"},
    dialctlpeerstatsconnecttime{YType::uint32, "dialCtlPeerStatsConnectTime"},
    dialctlpeerstatschargedunits{YType::uint32, "dialCtlPeerStatsChargedUnits"},
    dialctlpeerstatssuccesscalls{YType::uint32, "dialCtlPeerStatsSuccessCalls"},
    dialctlpeerstatsfailcalls{YType::uint32, "dialCtlPeerStatsFailCalls"},
    dialctlpeerstatsacceptcalls{YType::uint32, "dialCtlPeerStatsAcceptCalls"},
    dialctlpeerstatsrefusecalls{YType::uint32, "dialCtlPeerStatsRefuseCalls"},
    dialctlpeerstatslastdisconnectcause{YType::str, "dialCtlPeerStatsLastDisconnectCause"},
    dialctlpeerstatslastdisconnecttext{YType::str, "dialCtlPeerStatsLastDisconnectText"},
    dialctlpeerstatslastsetuptime{YType::uint32, "dialCtlPeerStatsLastSetupTime"}
{

    yang_name = "dialCtlPeerCfgEntry"; yang_parent_name = "dialCtlPeerCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::~DialCtlPeerCfgEntry()
{
}

bool DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return dialctlpeercfgid.is_set
	|| ifindex.is_set
	|| dialctlpeercfgiftype.is_set
	|| dialctlpeercfglowerif.is_set
	|| dialctlpeercfgoriginateaddress.is_set
	|| dialctlpeercfgansweraddress.is_set
	|| dialctlpeercfgsubaddress.is_set
	|| dialctlpeercfgclosedusergroup.is_set
	|| dialctlpeercfgspeed.is_set
	|| dialctlpeercfginfotype.is_set
	|| dialctlpeercfgpermission.is_set
	|| dialctlpeercfginactivitytimer.is_set
	|| dialctlpeercfgminduration.is_set
	|| dialctlpeercfgmaxduration.is_set
	|| dialctlpeercfgcarrierdelay.is_set
	|| dialctlpeercfgcallretries.is_set
	|| dialctlpeercfgretrydelay.is_set
	|| dialctlpeercfgfailuredelay.is_set
	|| dialctlpeercfgtrapenable.is_set
	|| dialctlpeercfgstatus.is_set
	|| dialctlpeerstatsconnecttime.is_set
	|| dialctlpeerstatschargedunits.is_set
	|| dialctlpeerstatssuccesscalls.is_set
	|| dialctlpeerstatsfailcalls.is_set
	|| dialctlpeerstatsacceptcalls.is_set
	|| dialctlpeerstatsrefusecalls.is_set
	|| dialctlpeerstatslastdisconnectcause.is_set
	|| dialctlpeerstatslastdisconnecttext.is_set
	|| dialctlpeerstatslastsetuptime.is_set;
}

bool DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dialctlpeercfgid.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(dialctlpeercfgiftype.yfilter)
	|| ydk::is_set(dialctlpeercfglowerif.yfilter)
	|| ydk::is_set(dialctlpeercfgoriginateaddress.yfilter)
	|| ydk::is_set(dialctlpeercfgansweraddress.yfilter)
	|| ydk::is_set(dialctlpeercfgsubaddress.yfilter)
	|| ydk::is_set(dialctlpeercfgclosedusergroup.yfilter)
	|| ydk::is_set(dialctlpeercfgspeed.yfilter)
	|| ydk::is_set(dialctlpeercfginfotype.yfilter)
	|| ydk::is_set(dialctlpeercfgpermission.yfilter)
	|| ydk::is_set(dialctlpeercfginactivitytimer.yfilter)
	|| ydk::is_set(dialctlpeercfgminduration.yfilter)
	|| ydk::is_set(dialctlpeercfgmaxduration.yfilter)
	|| ydk::is_set(dialctlpeercfgcarrierdelay.yfilter)
	|| ydk::is_set(dialctlpeercfgcallretries.yfilter)
	|| ydk::is_set(dialctlpeercfgretrydelay.yfilter)
	|| ydk::is_set(dialctlpeercfgfailuredelay.yfilter)
	|| ydk::is_set(dialctlpeercfgtrapenable.yfilter)
	|| ydk::is_set(dialctlpeercfgstatus.yfilter)
	|| ydk::is_set(dialctlpeerstatsconnecttime.yfilter)
	|| ydk::is_set(dialctlpeerstatschargedunits.yfilter)
	|| ydk::is_set(dialctlpeerstatssuccesscalls.yfilter)
	|| ydk::is_set(dialctlpeerstatsfailcalls.yfilter)
	|| ydk::is_set(dialctlpeerstatsacceptcalls.yfilter)
	|| ydk::is_set(dialctlpeerstatsrefusecalls.yfilter)
	|| ydk::is_set(dialctlpeerstatslastdisconnectcause.yfilter)
	|| ydk::is_set(dialctlpeerstatslastdisconnecttext.yfilter)
	|| ydk::is_set(dialctlpeerstatslastsetuptime.yfilter);
}

std::string DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/dialCtlPeerCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialCtlPeerCfgEntry";
    ADD_KEY_TOKEN(dialctlpeercfgid, "dialCtlPeerCfgId");
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dialctlpeercfgid.is_set || is_set(dialctlpeercfgid.yfilter)) leaf_name_data.push_back(dialctlpeercfgid.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dialctlpeercfgiftype.is_set || is_set(dialctlpeercfgiftype.yfilter)) leaf_name_data.push_back(dialctlpeercfgiftype.get_name_leafdata());
    if (dialctlpeercfglowerif.is_set || is_set(dialctlpeercfglowerif.yfilter)) leaf_name_data.push_back(dialctlpeercfglowerif.get_name_leafdata());
    if (dialctlpeercfgoriginateaddress.is_set || is_set(dialctlpeercfgoriginateaddress.yfilter)) leaf_name_data.push_back(dialctlpeercfgoriginateaddress.get_name_leafdata());
    if (dialctlpeercfgansweraddress.is_set || is_set(dialctlpeercfgansweraddress.yfilter)) leaf_name_data.push_back(dialctlpeercfgansweraddress.get_name_leafdata());
    if (dialctlpeercfgsubaddress.is_set || is_set(dialctlpeercfgsubaddress.yfilter)) leaf_name_data.push_back(dialctlpeercfgsubaddress.get_name_leafdata());
    if (dialctlpeercfgclosedusergroup.is_set || is_set(dialctlpeercfgclosedusergroup.yfilter)) leaf_name_data.push_back(dialctlpeercfgclosedusergroup.get_name_leafdata());
    if (dialctlpeercfgspeed.is_set || is_set(dialctlpeercfgspeed.yfilter)) leaf_name_data.push_back(dialctlpeercfgspeed.get_name_leafdata());
    if (dialctlpeercfginfotype.is_set || is_set(dialctlpeercfginfotype.yfilter)) leaf_name_data.push_back(dialctlpeercfginfotype.get_name_leafdata());
    if (dialctlpeercfgpermission.is_set || is_set(dialctlpeercfgpermission.yfilter)) leaf_name_data.push_back(dialctlpeercfgpermission.get_name_leafdata());
    if (dialctlpeercfginactivitytimer.is_set || is_set(dialctlpeercfginactivitytimer.yfilter)) leaf_name_data.push_back(dialctlpeercfginactivitytimer.get_name_leafdata());
    if (dialctlpeercfgminduration.is_set || is_set(dialctlpeercfgminduration.yfilter)) leaf_name_data.push_back(dialctlpeercfgminduration.get_name_leafdata());
    if (dialctlpeercfgmaxduration.is_set || is_set(dialctlpeercfgmaxduration.yfilter)) leaf_name_data.push_back(dialctlpeercfgmaxduration.get_name_leafdata());
    if (dialctlpeercfgcarrierdelay.is_set || is_set(dialctlpeercfgcarrierdelay.yfilter)) leaf_name_data.push_back(dialctlpeercfgcarrierdelay.get_name_leafdata());
    if (dialctlpeercfgcallretries.is_set || is_set(dialctlpeercfgcallretries.yfilter)) leaf_name_data.push_back(dialctlpeercfgcallretries.get_name_leafdata());
    if (dialctlpeercfgretrydelay.is_set || is_set(dialctlpeercfgretrydelay.yfilter)) leaf_name_data.push_back(dialctlpeercfgretrydelay.get_name_leafdata());
    if (dialctlpeercfgfailuredelay.is_set || is_set(dialctlpeercfgfailuredelay.yfilter)) leaf_name_data.push_back(dialctlpeercfgfailuredelay.get_name_leafdata());
    if (dialctlpeercfgtrapenable.is_set || is_set(dialctlpeercfgtrapenable.yfilter)) leaf_name_data.push_back(dialctlpeercfgtrapenable.get_name_leafdata());
    if (dialctlpeercfgstatus.is_set || is_set(dialctlpeercfgstatus.yfilter)) leaf_name_data.push_back(dialctlpeercfgstatus.get_name_leafdata());
    if (dialctlpeerstatsconnecttime.is_set || is_set(dialctlpeerstatsconnecttime.yfilter)) leaf_name_data.push_back(dialctlpeerstatsconnecttime.get_name_leafdata());
    if (dialctlpeerstatschargedunits.is_set || is_set(dialctlpeerstatschargedunits.yfilter)) leaf_name_data.push_back(dialctlpeerstatschargedunits.get_name_leafdata());
    if (dialctlpeerstatssuccesscalls.is_set || is_set(dialctlpeerstatssuccesscalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatssuccesscalls.get_name_leafdata());
    if (dialctlpeerstatsfailcalls.is_set || is_set(dialctlpeerstatsfailcalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatsfailcalls.get_name_leafdata());
    if (dialctlpeerstatsacceptcalls.is_set || is_set(dialctlpeerstatsacceptcalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatsacceptcalls.get_name_leafdata());
    if (dialctlpeerstatsrefusecalls.is_set || is_set(dialctlpeerstatsrefusecalls.yfilter)) leaf_name_data.push_back(dialctlpeerstatsrefusecalls.get_name_leafdata());
    if (dialctlpeerstatslastdisconnectcause.is_set || is_set(dialctlpeerstatslastdisconnectcause.yfilter)) leaf_name_data.push_back(dialctlpeerstatslastdisconnectcause.get_name_leafdata());
    if (dialctlpeerstatslastdisconnecttext.is_set || is_set(dialctlpeerstatslastdisconnecttext.yfilter)) leaf_name_data.push_back(dialctlpeerstatslastdisconnecttext.get_name_leafdata());
    if (dialctlpeerstatslastsetuptime.is_set || is_set(dialctlpeerstatslastsetuptime.yfilter)) leaf_name_data.push_back(dialctlpeerstatslastsetuptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dialCtlPeerCfgIfType")
    {
        dialctlpeercfgiftype = value;
        dialctlpeercfgiftype.value_namespace = name_space;
        dialctlpeercfgiftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgLowerIf")
    {
        dialctlpeercfglowerif = value;
        dialctlpeercfglowerif.value_namespace = name_space;
        dialctlpeercfglowerif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgOriginateAddress")
    {
        dialctlpeercfgoriginateaddress = value;
        dialctlpeercfgoriginateaddress.value_namespace = name_space;
        dialctlpeercfgoriginateaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgAnswerAddress")
    {
        dialctlpeercfgansweraddress = value;
        dialctlpeercfgansweraddress.value_namespace = name_space;
        dialctlpeercfgansweraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgSubAddress")
    {
        dialctlpeercfgsubaddress = value;
        dialctlpeercfgsubaddress.value_namespace = name_space;
        dialctlpeercfgsubaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgClosedUserGroup")
    {
        dialctlpeercfgclosedusergroup = value;
        dialctlpeercfgclosedusergroup.value_namespace = name_space;
        dialctlpeercfgclosedusergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgSpeed")
    {
        dialctlpeercfgspeed = value;
        dialctlpeercfgspeed.value_namespace = name_space;
        dialctlpeercfgspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgInfoType")
    {
        dialctlpeercfginfotype = value;
        dialctlpeercfginfotype.value_namespace = name_space;
        dialctlpeercfginfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgPermission")
    {
        dialctlpeercfgpermission = value;
        dialctlpeercfgpermission.value_namespace = name_space;
        dialctlpeercfgpermission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgInactivityTimer")
    {
        dialctlpeercfginactivitytimer = value;
        dialctlpeercfginactivitytimer.value_namespace = name_space;
        dialctlpeercfginactivitytimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgMinDuration")
    {
        dialctlpeercfgminduration = value;
        dialctlpeercfgminduration.value_namespace = name_space;
        dialctlpeercfgminduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgMaxDuration")
    {
        dialctlpeercfgmaxduration = value;
        dialctlpeercfgmaxduration.value_namespace = name_space;
        dialctlpeercfgmaxduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgCarrierDelay")
    {
        dialctlpeercfgcarrierdelay = value;
        dialctlpeercfgcarrierdelay.value_namespace = name_space;
        dialctlpeercfgcarrierdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgCallRetries")
    {
        dialctlpeercfgcallretries = value;
        dialctlpeercfgcallretries.value_namespace = name_space;
        dialctlpeercfgcallretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgRetryDelay")
    {
        dialctlpeercfgretrydelay = value;
        dialctlpeercfgretrydelay.value_namespace = name_space;
        dialctlpeercfgretrydelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgFailureDelay")
    {
        dialctlpeercfgfailuredelay = value;
        dialctlpeercfgfailuredelay.value_namespace = name_space;
        dialctlpeercfgfailuredelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgTrapEnable")
    {
        dialctlpeercfgtrapenable = value;
        dialctlpeercfgtrapenable.value_namespace = name_space;
        dialctlpeercfgtrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerCfgStatus")
    {
        dialctlpeercfgstatus = value;
        dialctlpeercfgstatus.value_namespace = name_space;
        dialctlpeercfgstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsConnectTime")
    {
        dialctlpeerstatsconnecttime = value;
        dialctlpeerstatsconnecttime.value_namespace = name_space;
        dialctlpeerstatsconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsChargedUnits")
    {
        dialctlpeerstatschargedunits = value;
        dialctlpeerstatschargedunits.value_namespace = name_space;
        dialctlpeerstatschargedunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsSuccessCalls")
    {
        dialctlpeerstatssuccesscalls = value;
        dialctlpeerstatssuccesscalls.value_namespace = name_space;
        dialctlpeerstatssuccesscalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsFailCalls")
    {
        dialctlpeerstatsfailcalls = value;
        dialctlpeerstatsfailcalls.value_namespace = name_space;
        dialctlpeerstatsfailcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsAcceptCalls")
    {
        dialctlpeerstatsacceptcalls = value;
        dialctlpeerstatsacceptcalls.value_namespace = name_space;
        dialctlpeerstatsacceptcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialCtlPeerStatsRefuseCalls")
    {
        dialctlpeerstatsrefusecalls = value;
        dialctlpeerstatsrefusecalls.value_namespace = name_space;
        dialctlpeerstatsrefusecalls.value_namespace_prefix = name_space_prefix;
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
}

void DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dialCtlPeerCfgId")
    {
        dialctlpeercfgid.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgIfType")
    {
        dialctlpeercfgiftype.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgLowerIf")
    {
        dialctlpeercfglowerif.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgOriginateAddress")
    {
        dialctlpeercfgoriginateaddress.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgAnswerAddress")
    {
        dialctlpeercfgansweraddress.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgSubAddress")
    {
        dialctlpeercfgsubaddress.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgClosedUserGroup")
    {
        dialctlpeercfgclosedusergroup.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgSpeed")
    {
        dialctlpeercfgspeed.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgInfoType")
    {
        dialctlpeercfginfotype.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgPermission")
    {
        dialctlpeercfgpermission.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgInactivityTimer")
    {
        dialctlpeercfginactivitytimer.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgMinDuration")
    {
        dialctlpeercfgminduration.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgMaxDuration")
    {
        dialctlpeercfgmaxduration.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgCarrierDelay")
    {
        dialctlpeercfgcarrierdelay.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgCallRetries")
    {
        dialctlpeercfgcallretries.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgRetryDelay")
    {
        dialctlpeercfgretrydelay.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgFailureDelay")
    {
        dialctlpeercfgfailuredelay.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgTrapEnable")
    {
        dialctlpeercfgtrapenable.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerCfgStatus")
    {
        dialctlpeercfgstatus.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsConnectTime")
    {
        dialctlpeerstatsconnecttime.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsChargedUnits")
    {
        dialctlpeerstatschargedunits.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsSuccessCalls")
    {
        dialctlpeerstatssuccesscalls.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsFailCalls")
    {
        dialctlpeerstatsfailcalls.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsAcceptCalls")
    {
        dialctlpeerstatsacceptcalls.yfilter = yfilter;
    }
    if(value_path == "dialCtlPeerStatsRefuseCalls")
    {
        dialctlpeerstatsrefusecalls.yfilter = yfilter;
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
}

bool DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialCtlPeerCfgId" || name == "ifIndex" || name == "dialCtlPeerCfgIfType" || name == "dialCtlPeerCfgLowerIf" || name == "dialCtlPeerCfgOriginateAddress" || name == "dialCtlPeerCfgAnswerAddress" || name == "dialCtlPeerCfgSubAddress" || name == "dialCtlPeerCfgClosedUserGroup" || name == "dialCtlPeerCfgSpeed" || name == "dialCtlPeerCfgInfoType" || name == "dialCtlPeerCfgPermission" || name == "dialCtlPeerCfgInactivityTimer" || name == "dialCtlPeerCfgMinDuration" || name == "dialCtlPeerCfgMaxDuration" || name == "dialCtlPeerCfgCarrierDelay" || name == "dialCtlPeerCfgCallRetries" || name == "dialCtlPeerCfgRetryDelay" || name == "dialCtlPeerCfgFailureDelay" || name == "dialCtlPeerCfgTrapEnable" || name == "dialCtlPeerCfgStatus" || name == "dialCtlPeerStatsConnectTime" || name == "dialCtlPeerStatsChargedUnits" || name == "dialCtlPeerStatsSuccessCalls" || name == "dialCtlPeerStatsFailCalls" || name == "dialCtlPeerStatsAcceptCalls" || name == "dialCtlPeerStatsRefuseCalls" || name == "dialCtlPeerStatsLastDisconnectCause" || name == "dialCtlPeerStatsLastDisconnectText" || name == "dialCtlPeerStatsLastSetupTime")
        return true;
    return false;
}

DIALCONTROLMIB::CallActiveTable::CallActiveTable()
    :
    callactiveentry(this, {"callactivesetuptime", "callactiveindex"})
{

    yang_name = "callActiveTable"; yang_parent_name = "DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::CallActiveTable::~CallActiveTable()
{
}

bool DIALCONTROLMIB::CallActiveTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<callactiveentry.len(); index++)
    {
        if(callactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIALCONTROLMIB::CallActiveTable::has_operation() const
{
    for (std::size_t index=0; index<callactiveentry.len(); index++)
    {
        if(callactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIALCONTROLMIB::CallActiveTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::CallActiveTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callActiveTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::CallActiveTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::CallActiveTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callActiveEntry")
    {
        auto ent_ = std::make_shared<DIALCONTROLMIB::CallActiveTable::CallActiveEntry>();
        ent_->parent = this;
        callactiveentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::CallActiveTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : callactiveentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIALCONTROLMIB::CallActiveTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIALCONTROLMIB::CallActiveTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIALCONTROLMIB::CallActiveTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveEntry")
        return true;
    return false;
}

DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveEntry()
    :
    callactivesetuptime{YType::uint32, "callActiveSetupTime"},
    callactiveindex{YType::int32, "callActiveIndex"},
    callactivepeeraddress{YType::str, "callActivePeerAddress"},
    callactivepeersubaddress{YType::str, "callActivePeerSubAddress"},
    callactivepeerid{YType::int32, "callActivePeerId"},
    callactivepeerifindex{YType::int32, "callActivePeerIfIndex"},
    callactivelogicalifindex{YType::int32, "callActiveLogicalIfIndex"},
    callactiveconnecttime{YType::uint32, "callActiveConnectTime"},
    callactivecallstate{YType::enumeration, "callActiveCallState"},
    callactivecallorigin{YType::enumeration, "callActiveCallOrigin"},
    callactivechargedunits{YType::uint32, "callActiveChargedUnits"},
    callactiveinfotype{YType::enumeration, "callActiveInfoType"},
    callactivetransmitpackets{YType::uint32, "callActiveTransmitPackets"},
    callactivetransmitbytes{YType::uint32, "callActiveTransmitBytes"},
    callactivereceivepackets{YType::uint32, "callActiveReceivePackets"},
    callactivereceivebytes{YType::uint32, "callActiveReceiveBytes"}
{

    yang_name = "callActiveEntry"; yang_parent_name = "callActiveTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::CallActiveTable::CallActiveEntry::~CallActiveEntry()
{
}

bool DIALCONTROLMIB::CallActiveTable::CallActiveEntry::has_data() const
{
    if (is_presence_container) return true;
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| callactivepeeraddress.is_set
	|| callactivepeersubaddress.is_set
	|| callactivepeerid.is_set
	|| callactivepeerifindex.is_set
	|| callactivelogicalifindex.is_set
	|| callactiveconnecttime.is_set
	|| callactivecallstate.is_set
	|| callactivecallorigin.is_set
	|| callactivechargedunits.is_set
	|| callactiveinfotype.is_set
	|| callactivetransmitpackets.is_set
	|| callactivetransmitbytes.is_set
	|| callactivereceivepackets.is_set
	|| callactivereceivebytes.is_set;
}

bool DIALCONTROLMIB::CallActiveTable::CallActiveEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(callactivepeeraddress.yfilter)
	|| ydk::is_set(callactivepeersubaddress.yfilter)
	|| ydk::is_set(callactivepeerid.yfilter)
	|| ydk::is_set(callactivepeerifindex.yfilter)
	|| ydk::is_set(callactivelogicalifindex.yfilter)
	|| ydk::is_set(callactiveconnecttime.yfilter)
	|| ydk::is_set(callactivecallstate.yfilter)
	|| ydk::is_set(callactivecallorigin.yfilter)
	|| ydk::is_set(callactivechargedunits.yfilter)
	|| ydk::is_set(callactiveinfotype.yfilter)
	|| ydk::is_set(callactivetransmitpackets.yfilter)
	|| ydk::is_set(callactivetransmitbytes.yfilter)
	|| ydk::is_set(callactivereceivepackets.yfilter)
	|| ydk::is_set(callactivereceivebytes.yfilter);
}

std::string DIALCONTROLMIB::CallActiveTable::CallActiveEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/callActiveTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::CallActiveTable::CallActiveEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callActiveEntry";
    ADD_KEY_TOKEN(callactivesetuptime, "callActiveSetupTime");
    ADD_KEY_TOKEN(callactiveindex, "callActiveIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::CallActiveTable::CallActiveEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (callactivepeeraddress.is_set || is_set(callactivepeeraddress.yfilter)) leaf_name_data.push_back(callactivepeeraddress.get_name_leafdata());
    if (callactivepeersubaddress.is_set || is_set(callactivepeersubaddress.yfilter)) leaf_name_data.push_back(callactivepeersubaddress.get_name_leafdata());
    if (callactivepeerid.is_set || is_set(callactivepeerid.yfilter)) leaf_name_data.push_back(callactivepeerid.get_name_leafdata());
    if (callactivepeerifindex.is_set || is_set(callactivepeerifindex.yfilter)) leaf_name_data.push_back(callactivepeerifindex.get_name_leafdata());
    if (callactivelogicalifindex.is_set || is_set(callactivelogicalifindex.yfilter)) leaf_name_data.push_back(callactivelogicalifindex.get_name_leafdata());
    if (callactiveconnecttime.is_set || is_set(callactiveconnecttime.yfilter)) leaf_name_data.push_back(callactiveconnecttime.get_name_leafdata());
    if (callactivecallstate.is_set || is_set(callactivecallstate.yfilter)) leaf_name_data.push_back(callactivecallstate.get_name_leafdata());
    if (callactivecallorigin.is_set || is_set(callactivecallorigin.yfilter)) leaf_name_data.push_back(callactivecallorigin.get_name_leafdata());
    if (callactivechargedunits.is_set || is_set(callactivechargedunits.yfilter)) leaf_name_data.push_back(callactivechargedunits.get_name_leafdata());
    if (callactiveinfotype.is_set || is_set(callactiveinfotype.yfilter)) leaf_name_data.push_back(callactiveinfotype.get_name_leafdata());
    if (callactivetransmitpackets.is_set || is_set(callactivetransmitpackets.yfilter)) leaf_name_data.push_back(callactivetransmitpackets.get_name_leafdata());
    if (callactivetransmitbytes.is_set || is_set(callactivetransmitbytes.yfilter)) leaf_name_data.push_back(callactivetransmitbytes.get_name_leafdata());
    if (callactivereceivepackets.is_set || is_set(callactivereceivepackets.yfilter)) leaf_name_data.push_back(callactivereceivepackets.get_name_leafdata());
    if (callactivereceivebytes.is_set || is_set(callactivereceivebytes.yfilter)) leaf_name_data.push_back(callactivereceivebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::CallActiveTable::CallActiveEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::CallActiveTable::CallActiveEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIALCONTROLMIB::CallActiveTable::CallActiveEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "callActivePeerAddress")
    {
        callactivepeeraddress = value;
        callactivepeeraddress.value_namespace = name_space;
        callactivepeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActivePeerSubAddress")
    {
        callactivepeersubaddress = value;
        callactivepeersubaddress.value_namespace = name_space;
        callactivepeersubaddress.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "callActiveLogicalIfIndex")
    {
        callactivelogicalifindex = value;
        callactivelogicalifindex.value_namespace = name_space;
        callactivelogicalifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveConnectTime")
    {
        callactiveconnecttime = value;
        callactiveconnecttime.value_namespace = name_space;
        callactiveconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveCallState")
    {
        callactivecallstate = value;
        callactivecallstate.value_namespace = name_space;
        callactivecallstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveCallOrigin")
    {
        callactivecallorigin = value;
        callactivecallorigin.value_namespace = name_space;
        callactivecallorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveChargedUnits")
    {
        callactivechargedunits = value;
        callactivechargedunits.value_namespace = name_space;
        callactivechargedunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveInfoType")
    {
        callactiveinfotype = value;
        callactiveinfotype.value_namespace = name_space;
        callactiveinfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveTransmitPackets")
    {
        callactivetransmitpackets = value;
        callactivetransmitpackets.value_namespace = name_space;
        callactivetransmitpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveTransmitBytes")
    {
        callactivetransmitbytes = value;
        callactivetransmitbytes.value_namespace = name_space;
        callactivetransmitbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveReceivePackets")
    {
        callactivereceivepackets = value;
        callactivereceivepackets.value_namespace = name_space;
        callactivereceivepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveReceiveBytes")
    {
        callactivereceivebytes = value;
        callactivereceivebytes.value_namespace = name_space;
        callactivereceivebytes.value_namespace_prefix = name_space_prefix;
    }
}

void DIALCONTROLMIB::CallActiveTable::CallActiveEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "callActivePeerAddress")
    {
        callactivepeeraddress.yfilter = yfilter;
    }
    if(value_path == "callActivePeerSubAddress")
    {
        callactivepeersubaddress.yfilter = yfilter;
    }
    if(value_path == "callActivePeerId")
    {
        callactivepeerid.yfilter = yfilter;
    }
    if(value_path == "callActivePeerIfIndex")
    {
        callactivepeerifindex.yfilter = yfilter;
    }
    if(value_path == "callActiveLogicalIfIndex")
    {
        callactivelogicalifindex.yfilter = yfilter;
    }
    if(value_path == "callActiveConnectTime")
    {
        callactiveconnecttime.yfilter = yfilter;
    }
    if(value_path == "callActiveCallState")
    {
        callactivecallstate.yfilter = yfilter;
    }
    if(value_path == "callActiveCallOrigin")
    {
        callactivecallorigin.yfilter = yfilter;
    }
    if(value_path == "callActiveChargedUnits")
    {
        callactivechargedunits.yfilter = yfilter;
    }
    if(value_path == "callActiveInfoType")
    {
        callactiveinfotype.yfilter = yfilter;
    }
    if(value_path == "callActiveTransmitPackets")
    {
        callactivetransmitpackets.yfilter = yfilter;
    }
    if(value_path == "callActiveTransmitBytes")
    {
        callactivetransmitbytes.yfilter = yfilter;
    }
    if(value_path == "callActiveReceivePackets")
    {
        callactivereceivepackets.yfilter = yfilter;
    }
    if(value_path == "callActiveReceiveBytes")
    {
        callactivereceivebytes.yfilter = yfilter;
    }
}

bool DIALCONTROLMIB::CallActiveTable::CallActiveEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "callActivePeerAddress" || name == "callActivePeerSubAddress" || name == "callActivePeerId" || name == "callActivePeerIfIndex" || name == "callActiveLogicalIfIndex" || name == "callActiveConnectTime" || name == "callActiveCallState" || name == "callActiveCallOrigin" || name == "callActiveChargedUnits" || name == "callActiveInfoType" || name == "callActiveTransmitPackets" || name == "callActiveTransmitBytes" || name == "callActiveReceivePackets" || name == "callActiveReceiveBytes")
        return true;
    return false;
}

DIALCONTROLMIB::CallHistoryTable::CallHistoryTable()
    :
    callhistoryentry(this, {"callactivesetuptime", "callactiveindex"})
{

    yang_name = "callHistoryTable"; yang_parent_name = "DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::CallHistoryTable::~CallHistoryTable()
{
}

bool DIALCONTROLMIB::CallHistoryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<callhistoryentry.len(); index++)
    {
        if(callhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool DIALCONTROLMIB::CallHistoryTable::has_operation() const
{
    for (std::size_t index=0; index<callhistoryentry.len(); index++)
    {
        if(callhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DIALCONTROLMIB::CallHistoryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::CallHistoryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::CallHistoryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::CallHistoryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callHistoryEntry")
    {
        auto ent_ = std::make_shared<DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry>();
        ent_->parent = this;
        callhistoryentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::CallHistoryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : callhistoryentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DIALCONTROLMIB::CallHistoryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DIALCONTROLMIB::CallHistoryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DIALCONTROLMIB::CallHistoryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callHistoryEntry")
        return true;
    return false;
}

DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryEntry()
    :
    callactivesetuptime{YType::str, "callActiveSetupTime"},
    callactiveindex{YType::str, "callActiveIndex"},
    callhistorypeeraddress{YType::str, "callHistoryPeerAddress"},
    callhistorypeersubaddress{YType::str, "callHistoryPeerSubAddress"},
    callhistorypeerid{YType::int32, "callHistoryPeerId"},
    callhistorypeerifindex{YType::int32, "callHistoryPeerIfIndex"},
    callhistorylogicalifindex{YType::int32, "callHistoryLogicalIfIndex"},
    callhistorydisconnectcause{YType::str, "callHistoryDisconnectCause"},
    callhistorydisconnecttext{YType::str, "callHistoryDisconnectText"},
    callhistoryconnecttime{YType::uint32, "callHistoryConnectTime"},
    callhistorydisconnecttime{YType::uint32, "callHistoryDisconnectTime"},
    callhistorycallorigin{YType::enumeration, "callHistoryCallOrigin"},
    callhistorychargedunits{YType::uint32, "callHistoryChargedUnits"},
    callhistoryinfotype{YType::enumeration, "callHistoryInfoType"},
    callhistorytransmitpackets{YType::uint32, "callHistoryTransmitPackets"},
    callhistorytransmitbytes{YType::uint32, "callHistoryTransmitBytes"},
    callhistoryreceivepackets{YType::uint32, "callHistoryReceivePackets"},
    callhistoryreceivebytes{YType::uint32, "callHistoryReceiveBytes"}
{

    yang_name = "callHistoryEntry"; yang_parent_name = "callHistoryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::~CallHistoryEntry()
{
}

bool DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::has_data() const
{
    if (is_presence_container) return true;
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| callhistorypeeraddress.is_set
	|| callhistorypeersubaddress.is_set
	|| callhistorypeerid.is_set
	|| callhistorypeerifindex.is_set
	|| callhistorylogicalifindex.is_set
	|| callhistorydisconnectcause.is_set
	|| callhistorydisconnecttext.is_set
	|| callhistoryconnecttime.is_set
	|| callhistorydisconnecttime.is_set
	|| callhistorycallorigin.is_set
	|| callhistorychargedunits.is_set
	|| callhistoryinfotype.is_set
	|| callhistorytransmitpackets.is_set
	|| callhistorytransmitbytes.is_set
	|| callhistoryreceivepackets.is_set
	|| callhistoryreceivebytes.is_set;
}

bool DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(callhistorypeeraddress.yfilter)
	|| ydk::is_set(callhistorypeersubaddress.yfilter)
	|| ydk::is_set(callhistorypeerid.yfilter)
	|| ydk::is_set(callhistorypeerifindex.yfilter)
	|| ydk::is_set(callhistorylogicalifindex.yfilter)
	|| ydk::is_set(callhistorydisconnectcause.yfilter)
	|| ydk::is_set(callhistorydisconnecttext.yfilter)
	|| ydk::is_set(callhistoryconnecttime.yfilter)
	|| ydk::is_set(callhistorydisconnecttime.yfilter)
	|| ydk::is_set(callhistorycallorigin.yfilter)
	|| ydk::is_set(callhistorychargedunits.yfilter)
	|| ydk::is_set(callhistoryinfotype.yfilter)
	|| ydk::is_set(callhistorytransmitpackets.yfilter)
	|| ydk::is_set(callhistorytransmitbytes.yfilter)
	|| ydk::is_set(callhistoryreceivepackets.yfilter)
	|| ydk::is_set(callhistoryreceivebytes.yfilter);
}

std::string DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DIAL-CONTROL-MIB:DIAL-CONTROL-MIB/callHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callHistoryEntry";
    ADD_KEY_TOKEN(callactivesetuptime, "callActiveSetupTime");
    ADD_KEY_TOKEN(callactiveindex, "callActiveIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (callhistorypeeraddress.is_set || is_set(callhistorypeeraddress.yfilter)) leaf_name_data.push_back(callhistorypeeraddress.get_name_leafdata());
    if (callhistorypeersubaddress.is_set || is_set(callhistorypeersubaddress.yfilter)) leaf_name_data.push_back(callhistorypeersubaddress.get_name_leafdata());
    if (callhistorypeerid.is_set || is_set(callhistorypeerid.yfilter)) leaf_name_data.push_back(callhistorypeerid.get_name_leafdata());
    if (callhistorypeerifindex.is_set || is_set(callhistorypeerifindex.yfilter)) leaf_name_data.push_back(callhistorypeerifindex.get_name_leafdata());
    if (callhistorylogicalifindex.is_set || is_set(callhistorylogicalifindex.yfilter)) leaf_name_data.push_back(callhistorylogicalifindex.get_name_leafdata());
    if (callhistorydisconnectcause.is_set || is_set(callhistorydisconnectcause.yfilter)) leaf_name_data.push_back(callhistorydisconnectcause.get_name_leafdata());
    if (callhistorydisconnecttext.is_set || is_set(callhistorydisconnecttext.yfilter)) leaf_name_data.push_back(callhistorydisconnecttext.get_name_leafdata());
    if (callhistoryconnecttime.is_set || is_set(callhistoryconnecttime.yfilter)) leaf_name_data.push_back(callhistoryconnecttime.get_name_leafdata());
    if (callhistorydisconnecttime.is_set || is_set(callhistorydisconnecttime.yfilter)) leaf_name_data.push_back(callhistorydisconnecttime.get_name_leafdata());
    if (callhistorycallorigin.is_set || is_set(callhistorycallorigin.yfilter)) leaf_name_data.push_back(callhistorycallorigin.get_name_leafdata());
    if (callhistorychargedunits.is_set || is_set(callhistorychargedunits.yfilter)) leaf_name_data.push_back(callhistorychargedunits.get_name_leafdata());
    if (callhistoryinfotype.is_set || is_set(callhistoryinfotype.yfilter)) leaf_name_data.push_back(callhistoryinfotype.get_name_leafdata());
    if (callhistorytransmitpackets.is_set || is_set(callhistorytransmitpackets.yfilter)) leaf_name_data.push_back(callhistorytransmitpackets.get_name_leafdata());
    if (callhistorytransmitbytes.is_set || is_set(callhistorytransmitbytes.yfilter)) leaf_name_data.push_back(callhistorytransmitbytes.get_name_leafdata());
    if (callhistoryreceivepackets.is_set || is_set(callhistoryreceivepackets.yfilter)) leaf_name_data.push_back(callhistoryreceivepackets.get_name_leafdata());
    if (callhistoryreceivebytes.is_set || is_set(callhistoryreceivebytes.yfilter)) leaf_name_data.push_back(callhistoryreceivebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "callHistoryPeerAddress")
    {
        callhistorypeeraddress = value;
        callhistorypeeraddress.value_namespace = name_space;
        callhistorypeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryPeerSubAddress")
    {
        callhistorypeersubaddress = value;
        callhistorypeersubaddress.value_namespace = name_space;
        callhistorypeersubaddress.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "callHistoryLogicalIfIndex")
    {
        callhistorylogicalifindex = value;
        callhistorylogicalifindex.value_namespace = name_space;
        callhistorylogicalifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "callHistoryConnectTime")
    {
        callhistoryconnecttime = value;
        callhistoryconnecttime.value_namespace = name_space;
        callhistoryconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryDisconnectTime")
    {
        callhistorydisconnecttime = value;
        callhistorydisconnecttime.value_namespace = name_space;
        callhistorydisconnecttime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "callHistoryInfoType")
    {
        callhistoryinfotype = value;
        callhistoryinfotype.value_namespace = name_space;
        callhistoryinfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryTransmitPackets")
    {
        callhistorytransmitpackets = value;
        callhistorytransmitpackets.value_namespace = name_space;
        callhistorytransmitpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryTransmitBytes")
    {
        callhistorytransmitbytes = value;
        callhistorytransmitbytes.value_namespace = name_space;
        callhistorytransmitbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryReceivePackets")
    {
        callhistoryreceivepackets = value;
        callhistoryreceivepackets.value_namespace = name_space;
        callhistoryreceivepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callHistoryReceiveBytes")
    {
        callhistoryreceivebytes = value;
        callhistoryreceivebytes.value_namespace = name_space;
        callhistoryreceivebytes.value_namespace_prefix = name_space_prefix;
    }
}

void DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerAddress")
    {
        callhistorypeeraddress.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerSubAddress")
    {
        callhistorypeersubaddress.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerId")
    {
        callhistorypeerid.yfilter = yfilter;
    }
    if(value_path == "callHistoryPeerIfIndex")
    {
        callhistorypeerifindex.yfilter = yfilter;
    }
    if(value_path == "callHistoryLogicalIfIndex")
    {
        callhistorylogicalifindex.yfilter = yfilter;
    }
    if(value_path == "callHistoryDisconnectCause")
    {
        callhistorydisconnectcause.yfilter = yfilter;
    }
    if(value_path == "callHistoryDisconnectText")
    {
        callhistorydisconnecttext.yfilter = yfilter;
    }
    if(value_path == "callHistoryConnectTime")
    {
        callhistoryconnecttime.yfilter = yfilter;
    }
    if(value_path == "callHistoryDisconnectTime")
    {
        callhistorydisconnecttime.yfilter = yfilter;
    }
    if(value_path == "callHistoryCallOrigin")
    {
        callhistorycallorigin.yfilter = yfilter;
    }
    if(value_path == "callHistoryChargedUnits")
    {
        callhistorychargedunits.yfilter = yfilter;
    }
    if(value_path == "callHistoryInfoType")
    {
        callhistoryinfotype.yfilter = yfilter;
    }
    if(value_path == "callHistoryTransmitPackets")
    {
        callhistorytransmitpackets.yfilter = yfilter;
    }
    if(value_path == "callHistoryTransmitBytes")
    {
        callhistorytransmitbytes.yfilter = yfilter;
    }
    if(value_path == "callHistoryReceivePackets")
    {
        callhistoryreceivepackets.yfilter = yfilter;
    }
    if(value_path == "callHistoryReceiveBytes")
    {
        callhistoryreceivebytes.yfilter = yfilter;
    }
}

bool DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "callHistoryPeerAddress" || name == "callHistoryPeerSubAddress" || name == "callHistoryPeerId" || name == "callHistoryPeerIfIndex" || name == "callHistoryLogicalIfIndex" || name == "callHistoryDisconnectCause" || name == "callHistoryDisconnectText" || name == "callHistoryConnectTime" || name == "callHistoryDisconnectTime" || name == "callHistoryCallOrigin" || name == "callHistoryChargedUnits" || name == "callHistoryInfoType" || name == "callHistoryTransmitPackets" || name == "callHistoryTransmitBytes" || name == "callHistoryReceivePackets" || name == "callHistoryReceiveBytes")
        return true;
    return false;
}

const Enum::YLeaf DIALCONTROLMIB::DialCtlConfiguration::DialCtlAcceptMode::acceptNone {1, "acceptNone"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlConfiguration::DialCtlAcceptMode::acceptAll {2, "acceptAll"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlConfiguration::DialCtlAcceptMode::acceptKnown {3, "acceptKnown"};

const Enum::YLeaf DIALCONTROLMIB::DialCtlConfiguration::DialCtlTrapEnable::enabled {1, "enabled"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlConfiguration::DialCtlTrapEnable::disabled {2, "disabled"};

const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::other {1, "other"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::speech {2, "speech"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::audio31 {6, "audio31"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::audio7 {7, "audio7"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::video {8, "video"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType::fax {10, "fax"};

const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgPermission::originate {1, "originate"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgPermission::answer {2, "answer"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgPermission::both {3, "both"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgPermission::callback {4, "callback"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgPermission::none {5, "none"};

const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgTrapEnable::enabled {1, "enabled"};
const Enum::YLeaf DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgTrapEnable::disabled {2, "disabled"};

const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallState::unknown {1, "unknown"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallState::connecting {2, "connecting"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallState::connected {3, "connected"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallState::active {4, "active"};

const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallOrigin::originate {1, "originate"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallOrigin::answer {2, "answer"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallOrigin::callback {3, "callback"};

const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::other {1, "other"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::speech {2, "speech"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::audio31 {6, "audio31"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::audio7 {7, "audio7"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::video {8, "video"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType::fax {10, "fax"};

const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryCallOrigin::originate {1, "originate"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryCallOrigin::answer {2, "answer"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryCallOrigin::callback {3, "callback"};

const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::other {1, "other"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::speech {2, "speech"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::audio31 {6, "audio31"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::audio7 {7, "audio7"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::video {8, "video"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType::fax {10, "fax"};


}
}

