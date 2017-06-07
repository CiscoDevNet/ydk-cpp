
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

const EntityPath SnmpColdStartRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SnmpColdStartRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpColdStartRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath SnmpWarmStartRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SnmpWarmStartRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpWarmStartRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<InterfaceLinkUpRpc::Input>())
{
    input->parent = this;

    yang_name = "interface-link-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InterfaceLinkUpRpc::~InterfaceLinkUpRpc()
{
}

bool InterfaceLinkUpRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool InterfaceLinkUpRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceLinkUpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-up";

    return path_buffer.str();

}

const EntityPath InterfaceLinkUpRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InterfaceLinkUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceLinkUpRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkUpRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceLinkUpRpc::set_value(const std::string & value_path, std::string value)
{
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

InterfaceLinkUpRpc::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "input"; yang_parent_name = "interface-link-up";
}

InterfaceLinkUpRpc::Input::~Input()
{
}

bool InterfaceLinkUpRpc::Input::has_data() const
{
    return ifindex.is_set;
}

bool InterfaceLinkUpRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string InterfaceLinkUpRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceLinkUpRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-up/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceLinkUpRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkUpRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceLinkUpRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

InterfaceLinkDownRpc::InterfaceLinkDownRpc()
    :
    input(std::make_shared<InterfaceLinkDownRpc::Input>())
{
    input->parent = this;

    yang_name = "interface-link-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

InterfaceLinkDownRpc::~InterfaceLinkDownRpc()
{
}

bool InterfaceLinkDownRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool InterfaceLinkDownRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceLinkDownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-down";

    return path_buffer.str();

}

const EntityPath InterfaceLinkDownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InterfaceLinkDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceLinkDownRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkDownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceLinkDownRpc::set_value(const std::string & value_path, std::string value)
{
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

InterfaceLinkDownRpc::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "input"; yang_parent_name = "interface-link-down";
}

InterfaceLinkDownRpc::Input::~Input()
{
}

bool InterfaceLinkDownRpc::Input::has_data() const
{
    return ifindex.is_set;
}

bool InterfaceLinkDownRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string InterfaceLinkDownRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceLinkDownRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:interface-link-down/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceLinkDownRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceLinkDownRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceLinkDownRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

SonetSectionStatusRpc::SonetSectionStatusRpc()
    :
    input(std::make_shared<SonetSectionStatusRpc::Input>())
{
    input->parent = this;

    yang_name = "sonet-section-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SonetSectionStatusRpc::~SonetSectionStatusRpc()
{
}

bool SonetSectionStatusRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool SonetSectionStatusRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string SonetSectionStatusRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-section-status";

    return path_buffer.str();

}

const EntityPath SonetSectionStatusRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SonetSectionStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SonetSectionStatusRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetSectionStatusRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void SonetSectionStatusRpc::set_value(const std::string & value_path, std::string value)
{
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

SonetSectionStatusRpc::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "input"; yang_parent_name = "sonet-section-status";
}

SonetSectionStatusRpc::Input::~Input()
{
}

bool SonetSectionStatusRpc::Input::has_data() const
{
    return ifindex.is_set;
}

bool SonetSectionStatusRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string SonetSectionStatusRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath SonetSectionStatusRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-section-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetSectionStatusRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetSectionStatusRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetSectionStatusRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

SonetLineStatusRpc::SonetLineStatusRpc()
    :
    input(std::make_shared<SonetLineStatusRpc::Input>())
{
    input->parent = this;

    yang_name = "sonet-line-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SonetLineStatusRpc::~SonetLineStatusRpc()
{
}

bool SonetLineStatusRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool SonetLineStatusRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string SonetLineStatusRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-line-status";

    return path_buffer.str();

}

const EntityPath SonetLineStatusRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SonetLineStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SonetLineStatusRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetLineStatusRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void SonetLineStatusRpc::set_value(const std::string & value_path, std::string value)
{
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

SonetLineStatusRpc::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "input"; yang_parent_name = "sonet-line-status";
}

SonetLineStatusRpc::Input::~Input()
{
}

