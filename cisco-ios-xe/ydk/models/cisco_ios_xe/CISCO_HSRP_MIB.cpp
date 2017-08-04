
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_HSRP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_HSRP_MIB {

CiscoHsrpMib::CiscoHsrpMib()
    :
    chsrpglobalconfig(std::make_shared<CiscoHsrpMib::Chsrpglobalconfig>())
	,chsrpgrptable(std::make_shared<CiscoHsrpMib::Chsrpgrptable>())
{
    chsrpglobalconfig->parent = this;

    chsrpgrptable->parent = this;

    yang_name = "CISCO-HSRP-MIB"; yang_parent_name = "CISCO-HSRP-MIB";
}

CiscoHsrpMib::~CiscoHsrpMib()
{
}

bool CiscoHsrpMib::has_data() const
{
    return (chsrpglobalconfig !=  nullptr && chsrpglobalconfig->has_data())
	|| (chsrpgrptable !=  nullptr && chsrpgrptable->has_data());
}

bool CiscoHsrpMib::has_operation() const
{
    return is_set(yfilter)
	|| (chsrpglobalconfig !=  nullptr && chsrpglobalconfig->has_operation())
	|| (chsrpgrptable !=  nullptr && chsrpgrptable->has_operation());
}

std::string CiscoHsrpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoHsrpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoHsrpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpGlobalConfig")
    {
        if(chsrpglobalconfig == nullptr)
        {
            chsrpglobalconfig = std::make_shared<CiscoHsrpMib::Chsrpglobalconfig>();
        }
        return chsrpglobalconfig;
    }

    if(child_yang_name == "cHsrpGrpTable")
    {
        if(chsrpgrptable == nullptr)
        {
            chsrpgrptable = std::make_shared<CiscoHsrpMib::Chsrpgrptable>();
        }
        return chsrpgrptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chsrpglobalconfig != nullptr)
    {
        children["cHsrpGlobalConfig"] = chsrpglobalconfig;
    }

    if(chsrpgrptable != nullptr)
    {
        children["cHsrpGrpTable"] = chsrpgrptable;
    }

    return children;
}

void CiscoHsrpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoHsrpMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoHsrpMib::clone_ptr() const
{
    return std::make_shared<CiscoHsrpMib>();
}

std::string CiscoHsrpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoHsrpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoHsrpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoHsrpMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoHsrpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpGlobalConfig" || name == "cHsrpGrpTable")
        return true;
    return false;
}

CiscoHsrpMib::Chsrpglobalconfig::Chsrpglobalconfig()
    :
    chsrpconfigtimeout{YType::uint32, "cHsrpConfigTimeout"}
{
    yang_name = "cHsrpGlobalConfig"; yang_parent_name = "CISCO-HSRP-MIB";
}

CiscoHsrpMib::Chsrpglobalconfig::~Chsrpglobalconfig()
{
}

bool CiscoHsrpMib::Chsrpglobalconfig::has_data() const
{
    return chsrpconfigtimeout.is_set;
}

bool CiscoHsrpMib::Chsrpglobalconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chsrpconfigtimeout.yfilter);
}

std::string CiscoHsrpMib::Chsrpglobalconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpGlobalConfig";

    return path_buffer.str();

}

const EntityPath CiscoHsrpMib::Chsrpglobalconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chsrpconfigtimeout.is_set || is_set(chsrpconfigtimeout.yfilter)) leaf_name_data.push_back(chsrpconfigtimeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpMib::Chsrpglobalconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpMib::Chsrpglobalconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoHsrpMib::Chsrpglobalconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cHsrpConfigTimeout")
    {
        chsrpconfigtimeout = value;
        chsrpconfigtimeout.value_namespace = name_space;
        chsrpconfigtimeout.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoHsrpMib::Chsrpglobalconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cHsrpConfigTimeout")
    {
        chsrpconfigtimeout.yfilter = yfilter;
    }
}

bool CiscoHsrpMib::Chsrpglobalconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpConfigTimeout")
        return true;
    return false;
}

CiscoHsrpMib::Chsrpgrptable::Chsrpgrptable()
{
    yang_name = "cHsrpGrpTable"; yang_parent_name = "CISCO-HSRP-MIB";
}

CiscoHsrpMib::Chsrpgrptable::~Chsrpgrptable()
{
}

