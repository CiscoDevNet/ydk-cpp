
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_FRAMEWORK_MIB.hpp"

namespace ydk {
namespace SNMP_FRAMEWORK_MIB {

SnmpprivprotocolsIdentity::SnmpprivprotocolsIdentity()
     : Identity("SNMP-FRAMEWORK-MIB:snmpPrivProtocols")
{
}

SnmpprivprotocolsIdentity::~SnmpprivprotocolsIdentity()
{
}

SnmpauthprotocolsIdentity::SnmpauthprotocolsIdentity()
     : Identity("SNMP-FRAMEWORK-MIB:snmpAuthProtocols")
{
}

SnmpauthprotocolsIdentity::~SnmpauthprotocolsIdentity()
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
    return is_set(operation)
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

void SnmpFrameworkMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(snmpengineboots.operation)
	|| is_set(snmpengineid.operation)
	|| is_set(snmpenginemaxmessagesize.operation)
	|| is_set(snmpenginetime.operation);
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

    if (snmpengineboots.is_set || is_set(snmpengineboots.operation)) leaf_name_data.push_back(snmpengineboots.get_name_leafdata());
    if (snmpengineid.is_set || is_set(snmpengineid.operation)) leaf_name_data.push_back(snmpengineid.get_name_leafdata());
    if (snmpenginemaxmessagesize.is_set || is_set(snmpenginemaxmessagesize.operation)) leaf_name_data.push_back(snmpenginemaxmessagesize.get_name_leafdata());
    if (snmpenginetime.is_set || is_set(snmpenginetime.operation)) leaf_name_data.push_back(snmpenginetime.get_name_leafdata());


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

void SnmpFrameworkMib::Snmpengine::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmpEngineBoots")
    {
        snmpengineboots = value;
    }
    if(value_path == "snmpEngineID")
    {
        snmpengineid = value;
    }
    if(value_path == "snmpEngineMaxMessageSize")
    {
        snmpenginemaxmessagesize = value;
    }
    if(value_path == "snmpEngineTime")
    {
        snmpenginetime = value;
    }
}

const Enum::YLeaf SnmpsecuritylevelEnum::noAuthNoPriv {1, "noAuthNoPriv"};
const Enum::YLeaf SnmpsecuritylevelEnum::authNoPriv {2, "authNoPriv"};
const Enum::YLeaf SnmpsecuritylevelEnum::authPriv {3, "authPriv"};


}
}