bool SonetLineStatusRpc::Input::has_data() const
{
    return ifindex.is_set;
}

bool SonetLineStatusRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string SonetLineStatusRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath SonetLineStatusRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-line-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetLineStatusRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetLineStatusRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetLineStatusRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
}

SonetPathStatusRpc::SonetPathStatusRpc()
    :
    input(std::make_shared<SonetPathStatusRpc::Input>())
{
    input->parent = this;

    yang_name = "sonet-path-status"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

SonetPathStatusRpc::~SonetPathStatusRpc()
{
}

bool SonetPathStatusRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool SonetPathStatusRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string SonetPathStatusRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-path-status";

    return path_buffer.str();

}

const EntityPath SonetPathStatusRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SonetPathStatusRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SonetPathStatusRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetPathStatusRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void SonetPathStatusRpc::set_value(const std::string & value_path, std::string value)
{
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

SonetPathStatusRpc::Input::Input()
    :
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "input"; yang_parent_name = "sonet-path-status";
}

SonetPathStatusRpc::Input::~Input()
{
}

bool SonetPathStatusRpc::Input::has_data() const
{
    return ifindex.is_set;
}

bool SonetPathStatusRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation);
}

std::string SonetPathStatusRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath SonetPathStatusRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:sonet-path-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetPathStatusRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetPathStatusRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetPathStatusRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
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

const EntityPath InfraSyslogMessageGeneratedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraSyslogMessageGeneratedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraSyslogMessageGeneratedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath InfraFlashDeviceInsertedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraFlashDeviceInsertedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraFlashDeviceInsertedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath InfraFlashDeviceRemovedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraFlashDeviceRemovedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraFlashDeviceRemovedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath InfraRedundancyProgressionRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraRedundancyProgressionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraRedundancyProgressionRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath InfraRedundancySwitchRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraRedundancySwitchRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraRedundancySwitchRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath InfraBridgeNewRootRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraBridgeNewRootRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraBridgeNewRootRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath InfraBridgeTopologyChangeRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraBridgeTopologyChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraBridgeTopologyChangeRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath InfraConfigEventRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InfraConfigEventRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InfraConfigEventRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<EntitySensorThresholdNotificationRpc::Input>())
{
    input->parent = this;

    yang_name = "entity-sensor-threshold-notification"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntitySensorThresholdNotificationRpc::~EntitySensorThresholdNotificationRpc()
{
}

bool EntitySensorThresholdNotificationRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EntitySensorThresholdNotificationRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntitySensorThresholdNotificationRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-sensor-threshold-notification";

    return path_buffer.str();

}

const EntityPath EntitySensorThresholdNotificationRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntitySensorThresholdNotificationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntitySensorThresholdNotificationRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorThresholdNotificationRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntitySensorThresholdNotificationRpc::set_value(const std::string & value_path, std::string value)
{
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

EntitySensorThresholdNotificationRpc::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "input"; yang_parent_name = "entity-sensor-threshold-notification";
}

EntitySensorThresholdNotificationRpc::Input::~Input()
{
}

bool EntitySensorThresholdNotificationRpc::Input::has_data() const
{
    return entindex.is_set;
}

bool EntitySensorThresholdNotificationRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntitySensorThresholdNotificationRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EntitySensorThresholdNotificationRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-sensor-threshold-notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntitySensorThresholdNotificationRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntitySensorThresholdNotificationRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntitySensorThresholdNotificationRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

EntityFruPowerStatusChangeFailedRpc::EntityFruPowerStatusChangeFailedRpc()
    :
    input(std::make_shared<EntityFruPowerStatusChangeFailedRpc::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-power-status-change-failed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruPowerStatusChangeFailedRpc::~EntityFruPowerStatusChangeFailedRpc()
{
}

bool EntityFruPowerStatusChangeFailedRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EntityFruPowerStatusChangeFailedRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruPowerStatusChangeFailedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-power-status-change-failed";

    return path_buffer.str();

}

