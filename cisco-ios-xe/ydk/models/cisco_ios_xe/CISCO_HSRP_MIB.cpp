
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_HSRP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_HSRP_MIB {

CISCOHSRPMIB::CISCOHSRPMIB()
    :
    chsrpglobalconfig(std::make_shared<CISCOHSRPMIB::Chsrpglobalconfig>())
	,chsrpgrptable(std::make_shared<CISCOHSRPMIB::Chsrpgrptable>())
{
    chsrpglobalconfig->parent = this;
    chsrpgrptable->parent = this;

    yang_name = "CISCO-HSRP-MIB"; yang_parent_name = "CISCO-HSRP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOHSRPMIB::~CISCOHSRPMIB()
{
}

bool CISCOHSRPMIB::has_data() const
{
    return (chsrpglobalconfig !=  nullptr && chsrpglobalconfig->has_data())
	|| (chsrpgrptable !=  nullptr && chsrpgrptable->has_data());
}

bool CISCOHSRPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (chsrpglobalconfig !=  nullptr && chsrpglobalconfig->has_operation())
	|| (chsrpgrptable !=  nullptr && chsrpgrptable->has_operation());
}

std::string CISCOHSRPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpGlobalConfig")
    {
        if(chsrpglobalconfig == nullptr)
        {
            chsrpglobalconfig = std::make_shared<CISCOHSRPMIB::Chsrpglobalconfig>();
        }
        return chsrpglobalconfig;
    }

    if(child_yang_name == "cHsrpGrpTable")
    {
        if(chsrpgrptable == nullptr)
        {
            chsrpgrptable = std::make_shared<CISCOHSRPMIB::Chsrpgrptable>();
        }
        return chsrpgrptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void CISCOHSRPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOHSRPMIB::clone_ptr() const
{
    return std::make_shared<CISCOHSRPMIB>();
}

std::string CISCOHSRPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOHSRPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOHSRPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOHSRPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOHSRPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpGlobalConfig" || name == "cHsrpGrpTable")
        return true;
    return false;
}

CISCOHSRPMIB::Chsrpglobalconfig::Chsrpglobalconfig()
    :
    chsrpconfigtimeout{YType::uint32, "cHsrpConfigTimeout"}
{

    yang_name = "cHsrpGlobalConfig"; yang_parent_name = "CISCO-HSRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPMIB::Chsrpglobalconfig::~Chsrpglobalconfig()
{
}

bool CISCOHSRPMIB::Chsrpglobalconfig::has_data() const
{
    return chsrpconfigtimeout.is_set;
}

bool CISCOHSRPMIB::Chsrpglobalconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chsrpconfigtimeout.yfilter);
}

std::string CISCOHSRPMIB::Chsrpglobalconfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPMIB::Chsrpglobalconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpGlobalConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPMIB::Chsrpglobalconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chsrpconfigtimeout.is_set || is_set(chsrpconfigtimeout.yfilter)) leaf_name_data.push_back(chsrpconfigtimeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPMIB::Chsrpglobalconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPMIB::Chsrpglobalconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOHSRPMIB::Chsrpglobalconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cHsrpConfigTimeout")
    {
        chsrpconfigtimeout = value;
        chsrpconfigtimeout.value_namespace = name_space;
        chsrpconfigtimeout.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOHSRPMIB::Chsrpglobalconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cHsrpConfigTimeout")
    {
        chsrpconfigtimeout.yfilter = yfilter;
    }
}

bool CISCOHSRPMIB::Chsrpglobalconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpConfigTimeout")
        return true;
    return false;
}

