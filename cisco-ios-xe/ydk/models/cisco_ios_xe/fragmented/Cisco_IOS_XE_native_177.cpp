
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_177.hpp"
#include "Cisco_IOS_XE_native_178.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ap_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "AP_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::~Ap_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AP_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "AP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "AP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "AP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "AP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "AP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Dmp_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "DMP_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::~Dmp_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DMP_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "DMP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "DMP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "DMP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "DMP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "DMP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Dmp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip_Phone_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "IP_PHONE_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::~Ip_Phone_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP_PHONE_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Ip_Phone_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Msp_Camera_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "MSP_CAMERA_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::~Msp_Camera_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MSP_CAMERA_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Msp_Vc_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "MSP_VC_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::~Msp_Vc_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MSP_VC_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}


}
}