const EntityPath EntityFruPowerStatusChangeFailedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityFruPowerStatusChangeFailedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruPowerStatusChangeFailedRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruPowerStatusChangeFailedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruPowerStatusChangeFailedRpc::set_value(const std::string & value_path, std::string value)
{
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

EntityFruPowerStatusChangeFailedRpc::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "input"; yang_parent_name = "entity-fru-power-status-change-failed";
}

EntityFruPowerStatusChangeFailedRpc::Input::~Input()
{
}

bool EntityFruPowerStatusChangeFailedRpc::Input::has_data() const
{
    return entindex.is_set;
}

bool EntityFruPowerStatusChangeFailedRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruPowerStatusChangeFailedRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EntityFruPowerStatusChangeFailedRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-power-status-change-failed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruPowerStatusChangeFailedRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruPowerStatusChangeFailedRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityFruPowerStatusChangeFailedRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

EntityFruModuleStatusChangeUpRpc::EntityFruModuleStatusChangeUpRpc()
    :
    input(std::make_shared<EntityFruModuleStatusChangeUpRpc::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-module-status-change-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruModuleStatusChangeUpRpc::~EntityFruModuleStatusChangeUpRpc()
{
}

bool EntityFruModuleStatusChangeUpRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EntityFruModuleStatusChangeUpRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruModuleStatusChangeUpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-up";

    return path_buffer.str();

}

const EntityPath EntityFruModuleStatusChangeUpRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityFruModuleStatusChangeUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruModuleStatusChangeUpRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeUpRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruModuleStatusChangeUpRpc::set_value(const std::string & value_path, std::string value)
{
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

EntityFruModuleStatusChangeUpRpc::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "input"; yang_parent_name = "entity-fru-module-status-change-up";
}

EntityFruModuleStatusChangeUpRpc::Input::~Input()
{
}

bool EntityFruModuleStatusChangeUpRpc::Input::has_data() const
{
    return entindex.is_set;
}

bool EntityFruModuleStatusChangeUpRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruModuleStatusChangeUpRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EntityFruModuleStatusChangeUpRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-up/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeUpRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeUpRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityFruModuleStatusChangeUpRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

EntityFruModuleStatusChangeDownRpc::EntityFruModuleStatusChangeDownRpc()
    :
    input(std::make_shared<EntityFruModuleStatusChangeDownRpc::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-module-status-change-down"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruModuleStatusChangeDownRpc::~EntityFruModuleStatusChangeDownRpc()
{
}

bool EntityFruModuleStatusChangeDownRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EntityFruModuleStatusChangeDownRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruModuleStatusChangeDownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-down";

    return path_buffer.str();

}

const EntityPath EntityFruModuleStatusChangeDownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityFruModuleStatusChangeDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruModuleStatusChangeDownRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeDownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruModuleStatusChangeDownRpc::set_value(const std::string & value_path, std::string value)
{
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

EntityFruModuleStatusChangeDownRpc::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "input"; yang_parent_name = "entity-fru-module-status-change-down";
}

EntityFruModuleStatusChangeDownRpc::Input::~Input()
{
}

bool EntityFruModuleStatusChangeDownRpc::Input::has_data() const
{
    return entindex.is_set;
}

bool EntityFruModuleStatusChangeDownRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruModuleStatusChangeDownRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EntityFruModuleStatusChangeDownRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-module-status-change-down/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruModuleStatusChangeDownRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruModuleStatusChangeDownRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityFruModuleStatusChangeDownRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

EntityFruFanTrayOperStatusUpRpc::EntityFruFanTrayOperStatusUpRpc()
    :
    input(std::make_shared<EntityFruFanTrayOperStatusUpRpc::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-fan-tray-oper-status-up"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruFanTrayOperStatusUpRpc::~EntityFruFanTrayOperStatusUpRpc()
{
}

bool EntityFruFanTrayOperStatusUpRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EntityFruFanTrayOperStatusUpRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruFanTrayOperStatusUpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-oper-status-up";

    return path_buffer.str();

}

