
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_157.hpp"
#include "Cisco_IOS_XE_native_158.hpp"
#include "Cisco_IOS_XE_native_159.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(operation)
	|| is_set(restrict.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.operation)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restrict")
    {
        restrict = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Template_::Printer_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Template_::Printer_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::Template_::Printer_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Printer_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Printer_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Printer_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Template_::Printer_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::Template_::Printer_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Printer_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Printer_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Printer_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::Template_::Printer_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::Template_::Printer_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::Template_::Printer_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template_::Printer_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template_::Printer_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template_::Printer_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::SpanningTree::get_children() const
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

void Native::Template_::Printer_Interface_Template::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
}

Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(network.operation);
}

std::string Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

Native::Template_::Printer_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::Template_::Printer_Interface_Template::StormControl::~StormControl()
{
}

bool Native::Template_::Printer_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Template_::Printer_Interface_Template::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Template_::Printer_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::StormControl::get_children() const
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

void Native::Template_::Printer_Interface_Template::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template_::Printer_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template_::Printer_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(b_unit.operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.operation)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Printer_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Template_::Printer_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::Template_::Printer_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template_::Printer_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Template_::Printer_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Template_::Printer_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template_::Printer_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::Template_::Printer_Interface_Template::Ip::~Ip()
{
}

bool Native::Template_::Printer_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template_::Printer_Interface_Template::Ip::has_operation() const
{
    return is_set(operation)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template_::Printer_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template_::Printer_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template_::Printer_Interface_Template::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Printer_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Template_::Printer_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template_::Printer_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template_::Printer_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template_::Printer_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template_::Printer_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/PRINTER_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Template_::Router_Interface_Template::Router_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::Template_::Router_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::Template_::Router_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::Template_::Router_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::Template_::Router_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "ROUTER_INTERFACE_TEMPLATE"; yang_parent_name = "template";
}

Native::Template_::Router_Interface_Template::~Router_Interface_Template()
{
}

