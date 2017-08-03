
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_FRAMEWORK_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SNMP_FRAMEWORK_MIB {

Snmpauthprotocols::Snmpauthprotocols()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:SNMP-FRAMEWORK-MIB", "SNMP-FRAMEWORK-MIB", "SNMP-FRAMEWORK-MIB:snmpAuthProtocols")
{
}

Snmpauthprotocols::~Snmpauthprotocols()
{
}

Snmpprivprotocols::Snmpprivprotocols()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:SNMP-FRAMEWORK-MIB", "SNMP-FRAMEWORK-MIB", "SNMP-FRAMEWORK-MIB:snmpPrivProtocols")
{
}

Snmpprivprotocols::~Snmpprivprotocols()
{
}

SnmpFrameworkMib::SnmpFrameworkMib()
    :
    snmpengine(std::make_shared<SnmpFrameworkMib::Snmpengine>())
{
    snmpengine->parent = this;

    yang_name = "SNMP-FRAMEWORK-MIB"; yang_parent_name = "SNMP-FRAMEWORK-MIB";
}

SnmpFrameworkMib::~SnmpFrameworkMib()
{
}

bool SnmpFrameworkMib::has_data() const
{
    return (snmpengine !=  nullptr && snmpengine->has_data());
}

bool SnmpFrameworkMib::has_operation() const
{
    return is_set(yfilter)
	|| (snmpengine !=  nullptr && snmpengine->has_operation());
}

std::string SnmpFrameworkMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-FRAMEWORK-MIB:SNMP-FRAMEWORK-MIB";

    return path_buffer.str();

}

const EntityPath SnmpFrameworkMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SnmpFrameworkMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpEngine")
    {
        if(snmpengine == nullptr)
        {
            snmpengine = std::make_shared<SnmpFrameworkMib::Snmpengine>();
        }
        return snmpengine;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpFrameworkMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmpengine != nullptr)
    {
        children["snmpEngine"] = snmpengine;
    }

    return children;
}

void SnmpFrameworkMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SnmpFrameworkMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SnmpFrameworkMib::clone_ptr() const
{
    return std::make_shared<SnmpFrameworkMib>();
}

std::string SnmpFrameworkMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SnmpFrameworkMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SnmpFrameworkMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SnmpFrameworkMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SnmpFrameworkMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpEngine")
        return true;
    return false;
}

SnmpFrameworkMib::Snmpengine::Snmpengine()
    :
    snmpengineboots{YType::int32, "snmpEngineBoots"},
    snmpengineid{YType::str, "snmpEngineID"},
    snmpenginemaxmessagesize{YType::int32, "snmpEngineMaxMessageSize"},
    snmpenginetime{YType::int32, "snmpEngineTime"}
{
    yang_name = "snmpEngine"; yang_parent_name = "SNMP-FRAMEWORK-MIB";
}

SnmpFrameworkMib::Snmpengine::~Snmpengine()
{
}

bool SnmpFrameworkMib::Snmpengine::has_data() const
{
    return snmpengineboots.is_set
	|| snmpengineid.is_set
	|| snmpenginemaxmessagesize.is_set
	|| snmpenginetime.is_set;
}

bool SnmpFrameworkMib::Snmpengine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpengineboots.yfilter)
	|| ydk::is_set(snmpengineid.yfilter)
	|| ydk::is_set(snmpenginemaxmessagesize.yfilter)
	|| ydk::is_set(snmpenginetime.yfilter);
}

std::string SnmpFrameworkMib::Snmpengine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpEngine";

    return path_buffer.str();

}

const EntityPath SnmpFrameworkMib::Snmpengine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-FRAMEWORK-MIB:SNMP-FRAMEWORK-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpengineboots.is_set || is_set(snmpengineboots.yfilter)) leaf_name_data.push_back(snmpengineboots.get_name_leafdata());
    if (snmpengineid.is_set || is_set(snmpengineid.yfilter)) leaf_name_data.push_back(snmpengineid.get_name_leafdata());
    if (snmpenginemaxmessagesize.is_set || is_set(snmpenginemaxmessagesize.yfilter)) leaf_name_data.push_back(snmpenginemaxmessagesize.get_name_leafdata());
    if (snmpenginetime.is_set || is_set(snmpenginetime.yfilter)) leaf_name_data.push_back(snmpenginetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpFrameworkMib::Snmpengine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpFrameworkMib::Snmpengine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SnmpFrameworkMib::Snmpengine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpEngineBoots")
    {
        snmpengineboots = value;
        snmpengineboots.value_namespace = name_space;
        snmpengineboots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEngineID")
    {
        snmpengineid = value;
        snmpengineid.value_namespace = name_space;
        snmpengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEngineMaxMessageSize")
    {
        snmpenginemaxmessagesize = value;
        snmpenginemaxmessagesize.value_namespace = name_space;
        snmpenginemaxmessagesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEngineTime")
    {
        snmpenginetime = value;
        snmpenginetime.value_namespace = name_space;
        snmpenginetime.value_namespace_prefix = name_space_prefix;
    }
}

void SnmpFrameworkMib::Snmpengine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpEngineBoots")
    {
        snmpengineboots.yfilter = yfilter;
    }
    if(value_path == "snmpEngineID")
    {
        snmpengineid.yfilter = yfilter;
    }
    if(value_path == "snmpEngineMaxMessageSize")
    {
        snmpenginemaxmessagesize.yfilter = yfilter;
    }
    if(value_path == "snmpEngineTime")
    {
        snmpenginetime.yfilter = yfilter;
    }
}

bool SnmpFrameworkMib::Snmpengine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpEngineBoots" || name == "snmpEngineID" || name == "snmpEngineMaxMessageSize" || name == "snmpEngineTime")
        return true;
    return false;
}

const Enum::YLeaf Snmpsecuritylevel::noAuthNoPriv {1, "noAuthNoPriv"};
const Enum::YLeaf Snmpsecuritylevel::authNoPriv {2, "authNoPriv"};
const Enum::YLeaf Snmpsecuritylevel::authPriv {3, "authPriv"};


}
}

