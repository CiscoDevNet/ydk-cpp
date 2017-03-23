
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_test_trap_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_snmp_test_trap_act {

SnmpColdStartRpc::SnmpColdStartRpc()
{
    yang_name = "snmp-cold-start"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SnmpColdStartRpc::~SnmpColdStartRpc()
{
}

bool SnmpColdStartRpc::has_data() const
{
    return false;
}

bool SnmpColdStartRpc::has_operation() const
{
    return is_set(operation);
}

std::string SnmpColdStartRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:snmp-cold-start";

    return path_buffer.str();

}

EntityPath SnmpColdStartRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpColdStartRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SnmpColdStartRpc::get_children()
{
    return children;
}

void SnmpColdStartRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SnmpColdStartRpc::clone_ptr() const
{
    return std::make_shared<SnmpColdStartRpc>();
}

std::string SnmpColdStartRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SnmpColdStartRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SnmpColdStartRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SnmpWarmStartRpc::SnmpWarmStartRpc()
{
    yang_name = "snmp-warm-start"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SnmpWarmStartRpc::~SnmpWarmStartRpc()
{
}

bool SnmpWarmStartRpc::has_data() const
{
    return false;
}

bool SnmpWarmStartRpc::has_operation() const
{
    return is_set(operation);
}

std::string SnmpWarmStartRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:snmp-warm-start";

    return path_buffer.str();

}

EntityPath SnmpWarmStartRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpWarmStartRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SnmpWarmStartRpc::get_children()
{
    return children;
}

void SnmpWarmStartRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SnmpWarmStartRpc::clone_ptr() const
{
    return std::make_shared<SnmpWarmStartRpc>();
}

std::string SnmpWarmStartRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SnmpWarmStartRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SnmpWarmStartRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InterfaceLinkUpRpc::InterfaceLinkUpRpc()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "interface-link-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InterfaceLinkUpRpc::~InterfaceLinkUpRpc()
{
}

bool InterfaceLinkUpRpc::has_data() const
{
    return ifindex.is_set;
}

bool InterfaceLinkUpRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string InterfaceLinkUpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-up";

    return path_buffer.str();

}

EntityPath InterfaceLinkUpRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceLinkUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceLinkUpRpc::get_children()
{
    return children;
}

void InterfaceLinkUpRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

std::shared_ptr<Entity> InterfaceLinkUpRpc::clone_ptr() const
{
    return std::make_shared<InterfaceLinkUpRpc>();
}

std::string InterfaceLinkUpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceLinkUpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceLinkUpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InterfaceLinkDownRpc::InterfaceLinkDownRpc()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "interface-link-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InterfaceLinkDownRpc::~InterfaceLinkDownRpc()
{
}

bool InterfaceLinkDownRpc::has_data() const
{
    return ifindex.is_set;
}

bool InterfaceLinkDownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string InterfaceLinkDownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-down";

    return path_buffer.str();

}

EntityPath InterfaceLinkDownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceLinkDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceLinkDownRpc::get_children()
{
    return children;
}

void InterfaceLinkDownRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

std::shared_ptr<Entity> InterfaceLinkDownRpc::clone_ptr() const
{
    return std::make_shared<InterfaceLinkDownRpc>();
}

std::string InterfaceLinkDownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceLinkDownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceLinkDownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SonetSectionStatusRpc::SonetSectionStatusRpc()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "sonet-section-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SonetSectionStatusRpc::~SonetSectionStatusRpc()
{
}

bool SonetSectionStatusRpc::has_data() const
{
    return ifindex.is_set;
}

bool SonetSectionStatusRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string SonetSectionStatusRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-section-status";

    return path_buffer.str();

}

EntityPath SonetSectionStatusRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetSectionStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SonetSectionStatusRpc::get_children()
{
    return children;
}

void SonetSectionStatusRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

std::shared_ptr<Entity> SonetSectionStatusRpc::clone_ptr() const
{
    return std::make_shared<SonetSectionStatusRpc>();
}

std::string SonetSectionStatusRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SonetSectionStatusRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SonetSectionStatusRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SonetLineStatusRpc::SonetLineStatusRpc()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "sonet-line-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SonetLineStatusRpc::~SonetLineStatusRpc()
{
}

bool SonetLineStatusRpc::has_data() const
{
    return ifindex.is_set;
}

bool SonetLineStatusRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string SonetLineStatusRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-line-status";

    return path_buffer.str();

}

EntityPath SonetLineStatusRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetLineStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SonetLineStatusRpc::get_children()
{
    return children;
}

void SonetLineStatusRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