bool Native::Template_::Router_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::Template_::Router_Interface_Template::has_operation() const
{
    return is_set(operation)
	|| is_set(load_interval.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::Template_::Router_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ROUTER_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template_::Router_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template_::Router_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template_::Router_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template_::Router_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template_::Router_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::get_children() const
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

void Native::Template_::Router_Interface_Template::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Template_::Router_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template_::Router_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::Template_::Router_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::Template_::Router_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template_::Router_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template_::Router_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template_::Router_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template_::Router_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template_::Router_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::ServicePolicy::get_children() const
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

void Native::Template_::Router_Interface_Template::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Template_::Router_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::Template_::Router_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Router_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Router_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Router_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Template_::Router_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::Template_::Router_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Router_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Router_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::Template_::Router_Interface_Template::Switchport::~Switchport()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template_::Router_Interface_Template::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(nonegotiate.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template_::Router_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::get_children() const
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

void Native::Template_::Router_Interface_Template::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Template_::Router_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::Template_::Router_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(trunk.operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Template_::Router_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::Template_::Router_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template_::Router_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::Template_::Router_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(inactivity.operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.operation)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
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

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(operation)
	|| is_set(restrict.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.operation)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restrict")
    {
        restrict = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Template_::Router_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Router_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Router_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Template_::Router_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::Template_::Router_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Router_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Router_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Router_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::Template_::Router_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::Template_::Router_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::Template_::Router_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template_::Router_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template_::Router_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template_::Router_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::SpanningTree::get_children() const
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

void Native::Template_::Router_Interface_Template::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
}

Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Template_::Router_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Template_::Router_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template_::Router_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template_::Router_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(network.operation);
}

std::string Native::Template_::Router_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

Native::Template_::Router_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::Template_::Router_Interface_Template::StormControl::~StormControl()
{
}

bool Native::Template_::Router_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Template_::Router_Interface_Template::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Template_::Router_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::StormControl::get_children() const
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

void Native::Template_::Router_Interface_Template::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template_::Router_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template_::Router_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(b_unit.operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.operation)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Router_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Template_::Router_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::Template_::Router_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template_::Router_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Template_::Router_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Template_::Router_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template_::Router_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::Template_::Router_Interface_Template::Ip::~Ip()
{
}

bool Native::Template_::Router_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template_::Router_Interface_Template::Ip::has_operation() const
{
    return is_set(operation)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template_::Router_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template_::Router_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template_::Router_Interface_Template::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Template_::Router_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template_::Router_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template_::Router_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template_::Router_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template_::Router_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/ROUTER_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Template_::Switch_Interface_Template::Switch_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::Template_::Switch_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::Template_::Switch_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::Template_::Switch_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "SWITCH_INTERFACE_TEMPLATE"; yang_parent_name = "template";
}

Native::Template_::Switch_Interface_Template::~Switch_Interface_Template()
{
}

bool Native::Template_::Switch_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::Template_::Switch_Interface_Template::has_operation() const
{
    return is_set(operation)
	|| is_set(load_interval.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SWITCH_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template_::Switch_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template_::Switch_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template_::Switch_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template_::Switch_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::get_children() const
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

void Native::Template_::Switch_Interface_Template::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Template_::Switch_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template_::Switch_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::Template_::Switch_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::Template_::Switch_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template_::Switch_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template_::Switch_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template_::Switch_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template_::Switch_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::ServicePolicy::get_children() const
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

void Native::Template_::Switch_Interface_Template::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Template_::Switch_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::Template_::Switch_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Switch_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Switch_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Switch_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Template_::Switch_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::Template_::Switch_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Switch_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Switch_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::Template_::Switch_Interface_Template::Switchport::~Switchport()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template_::Switch_Interface_Template::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(nonegotiate.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::get_children() const
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

void Native::Template_::Switch_Interface_Template::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Template_::Switch_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::Template_::Switch_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(trunk.operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Template_::Switch_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::Template_::Switch_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(inactivity.operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.operation)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
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

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(operation)
	|| is_set(restrict.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.operation)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restrict")
    {
        restrict = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Template_::Switch_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Switch_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Switch_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Template_::Switch_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::Template_::Switch_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Switch_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Switch_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Switch_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::Template_::Switch_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::Template_::Switch_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::Template_::Switch_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template_::Switch_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template_::Switch_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::SpanningTree::get_children() const
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

void Native::Template_::Switch_Interface_Template::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
}

Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(network.operation);
}

std::string Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

Native::Template_::Switch_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::Template_::Switch_Interface_Template::StormControl::~StormControl()
{
}

bool Native::Template_::Switch_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Template_::Switch_Interface_Template::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::StormControl::get_children() const
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

void Native::Template_::Switch_Interface_Template::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template_::Switch_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(b_unit.operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.operation)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Switch_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Template_::Switch_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::Template_::Switch_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template_::Switch_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Template_::Switch_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Template_::Switch_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template_::Switch_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::Template_::Switch_Interface_Template::Ip::~Ip()
{
}

bool Native::Template_::Switch_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template_::Switch_Interface_Template::Ip::has_operation() const
{
    return is_set(operation)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template_::Switch_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template_::Switch_Interface_Template::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Template_::Switch_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template_::Switch_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template_::Switch_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template_::Switch_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/SWITCH_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Template_::Tp_Interface_Template::Tp_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::Template_::Tp_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::Template_::Tp_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::Template_::Tp_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "TP_INTERFACE_TEMPLATE"; yang_parent_name = "template";
}

Native::Template_::Tp_Interface_Template::~Tp_Interface_Template()
{
}

bool Native::Template_::Tp_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::Template_::Tp_Interface_Template::has_operation() const
{
    return is_set(operation)
	|| is_set(load_interval.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TP_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template_::Tp_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template_::Tp_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template_::Tp_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template_::Tp_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::get_children() const
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

void Native::Template_::Tp_Interface_Template::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Template_::Tp_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template_::Tp_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::Template_::Tp_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::Template_::Tp_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template_::Tp_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template_::Tp_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template_::Tp_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template_::Tp_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::ServicePolicy::get_children() const
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

void Native::Template_::Tp_Interface_Template::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Template_::Tp_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::Template_::Tp_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Tp_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Tp_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Tp_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Template_::Tp_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::Template_::Tp_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Tp_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Tp_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::Template_::Tp_Interface_Template::Switchport::~Switchport()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template_::Tp_Interface_Template::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(nonegotiate.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::get_children() const
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

void Native::Template_::Tp_Interface_Template::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Template_::Tp_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::Template_::Tp_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(trunk.operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Template_::Tp_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::Template_::Tp_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(inactivity.operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.operation)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
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

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(operation)
	|| is_set(restrict.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.operation)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restrict")
    {
        restrict = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Template_::Tp_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Tp_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Tp_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Template_::Tp_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::Template_::Tp_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Tp_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Tp_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Tp_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::Template_::Tp_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::Template_::Tp_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::Template_::Tp_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template_::Tp_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template_::Tp_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::SpanningTree::get_children() const
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

void Native::Template_::Tp_Interface_Template::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
}

Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(network.operation);
}

std::string Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

Native::Template_::Tp_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::Template_::Tp_Interface_Template::StormControl::~StormControl()
{
}

bool Native::Template_::Tp_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Template_::Tp_Interface_Template::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::StormControl::get_children() const
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

void Native::Template_::Tp_Interface_Template::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template_::Tp_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(b_unit.operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.operation)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Tp_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Template_::Tp_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::Template_::Tp_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template_::Tp_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Template_::Tp_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Template_::Tp_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template_::Tp_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::Template_::Tp_Interface_Template::Ip::~Ip()
{
}

bool Native::Template_::Tp_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template_::Tp_Interface_Template::Ip::has_operation() const
{
    return is_set(operation)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template_::Tp_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template_::Tp_Interface_Template::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Template_::Tp_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template_::Tp_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template_::Tp_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template_::Tp_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/TP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::ServiceTemplate::ServiceTemplate()
    :
    word{YType::str, "word"},
    vlan{YType::uint16, "vlan"}
    	,
    inactivity_timer(std::make_shared<Native::ServiceTemplate::InactivityTimer>())
	,linksec(std::make_shared<Native::ServiceTemplate::Linksec>())
	,voice(std::make_shared<Native::ServiceTemplate::Voice>())
{
    inactivity_timer->parent = this;

    linksec->parent = this;

    voice->parent = this;

    yang_name = "service-template"; yang_parent_name = "native";
}

Native::ServiceTemplate::~ServiceTemplate()
{
}

bool Native::ServiceTemplate::has_data() const
{
    return word.is_set
	|| vlan.is_set
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_data())
	|| (linksec !=  nullptr && linksec->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::ServiceTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(vlan.operation)
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_operation())
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::ServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:service-template" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity-timer")
    {
        if(inactivity_timer == nullptr)
        {
            inactivity_timer = std::make_shared<Native::ServiceTemplate::InactivityTimer>();
        }
        return inactivity_timer;
    }

    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::ServiceTemplate::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::ServiceTemplate::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inactivity_timer != nullptr)
    {
        children["inactivity-timer"] = inactivity_timer;
    }

    if(linksec != nullptr)
    {
        children["linksec"] = linksec;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::ServiceTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::ServiceTemplate::InactivityTimer::InactivityTimer()
    :
    probe{YType::empty, "probe"},
    value_{YType::uint16, "value"}
{
    yang_name = "inactivity-timer"; yang_parent_name = "service-template";
}

Native::ServiceTemplate::InactivityTimer::~InactivityTimer()
{
}

bool Native::ServiceTemplate::InactivityTimer::has_data() const
{
    return probe.is_set
	|| value_.is_set;
}

bool Native::ServiceTemplate::InactivityTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(probe.operation)
	|| is_set(value_.operation);
}

std::string Native::ServiceTemplate::InactivityTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity-timer";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::InactivityTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InactivityTimer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe.is_set || is_set(probe.operation)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::InactivityTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::InactivityTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::InactivityTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "probe")
    {
        probe = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::ServiceTemplate::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{
    yang_name = "linksec"; yang_parent_name = "service-template";
}

Native::ServiceTemplate::Linksec::~Linksec()
{
}

bool Native::ServiceTemplate::Linksec::has_data() const
{
    return policy.is_set;
}

bool Native::ServiceTemplate::Linksec::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Native::ServiceTemplate::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::Linksec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Linksec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::Linksec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Native::ServiceTemplate::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "service-template";
}

Native::ServiceTemplate::Voice::~Voice()
{
}

bool Native::ServiceTemplate::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::ServiceTemplate::Voice::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::ServiceTemplate::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Voice' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::Voice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Arp::Arp()
{
    yang_name = "arp"; yang_parent_name = "native";
}

Native::Arp::~Arp()
{
}

bool Native::Arp::has_data() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::has_operation() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:arp";

    return path_buffer.str();

}

const EntityPath Native::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        for(auto const & c : access_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList>();
        c->parent = this;
        access_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::AccessList()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Arp::AccessList::Default_>())
	,deny(std::make_shared<Native::Arp::AccessList::Deny>())
	,no(std::make_shared<Native::Arp::AccessList::No>())
	,permit(std::make_shared<Native::Arp::AccessList::Permit>())
{
    default_->parent = this;

    deny->parent = this;

    no->parent = this;

    permit->parent = this;

    yang_name = "access-list"; yang_parent_name = "arp";
}

Native::Arp::AccessList::~AccessList()
{
}

bool Native::Arp::AccessList::has_data() const
{
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (deny !=  nullptr && deny->has_data())
	|| (no !=  nullptr && no->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Arp::AccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (deny !=  nullptr && deny->has_operation())
	|| (no !=  nullptr && no->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Arp::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:arp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Arp::AccessList::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Arp::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "no")
    {
        if(no == nullptr)
        {
            no = std::make_shared<Native::Arp::AccessList::No>();
        }
        return no;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Arp::AccessList::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(no != nullptr)
    {
        children["no"] = no;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Arp::AccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Arp::AccessList::Permit::Permit()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Ip>())
	,request(std::make_shared<Native::Arp::AccessList::Permit::Request>())
	,response(std::make_shared<Native::Arp::AccessList::Permit::Response>())
{
    ip->parent = this;

    request->parent = this;

    response->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list";
}

Native::Arp::AccessList::Permit::~Permit()
{
}

bool Native::Arp::AccessList::Permit::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Permit::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Permit::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Permit::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Arp::AccessList::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>())
{
    any->parent = this;

    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit";
}

Native::Arp::AccessList::Permit::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip";
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_mask.operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderIpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.operation)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address";
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip";
}

Native::Arp::AccessList::Permit::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_operation() const
{
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any";
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Any::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Ip::Host::Host()
{
    yang_name = "host"; yang_parent_name = "ip";
}

Native::Arp::AccessList::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address";
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::Host_()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "permit";
}

Native::Arp::AccessList::Permit::Request::~Request()
{
}

bool Native::Arp::AccessList::Permit::Request::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Permit::Request::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>())
{
    any->parent = this;

    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request";
}

Native::Arp::AccessList::Permit::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip";
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_mask.operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderIpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.operation)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address";
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip";
}

Native::Arp::AccessList::Permit::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_operation() const
{
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any";
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::Host::Host()
{
    yang_name = "host"; yang_parent_name = "ip";
}

Native::Arp::AccessList::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address";
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::ServiceTemplate::Linksec::PolicyEnum::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::PolicyEnum::must_secure {1, "must-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::PolicyEnum::should_secure {2, "should-secure"};


}
}