const EntityPath EntityFruFanTrayOperStatusUpRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityFruFanTrayOperStatusUpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruFanTrayOperStatusUpRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayOperStatusUpRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruFanTrayOperStatusUpRpc::set_value(const std::string & value_path, std::string value)
{
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

EntityFruFanTrayOperStatusUpRpc::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "input"; yang_parent_name = "entity-fru-fan-tray-oper-status-up";
}

EntityFruFanTrayOperStatusUpRpc::Input::~Input()
{
}

bool EntityFruFanTrayOperStatusUpRpc::Input::has_data() const
{
    return entindex.is_set;
}

bool EntityFruFanTrayOperStatusUpRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruFanTrayOperStatusUpRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EntityFruFanTrayOperStatusUpRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-oper-status-up/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruFanTrayOperStatusUpRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayOperStatusUpRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityFruFanTrayOperStatusUpRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

EntityFruFanTrayInsertedRpc::EntityFruFanTrayInsertedRpc()
    :
    input(std::make_shared<EntityFruFanTrayInsertedRpc::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-fan-tray-inserted"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruFanTrayInsertedRpc::~EntityFruFanTrayInsertedRpc()
{
}

bool EntityFruFanTrayInsertedRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EntityFruFanTrayInsertedRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruFanTrayInsertedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-inserted";

    return path_buffer.str();

}

const EntityPath EntityFruFanTrayInsertedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityFruFanTrayInsertedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruFanTrayInsertedRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayInsertedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruFanTrayInsertedRpc::set_value(const std::string & value_path, std::string value)
{
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

EntityFruFanTrayInsertedRpc::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "input"; yang_parent_name = "entity-fru-fan-tray-inserted";
}

EntityFruFanTrayInsertedRpc::Input::~Input()
{
}

bool EntityFruFanTrayInsertedRpc::Input::has_data() const
{
    return entindex.is_set;
}

bool EntityFruFanTrayInsertedRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruFanTrayInsertedRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EntityFruFanTrayInsertedRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-inserted/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruFanTrayInsertedRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayInsertedRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityFruFanTrayInsertedRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

EntityFruFanTrayRemovedRpc::EntityFruFanTrayRemovedRpc()
    :
    input(std::make_shared<EntityFruFanTrayRemovedRpc::Input>())
{
    input->parent = this;

    yang_name = "entity-fru-fan-tray-removed"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

EntityFruFanTrayRemovedRpc::~EntityFruFanTrayRemovedRpc()
{
}

bool EntityFruFanTrayRemovedRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EntityFruFanTrayRemovedRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EntityFruFanTrayRemovedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-removed";

    return path_buffer.str();

}

const EntityPath EntityFruFanTrayRemovedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityFruFanTrayRemovedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EntityFruFanTrayRemovedRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayRemovedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EntityFruFanTrayRemovedRpc::set_value(const std::string & value_path, std::string value)
{
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

EntityFruFanTrayRemovedRpc::Input::Input()
    :
    entindex{YType::uint32, "entindex"}
{
    yang_name = "input"; yang_parent_name = "entity-fru-fan-tray-removed";
}

EntityFruFanTrayRemovedRpc::Input::~Input()
{
}

bool EntityFruFanTrayRemovedRpc::Input::has_data() const
{
    return entindex.is_set;
}

bool EntityFruFanTrayRemovedRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entindex.operation);
}

std::string EntityFruFanTrayRemovedRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EntityFruFanTrayRemovedRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:entity-fru-fan-tray-removed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entindex.is_set || is_set(entindex.operation)) leaf_name_data.push_back(entindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityFruFanTrayRemovedRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityFruFanTrayRemovedRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityFruFanTrayRemovedRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entindex")
    {
        entindex = value;
    }
}

PlatformHfrBundleDownedLinkRpc::PlatformHfrBundleDownedLinkRpc()
    :
    input(std::make_shared<PlatformHfrBundleDownedLinkRpc::Input>())
{
    input->parent = this;

    yang_name = "platform-hfr-bundle-downed-link"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

PlatformHfrBundleDownedLinkRpc::~PlatformHfrBundleDownedLinkRpc()
{
}

bool PlatformHfrBundleDownedLinkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool PlatformHfrBundleDownedLinkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformHfrBundleDownedLinkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-downed-link";

    return path_buffer.str();

}

const EntityPath PlatformHfrBundleDownedLinkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PlatformHfrBundleDownedLinkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformHfrBundleDownedLinkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleDownedLinkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PlatformHfrBundleDownedLinkRpc::set_value(const std::string & value_path, std::string value)
{
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

PlatformHfrBundleDownedLinkRpc::Input::Input()
    :
    bundle_name{YType::str, "bundle-name"}
{
    yang_name = "input"; yang_parent_name = "platform-hfr-bundle-downed-link";
}

PlatformHfrBundleDownedLinkRpc::Input::~Input()
{
}

bool PlatformHfrBundleDownedLinkRpc::Input::has_data() const
{
    return bundle_name.is_set;
}

bool PlatformHfrBundleDownedLinkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation);
}

std::string PlatformHfrBundleDownedLinkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath PlatformHfrBundleDownedLinkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-downed-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformHfrBundleDownedLinkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleDownedLinkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformHfrBundleDownedLinkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

PlatformHfrBundleStateRpc::PlatformHfrBundleStateRpc()
    :
    input(std::make_shared<PlatformHfrBundleStateRpc::Input>())
{
    input->parent = this;

    yang_name = "platform-hfr-bundle-state"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

PlatformHfrBundleStateRpc::~PlatformHfrBundleStateRpc()
{
}

bool PlatformHfrBundleStateRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool PlatformHfrBundleStateRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformHfrBundleStateRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-state";

    return path_buffer.str();

}

const EntityPath PlatformHfrBundleStateRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PlatformHfrBundleStateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformHfrBundleStateRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleStateRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PlatformHfrBundleStateRpc::set_value(const std::string & value_path, std::string value)
{
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

PlatformHfrBundleStateRpc::Input::Input()
    :
    bundle_name{YType::str, "bundle-name"}
{
    yang_name = "input"; yang_parent_name = "platform-hfr-bundle-state";
}

PlatformHfrBundleStateRpc::Input::~Input()
{
}

bool PlatformHfrBundleStateRpc::Input::has_data() const
{
    return bundle_name.is_set;
}

bool PlatformHfrBundleStateRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation);
}

std::string PlatformHfrBundleStateRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath PlatformHfrBundleStateRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-bundle-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformHfrBundleStateRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrBundleStateRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformHfrBundleStateRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

PlatformHfrPlaneStateRpc::PlatformHfrPlaneStateRpc()
    :
    input(std::make_shared<PlatformHfrPlaneStateRpc::Input>())
{
    input->parent = this;

    yang_name = "platform-hfr-plane-state"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

PlatformHfrPlaneStateRpc::~PlatformHfrPlaneStateRpc()
{
}

bool PlatformHfrPlaneStateRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool PlatformHfrPlaneStateRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformHfrPlaneStateRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-plane-state";

    return path_buffer.str();

}

const EntityPath PlatformHfrPlaneStateRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PlatformHfrPlaneStateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformHfrPlaneStateRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrPlaneStateRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PlatformHfrPlaneStateRpc::set_value(const std::string & value_path, std::string value)
{
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

PlatformHfrPlaneStateRpc::Input::Input()
    :
    plane_id{YType::uint32, "plane-id"}
{
    yang_name = "input"; yang_parent_name = "platform-hfr-plane-state";
}

PlatformHfrPlaneStateRpc::Input::~Input()
{
}

bool PlatformHfrPlaneStateRpc::Input::has_data() const
{
    return plane_id.is_set;
}

bool PlatformHfrPlaneStateRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(plane_id.operation);
}

std::string PlatformHfrPlaneStateRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath PlatformHfrPlaneStateRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:platform-hfr-plane-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.operation)) leaf_name_data.push_back(plane_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformHfrPlaneStateRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformHfrPlaneStateRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PlatformHfrPlaneStateRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "plane-id")
    {
        plane_id = value;
    }
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