std::shared_ptr<Entity> SonetLineStatusRpc::clone_ptr() const
{
    return std::make_shared<SonetLineStatusRpc>();
}

std::string SonetLineStatusRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SonetLineStatusRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SonetLineStatusRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SonetPathStatusRpc::SonetPathStatusRpc()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "sonet-path-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SonetPathStatusRpc::~SonetPathStatusRpc()
{
}

bool SonetPathStatusRpc::has_data() const
{
    return ifindex.is_set;
}

bool SonetPathStatusRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string SonetPathStatusRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-path-status";

    return path_buffer.str();

}

EntityPath SonetPathStatusRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetPathStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SonetPathStatusRpc::get_children()
{
    return children;
}

void SonetPathStatusRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

std::shared_ptr<Entity> SonetPathStatusRpc::clone_ptr() const
{
    return std::make_shared<SonetPathStatusRpc>();
}

std::string SonetPathStatusRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SonetPathStatusRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SonetPathStatusRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraSyslogMessageGeneratedRpc::InfraSyslogMessageGeneratedRpc()
{
    yang_name = "infra-syslog-message-generated"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraSyslogMessageGeneratedRpc::~InfraSyslogMessageGeneratedRpc()
{
}

bool InfraSyslogMessageGeneratedRpc::has_data() const
{
    return false;
}

bool InfraSyslogMessageGeneratedRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraSyslogMessageGeneratedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-syslog-message-generated";

    return path_buffer.str();

}

EntityPath InfraSyslogMessageGeneratedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraSyslogMessageGeneratedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraSyslogMessageGeneratedRpc::get_children()
{
    return children;
}

void InfraSyslogMessageGeneratedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraSyslogMessageGeneratedRpc::clone_ptr() const
{
    return std::make_shared<InfraSyslogMessageGeneratedRpc>();
}

std::string InfraSyslogMessageGeneratedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraSyslogMessageGeneratedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraSyslogMessageGeneratedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraFlashDeviceInsertedRpc::InfraFlashDeviceInsertedRpc()
{
    yang_name = "infra-flash-device-inserted"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraFlashDeviceInsertedRpc::~InfraFlashDeviceInsertedRpc()
{
}

bool InfraFlashDeviceInsertedRpc::has_data() const
{
    return false;
}

bool InfraFlashDeviceInsertedRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraFlashDeviceInsertedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-flash-device-inserted";

    return path_buffer.str();

}

EntityPath InfraFlashDeviceInsertedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraFlashDeviceInsertedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraFlashDeviceInsertedRpc::get_children()
{
    return children;
}

void InfraFlashDeviceInsertedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraFlashDeviceInsertedRpc::clone_ptr() const
{
    return std::make_shared<InfraFlashDeviceInsertedRpc>();
}

std::string InfraFlashDeviceInsertedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraFlashDeviceInsertedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraFlashDeviceInsertedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraFlashDeviceRemovedRpc::InfraFlashDeviceRemovedRpc()
{
    yang_name = "infra-flash-device-removed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraFlashDeviceRemovedRpc::~InfraFlashDeviceRemovedRpc()
{
}

bool InfraFlashDeviceRemovedRpc::has_data() const
{
    return false;
}

bool InfraFlashDeviceRemovedRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraFlashDeviceRemovedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-flash-device-removed";

    return path_buffer.str();

}

EntityPath InfraFlashDeviceRemovedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraFlashDeviceRemovedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraFlashDeviceRemovedRpc::get_children()
{
    return children;
}

void InfraFlashDeviceRemovedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraFlashDeviceRemovedRpc::clone_ptr() const
{
    return std::make_shared<InfraFlashDeviceRemovedRpc>();
}

std::string InfraFlashDeviceRemovedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraFlashDeviceRemovedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraFlashDeviceRemovedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraRedundancyProgressionRpc::InfraRedundancyProgressionRpc()
{
    yang_name = "infra-redundancy-progression"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraRedundancyProgressionRpc::~InfraRedundancyProgressionRpc()
{
}

bool InfraRedundancyProgressionRpc::has_data() const
{
    return false;
}

bool InfraRedundancyProgressionRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraRedundancyProgressionRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-redundancy-progression";

    return path_buffer.str();

}

EntityPath InfraRedundancyProgressionRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraRedundancyProgressionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraRedundancyProgressionRpc::get_children()
{
    return children;
}

void InfraRedundancyProgressionRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraRedundancyProgressionRpc::clone_ptr() const
{
    return std::make_shared<InfraRedundancyProgressionRpc>();
}

std::string InfraRedundancyProgressionRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraRedundancyProgressionRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraRedundancyProgressionRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraRedundancySwitchRpc::InfraRedundancySwitchRpc()
{
    yang_name = "infra-redundancy-switch"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraRedundancySwitchRpc::~InfraRedundancySwitchRpc()
{
}

bool InfraRedundancySwitchRpc::has_data() const
{
    return false;
}

bool InfraRedundancySwitchRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraRedundancySwitchRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-redundancy-switch";

    return path_buffer.str();

}

EntityPath InfraRedundancySwitchRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraRedundancySwitchRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraRedundancySwitchRpc::get_children()
{
    return children;
}

void InfraRedundancySwitchRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraRedundancySwitchRpc::clone_ptr() const
{
    return std::make_shared<InfraRedundancySwitchRpc>();
}

std::string InfraRedundancySwitchRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraRedundancySwitchRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraRedundancySwitchRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraBridgeNewRootRpc::InfraBridgeNewRootRpc()
{
    yang_name = "infra-bridge-new-root"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraBridgeNewRootRpc::~InfraBridgeNewRootRpc()
{
}

bool InfraBridgeNewRootRpc::has_data() const
{
    return false;
}

bool InfraBridgeNewRootRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraBridgeNewRootRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-bridge-new-root";

    return path_buffer.str();

}

EntityPath InfraBridgeNewRootRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraBridgeNewRootRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraBridgeNewRootRpc::get_children()
{
    return children;
}

void InfraBridgeNewRootRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraBridgeNewRootRpc::clone_ptr() const
{
    return std::make_shared<InfraBridgeNewRootRpc>();
}

std::string InfraBridgeNewRootRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraBridgeNewRootRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraBridgeNewRootRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraBridgeTopologyChangeRpc::InfraBridgeTopologyChangeRpc()
{
    yang_name = "infra-bridge-topology-change"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraBridgeTopologyChangeRpc::~InfraBridgeTopologyChangeRpc()
{
}

bool InfraBridgeTopologyChangeRpc::has_data() const
{
    return false;
}

bool InfraBridgeTopologyChangeRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraBridgeTopologyChangeRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-bridge-topology-change";

    return path_buffer.str();

}

EntityPath InfraBridgeTopologyChangeRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraBridgeTopologyChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraBridgeTopologyChangeRpc::get_children()
{
    return children;
}

void InfraBridgeTopologyChangeRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraBridgeTopologyChangeRpc::clone_ptr() const
{
    return std::make_shared<InfraBridgeTopologyChangeRpc>();
}

std::string InfraBridgeTopologyChangeRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraBridgeTopologyChangeRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraBridgeTopologyChangeRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InfraConfigEventRpc::InfraConfigEventRpc()
{
    yang_name = "infra-config-event"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InfraConfigEventRpc::~InfraConfigEventRpc()
{
}

bool InfraConfigEventRpc::has_data() const
{
    return false;
}

bool InfraConfigEventRpc::has_operation() const
{
    return is_set(operation);
}

std::string InfraConfigEventRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:infra-config-event";

    return path_buffer.str();

}

EntityPath InfraConfigEventRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InfraConfigEventRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InfraConfigEventRpc::get_children()
{
    return children;
}

void InfraConfigEventRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InfraConfigEventRpc::clone_ptr() const
{
    return std::make_shared<InfraConfigEventRpc>();
}

std::string InfraConfigEventRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraConfigEventRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraConfigEventRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EntitySensorThresholdNotificationRpc::EntitySensorThresholdNotificationRpc()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "entity-sensor-threshold-notification"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntitySensorThresholdNotificationRpc::~EntitySensorThresholdNotificationRpc()
{
}

bool EntitySensorThresholdNotificationRpc::has_data() const
{
    return entindex.is_set;
}

bool EntitySensorThresholdNotificationRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntitySensorThresholdNotificationRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-sensor-threshold-notification";

    return path_buffer.str();

}

EntityPath EntitySensorThresholdNotificationRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntitySensorThresholdNotificationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EntitySensorThresholdNotificationRpc::get_children()
{
    return children;
}

void EntitySensorThresholdNotificationRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

std::shared_ptr<Entity> EntitySensorThresholdNotificationRpc::clone_ptr() const
{
    return std::make_shared<EntitySensorThresholdNotificationRpc>();
}

std::string EntitySensorThresholdNotificationRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntitySensorThresholdNotificationRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntitySensorThresholdNotificationRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EntityFruPowerStatusChangeFailedRpc::EntityFruPowerStatusChangeFailedRpc()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "entity-fru-power-status-change-failed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruPowerStatusChangeFailedRpc::~EntityFruPowerStatusChangeFailedRpc()
{
}

bool EntityFruPowerStatusChangeFailedRpc::has_data() const
{
    return entindex.is_set;
}

bool EntityFruPowerStatusChangeFailedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruPowerStatusChangeFailedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-power-status-change-failed";

    return path_buffer.str();

}

EntityPath EntityFruPowerStatusChangeFailedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruPowerStatusChangeFailedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EntityFruPowerStatusChangeFailedRpc::get_children()
{
    return children;
}

void EntityFruPowerStatusChangeFailedRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

std::shared_ptr<Entity> EntityFruPowerStatusChangeFailedRpc::clone_ptr() const
{
    return std::make_shared<EntityFruPowerStatusChangeFailedRpc>();
}

std::string EntityFruPowerStatusChangeFailedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruPowerStatusChangeFailedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruPowerStatusChangeFailedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EntityFruModuleStatusChangeUpRpc::EntityFruModuleStatusChangeUpRpc()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "entity-fru-module-status-change-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruModuleStatusChangeUpRpc::~EntityFruModuleStatusChangeUpRpc()
{
}

bool EntityFruModuleStatusChangeUpRpc::has_data() const
{
    return entindex.is_set;
}

bool EntityFruModuleStatusChangeUpRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruModuleStatusChangeUpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-up";

    return path_buffer.str();

}

EntityPath EntityFruModuleStatusChangeUpRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EntityFruModuleStatusChangeUpRpc::get_children()
{
    return children;
}

void EntityFruModuleStatusChangeUpRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

std::shared_ptr<Entity> EntityFruModuleStatusChangeUpRpc::clone_ptr() const
{
    return std::make_shared<EntityFruModuleStatusChangeUpRpc>();
}

std::string EntityFruModuleStatusChangeUpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruModuleStatusChangeUpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruModuleStatusChangeUpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EntityFruModuleStatusChangeDownRpc::EntityFruModuleStatusChangeDownRpc()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "entity-fru-module-status-change-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruModuleStatusChangeDownRpc::~EntityFruModuleStatusChangeDownRpc()
{
}

bool EntityFruModuleStatusChangeDownRpc::has_data() const
{
    return entindex.is_set;
}

bool EntityFruModuleStatusChangeDownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruModuleStatusChangeDownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-down";

    return path_buffer.str();

}

EntityPath EntityFruModuleStatusChangeDownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EntityFruModuleStatusChangeDownRpc::get_children()
{
    return children;
}

void EntityFruModuleStatusChangeDownRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

std::shared_ptr<Entity> EntityFruModuleStatusChangeDownRpc::clone_ptr() const
{
    return std::make_shared<EntityFruModuleStatusChangeDownRpc>();
}

std::string EntityFruModuleStatusChangeDownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruModuleStatusChangeDownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruModuleStatusChangeDownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EntityFruFanTrayOperStatusUpRpc::EntityFruFanTrayOperStatusUpRpc()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "entity-fru-fan-tray-oper-status-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruFanTrayOperStatusUpRpc::~EntityFruFanTrayOperStatusUpRpc()
{
}

bool EntityFruFanTrayOperStatusUpRpc::has_data() const
{
    return entindex.is_set;
}

bool EntityFruFanTrayOperStatusUpRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruFanTrayOperStatusUpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-oper-status-up";

    return path_buffer.str();

}

EntityPath EntityFruFanTrayOperStatusUpRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruFanTrayOperStatusUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EntityFruFanTrayOperStatusUpRpc::get_children()
{
    return children;
}

void EntityFruFanTrayOperStatusUpRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

std::shared_ptr<Entity> EntityFruFanTrayOperStatusUpRpc::clone_ptr() const
{
    return std::make_shared<EntityFruFanTrayOperStatusUpRpc>();
}

std::string EntityFruFanTrayOperStatusUpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruFanTrayOperStatusUpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruFanTrayOperStatusUpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EntityFruFanTrayInsertedRpc::EntityFruFanTrayInsertedRpc()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "entity-fru-fan-tray-inserted"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruFanTrayInsertedRpc::~EntityFruFanTrayInsertedRpc()
{
}

bool EntityFruFanTrayInsertedRpc::has_data() const
{
    return entindex.is_set;
}

bool EntityFruFanTrayInsertedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruFanTrayInsertedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-inserted";

    return path_buffer.str();

}

EntityPath EntityFruFanTrayInsertedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruFanTrayInsertedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EntityFruFanTrayInsertedRpc::get_children()
{
    return children;
}

void EntityFruFanTrayInsertedRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

std::shared_ptr<Entity> EntityFruFanTrayInsertedRpc::clone_ptr() const
{
    return std::make_shared<EntityFruFanTrayInsertedRpc>();
}

std::string EntityFruFanTrayInsertedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruFanTrayInsertedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruFanTrayInsertedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EntityFruFanTrayRemovedRpc::EntityFruFanTrayRemovedRpc()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "entity-fru-fan-tray-removed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruFanTrayRemovedRpc::~EntityFruFanTrayRemovedRpc()
{
}

bool EntityFruFanTrayRemovedRpc::has_data() const
{
    return entindex.is_set;
}

bool EntityFruFanTrayRemovedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruFanTrayRemovedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-removed";

    return path_buffer.str();

}

EntityPath EntityFruFanTrayRemovedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruFanTrayRemovedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EntityFruFanTrayRemovedRpc::get_children()
{
    return children;
}

void EntityFruFanTrayRemovedRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

std::shared_ptr<Entity> EntityFruFanTrayRemovedRpc::clone_ptr() const
{
    return std::make_shared<EntityFruFanTrayRemovedRpc>();
}

std::string EntityFruFanTrayRemovedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EntityFruFanTrayRemovedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EntityFruFanTrayRemovedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

PlatformHfrBundleDownedLinkRpc::PlatformHfrBundleDownedLinkRpc()
    :
    bundle_name{YType::str, "bundle-name"}
{
    yang_name = "platform-hfr-bundle-downed-link"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

PlatformHfrBundleDownedLinkRpc::~PlatformHfrBundleDownedLinkRpc()
{
}

bool PlatformHfrBundleDownedLinkRpc::has_data() const
{
    return bundle_name.is_set;
}

bool PlatformHfrBundleDownedLinkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation);
}

std::string PlatformHfrBundleDownedLinkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-downed-link";

    return path_buffer.str();

}

EntityPath PlatformHfrBundleDownedLinkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformHfrBundleDownedLinkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformHfrBundleDownedLinkRpc::get_children()
{
    return children;
}

void PlatformHfrBundleDownedLinkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

std::shared_ptr<Entity> PlatformHfrBundleDownedLinkRpc::clone_ptr() const
{
    return std::make_shared<PlatformHfrBundleDownedLinkRpc>();
}

std::string PlatformHfrBundleDownedLinkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformHfrBundleDownedLinkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformHfrBundleDownedLinkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

PlatformHfrBundleStateRpc::PlatformHfrBundleStateRpc()
    :
    bundle_name{YType::str, "bundle-name"}
{
    yang_name = "platform-hfr-bundle-state"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

PlatformHfrBundleStateRpc::~PlatformHfrBundleStateRpc()
{
}

bool PlatformHfrBundleStateRpc::has_data() const
{
    return bundle_name.is_set;
}

bool PlatformHfrBundleStateRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation);
}

std::string PlatformHfrBundleStateRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-state";

    return path_buffer.str();

}

EntityPath PlatformHfrBundleStateRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformHfrBundleStateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformHfrBundleStateRpc::get_children()
{
    return children;
}

void PlatformHfrBundleStateRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

std::shared_ptr<Entity> PlatformHfrBundleStateRpc::clone_ptr() const
{
    return std::make_shared<PlatformHfrBundleStateRpc>();
}

std::string PlatformHfrBundleStateRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformHfrBundleStateRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformHfrBundleStateRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

PlatformHfrPlaneStateRpc::PlatformHfrPlaneStateRpc()
    :
    plane_id{YType::uint32, "plane-id"}
{
    yang_name = "platform-hfr-plane-state"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

PlatformHfrPlaneStateRpc::~PlatformHfrPlaneStateRpc()
{
}

bool PlatformHfrPlaneStateRpc::has_data() const
{
    return plane_id.is_set;
}

bool PlatformHfrPlaneStateRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(plane_id.operation);
}

std::string PlatformHfrPlaneStateRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-plane-state";

    return path_buffer.str();

}

EntityPath PlatformHfrPlaneStateRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.operation)) leaf_name_data.push_back(plane_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformHfrPlaneStateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformHfrPlaneStateRpc::get_children()
{
    return children;
}

void PlatformHfrPlaneStateRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "plane-id")
    {
        plane_id = value;
    }
}

std::shared_ptr<Entity> PlatformHfrPlaneStateRpc::clone_ptr() const
{
    return std::make_shared<PlatformHfrPlaneStateRpc>();
}

std::string PlatformHfrPlaneStateRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformHfrPlaneStateRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformHfrPlaneStateRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingBgpEstablishedRpc::RoutingBgpEstablishedRpc()
{
    yang_name = "routing-bgp-established"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingBgpEstablishedRpc::~RoutingBgpEstablishedRpc()
{
}

bool RoutingBgpEstablishedRpc::has_data() const
{
    return false;
}

bool RoutingBgpEstablishedRpc::has_operation() const
{
    return is_set(operation);
}

std::string RoutingBgpEstablishedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-established";

    return path_buffer.str();

}