bool CiscoHsrpMib::Chsrpgrptable::has_data() const
{
    for (std::size_t index=0; index<chsrpgrpentry.size(); index++)
    {
        if(chsrpgrpentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpMib::Chsrpgrptable::has_operation() const
{
    for (std::size_t index=0; index<chsrpgrpentry.size(); index++)
    {
        if(chsrpgrpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoHsrpMib::Chsrpgrptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpGrpTable";

    return path_buffer.str();

}

const EntityPath CiscoHsrpMib::Chsrpgrptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpMib::Chsrpgrptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpGrpEntry")
    {
        for(auto const & c : chsrpgrpentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry>();
        c->parent = this;
        chsrpgrpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpMib::Chsrpgrptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpgrpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpMib::Chsrpgrptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoHsrpMib::Chsrpgrptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoHsrpMib::Chsrpgrptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpGrpEntry")
        return true;
    return false;
}

CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::Chsrpgrpentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::uint32, "cHsrpGrpNumber"},
    chsrpgrpactiverouter{YType::str, "cHsrpGrpActiveRouter"},
    chsrpgrpauth{YType::str, "cHsrpGrpAuth"},
    chsrpgrpconfiguredhellotime{YType::uint32, "cHsrpGrpConfiguredHelloTime"},
    chsrpgrpconfiguredholdtime{YType::uint32, "cHsrpGrpConfiguredHoldTime"},
    chsrpgrpentryrowstatus{YType::enumeration, "cHsrpGrpEntryRowStatus"},
    chsrpgrpipnone{YType::boolean, "cHsrpGrpIpNone"},
    chsrpgrplearnedhellotime{YType::uint32, "cHsrpGrpLearnedHelloTime"},
    chsrpgrplearnedholdtime{YType::uint32, "cHsrpGrpLearnedHoldTime"},
    chsrpgrppreempt{YType::boolean, "cHsrpGrpPreempt"},
    chsrpgrppreemptdelay{YType::uint32, "cHsrpGrpPreemptDelay"},
    chsrpgrppriority{YType::uint32, "cHsrpGrpPriority"},
    chsrpgrpstandbyrouter{YType::str, "cHsrpGrpStandbyRouter"},
    chsrpgrpstandbystate{YType::enumeration, "cHsrpGrpStandbyState"},
    chsrpgrpuseconfiguredtimers{YType::boolean, "cHsrpGrpUseConfiguredTimers"},
    chsrpgrpuseconfigvirtualipaddr{YType::boolean, "cHsrpGrpUseConfigVirtualIpAddr"},
    chsrpgrpvirtualipaddr{YType::str, "cHsrpGrpVirtualIpAddr"},
    chsrpgrpvirtualmacaddr{YType::str, "cHsrpGrpVirtualMacAddr"}
{
    yang_name = "cHsrpGrpEntry"; yang_parent_name = "cHsrpGrpTable";
}

CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::~Chsrpgrpentry()
{
}

bool CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpgrpactiverouter.is_set
	|| chsrpgrpauth.is_set
	|| chsrpgrpconfiguredhellotime.is_set
	|| chsrpgrpconfiguredholdtime.is_set
	|| chsrpgrpentryrowstatus.is_set
	|| chsrpgrpipnone.is_set
	|| chsrpgrplearnedhellotime.is_set
	|| chsrpgrplearnedholdtime.is_set
	|| chsrpgrppreempt.is_set
	|| chsrpgrppreemptdelay.is_set
	|| chsrpgrppriority.is_set
	|| chsrpgrpstandbyrouter.is_set
	|| chsrpgrpstandbystate.is_set
	|| chsrpgrpuseconfiguredtimers.is_set
	|| chsrpgrpuseconfigvirtualipaddr.is_set
	|| chsrpgrpvirtualipaddr.is_set
	|| chsrpgrpvirtualmacaddr.is_set;
}

bool CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpgrpactiverouter.yfilter)
	|| ydk::is_set(chsrpgrpauth.yfilter)
	|| ydk::is_set(chsrpgrpconfiguredhellotime.yfilter)
	|| ydk::is_set(chsrpgrpconfiguredholdtime.yfilter)
	|| ydk::is_set(chsrpgrpentryrowstatus.yfilter)
	|| ydk::is_set(chsrpgrpipnone.yfilter)
	|| ydk::is_set(chsrpgrplearnedhellotime.yfilter)
	|| ydk::is_set(chsrpgrplearnedholdtime.yfilter)
	|| ydk::is_set(chsrpgrppreempt.yfilter)
	|| ydk::is_set(chsrpgrppreemptdelay.yfilter)
	|| ydk::is_set(chsrpgrppriority.yfilter)
	|| ydk::is_set(chsrpgrpstandbyrouter.yfilter)
	|| ydk::is_set(chsrpgrpstandbystate.yfilter)
	|| ydk::is_set(chsrpgrpuseconfiguredtimers.yfilter)
	|| ydk::is_set(chsrpgrpuseconfigvirtualipaddr.yfilter)
	|| ydk::is_set(chsrpgrpvirtualipaddr.yfilter)
	|| ydk::is_set(chsrpgrpvirtualmacaddr.yfilter);
}

std::string CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpGrpEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB/cHsrpGrpTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpgrpactiverouter.is_set || is_set(chsrpgrpactiverouter.yfilter)) leaf_name_data.push_back(chsrpgrpactiverouter.get_name_leafdata());
    if (chsrpgrpauth.is_set || is_set(chsrpgrpauth.yfilter)) leaf_name_data.push_back(chsrpgrpauth.get_name_leafdata());
    if (chsrpgrpconfiguredhellotime.is_set || is_set(chsrpgrpconfiguredhellotime.yfilter)) leaf_name_data.push_back(chsrpgrpconfiguredhellotime.get_name_leafdata());
    if (chsrpgrpconfiguredholdtime.is_set || is_set(chsrpgrpconfiguredholdtime.yfilter)) leaf_name_data.push_back(chsrpgrpconfiguredholdtime.get_name_leafdata());
    if (chsrpgrpentryrowstatus.is_set || is_set(chsrpgrpentryrowstatus.yfilter)) leaf_name_data.push_back(chsrpgrpentryrowstatus.get_name_leafdata());
    if (chsrpgrpipnone.is_set || is_set(chsrpgrpipnone.yfilter)) leaf_name_data.push_back(chsrpgrpipnone.get_name_leafdata());
    if (chsrpgrplearnedhellotime.is_set || is_set(chsrpgrplearnedhellotime.yfilter)) leaf_name_data.push_back(chsrpgrplearnedhellotime.get_name_leafdata());
    if (chsrpgrplearnedholdtime.is_set || is_set(chsrpgrplearnedholdtime.yfilter)) leaf_name_data.push_back(chsrpgrplearnedholdtime.get_name_leafdata());
    if (chsrpgrppreempt.is_set || is_set(chsrpgrppreempt.yfilter)) leaf_name_data.push_back(chsrpgrppreempt.get_name_leafdata());
    if (chsrpgrppreemptdelay.is_set || is_set(chsrpgrppreemptdelay.yfilter)) leaf_name_data.push_back(chsrpgrppreemptdelay.get_name_leafdata());
    if (chsrpgrppriority.is_set || is_set(chsrpgrppriority.yfilter)) leaf_name_data.push_back(chsrpgrppriority.get_name_leafdata());
    if (chsrpgrpstandbyrouter.is_set || is_set(chsrpgrpstandbyrouter.yfilter)) leaf_name_data.push_back(chsrpgrpstandbyrouter.get_name_leafdata());
    if (chsrpgrpstandbystate.is_set || is_set(chsrpgrpstandbystate.yfilter)) leaf_name_data.push_back(chsrpgrpstandbystate.get_name_leafdata());
    if (chsrpgrpuseconfiguredtimers.is_set || is_set(chsrpgrpuseconfiguredtimers.yfilter)) leaf_name_data.push_back(chsrpgrpuseconfiguredtimers.get_name_leafdata());
    if (chsrpgrpuseconfigvirtualipaddr.is_set || is_set(chsrpgrpuseconfigvirtualipaddr.yfilter)) leaf_name_data.push_back(chsrpgrpuseconfigvirtualipaddr.get_name_leafdata());
    if (chsrpgrpvirtualipaddr.is_set || is_set(chsrpgrpvirtualipaddr.yfilter)) leaf_name_data.push_back(chsrpgrpvirtualipaddr.get_name_leafdata());
    if (chsrpgrpvirtualmacaddr.is_set || is_set(chsrpgrpvirtualmacaddr.yfilter)) leaf_name_data.push_back(chsrpgrpvirtualmacaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
        chsrpgrpnumber.value_namespace = name_space;
        chsrpgrpnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpActiveRouter")
    {
        chsrpgrpactiverouter = value;
        chsrpgrpactiverouter.value_namespace = name_space;
        chsrpgrpactiverouter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpAuth")
    {
        chsrpgrpauth = value;
        chsrpgrpauth.value_namespace = name_space;
        chsrpgrpauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpConfiguredHelloTime")
    {
        chsrpgrpconfiguredhellotime = value;
        chsrpgrpconfiguredhellotime.value_namespace = name_space;
        chsrpgrpconfiguredhellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpConfiguredHoldTime")
    {
        chsrpgrpconfiguredholdtime = value;
        chsrpgrpconfiguredholdtime.value_namespace = name_space;
        chsrpgrpconfiguredholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpEntryRowStatus")
    {
        chsrpgrpentryrowstatus = value;
        chsrpgrpentryrowstatus.value_namespace = name_space;
        chsrpgrpentryrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpIpNone")
    {
        chsrpgrpipnone = value;
        chsrpgrpipnone.value_namespace = name_space;
        chsrpgrpipnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpLearnedHelloTime")
    {
        chsrpgrplearnedhellotime = value;
        chsrpgrplearnedhellotime.value_namespace = name_space;
        chsrpgrplearnedhellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpLearnedHoldTime")
    {
        chsrpgrplearnedholdtime = value;
        chsrpgrplearnedholdtime.value_namespace = name_space;
        chsrpgrplearnedholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpPreempt")
    {
        chsrpgrppreempt = value;
        chsrpgrppreempt.value_namespace = name_space;
        chsrpgrppreempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpPreemptDelay")
    {
        chsrpgrppreemptdelay = value;
        chsrpgrppreemptdelay.value_namespace = name_space;
        chsrpgrppreemptdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpPriority")
    {
        chsrpgrppriority = value;
        chsrpgrppriority.value_namespace = name_space;
        chsrpgrppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpStandbyRouter")
    {
        chsrpgrpstandbyrouter = value;
        chsrpgrpstandbyrouter.value_namespace = name_space;
        chsrpgrpstandbyrouter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpStandbyState")
    {
        chsrpgrpstandbystate = value;
        chsrpgrpstandbystate.value_namespace = name_space;
        chsrpgrpstandbystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpUseConfiguredTimers")
    {
        chsrpgrpuseconfiguredtimers = value;
        chsrpgrpuseconfiguredtimers.value_namespace = name_space;
        chsrpgrpuseconfiguredtimers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpUseConfigVirtualIpAddr")
    {
        chsrpgrpuseconfigvirtualipaddr = value;
        chsrpgrpuseconfigvirtualipaddr.value_namespace = name_space;
        chsrpgrpuseconfigvirtualipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpVirtualIpAddr")
    {
        chsrpgrpvirtualipaddr = value;
        chsrpgrpvirtualipaddr.value_namespace = name_space;
        chsrpgrpvirtualipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpVirtualMacAddr")
    {
        chsrpgrpvirtualmacaddr = value;
        chsrpgrpvirtualmacaddr.value_namespace = name_space;
        chsrpgrpvirtualmacaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpActiveRouter")
    {
        chsrpgrpactiverouter.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpAuth")
    {
        chsrpgrpauth.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpConfiguredHelloTime")
    {
        chsrpgrpconfiguredhellotime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpConfiguredHoldTime")
    {
        chsrpgrpconfiguredholdtime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpEntryRowStatus")
    {
        chsrpgrpentryrowstatus.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpIpNone")
    {
        chsrpgrpipnone.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpLearnedHelloTime")
    {
        chsrpgrplearnedhellotime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpLearnedHoldTime")
    {
        chsrpgrplearnedholdtime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpPreempt")
    {
        chsrpgrppreempt.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpPreemptDelay")
    {
        chsrpgrppreemptdelay.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpPriority")
    {
        chsrpgrppriority.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpStandbyRouter")
    {
        chsrpgrpstandbyrouter.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpStandbyState")
    {
        chsrpgrpstandbystate.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpUseConfiguredTimers")
    {
        chsrpgrpuseconfiguredtimers.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpUseConfigVirtualIpAddr")
    {
        chsrpgrpuseconfigvirtualipaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpVirtualIpAddr")
    {
        chsrpgrpvirtualipaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpVirtualMacAddr")
    {
        chsrpgrpvirtualmacaddr.yfilter = yfilter;
    }
}

bool CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpGrpActiveRouter" || name == "cHsrpGrpAuth" || name == "cHsrpGrpConfiguredHelloTime" || name == "cHsrpGrpConfiguredHoldTime" || name == "cHsrpGrpEntryRowStatus" || name == "cHsrpGrpIpNone" || name == "cHsrpGrpLearnedHelloTime" || name == "cHsrpGrpLearnedHoldTime" || name == "cHsrpGrpPreempt" || name == "cHsrpGrpPreemptDelay" || name == "cHsrpGrpPriority" || name == "cHsrpGrpStandbyRouter" || name == "cHsrpGrpStandbyState" || name == "cHsrpGrpUseConfiguredTimers" || name == "cHsrpGrpUseConfigVirtualIpAddr" || name == "cHsrpGrpVirtualIpAddr" || name == "cHsrpGrpVirtualMacAddr")
        return true;
    return false;
}

const Enum::YLeaf Hsrpstate::initial {1, "initial"};
const Enum::YLeaf Hsrpstate::learn {2, "learn"};
const Enum::YLeaf Hsrpstate::listen {3, "listen"};
const Enum::YLeaf Hsrpstate::speak {4, "speak"};
const Enum::YLeaf Hsrpstate::standby {5, "standby"};
const Enum::YLeaf Hsrpstate::active {6, "active"};


}
}
