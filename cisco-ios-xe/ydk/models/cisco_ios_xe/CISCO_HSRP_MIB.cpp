
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_HSRP_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoHsrpMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(chsrpconfigtimeout.operation);
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

    if (chsrpconfigtimeout.is_set || is_set(chsrpconfigtimeout.operation)) leaf_name_data.push_back(chsrpconfigtimeout.get_name_leafdata());


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

void CiscoHsrpMib::Chsrpglobalconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cHsrpConfigTimeout")
    {
        chsrpconfigtimeout = value;
    }
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
    return is_set(operation);
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

void CiscoHsrpMib::Chsrpgrptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(chsrpgrpnumber.operation)
	|| is_set(chsrpgrpactiverouter.operation)
	|| is_set(chsrpgrpauth.operation)
	|| is_set(chsrpgrpconfiguredhellotime.operation)
	|| is_set(chsrpgrpconfiguredholdtime.operation)
	|| is_set(chsrpgrpentryrowstatus.operation)
	|| is_set(chsrpgrpipnone.operation)
	|| is_set(chsrpgrplearnedhellotime.operation)
	|| is_set(chsrpgrplearnedholdtime.operation)
	|| is_set(chsrpgrppreempt.operation)
	|| is_set(chsrpgrppreemptdelay.operation)
	|| is_set(chsrpgrppriority.operation)
	|| is_set(chsrpgrpstandbyrouter.operation)
	|| is_set(chsrpgrpstandbystate.operation)
	|| is_set(chsrpgrpuseconfiguredtimers.operation)
	|| is_set(chsrpgrpuseconfigvirtualipaddr.operation)
	|| is_set(chsrpgrpvirtualipaddr.operation)
	|| is_set(chsrpgrpvirtualmacaddr.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.operation)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpgrpactiverouter.is_set || is_set(chsrpgrpactiverouter.operation)) leaf_name_data.push_back(chsrpgrpactiverouter.get_name_leafdata());
    if (chsrpgrpauth.is_set || is_set(chsrpgrpauth.operation)) leaf_name_data.push_back(chsrpgrpauth.get_name_leafdata());
    if (chsrpgrpconfiguredhellotime.is_set || is_set(chsrpgrpconfiguredhellotime.operation)) leaf_name_data.push_back(chsrpgrpconfiguredhellotime.get_name_leafdata());
    if (chsrpgrpconfiguredholdtime.is_set || is_set(chsrpgrpconfiguredholdtime.operation)) leaf_name_data.push_back(chsrpgrpconfiguredholdtime.get_name_leafdata());
    if (chsrpgrpentryrowstatus.is_set || is_set(chsrpgrpentryrowstatus.operation)) leaf_name_data.push_back(chsrpgrpentryrowstatus.get_name_leafdata());
    if (chsrpgrpipnone.is_set || is_set(chsrpgrpipnone.operation)) leaf_name_data.push_back(chsrpgrpipnone.get_name_leafdata());
    if (chsrpgrplearnedhellotime.is_set || is_set(chsrpgrplearnedhellotime.operation)) leaf_name_data.push_back(chsrpgrplearnedhellotime.get_name_leafdata());
    if (chsrpgrplearnedholdtime.is_set || is_set(chsrpgrplearnedholdtime.operation)) leaf_name_data.push_back(chsrpgrplearnedholdtime.get_name_leafdata());
    if (chsrpgrppreempt.is_set || is_set(chsrpgrppreempt.operation)) leaf_name_data.push_back(chsrpgrppreempt.get_name_leafdata());
    if (chsrpgrppreemptdelay.is_set || is_set(chsrpgrppreemptdelay.operation)) leaf_name_data.push_back(chsrpgrppreemptdelay.get_name_leafdata());
    if (chsrpgrppriority.is_set || is_set(chsrpgrppriority.operation)) leaf_name_data.push_back(chsrpgrppriority.get_name_leafdata());
    if (chsrpgrpstandbyrouter.is_set || is_set(chsrpgrpstandbyrouter.operation)) leaf_name_data.push_back(chsrpgrpstandbyrouter.get_name_leafdata());
    if (chsrpgrpstandbystate.is_set || is_set(chsrpgrpstandbystate.operation)) leaf_name_data.push_back(chsrpgrpstandbystate.get_name_leafdata());
    if (chsrpgrpuseconfiguredtimers.is_set || is_set(chsrpgrpuseconfiguredtimers.operation)) leaf_name_data.push_back(chsrpgrpuseconfiguredtimers.get_name_leafdata());
    if (chsrpgrpuseconfigvirtualipaddr.is_set || is_set(chsrpgrpuseconfigvirtualipaddr.operation)) leaf_name_data.push_back(chsrpgrpuseconfigvirtualipaddr.get_name_leafdata());
    if (chsrpgrpvirtualipaddr.is_set || is_set(chsrpgrpvirtualipaddr.operation)) leaf_name_data.push_back(chsrpgrpvirtualipaddr.get_name_leafdata());
    if (chsrpgrpvirtualmacaddr.is_set || is_set(chsrpgrpvirtualmacaddr.operation)) leaf_name_data.push_back(chsrpgrpvirtualmacaddr.get_name_leafdata());


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

void CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
    }
    if(value_path == "cHsrpGrpActiveRouter")
    {
        chsrpgrpactiverouter = value;
    }
    if(value_path == "cHsrpGrpAuth")
    {
        chsrpgrpauth = value;
    }
    if(value_path == "cHsrpGrpConfiguredHelloTime")
    {
        chsrpgrpconfiguredhellotime = value;
    }
    if(value_path == "cHsrpGrpConfiguredHoldTime")
    {
        chsrpgrpconfiguredholdtime = value;
    }
    if(value_path == "cHsrpGrpEntryRowStatus")
    {
        chsrpgrpentryrowstatus = value;
    }
    if(value_path == "cHsrpGrpIpNone")
    {
        chsrpgrpipnone = value;
    }
    if(value_path == "cHsrpGrpLearnedHelloTime")
    {
        chsrpgrplearnedhellotime = value;
    }
    if(value_path == "cHsrpGrpLearnedHoldTime")
    {
        chsrpgrplearnedholdtime = value;
    }
    if(value_path == "cHsrpGrpPreempt")
    {
        chsrpgrppreempt = value;
    }
    if(value_path == "cHsrpGrpPreemptDelay")
    {
        chsrpgrppreemptdelay = value;
    }
    if(value_path == "cHsrpGrpPriority")
    {
        chsrpgrppriority = value;
    }
    if(value_path == "cHsrpGrpStandbyRouter")
    {
        chsrpgrpstandbyrouter = value;
    }
    if(value_path == "cHsrpGrpStandbyState")
    {
        chsrpgrpstandbystate = value;
    }
    if(value_path == "cHsrpGrpUseConfiguredTimers")
    {
        chsrpgrpuseconfiguredtimers = value;
    }
    if(value_path == "cHsrpGrpUseConfigVirtualIpAddr")
    {
        chsrpgrpuseconfigvirtualipaddr = value;
    }
    if(value_path == "cHsrpGrpVirtualIpAddr")
    {
        chsrpgrpvirtualipaddr = value;
    }
    if(value_path == "cHsrpGrpVirtualMacAddr")
    {
        chsrpgrpvirtualmacaddr = value;
    }
}

const Enum::YLeaf HsrpstateEnum::initial {1, "initial"};
const Enum::YLeaf HsrpstateEnum::learn {2, "learn"};
const Enum::YLeaf HsrpstateEnum::listen {3, "listen"};
const Enum::YLeaf HsrpstateEnum::speak {4, "speak"};
const Enum::YLeaf HsrpstateEnum::standby {5, "standby"};
const Enum::YLeaf HsrpstateEnum::active {6, "active"};


}
}