EntityPath RoutingBgpEstablishedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingBgpEstablishedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingBgpEstablishedRpc::get_children()
{
    return children;
}

void RoutingBgpEstablishedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RoutingBgpEstablishedRpc::clone_ptr() const
{
    return std::make_shared<RoutingBgpEstablishedRpc>();
}

std::string RoutingBgpEstablishedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpEstablishedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpEstablishedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingBgpEstablishedRemotePeerRpc::RoutingBgpEstablishedRemotePeerRpc()
    :
    address{YType::str, "address"}
{
    yang_name = "routing-bgp-established-remote-peer"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingBgpEstablishedRemotePeerRpc::~RoutingBgpEstablishedRemotePeerRpc()
{
}

bool RoutingBgpEstablishedRemotePeerRpc::has_data() const
{
    return address.is_set;
}

bool RoutingBgpEstablishedRemotePeerRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string RoutingBgpEstablishedRemotePeerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-established-remote-peer";

    return path_buffer.str();

}

EntityPath RoutingBgpEstablishedRemotePeerRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingBgpEstablishedRemotePeerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingBgpEstablishedRemotePeerRpc::get_children()
{
    return children;
}

void RoutingBgpEstablishedRemotePeerRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

std::shared_ptr<Entity> RoutingBgpEstablishedRemotePeerRpc::clone_ptr() const
{
    return std::make_shared<RoutingBgpEstablishedRemotePeerRpc>();
}

std::string RoutingBgpEstablishedRemotePeerRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpEstablishedRemotePeerRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpEstablishedRemotePeerRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingBgpStateChangeRpc::RoutingBgpStateChangeRpc()
{
    yang_name = "routing-bgp-state-change"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingBgpStateChangeRpc::~RoutingBgpStateChangeRpc()
{
}

bool RoutingBgpStateChangeRpc::has_data() const
{
    return false;
}

bool RoutingBgpStateChangeRpc::has_operation() const
{
    return is_set(operation);
}

std::string RoutingBgpStateChangeRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-state-change";

    return path_buffer.str();

}

EntityPath RoutingBgpStateChangeRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingBgpStateChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingBgpStateChangeRpc::get_children()
{
    return children;
}

void RoutingBgpStateChangeRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RoutingBgpStateChangeRpc::clone_ptr() const
{
    return std::make_shared<RoutingBgpStateChangeRpc>();
}

std::string RoutingBgpStateChangeRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpStateChangeRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpStateChangeRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingBgpStateChangeRemotePeerRpc::RoutingBgpStateChangeRemotePeerRpc()
    :
    address{YType::str, "address"}
{
    yang_name = "routing-bgp-state-change-remote-peer"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingBgpStateChangeRemotePeerRpc::~RoutingBgpStateChangeRemotePeerRpc()
{
}

bool RoutingBgpStateChangeRemotePeerRpc::has_data() const
{
    return address.is_set;
}

bool RoutingBgpStateChangeRemotePeerRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string RoutingBgpStateChangeRemotePeerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-state-change-remote-peer";

    return path_buffer.str();

}

EntityPath RoutingBgpStateChangeRemotePeerRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingBgpStateChangeRemotePeerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingBgpStateChangeRemotePeerRpc::get_children()
{
    return children;
}

void RoutingBgpStateChangeRemotePeerRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

std::shared_ptr<Entity> RoutingBgpStateChangeRemotePeerRpc::clone_ptr() const
{
    return std::make_shared<RoutingBgpStateChangeRemotePeerRpc>();
}

std::string RoutingBgpStateChangeRemotePeerRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingBgpStateChangeRemotePeerRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingBgpStateChangeRemotePeerRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingOspfNeighborStateChangeRpc::RoutingOspfNeighborStateChangeRpc()
{
    yang_name = "routing-ospf-neighbor-state-change"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingOspfNeighborStateChangeRpc::~RoutingOspfNeighborStateChangeRpc()
{
}

bool RoutingOspfNeighborStateChangeRpc::has_data() const
{
    return false;
}

bool RoutingOspfNeighborStateChangeRpc::has_operation() const
{
    return is_set(operation);
}

std::string RoutingOspfNeighborStateChangeRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-ospf-neighbor-state-change";

    return path_buffer.str();

}

EntityPath RoutingOspfNeighborStateChangeRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingOspfNeighborStateChangeRpc::get_children()
{
    return children;
}

void RoutingOspfNeighborStateChangeRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeRpc::clone_ptr() const
{
    return std::make_shared<RoutingOspfNeighborStateChangeRpc>();
}

std::string RoutingOspfNeighborStateChangeRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingOspfNeighborStateChangeRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingOspfNeighborStateChangeRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingOspfNeighborStateChangeAddressRpc::RoutingOspfNeighborStateChangeAddressRpc()
    :
    address{YType::str, "address"},
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "routing-ospf-neighbor-state-change-address"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingOspfNeighborStateChangeAddressRpc::~RoutingOspfNeighborStateChangeAddressRpc()
{
}

bool RoutingOspfNeighborStateChangeAddressRpc::has_data() const
{
    return address.is_set
	|| ifindex.is_set;
}

bool RoutingOspfNeighborStateChangeAddressRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(ifindex.operation);
}

std::string RoutingOspfNeighborStateChangeAddressRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-ospf-neighbor-state-change-address";

    return path_buffer.str();

}

EntityPath RoutingOspfNeighborStateChangeAddressRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeAddressRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingOspfNeighborStateChangeAddressRpc::get_children()
{
    return children;
}

void RoutingOspfNeighborStateChangeAddressRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeAddressRpc::clone_ptr() const
{
    return std::make_shared<RoutingOspfNeighborStateChangeAddressRpc>();
}

std::string RoutingOspfNeighborStateChangeAddressRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingOspfNeighborStateChangeAddressRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingOspfNeighborStateChangeAddressRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsLdpSessionDownRpc::RoutingMplsLdpSessionDownRpc()
{
    yang_name = "routing-mpls-ldp-session-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsLdpSessionDownRpc::~RoutingMplsLdpSessionDownRpc()
{
}

bool RoutingMplsLdpSessionDownRpc::has_data() const
{
    return false;
}

bool RoutingMplsLdpSessionDownRpc::has_operation() const
{
    return is_set(operation);
}

std::string RoutingMplsLdpSessionDownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-ldp-session-down";

    return path_buffer.str();

}

EntityPath RoutingMplsLdpSessionDownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsLdpSessionDownRpc::get_children()
{
    return children;
}

void RoutingMplsLdpSessionDownRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsLdpSessionDownRpc>();
}

std::string RoutingMplsLdpSessionDownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsLdpSessionDownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsLdpSessionDownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsLdpSessionDownEntityIdRpc::RoutingMplsLdpSessionDownEntityIdRpc()
    :
    entity_id{YType::str, "entity-id"},
    entity_index{YType::uint32, "entity-index"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "routing-mpls-ldp-session-down-entity-id"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsLdpSessionDownEntityIdRpc::~RoutingMplsLdpSessionDownEntityIdRpc()
{
}

bool RoutingMplsLdpSessionDownEntityIdRpc::has_data() const
{
    return entity_id.is_set
	|| entity_index.is_set
	|| peer_id.is_set;
}

bool RoutingMplsLdpSessionDownEntityIdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entity_id.operation)
	|| is_set(entity_index.operation)
	|| is_set(peer_id.operation);
}

std::string RoutingMplsLdpSessionDownEntityIdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-ldp-session-down-entity-id";

    return path_buffer.str();

}

EntityPath RoutingMplsLdpSessionDownEntityIdRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_id.is_set || is_set(entity_id.operation)) leaf_name_data.push_back(entity_id.get_name_leafdata());
    if (entity_index.is_set || is_set(entity_index.operation)) leaf_name_data.push_back(entity_index.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownEntityIdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsLdpSessionDownEntityIdRpc::get_children()
{
    return children;
}

void RoutingMplsLdpSessionDownEntityIdRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entity-id")
    {
        entity_id = value;
    }
    if(value_path == "entity-index")
    {
        entity_index = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownEntityIdRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsLdpSessionDownEntityIdRpc>();
}

std::string RoutingMplsLdpSessionDownEntityIdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsLdpSessionDownEntityIdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsLdpSessionDownEntityIdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsTunnelReRoutedRpc::RoutingMplsTunnelReRoutedRpc()
{
    yang_name = "routing-mpls-tunnel-re-routed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReRoutedRpc::~RoutingMplsTunnelReRoutedRpc()
{
}

bool RoutingMplsTunnelReRoutedRpc::has_data() const
{
    return false;
}

bool RoutingMplsTunnelReRoutedRpc::has_operation() const
{
    return is_set(operation);
}

std::string RoutingMplsTunnelReRoutedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-routed";

    return path_buffer.str();

}

EntityPath RoutingMplsTunnelReRoutedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsTunnelReRoutedRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelReRoutedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReRoutedRpc>();
}

std::string RoutingMplsTunnelReRoutedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReRoutedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReRoutedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsTunnelReRoutedIndexRpc::RoutingMplsTunnelReRoutedIndexRpc()
    :
    destination{YType::str, "destination"},
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"}
{
    yang_name = "routing-mpls-tunnel-re-routed-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReRoutedIndexRpc::~RoutingMplsTunnelReRoutedIndexRpc()
{
}

bool RoutingMplsTunnelReRoutedIndexRpc::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelReRoutedIndexRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
}

std::string RoutingMplsTunnelReRoutedIndexRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-routed-index";

    return path_buffer.str();

}

EntityPath RoutingMplsTunnelReRoutedIndexRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedIndexRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsTunnelReRoutedIndexRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelReRoutedIndexRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedIndexRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReRoutedIndexRpc>();
}

std::string RoutingMplsTunnelReRoutedIndexRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReRoutedIndexRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReRoutedIndexRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsTunnelReOptimizedRpc::RoutingMplsTunnelReOptimizedRpc()
{
    yang_name = "routing-mpls-tunnel-re-optimized"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReOptimizedRpc::~RoutingMplsTunnelReOptimizedRpc()
{
}

bool RoutingMplsTunnelReOptimizedRpc::has_data() const
{
    return false;
}

bool RoutingMplsTunnelReOptimizedRpc::has_operation() const
{
    return is_set(operation);
}

std::string RoutingMplsTunnelReOptimizedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-optimized";

    return path_buffer.str();

}

EntityPath RoutingMplsTunnelReOptimizedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsTunnelReOptimizedRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelReOptimizedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReOptimizedRpc>();
}

std::string RoutingMplsTunnelReOptimizedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReOptimizedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReOptimizedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsTunnelReOptimizedIndexRpc::RoutingMplsTunnelReOptimizedIndexRpc()
    :
    destination{YType::str, "destination"},
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"}
{
    yang_name = "routing-mpls-tunnel-re-optimized-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReOptimizedIndexRpc::~RoutingMplsTunnelReOptimizedIndexRpc()
{
}

bool RoutingMplsTunnelReOptimizedIndexRpc::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelReOptimizedIndexRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
}

std::string RoutingMplsTunnelReOptimizedIndexRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-optimized-index";

    return path_buffer.str();

}

EntityPath RoutingMplsTunnelReOptimizedIndexRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedIndexRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsTunnelReOptimizedIndexRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelReOptimizedIndexRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedIndexRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelReOptimizedIndexRpc>();
}

std::string RoutingMplsTunnelReOptimizedIndexRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelReOptimizedIndexRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelReOptimizedIndexRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsTunnelDownRpc::RoutingMplsTunnelDownRpc()
{
    yang_name = "routing-mpls-tunnel-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelDownRpc::~RoutingMplsTunnelDownRpc()
{
}

bool RoutingMplsTunnelDownRpc::has_data() const
{
    return false;
}

bool RoutingMplsTunnelDownRpc::has_operation() const
{
    return is_set(operation);
}

std::string RoutingMplsTunnelDownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-down";

    return path_buffer.str();

}

EntityPath RoutingMplsTunnelDownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsTunnelDownRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelDownRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RoutingMplsTunnelDownRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelDownRpc>();
}

std::string RoutingMplsTunnelDownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelDownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelDownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RoutingMplsTunnelDownIndexRpc::RoutingMplsTunnelDownIndexRpc()
    :
    destination{YType::str, "destination"},
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"}
{
    yang_name = "routing-mpls-tunnel-down-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelDownIndexRpc::~RoutingMplsTunnelDownIndexRpc()
{
}

bool RoutingMplsTunnelDownIndexRpc::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelDownIndexRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
}

std::string RoutingMplsTunnelDownIndexRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-down-index";

    return path_buffer.str();

}

EntityPath RoutingMplsTunnelDownIndexRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelDownIndexRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RoutingMplsTunnelDownIndexRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelDownIndexRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

std::shared_ptr<Entity> RoutingMplsTunnelDownIndexRpc::clone_ptr() const
{
    return std::make_shared<RoutingMplsTunnelDownIndexRpc>();
}

std::string RoutingMplsTunnelDownIndexRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RoutingMplsTunnelDownIndexRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RoutingMplsTunnelDownIndexRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

AllRpc::AllRpc()
{
    yang_name = "all"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

AllRpc::~AllRpc()
{
}

bool AllRpc::has_data() const
{
    return false;
}

bool AllRpc::has_operation() const
{
    return is_set(operation);
}

std::string AllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:all";

    return path_buffer.str();

}

EntityPath AllRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AllRpc::get_children()
{
    return children;
}

void AllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> AllRpc::clone_ptr() const
{
    return std::make_shared<AllRpc>();
}

std::string AllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