const EntityPath RoutingBgpEstablishedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingBgpEstablishedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpEstablishedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<RoutingBgpEstablishedRemotePeerRpc::Input>())
{
    input->parent = this;

    yang_name = "routing-bgp-established-remote-peer"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingBgpEstablishedRemotePeerRpc::~RoutingBgpEstablishedRemotePeerRpc()
{
}

bool RoutingBgpEstablishedRemotePeerRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RoutingBgpEstablishedRemotePeerRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingBgpEstablishedRemotePeerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-established-remote-peer";

    return path_buffer.str();

}

const EntityPath RoutingBgpEstablishedRemotePeerRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingBgpEstablishedRemotePeerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingBgpEstablishedRemotePeerRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpEstablishedRemotePeerRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingBgpEstablishedRemotePeerRpc::set_value(const std::string & value_path, std::string value)
{
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

RoutingBgpEstablishedRemotePeerRpc::Input::Input()
    :
    address{YType::str, "address"}
{
    yang_name = "input"; yang_parent_name = "routing-bgp-established-remote-peer";
}

RoutingBgpEstablishedRemotePeerRpc::Input::~Input()
{
}

bool RoutingBgpEstablishedRemotePeerRpc::Input::has_data() const
{
    return address.is_set;
}

bool RoutingBgpEstablishedRemotePeerRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string RoutingBgpEstablishedRemotePeerRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RoutingBgpEstablishedRemotePeerRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-established-remote-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingBgpEstablishedRemotePeerRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpEstablishedRemotePeerRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingBgpEstablishedRemotePeerRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
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

const EntityPath RoutingBgpStateChangeRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingBgpStateChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpStateChangeRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<RoutingBgpStateChangeRemotePeerRpc::Input>())
{
    input->parent = this;

    yang_name = "routing-bgp-state-change-remote-peer"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingBgpStateChangeRemotePeerRpc::~RoutingBgpStateChangeRemotePeerRpc()
{
}

bool RoutingBgpStateChangeRemotePeerRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RoutingBgpStateChangeRemotePeerRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingBgpStateChangeRemotePeerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-state-change-remote-peer";

    return path_buffer.str();

}

const EntityPath RoutingBgpStateChangeRemotePeerRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingBgpStateChangeRemotePeerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingBgpStateChangeRemotePeerRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpStateChangeRemotePeerRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingBgpStateChangeRemotePeerRpc::set_value(const std::string & value_path, std::string value)
{
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

RoutingBgpStateChangeRemotePeerRpc::Input::Input()
    :
    address{YType::str, "address"}
{
    yang_name = "input"; yang_parent_name = "routing-bgp-state-change-remote-peer";
}

RoutingBgpStateChangeRemotePeerRpc::Input::~Input()
{
}

bool RoutingBgpStateChangeRemotePeerRpc::Input::has_data() const
{
    return address.is_set;
}

bool RoutingBgpStateChangeRemotePeerRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string RoutingBgpStateChangeRemotePeerRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RoutingBgpStateChangeRemotePeerRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-bgp-state-change-remote-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingBgpStateChangeRemotePeerRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingBgpStateChangeRemotePeerRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingBgpStateChangeRemotePeerRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
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

const EntityPath RoutingOspfNeighborStateChangeRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingOspfNeighborStateChangeRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<RoutingOspfNeighborStateChangeAddressRpc::Input>())
{
    input->parent = this;

    yang_name = "routing-ospf-neighbor-state-change-address"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingOspfNeighborStateChangeAddressRpc::~RoutingOspfNeighborStateChangeAddressRpc()
{
}

bool RoutingOspfNeighborStateChangeAddressRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RoutingOspfNeighborStateChangeAddressRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingOspfNeighborStateChangeAddressRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-ospf-neighbor-state-change-address";

    return path_buffer.str();

}

