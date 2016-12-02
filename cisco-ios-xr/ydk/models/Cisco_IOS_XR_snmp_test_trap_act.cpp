
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SnmpColdStartRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SnmpColdStartRpc::get_children()
{
    return children;
}

void SnmpColdStartRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SnmpColdStartRpc::clone_ptr()
{
    return std::make_unique<SnmpColdStartRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SnmpWarmStartRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SnmpWarmStartRpc::get_children()
{
    return children;
}

void SnmpWarmStartRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SnmpWarmStartRpc::clone_ptr()
{
    return std::make_unique<SnmpWarmStartRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceLinkUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InterfaceLinkUpRpc::get_children()
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

std::unique_ptr<Entity> InterfaceLinkUpRpc::clone_ptr()
{
    return std::make_unique<InterfaceLinkUpRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceLinkDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InterfaceLinkDownRpc::get_children()
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

std::unique_ptr<Entity> InterfaceLinkDownRpc::clone_ptr()
{
    return std::make_unique<InterfaceLinkDownRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SonetSectionStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SonetSectionStatusRpc::get_children()
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

std::unique_ptr<Entity> SonetSectionStatusRpc::clone_ptr()
{
    return std::make_unique<SonetSectionStatusRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SonetLineStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SonetLineStatusRpc::get_children()
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

std::unique_ptr<Entity> SonetLineStatusRpc::clone_ptr()
{
    return std::make_unique<SonetLineStatusRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SonetPathStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SonetPathStatusRpc::get_children()
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

std::unique_ptr<Entity> SonetPathStatusRpc::clone_ptr()
{
    return std::make_unique<SonetPathStatusRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraSyslogMessageGeneratedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraSyslogMessageGeneratedRpc::get_children()
{
    return children;
}

void InfraSyslogMessageGeneratedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraSyslogMessageGeneratedRpc::clone_ptr()
{
    return std::make_unique<InfraSyslogMessageGeneratedRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraFlashDeviceInsertedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraFlashDeviceInsertedRpc::get_children()
{
    return children;
}

void InfraFlashDeviceInsertedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraFlashDeviceInsertedRpc::clone_ptr()
{
    return std::make_unique<InfraFlashDeviceInsertedRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraFlashDeviceRemovedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraFlashDeviceRemovedRpc::get_children()
{
    return children;
}

void InfraFlashDeviceRemovedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraFlashDeviceRemovedRpc::clone_ptr()
{
    return std::make_unique<InfraFlashDeviceRemovedRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraRedundancyProgressionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraRedundancyProgressionRpc::get_children()
{
    return children;
}

void InfraRedundancyProgressionRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraRedundancyProgressionRpc::clone_ptr()
{
    return std::make_unique<InfraRedundancyProgressionRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraRedundancySwitchRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraRedundancySwitchRpc::get_children()
{
    return children;
}

void InfraRedundancySwitchRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraRedundancySwitchRpc::clone_ptr()
{
    return std::make_unique<InfraRedundancySwitchRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraBridgeNewRootRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraBridgeNewRootRpc::get_children()
{
    return children;
}

void InfraBridgeNewRootRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraBridgeNewRootRpc::clone_ptr()
{
    return std::make_unique<InfraBridgeNewRootRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraBridgeTopologyChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraBridgeTopologyChangeRpc::get_children()
{
    return children;
}

void InfraBridgeTopologyChangeRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraBridgeTopologyChangeRpc::clone_ptr()
{
    return std::make_unique<InfraBridgeTopologyChangeRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InfraConfigEventRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & InfraConfigEventRpc::get_children()
{
    return children;
}

void InfraConfigEventRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InfraConfigEventRpc::clone_ptr()
{
    return std::make_unique<InfraConfigEventRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EntitySensorThresholdNotificationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EntitySensorThresholdNotificationRpc::get_children()
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

std::unique_ptr<Entity> EntitySensorThresholdNotificationRpc::clone_ptr()
{
    return std::make_unique<EntitySensorThresholdNotificationRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EntityFruPowerStatusChangeFailedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EntityFruPowerStatusChangeFailedRpc::get_children()
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

std::unique_ptr<Entity> EntityFruPowerStatusChangeFailedRpc::clone_ptr()
{
    return std::make_unique<EntityFruPowerStatusChangeFailedRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EntityFruModuleStatusChangeUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EntityFruModuleStatusChangeUpRpc::get_children()
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

std::unique_ptr<Entity> EntityFruModuleStatusChangeUpRpc::clone_ptr()
{
    return std::make_unique<EntityFruModuleStatusChangeUpRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EntityFruModuleStatusChangeDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EntityFruModuleStatusChangeDownRpc::get_children()
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

std::unique_ptr<Entity> EntityFruModuleStatusChangeDownRpc::clone_ptr()
{
    return std::make_unique<EntityFruModuleStatusChangeDownRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EntityFruFanTrayOperStatusUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EntityFruFanTrayOperStatusUpRpc::get_children()
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

std::unique_ptr<Entity> EntityFruFanTrayOperStatusUpRpc::clone_ptr()
{
    return std::make_unique<EntityFruFanTrayOperStatusUpRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EntityFruFanTrayInsertedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EntityFruFanTrayInsertedRpc::get_children()
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

std::unique_ptr<Entity> EntityFruFanTrayInsertedRpc::clone_ptr()
{
    return std::make_unique<EntityFruFanTrayInsertedRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EntityFruFanTrayRemovedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EntityFruFanTrayRemovedRpc::get_children()
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

std::unique_ptr<Entity> EntityFruFanTrayRemovedRpc::clone_ptr()
{
    return std::make_unique<EntityFruFanTrayRemovedRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformHfrBundleDownedLinkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformHfrBundleDownedLinkRpc::get_children()
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

std::unique_ptr<Entity> PlatformHfrBundleDownedLinkRpc::clone_ptr()
{
    return std::make_unique<PlatformHfrBundleDownedLinkRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformHfrBundleStateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformHfrBundleStateRpc::get_children()
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

std::unique_ptr<Entity> PlatformHfrBundleStateRpc::clone_ptr()
{
    return std::make_unique<PlatformHfrBundleStateRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.operation)) leaf_name_data.push_back(plane_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformHfrPlaneStateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformHfrPlaneStateRpc::get_children()
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

std::unique_ptr<Entity> PlatformHfrPlaneStateRpc::clone_ptr()
{
    return std::make_unique<PlatformHfrPlaneStateRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingBgpEstablishedRemotePeerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RoutingBgpEstablishedRemotePeerRpc::get_children()
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

std::unique_ptr<Entity> RoutingBgpEstablishedRemotePeerRpc::clone_ptr()
{
    return std::make_unique<RoutingBgpEstablishedRemotePeerRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingBgpStateChangeRemotePeerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RoutingBgpStateChangeRemotePeerRpc::get_children()
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

std::unique_ptr<Entity> RoutingBgpStateChangeRemotePeerRpc::clone_ptr()
{
    return std::make_unique<RoutingBgpStateChangeRemotePeerRpc>();
}
RoutingOspfNeighborStateChangeRpc::RoutingOspfNeighborStateChangeRpc()
    :
    	address{YType::str, "address"},
	 ifindex{YType::uint32, "ifindex"}
{
    yang_name = "routing-ospf-neighbor-state-change"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingOspfNeighborStateChangeRpc::~RoutingOspfNeighborStateChangeRpc()
{
}

bool RoutingOspfNeighborStateChangeRpc::has_data() const
{
    return address.is_set
	|| ifindex.is_set;
}

bool RoutingOspfNeighborStateChangeRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(ifindex.operation);
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingOspfNeighborStateChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RoutingOspfNeighborStateChangeRpc::get_children()
{
    return children;
}

void RoutingOspfNeighborStateChangeRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RoutingOspfNeighborStateChangeRpc::clone_ptr()
{
    return std::make_unique<RoutingOspfNeighborStateChangeRpc>();
}
RoutingMplsLdpSessionDownRpc::RoutingMplsLdpSessionDownRpc()
    :
    	entity_id{YType::str, "entity-id"},
	 entity_index{YType::uint32, "entity-index"},
	 peer_id{YType::str, "peer-id"}
{
    yang_name = "routing-mpls-ldp-session-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsLdpSessionDownRpc::~RoutingMplsLdpSessionDownRpc()
{
}

bool RoutingMplsLdpSessionDownRpc::has_data() const
{
    return entity_id.is_set
	|| entity_index.is_set
	|| peer_id.is_set;
}

bool RoutingMplsLdpSessionDownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(entity_id.operation)
	|| is_set(entity_index.operation)
	|| is_set(peer_id.operation);
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_id.is_set || is_set(entity_id.operation)) leaf_name_data.push_back(entity_id.get_name_leafdata());
    if (entity_index.is_set || is_set(entity_index.operation)) leaf_name_data.push_back(entity_index.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RoutingMplsLdpSessionDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RoutingMplsLdpSessionDownRpc::get_children()
{
    return children;
}

void RoutingMplsLdpSessionDownRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RoutingMplsLdpSessionDownRpc::clone_ptr()
{
    return std::make_unique<RoutingMplsLdpSessionDownRpc>();
}
RoutingMplsTunnelReRoutedRpc::RoutingMplsTunnelReRoutedRpc()
    :
    	destination{YType::str, "destination"},
	 index_{YType::uint32, "index"},
	 instance{YType::uint32, "instance"},
	 source{YType::str, "source"}
{
    yang_name = "routing-mpls-tunnel-re-routed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReRoutedRpc::~RoutingMplsTunnelReRoutedRpc()
{
}

bool RoutingMplsTunnelReRoutedRpc::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelReRoutedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
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

Entity* RoutingMplsTunnelReRoutedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RoutingMplsTunnelReRoutedRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelReRoutedRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RoutingMplsTunnelReRoutedRpc::clone_ptr()
{
    return std::make_unique<RoutingMplsTunnelReRoutedRpc>();
}
RoutingMplsTunnelReOptimizedRpc::RoutingMplsTunnelReOptimizedRpc()
    :
    	destination{YType::str, "destination"},
	 index_{YType::uint32, "index"},
	 instance{YType::uint32, "instance"},
	 source{YType::str, "source"}
{
    yang_name = "routing-mpls-tunnel-re-optimized"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReOptimizedRpc::~RoutingMplsTunnelReOptimizedRpc()
{
}

bool RoutingMplsTunnelReOptimizedRpc::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelReOptimizedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
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

Entity* RoutingMplsTunnelReOptimizedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RoutingMplsTunnelReOptimizedRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelReOptimizedRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RoutingMplsTunnelReOptimizedRpc::clone_ptr()
{
    return std::make_unique<RoutingMplsTunnelReOptimizedRpc>();
}
RoutingMplsTunnelDownRpc::RoutingMplsTunnelDownRpc()
    :
    	destination{YType::str, "destination"},
	 index_{YType::uint32, "index"},
	 instance{YType::uint32, "instance"},
	 source{YType::str, "source"}
{
    yang_name = "routing-mpls-tunnel-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelDownRpc::~RoutingMplsTunnelDownRpc()
{
}

bool RoutingMplsTunnelDownRpc::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelDownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
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

Entity* RoutingMplsTunnelDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RoutingMplsTunnelDownRpc::get_children()
{
    return children;
}

void RoutingMplsTunnelDownRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RoutingMplsTunnelDownRpc::clone_ptr()
{
    return std::make_unique<RoutingMplsTunnelDownRpc>();
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AllRpc::get_children()
{
    return children;
}

void AllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> AllRpc::clone_ptr()
{
    return std::make_unique<AllRpc>();
}


}
}