CISCOHSRPMIB::Chsrpgrptable::Chsrpgrptable()
{

    yang_name = "cHsrpGrpTable"; yang_parent_name = "CISCO-HSRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPMIB::Chsrpgrptable::~Chsrpgrptable()
{
}

bool CISCOHSRPMIB::Chsrpgrptable::has_data() const
{
    for (std::size_t index=0; index<chsrpgrpentry.size(); index++)
    {
        if(chsrpgrpentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPMIB::Chsrpgrptable::has_operation() const
{
    for (std::size_t index=0; index<chsrpgrpentry.size(); index++)
    {
        if(chsrpgrpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPMIB::Chsrpgrptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPMIB::Chsrpgrptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpGrpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPMIB::Chsrpgrptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPMIB::Chsrpgrptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpGrpEntry")
    {
        auto c = std::make_shared<CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry>();
        c->parent = this;
        chsrpgrpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPMIB::Chsrpgrptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : chsrpgrpentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOHSRPMIB::Chsrpgrptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPMIB::Chsrpgrptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPMIB::Chsrpgrptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpGrpEntry")
        return true;
    return false;
}

CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::Chsrpgrpentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::uint32, "cHsrpGrpNumber"},
    chsrpgrpauth{YType::str, "cHsrpGrpAuth"},
    chsrpgrppriority{YType::uint32, "cHsrpGrpPriority"},
    chsrpgrppreempt{YType::boolean, "cHsrpGrpPreempt"},
    chsrpgrppreemptdelay{YType::uint32, "cHsrpGrpPreemptDelay"},
    chsrpgrpuseconfiguredtimers{YType::boolean, "cHsrpGrpUseConfiguredTimers"},
    chsrpgrpconfiguredhellotime{YType::uint32, "cHsrpGrpConfiguredHelloTime"},
    chsrpgrpconfiguredholdtime{YType::uint32, "cHsrpGrpConfiguredHoldTime"},
    chsrpgrplearnedhellotime{YType::uint32, "cHsrpGrpLearnedHelloTime"},
    chsrpgrplearnedholdtime{YType::uint32, "cHsrpGrpLearnedHoldTime"},
    chsrpgrpvirtualipaddr{YType::str, "cHsrpGrpVirtualIpAddr"},
    chsrpgrpuseconfigvirtualipaddr{YType::boolean, "cHsrpGrpUseConfigVirtualIpAddr"},
    chsrpgrpactiverouter{YType::str, "cHsrpGrpActiveRouter"},
    chsrpgrpstandbyrouter{YType::str, "cHsrpGrpStandbyRouter"},
    chsrpgrpstandbystate{YType::enumeration, "cHsrpGrpStandbyState"},
    chsrpgrpvirtualmacaddr{YType::str, "cHsrpGrpVirtualMacAddr"},
    chsrpgrpentryrowstatus{YType::enumeration, "cHsrpGrpEntryRowStatus"},
    chsrpgrpipnone{YType::boolean, "cHsrpGrpIpNone"}
{

    yang_name = "cHsrpGrpEntry"; yang_parent_name = "cHsrpGrpTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::~Chsrpgrpentry()
{
}

bool CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpgrpauth.is_set
	|| chsrpgrppriority.is_set
	|| chsrpgrppreempt.is_set
	|| chsrpgrppreemptdelay.is_set
	|| chsrpgrpuseconfiguredtimers.is_set
	|| chsrpgrpconfiguredhellotime.is_set
	|| chsrpgrpconfiguredholdtime.is_set
	|| chsrpgrplearnedhellotime.is_set
	|| chsrpgrplearnedholdtime.is_set
	|| chsrpgrpvirtualipaddr.is_set
	|| chsrpgrpuseconfigvirtualipaddr.is_set
	|| chsrpgrpactiverouter.is_set
	|| chsrpgrpstandbyrouter.is_set
	|| chsrpgrpstandbystate.is_set
	|| chsrpgrpvirtualmacaddr.is_set
	|| chsrpgrpentryrowstatus.is_set
	|| chsrpgrpipnone.is_set;
}

bool CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpgrpauth.yfilter)
	|| ydk::is_set(chsrpgrppriority.yfilter)
	|| ydk::is_set(chsrpgrppreempt.yfilter)
	|| ydk::is_set(chsrpgrppreemptdelay.yfilter)
	|| ydk::is_set(chsrpgrpuseconfiguredtimers.yfilter)
	|| ydk::is_set(chsrpgrpconfiguredhellotime.yfilter)
	|| ydk::is_set(chsrpgrpconfiguredholdtime.yfilter)
	|| ydk::is_set(chsrpgrplearnedhellotime.yfilter)
	|| ydk::is_set(chsrpgrplearnedholdtime.yfilter)
	|| ydk::is_set(chsrpgrpvirtualipaddr.yfilter)
	|| ydk::is_set(chsrpgrpuseconfigvirtualipaddr.yfilter)
	|| ydk::is_set(chsrpgrpactiverouter.yfilter)
	|| ydk::is_set(chsrpgrpstandbyrouter.yfilter)
	|| ydk::is_set(chsrpgrpstandbystate.yfilter)
	|| ydk::is_set(chsrpgrpvirtualmacaddr.yfilter)
	|| ydk::is_set(chsrpgrpentryrowstatus.yfilter)
	|| ydk::is_set(chsrpgrpipnone.yfilter);
}

std::string CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-MIB:CISCO-HSRP-MIB/cHsrpGrpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpGrpEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpgrpauth.is_set || is_set(chsrpgrpauth.yfilter)) leaf_name_data.push_back(chsrpgrpauth.get_name_leafdata());
    if (chsrpgrppriority.is_set || is_set(chsrpgrppriority.yfilter)) leaf_name_data.push_back(chsrpgrppriority.get_name_leafdata());
    if (chsrpgrppreempt.is_set || is_set(chsrpgrppreempt.yfilter)) leaf_name_data.push_back(chsrpgrppreempt.get_name_leafdata());
    if (chsrpgrppreemptdelay.is_set || is_set(chsrpgrppreemptdelay.yfilter)) leaf_name_data.push_back(chsrpgrppreemptdelay.get_name_leafdata());
    if (chsrpgrpuseconfiguredtimers.is_set || is_set(chsrpgrpuseconfiguredtimers.yfilter)) leaf_name_data.push_back(chsrpgrpuseconfiguredtimers.get_name_leafdata());
    if (chsrpgrpconfiguredhellotime.is_set || is_set(chsrpgrpconfiguredhellotime.yfilter)) leaf_name_data.push_back(chsrpgrpconfiguredhellotime.get_name_leafdata());
    if (chsrpgrpconfiguredholdtime.is_set || is_set(chsrpgrpconfiguredholdtime.yfilter)) leaf_name_data.push_back(chsrpgrpconfiguredholdtime.get_name_leafdata());
    if (chsrpgrplearnedhellotime.is_set || is_set(chsrpgrplearnedhellotime.yfilter)) leaf_name_data.push_back(chsrpgrplearnedhellotime.get_name_leafdata());
    if (chsrpgrplearnedholdtime.is_set || is_set(chsrpgrplearnedholdtime.yfilter)) leaf_name_data.push_back(chsrpgrplearnedholdtime.get_name_leafdata());
    if (chsrpgrpvirtualipaddr.is_set || is_set(chsrpgrpvirtualipaddr.yfilter)) leaf_name_data.push_back(chsrpgrpvirtualipaddr.get_name_leafdata());
    if (chsrpgrpuseconfigvirtualipaddr.is_set || is_set(chsrpgrpuseconfigvirtualipaddr.yfilter)) leaf_name_data.push_back(chsrpgrpuseconfigvirtualipaddr.get_name_leafdata());
    if (chsrpgrpactiverouter.is_set || is_set(chsrpgrpactiverouter.yfilter)) leaf_name_data.push_back(chsrpgrpactiverouter.get_name_leafdata());
    if (chsrpgrpstandbyrouter.is_set || is_set(chsrpgrpstandbyrouter.yfilter)) leaf_name_data.push_back(chsrpgrpstandbyrouter.get_name_leafdata());
    if (chsrpgrpstandbystate.is_set || is_set(chsrpgrpstandbystate.yfilter)) leaf_name_data.push_back(chsrpgrpstandbystate.get_name_leafdata());
    if (chsrpgrpvirtualmacaddr.is_set || is_set(chsrpgrpvirtualmacaddr.yfilter)) leaf_name_data.push_back(chsrpgrpvirtualmacaddr.get_name_leafdata());
    if (chsrpgrpentryrowstatus.is_set || is_set(chsrpgrpentryrowstatus.yfilter)) leaf_name_data.push_back(chsrpgrpentryrowstatus.get_name_leafdata());
    if (chsrpgrpipnone.is_set || is_set(chsrpgrpipnone.yfilter)) leaf_name_data.push_back(chsrpgrpipnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cHsrpGrpAuth")
    {
        chsrpgrpauth = value;
        chsrpgrpauth.value_namespace = name_space;
        chsrpgrpauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpPriority")
    {
        chsrpgrppriority = value;
        chsrpgrppriority.value_namespace = name_space;
        chsrpgrppriority.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cHsrpGrpUseConfiguredTimers")
    {
        chsrpgrpuseconfiguredtimers = value;
        chsrpgrpuseconfiguredtimers.value_namespace = name_space;
        chsrpgrpuseconfiguredtimers.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cHsrpGrpVirtualIpAddr")
    {
        chsrpgrpvirtualipaddr = value;
        chsrpgrpvirtualipaddr.value_namespace = name_space;
        chsrpgrpvirtualipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpUseConfigVirtualIpAddr")
    {
        chsrpgrpuseconfigvirtualipaddr = value;
        chsrpgrpuseconfigvirtualipaddr.value_namespace = name_space;
        chsrpgrpuseconfigvirtualipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpActiveRouter")
    {
        chsrpgrpactiverouter = value;
        chsrpgrpactiverouter.value_namespace = name_space;
        chsrpgrpactiverouter.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cHsrpGrpVirtualMacAddr")
    {
        chsrpgrpvirtualmacaddr = value;
        chsrpgrpvirtualmacaddr.value_namespace = name_space;
        chsrpgrpvirtualmacaddr.value_namespace_prefix = name_space_prefix;
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
}

void CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpAuth")
    {
        chsrpgrpauth.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpPriority")
    {
        chsrpgrppriority.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpPreempt")
    {
        chsrpgrppreempt.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpPreemptDelay")
    {
        chsrpgrppreemptdelay.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpUseConfiguredTimers")
    {
        chsrpgrpuseconfiguredtimers.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpConfiguredHelloTime")
    {
        chsrpgrpconfiguredhellotime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpConfiguredHoldTime")
    {
        chsrpgrpconfiguredholdtime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpLearnedHelloTime")
    {
        chsrpgrplearnedhellotime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpLearnedHoldTime")
    {
        chsrpgrplearnedholdtime.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpVirtualIpAddr")
    {
        chsrpgrpvirtualipaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpUseConfigVirtualIpAddr")
    {
        chsrpgrpuseconfigvirtualipaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpActiveRouter")
    {
        chsrpgrpactiverouter.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpStandbyRouter")
    {
        chsrpgrpstandbyrouter.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpStandbyState")
    {
        chsrpgrpstandbystate.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpVirtualMacAddr")
    {
        chsrpgrpvirtualmacaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpEntryRowStatus")
    {
        chsrpgrpentryrowstatus.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpIpNone")
    {
        chsrpgrpipnone.yfilter = yfilter;
    }
}

bool CISCOHSRPMIB::Chsrpgrptable::Chsrpgrpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpGrpAuth" || name == "cHsrpGrpPriority" || name == "cHsrpGrpPreempt" || name == "cHsrpGrpPreemptDelay" || name == "cHsrpGrpUseConfiguredTimers" || name == "cHsrpGrpConfiguredHelloTime" || name == "cHsrpGrpConfiguredHoldTime" || name == "cHsrpGrpLearnedHelloTime" || name == "cHsrpGrpLearnedHoldTime" || name == "cHsrpGrpVirtualIpAddr" || name == "cHsrpGrpUseConfigVirtualIpAddr" || name == "cHsrpGrpActiveRouter" || name == "cHsrpGrpStandbyRouter" || name == "cHsrpGrpStandbyState" || name == "cHsrpGrpVirtualMacAddr" || name == "cHsrpGrpEntryRowStatus" || name == "cHsrpGrpIpNone")
        return true;
    return false;
}

const Enum::YLeaf HsrpState::initial {1, "initial"};
const Enum::YLeaf HsrpState::learn {2, "learn"};
const Enum::YLeaf HsrpState::listen {3, "listen"};
const Enum::YLeaf HsrpState::speak {4, "speak"};
const Enum::YLeaf HsrpState::standby {5, "standby"};
const Enum::YLeaf HsrpState::active {6, "active"};


}
}