const EntityPath RoutingOspfNeighborStateChangeAddressRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeAddressRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingOspfNeighborStateChangeAddressRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingOspfNeighborStateChangeAddressRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingOspfNeighborStateChangeAddressRpc::set_value(const std::string & value_path, std::string value)
{
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

RoutingOspfNeighborStateChangeAddressRpc::Input::Input()
    :
    address{YType::str, "address"},
    ifindex{YType::uint32, "ifindex"}
{
    yang_name = "input"; yang_parent_name = "routing-ospf-neighbor-state-change-address";
}

RoutingOspfNeighborStateChangeAddressRpc::Input::~Input()
{
}

bool RoutingOspfNeighborStateChangeAddressRpc::Input::has_data() const
{
    return address.is_set
	|| ifindex.is_set;
}

bool RoutingOspfNeighborStateChangeAddressRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(ifindex.operation);
}

std::string RoutingOspfNeighborStateChangeAddressRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RoutingOspfNeighborStateChangeAddressRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-ospf-neighbor-state-change-address/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingOspfNeighborStateChangeAddressRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingOspfNeighborStateChangeAddressRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingOspfNeighborStateChangeAddressRpc::Input::set_value(const std::string & value_path, std::string value)
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

const EntityPath RoutingMplsLdpSessionDownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsLdpSessionDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsLdpSessionDownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<RoutingMplsLdpSessionDownEntityIdRpc::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-ldp-session-down-entity-id"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsLdpSessionDownEntityIdRpc::~RoutingMplsLdpSessionDownEntityIdRpc()
{
}

bool RoutingMplsLdpSessionDownEntityIdRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsLdpSessionDownEntityIdRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsLdpSessionDownEntityIdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-ldp-session-down-entity-id";

    return path_buffer.str();

}

const EntityPath RoutingMplsLdpSessionDownEntityIdRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsLdpSessionDownEntityIdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsLdpSessionDownEntityIdRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsLdpSessionDownEntityIdRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsLdpSessionDownEntityIdRpc::set_value(const std::string & value_path, std::string value)
{
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

RoutingMplsLdpSessionDownEntityIdRpc::Input::Input()
    :
    entity_id{YType::str, "entity-id"},
    entity_index{YType::uint32, "entity-index"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "input"; yang_parent_name = "routing-mpls-ldp-session-down-entity-id";
}

RoutingMplsLdpSessionDownEntityIdRpc::Input::~Input()
{
}

bool RoutingMplsLdpSessionDownEntityIdRpc::Input::has_data() const
{
    return entity_id.is_set
	|| entity_index.is_set
	|| peer_id.is_set;
}

bool RoutingMplsLdpSessionDownEntityIdRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(entity_id.operation)
	|| is_set(entity_index.operation)
	|| is_set(peer_id.operation);
}

std::string RoutingMplsLdpSessionDownEntityIdRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RoutingMplsLdpSessionDownEntityIdRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-ldp-session-down-entity-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_id.is_set || is_set(entity_id.operation)) leaf_name_data.push_back(entity_id.get_name_leafdata());
    if (entity_index.is_set || is_set(entity_index.operation)) leaf_name_data.push_back(entity_index.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsLdpSessionDownEntityIdRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsLdpSessionDownEntityIdRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingMplsLdpSessionDownEntityIdRpc::Input::set_value(const std::string & value_path, std::string value)
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

const EntityPath RoutingMplsTunnelReRoutedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReRoutedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<RoutingMplsTunnelReRoutedIndexRpc::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-tunnel-re-routed-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReRoutedIndexRpc::~RoutingMplsTunnelReRoutedIndexRpc()
{
}

bool RoutingMplsTunnelReRoutedIndexRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsTunnelReRoutedIndexRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsTunnelReRoutedIndexRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-routed-index";

    return path_buffer.str();

}

const EntityPath RoutingMplsTunnelReRoutedIndexRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedIndexRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsTunnelReRoutedIndexRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReRoutedIndexRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsTunnelReRoutedIndexRpc::set_value(const std::string & value_path, std::string value)
{
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

RoutingMplsTunnelReRoutedIndexRpc::Input::Input()
    :
    destination{YType::str, "destination"},
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"}
{
    yang_name = "input"; yang_parent_name = "routing-mpls-tunnel-re-routed-index";
}

RoutingMplsTunnelReRoutedIndexRpc::Input::~Input()
{
}

bool RoutingMplsTunnelReRoutedIndexRpc::Input::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelReRoutedIndexRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
}

