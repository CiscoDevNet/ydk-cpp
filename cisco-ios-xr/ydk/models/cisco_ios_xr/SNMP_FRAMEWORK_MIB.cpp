
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_FRAMEWORK_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMP_FRAMEWORK_MIB {

SNMPFRAMEWORKMIB::SNMPFRAMEWORKMIB()
    :
    snmpengine(std::make_shared<SNMPFRAMEWORKMIB::Snmpengine>())
{
    snmpengine->parent = this;

    yang_name = "SNMP-FRAMEWORK-MIB"; yang_parent_name = "SNMP-FRAMEWORK-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

SNMPFRAMEWORKMIB::~SNMPFRAMEWORKMIB()
{
}

bool SNMPFRAMEWORKMIB::has_data() const
{
    return (snmpengine !=  nullptr && snmpengine->has_data());
}

bool SNMPFRAMEWORKMIB::has_operation() const
{
    return is_set(yfilter)
	|| (snmpengine !=  nullptr && snmpengine->has_operation());
}

std::string SNMPFRAMEWORKMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-FRAMEWORK-MIB:SNMP-FRAMEWORK-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPFRAMEWORKMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPFRAMEWORKMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpEngine")
    {
        if(snmpengine == nullptr)
        {
            snmpengine = std::make_shared<SNMPFRAMEWORKMIB::Snmpengine>();
        }
        return snmpengine;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPFRAMEWORKMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snmpengine != nullptr)
    {
        children["snmpEngine"] = snmpengine;
    }

    return children;
}

void SNMPFRAMEWORKMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPFRAMEWORKMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SNMPFRAMEWORKMIB::clone_ptr() const
{
    return std::make_shared<SNMPFRAMEWORKMIB>();
}

std::string SNMPFRAMEWORKMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SNMPFRAMEWORKMIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SNMPFRAMEWORKMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPFRAMEWORKMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SNMPFRAMEWORKMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpEngine")
        return true;
    return false;
}

SNMPFRAMEWORKMIB::Snmpengine::Snmpengine()
    :
    snmpengineid{YType::str, "snmpEngineID"},
    snmpengineboots{YType::int32, "snmpEngineBoots"},
    snmpenginetime{YType::int32, "snmpEngineTime"},
    snmpenginemaxmessagesize{YType::int32, "snmpEngineMaxMessageSize"}
{

    yang_name = "snmpEngine"; yang_parent_name = "SNMP-FRAMEWORK-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPFRAMEWORKMIB::Snmpengine::~Snmpengine()
{
}

bool SNMPFRAMEWORKMIB::Snmpengine::has_data() const
{
    return snmpengineid.is_set
	|| snmpengineboots.is_set
	|| snmpenginetime.is_set
	|| snmpenginemaxmessagesize.is_set;
}

bool SNMPFRAMEWORKMIB::Snmpengine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpengineid.yfilter)
	|| ydk::is_set(snmpengineboots.yfilter)
	|| ydk::is_set(snmpenginetime.yfilter)
	|| ydk::is_set(snmpenginemaxmessagesize.yfilter);
}

std::string SNMPFRAMEWORKMIB::Snmpengine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-FRAMEWORK-MIB:SNMP-FRAMEWORK-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPFRAMEWORKMIB::Snmpengine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpEngine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPFRAMEWORKMIB::Snmpengine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpengineid.is_set || is_set(snmpengineid.yfilter)) leaf_name_data.push_back(snmpengineid.get_name_leafdata());
    if (snmpengineboots.is_set || is_set(snmpengineboots.yfilter)) leaf_name_data.push_back(snmpengineboots.get_name_leafdata());
    if (snmpenginetime.is_set || is_set(snmpenginetime.yfilter)) leaf_name_data.push_back(snmpenginetime.get_name_leafdata());
    if (snmpenginemaxmessagesize.is_set || is_set(snmpenginemaxmessagesize.yfilter)) leaf_name_data.push_back(snmpenginemaxmessagesize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPFRAMEWORKMIB::Snmpengine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPFRAMEWORKMIB::Snmpengine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SNMPFRAMEWORKMIB::Snmpengine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpEngineID")
    {
        snmpengineid = value;
        snmpengineid.value_namespace = name_space;
        snmpengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEngineBoots")
    {
        snmpengineboots = value;
        snmpengineboots.value_namespace = name_space;
        snmpengineboots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEngineTime")
    {
        snmpenginetime = value;
        snmpenginetime.value_namespace = name_space;
        snmpenginetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEngineMaxMessageSize")
    {
        snmpenginemaxmessagesize = value;
        snmpenginemaxmessagesize.value_namespace = name_space;
        snmpenginemaxmessagesize.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPFRAMEWORKMIB::Snmpengine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpEngineID")
    {
        snmpengineid.yfilter = yfilter;
    }
    if(value_path == "snmpEngineBoots")
    {
        snmpengineboots.yfilter = yfilter;
    }
    if(value_path == "snmpEngineTime")
    {
        snmpenginetime.yfilter = yfilter;
    }
    if(value_path == "snmpEngineMaxMessageSize")
    {
        snmpenginemaxmessagesize.yfilter = yfilter;
    }
}

bool SNMPFRAMEWORKMIB::Snmpengine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpEngineID" || name == "snmpEngineBoots" || name == "snmpEngineTime" || name == "snmpEngineMaxMessageSize")
        return true;
    return false;
}

const Enum::YLeaf SnmpSecurityLevel::noAuthNoPriv {1, "noAuthNoPriv"};
const Enum::YLeaf SnmpSecurityLevel::authNoPriv {2, "authNoPriv"};
const Enum::YLeaf SnmpSecurityLevel::authPriv {3, "authPriv"};


}
}