std::string RoutingMplsTunnelReRoutedIndexRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RoutingMplsTunnelReRoutedIndexRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-routed-index/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelReRoutedIndexRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReRoutedIndexRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingMplsTunnelReRoutedIndexRpc::Input::set_value(const std::string & value_path, std::string value)
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

const EntityPath RoutingMplsTunnelReOptimizedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReOptimizedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<RoutingMplsTunnelReOptimizedIndexRpc::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-tunnel-re-optimized-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelReOptimizedIndexRpc::~RoutingMplsTunnelReOptimizedIndexRpc()
{
}

bool RoutingMplsTunnelReOptimizedIndexRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsTunnelReOptimizedIndexRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsTunnelReOptimizedIndexRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-optimized-index";

    return path_buffer.str();

}

const EntityPath RoutingMplsTunnelReOptimizedIndexRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedIndexRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsTunnelReOptimizedIndexRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReOptimizedIndexRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsTunnelReOptimizedIndexRpc::set_value(const std::string & value_path, std::string value)
{
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

RoutingMplsTunnelReOptimizedIndexRpc::Input::Input()
    :
    destination{YType::str, "destination"},
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"}
{
    yang_name = "input"; yang_parent_name = "routing-mpls-tunnel-re-optimized-index";
}

RoutingMplsTunnelReOptimizedIndexRpc::Input::~Input()
{
}

bool RoutingMplsTunnelReOptimizedIndexRpc::Input::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelReOptimizedIndexRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
}

std::string RoutingMplsTunnelReOptimizedIndexRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RoutingMplsTunnelReOptimizedIndexRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-re-optimized-index/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelReOptimizedIndexRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelReOptimizedIndexRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingMplsTunnelReOptimizedIndexRpc::Input::set_value(const std::string & value_path, std::string value)
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

const EntityPath RoutingMplsTunnelDownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsTunnelDownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelDownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    input(std::make_shared<RoutingMplsTunnelDownIndexRpc::Input>())
{
    input->parent = this;

    yang_name = "routing-mpls-tunnel-down-index"; yang_parent_name = "Cisco-IOS-XR-snmp-test-trap-act";
}

RoutingMplsTunnelDownIndexRpc::~RoutingMplsTunnelDownIndexRpc()
{
}

bool RoutingMplsTunnelDownIndexRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RoutingMplsTunnelDownIndexRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RoutingMplsTunnelDownIndexRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-down-index";

    return path_buffer.str();

}

const EntityPath RoutingMplsTunnelDownIndexRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RoutingMplsTunnelDownIndexRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RoutingMplsTunnelDownIndexRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelDownIndexRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RoutingMplsTunnelDownIndexRpc::set_value(const std::string & value_path, std::string value)
{
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

RoutingMplsTunnelDownIndexRpc::Input::Input()
    :
    destination{YType::str, "destination"},
    index_{YType::uint32, "index"},
    instance{YType::uint32, "instance"},
    source{YType::str, "source"}
{
    yang_name = "input"; yang_parent_name = "routing-mpls-tunnel-down-index";
}

RoutingMplsTunnelDownIndexRpc::Input::~Input()
{
}

bool RoutingMplsTunnelDownIndexRpc::Input::has_data() const
{
    return destination.is_set
	|| index_.is_set
	|| instance.is_set
	|| source.is_set;
}

bool RoutingMplsTunnelDownIndexRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(index_.operation)
	|| is_set(instance.operation)
	|| is_set(source.operation);
}

std::string RoutingMplsTunnelDownIndexRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RoutingMplsTunnelDownIndexRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-test-trap-act:routing-mpls-tunnel-down-index/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingMplsTunnelDownIndexRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingMplsTunnelDownIndexRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingMplsTunnelDownIndexRpc::Input::set_value(const std::string & value_path, std::string value)
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

const EntityPath AllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> AllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

