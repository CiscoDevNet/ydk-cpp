
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_27.hpp"
#include "Cisco_IOS_XE_native_28.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Gigabitethernet::Switchport::Mode::Mode()
    :
    dynamic{YType::enumeration, "dynamic"}
    	,
    access(nullptr) // presence node
	,dot1q_tunnel(nullptr) // presence node
	,private_vlan(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan>())
	,trunk(nullptr) // presence node
{
    private_vlan->parent = this;

    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::Mode::~Mode()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::has_data() const
{
    return dynamic.is_set
	|| (access !=  nullptr && access->has_data())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Mode::Access>();
        }
        return access;
    }

    if(child_yang_name == "dot1q-tunnel")
    {
        if(dot1q_tunnel == nullptr)
        {
            dot1q_tunnel = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel>();
        }
        return dot1q_tunnel;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Mode::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(dot1q_tunnel != nullptr)
    {
        children["dot1q-tunnel"] = dot1q_tunnel;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        children["trunk"] = trunk;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Mode::Access::Access()
{
    yang_name = "access"; yang_parent_name = "mode";
}

Native::Interface::Gigabitethernet::Switchport::Mode::Access::~Access()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::Access::has_data() const
{
    return false;
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::Access::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Mode::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Mode::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Mode::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Mode::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Mode::Access::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::Dot1QTunnel()
{
    yang_name = "dot1q-tunnel"; yang_parent_name = "mode";
}

Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::~Dot1QTunnel()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::has_data() const
{
    return false;
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1QTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Mode::Dot1QTunnel::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::PrivateVlan()
    :
    host{YType::empty, "host"},
    promiscuous{YType::empty, "promiscuous"}
{
    yang_name = "private-vlan"; yang_parent_name = "mode";
}

Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::has_data() const
{
    return host.is_set
	|| promiscuous.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(promiscuous.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (promiscuous.is_set || is_set(promiscuous.operation)) leaf_name_data.push_back(promiscuous.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Mode::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "promiscuous")
    {
        promiscuous = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::Trunk()
{
    yang_name = "trunk"; yang_parent_name = "mode";
}

Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::~Trunk()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::has_data() const
{
    return false;
}

bool Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trunk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Mode::Trunk::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::PortSecurity()
    :
    violation{YType::enumeration, "violation"}
    	,
    aging(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging>())
	,mac_address(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress>())
	,maximum(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum>())
{
    aging->parent = this;

    mac_address->parent = this;

    maximum->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::has_data() const
{
    return violation.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| is_set(violation.operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:port-security";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.operation)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "violation")
    {
        violation = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"},
    type{YType::enumeration, "type"}
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| type.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| is_set(type.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::MacAddress()
    :
    hw_address{YType::str, "hw-address"},
    sticky{YType::empty, "sticky"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "mac-address"; yang_parent_name = "port-security";
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::~MacAddress()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::has_data() const
{
    return hw_address.is_set
	|| sticky.is_set
	|| vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(hw_address.operation)
	|| is_set(sticky.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_address.is_set || is_set(hw_address.operation)) leaf_name_data.push_back(hw_address.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.operation)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PortSecurity::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hw-address")
    {
        hw_address = value;
    }
    if(value_path == "sticky")
    {
        sticky = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::Maximum()
    :
    max_addresses{YType::uint16, "max-addresses"},
    vlan{YType::str, "vlan"}
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::has_data() const
{
    return max_addresses.is_set
	|| vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(max_addresses.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_addresses.is_set || is_set(max_addresses.operation)) leaf_name_data.push_back(max_addresses.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-addresses")
    {
        max_addresses = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Trunk()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    allowed(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed>())
	,native(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Native_>())
	,pruning(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning>())
{
    allowed->parent = this;

    native->parent = this;

    pruning->parent = this;

    yang_name = "trunk"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::Trunk::~Trunk()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::has_data() const
{
    return encapsulation.is_set
	|| (allowed !=  nullptr && allowed->has_data())
	|| (native !=  nullptr && native->has_data())
	|| (pruning !=  nullptr && pruning->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| (allowed !=  nullptr && allowed->has_operation())
	|| (native !=  nullptr && native->has_operation())
	|| (pruning !=  nullptr && pruning->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:trunk";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Trunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trunk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowed")
    {
        if(allowed == nullptr)
        {
            allowed = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed>();
        }
        return allowed;
    }

    if(child_yang_name == "native")
    {
        if(native == nullptr)
        {
            native = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Native_>();
        }
        return native;
    }

    if(child_yang_name == "pruning")
    {
        if(pruning == nullptr)
        {
            pruning = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning>();
        }
        return pruning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allowed != nullptr)
    {
        children["allowed"] = allowed;
    }

    if(native != nullptr)
    {
        children["native"] = native;
    }

    if(pruning != nullptr)
    {
        children["pruning"] = pruning;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Trunk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Allowed()
    :
    vlan(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan>())
{
    vlan->parent = this;

    yang_name = "allowed"; yang_parent_name = "trunk";
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::~Allowed()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Allowed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::Vlan()
    :
    add{YType::str, "add"},
    all{YType::empty, "all"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"},
    vlans{YType::str, "vlans"}
{
    yang_name = "vlan"; yang_parent_name = "allowed";
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::~Vlan()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::has_data() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| all.is_set
	|| none.is_set
	|| remove.is_set
	|| vlans.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(all.operation)
	|| is_set(except.operation)
	|| is_set(none.operation)
	|| is_set(remove.operation)
	|| is_set(vlans.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::get_entity_path(Entity* ancestor) const
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

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (vlans.is_set || is_set(vlans.operation)) leaf_name_data.push_back(vlans.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Trunk::Allowed::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "vlans")
    {
        vlans = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::Native_()
    :
    vlan{YType::str, "vlan"}
{
    yang_name = "native"; yang_parent_name = "trunk";
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::~Native_()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Native_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Pruning()
    :
    vlan(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan>())
{
    vlan->parent = this;

    yang_name = "pruning"; yang_parent_name = "trunk";
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::~Pruning()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pruning";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pruning' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::Vlan()
    :
    add{YType::str, "add"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"},
    vlans{YType::str, "vlans"}
{
    yang_name = "vlan"; yang_parent_name = "pruning";
}

Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::~Vlan()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::has_data() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(except.operation)
	|| is_set(none.operation)
	|| is_set(remove.operation)
	|| is_set(vlans.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::get_entity_path(Entity* ancestor) const
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

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    auto vlans_name_datas = vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlans_name_datas.begin(), vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Trunk::Pruning::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "vlans")
    {
        vlans.append(value);
    }
}

Native::Interface::Gigabitethernet::Switchport::Voice::Voice()
    :
    detect(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Voice::Detect>())
	,vlan(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Voice::Vlan>())
{
    detect->parent = this;

    vlan->parent = this;

    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::Voice::~Voice()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::has_data() const
{
    return (detect !=  nullptr && detect->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| (detect !=  nullptr && detect->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:voice";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Voice::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Voice::Detect>();
        }
        return detect;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Voice::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detect != nullptr)
    {
        children["detect"] = detect;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::Vlan()
    :
    name{YType::str, "name"},
    vlan{YType::str, "vlan"}
{
    yang_name = "vlan"; yang_parent_name = "voice";
}

Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::~Vlan()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::has_data() const
{
    return name.is_set
	|| vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Voice::Detect::Detect()
    :
    cisco_phone(nullptr) // presence node
{
    yang_name = "detect"; yang_parent_name = "voice";
}

Native::Interface::Gigabitethernet::Switchport::Voice::Detect::~Detect()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::Detect::has_data() const
{
    return (cisco_phone !=  nullptr && cisco_phone->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::Detect::has_operation() const
{
    return is_set(operation)
	|| (cisco_phone !=  nullptr && cisco_phone->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::Voice::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Voice::Detect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Voice::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-phone")
    {
        if(cisco_phone == nullptr)
        {
            cisco_phone = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone>();
        }
        return cisco_phone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Voice::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_phone != nullptr)
    {
        children["cisco-phone"] = cisco_phone;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Voice::Detect::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::CiscoPhone()
    :
    full_duplex{YType::empty, "full-duplex"}
{
    yang_name = "cisco-phone"; yang_parent_name = "detect";
}

Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::~CiscoPhone()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::has_data() const
{
    return full_duplex.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::has_operation() const
{
    return is_set(operation)
	|| is_set(full_duplex.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-phone";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoPhone' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_duplex.is_set || is_set(full_duplex.operation)) leaf_name_data.push_back(full_duplex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Voice::Detect::CiscoPhone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-duplex")
    {
        full_duplex = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Priority::Priority()
    :
    extend(std::make_shared<Native::Interface::Gigabitethernet::Switchport::Priority::Extend>())
{
    extend->parent = this;

    yang_name = "priority"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::Priority::~Priority()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Priority::has_data() const
{
    return (extend !=  nullptr && extend->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::Priority::has_operation() const
{
    return is_set(operation)
	|| (extend !=  nullptr && extend->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::Interface::Gigabitethernet::Switchport::Priority::Extend>();
        }
        return extend;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extend != nullptr)
    {
        children["extend"] = extend;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::Priority::Extend::Extend()
    :
    cos{YType::uint8, "cos"},
    trust{YType::empty, "trust"}
{
    yang_name = "extend"; yang_parent_name = "priority";
}

Native::Interface::Gigabitethernet::Switchport::Priority::Extend::~Extend()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Priority::Extend::has_data() const
{
    return cos.is_set
	|| trust.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Priority::Extend::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(trust.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Priority::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extend";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Priority::Extend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Extend' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Priority::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Priority::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Priority::Extend::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::Autostate::Autostate()
    :
    exclude{YType::empty, "exclude"}
{
    yang_name = "autostate"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::Autostate::~Autostate()
{
}

bool Native::Interface::Gigabitethernet::Switchport::Autostate::has_data() const
{
    return exclude.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::Autostate::has_operation() const
{
    return is_set(operation)
	|| is_set(exclude.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::Autostate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:autostate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::Autostate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autostate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.operation)) leaf_name_data.push_back(exclude.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::Autostate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::Autostate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::Autostate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude")
    {
        exclude = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::PrivateVlan()
    :
    association(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association>())
	,host_association(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation>())
	,mapping(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping>())
{
    association->parent = this;

    host_association->parent = this;

    mapping->parent = this;

    yang_name = "private-vlan"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::has_data() const
{
    return (association !=  nullptr && association->has_data())
	|| (host_association !=  nullptr && host_association->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| (association !=  nullptr && association->has_operation())
	|| (host_association !=  nullptr && host_association->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association>();
        }
        return association;
    }

    if(child_yang_name == "host-association")
    {
        if(host_association == nullptr)
        {
            host_association = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation>();
        }
        return host_association;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(host_association != nullptr)
    {
        children["host-association"] = host_association;
    }

    if(mapping != nullptr)
    {
        children["mapping"] = mapping;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Association()
    :
    host(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host>())
	,mapping(std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping>())
{
    host->parent = this;

    mapping->parent = this;

    yang_name = "association"; yang_parent_name = "private-vlan";
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::~Association()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::has_data() const
{
    return (host !=  nullptr && host->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::has_operation() const
{
    return is_set(operation)
	|| (host !=  nullptr && host->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Association' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host>();
        }
        return host;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(mapping != nullptr)
    {
        children["mapping"] = mapping;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::Host()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{
    yang_name = "host"; yang_parent_name = "association";
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::~Host()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::has_data() const
{
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(primary_range.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::get_entity_path(Entity* ancestor) const
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

    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::Mapping()
    :
    add{YType::str, "add"},
    primary_range{YType::uint16, "primary-range"},
    remove{YType::str, "remove"},
    secondary_range{YType::str, "secondary-range"}
{
    yang_name = "mapping"; yang_parent_name = "association";
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::~Mapping()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::has_data() const
{
    return add.is_set
	|| primary_range.is_set
	|| remove.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::has_operation() const
{
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(primary_range.operation)
	|| is_set(remove.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Association::Mapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::HostAssociation()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{
    yang_name = "host-association"; yang_parent_name = "private-vlan";
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::~HostAssociation()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::has_data() const
{
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(primary_range.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-association";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PrivateVlan::HostAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::Mapping()
    :
    add{YType::str, "add"},
    primary_range{YType::uint16, "primary-range"},
    remove{YType::str, "remove"},
    secondary_range{YType::str, "secondary-range"}
{
    yang_name = "mapping"; yang_parent_name = "private-vlan";
}

Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::~Mapping()
{
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::has_data() const
{
    return add.is_set
	|| primary_range.is_set
	|| remove.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::has_operation() const
{
    return is_set(operation)
	|| is_set(add.operation)
	|| is_set(primary_range.operation)
	|| is_set(remove.operation)
	|| is_set(secondary_range.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.operation)) leaf_name_data.push_back(add.get_name_leafdata());
    if (primary_range.is_set || is_set(primary_range.operation)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (remove.is_set || is_set(remove.operation)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.operation)) leaf_name_data.push_back(secondary_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::PrivateVlan::Mapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add")
    {
        add = value;
    }
    if(value_path == "primary-range")
    {
        primary_range = value;
    }
    if(value_path == "remove")
    {
        remove = value;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
    }
}

Native::Interface::Gigabitethernet::Switchport::DeviceTracking::DeviceTracking()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "device-tracking"; yang_parent_name = "switchport";
}

Native::Interface::Gigabitethernet::Switchport::DeviceTracking::~DeviceTracking()
{
}

bool Native::Interface::Gigabitethernet::Switchport::DeviceTracking::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Gigabitethernet::Switchport::DeviceTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Gigabitethernet::Switchport::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device-tracking";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Switchport::DeviceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceTracking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Switchport::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Switchport::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Switchport::DeviceTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Gigabitethernet::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "arp"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Arp::~Arp()
{
}

bool Native::Interface::Gigabitethernet::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Gigabitethernet::Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Gigabitethernet::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Gigabitethernet::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Gigabitethernet::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Gigabitethernet::Backup::Load>())
{
    delay->parent = this;

    interface->parent = this;

    load->parent = this;

    yang_name = "backup"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Backup::~Backup()
{
}

bool Native::Interface::Gigabitethernet::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Gigabitethernet::Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Gigabitethernet::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Gigabitethernet::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Gigabitethernet::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Gigabitethernet::Backup::Delay::~Delay()
{
}

bool Native::Interface::Gigabitethernet::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Gigabitethernet::Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(secondary_disable.operation);
}

std::string Native::Interface::Gigabitethernet::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.operation)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
    }
}

Native::Interface::Gigabitethernet::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup";
}

Native::Interface::Gigabitethernet::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::Gigabitethernet::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Backup::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Backup::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Backup::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Backup::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::Gigabitethernet::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{
    yang_name = "load"; yang_parent_name = "backup";
}

Native::Interface::Gigabitethernet::Backup::Load::~Load()
{
}

bool Native::Interface::Gigabitethernet::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Gigabitethernet::Backup::Load::has_operation() const
{
    return is_set(operation)
	|| is_set(kickin.operation)
	|| is_set(kickout.operation);
}

std::string Native::Interface::Gigabitethernet::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Backup::Load::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Load' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.operation)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.operation)) leaf_name_data.push_back(kickout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Backup::Load::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kickin")
    {
        kickin = value;
    }
    if(value_path == "kickout")
    {
        kickout = value;
    }
}

Native::Interface::Gigabitethernet::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Gigabitethernet::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::Gigabitethernet::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Gigabitethernet::Cemoudp::has_operation() const
{
    return is_set(operation)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Gigabitethernet::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cemoudp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cemoudp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Gigabitethernet::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Cemoudp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{
    yang_name = "reserve"; yang_parent_name = "cemoudp";
}

Native::Interface::Gigabitethernet::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Gigabitethernet::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Gigabitethernet::Cemoudp::Reserve::has_operation() const
{
    return is_set(operation)
	|| is_set(acr.operation);
}

std::string Native::Interface::Gigabitethernet::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cemoudp::Reserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reserve' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.operation)) leaf_name_data.push_back(acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Cemoudp::Reserve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr")
    {
        acr = value;
    }
}

Native::Interface::Gigabitethernet::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Gigabitethernet::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::Gigabitethernet::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Gigabitethernet::CwsTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Gigabitethernet::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::CwsTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CwsTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Gigabitethernet::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Gigabitethernet::CwsTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Gigabitethernet::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{
    yang_name = "out"; yang_parent_name = "cws-tunnel";
}

Native::Interface::Gigabitethernet::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Gigabitethernet::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Gigabitethernet::CwsTunnel::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_number.operation);
}

std::string Native::Interface::Gigabitethernet::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::CwsTunnel::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.operation)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::CwsTunnel::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
    }
}

Native::Interface::Gigabitethernet::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;

    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::Gigabitethernet::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Gigabitethernet::L2ProtocolTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Gigabitethernet::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::L2ProtocolTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2ProtocolTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::Gigabitethernet::L2ProtocolTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel";
}

Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DropThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel";
}

Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShutdownThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Gigabitethernet::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Gigabitethernet::Encapsulation::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::Gigabitethernet::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;

    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Gigabitethernet::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::Gigabitethernet::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::Gigabitethernet::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Gigabitethernet::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Gigabitethernet::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Gigabitethernet::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Gigabitethernet::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Gigabitethernet::Encapsulation::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Encapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1Q"; yang_parent_name = "encapsulation";
}

Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| is_set(native.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.operation)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "native")
    {
        native = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Gigabitethernet::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "isl"; yang_parent_name = "encapsulation";
}

Native::Interface::Gigabitethernet::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::Gigabitethernet::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Gigabitethernet::Encapsulation::Isl::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Gigabitethernet::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Encapsulation::Isl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Encapsulation::Isl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Gigabitethernet::Encapsulation::Ppp::Ppp()
{
    yang_name = "ppp"; yang_parent_name = "encapsulation";
}

Native::Interface::Gigabitethernet::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Gigabitethernet::Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Gigabitethernet::Encapsulation::Ppp::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Gigabitethernet::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Encapsulation::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ppp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Encapsulation::Ppp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Encapsulation::Slip::Slip()
{
    yang_name = "slip"; yang_parent_name = "encapsulation";
}

Native::Interface::Gigabitethernet::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::Gigabitethernet::Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Gigabitethernet::Encapsulation::Slip::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Gigabitethernet::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Encapsulation::Slip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Encapsulation::Slip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{
    yang_name = "frame-relay"; yang_parent_name = "encapsulation";
}

Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(operation)
	|| is_set(ietf.operation);
}

std::string Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameRelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Encapsulation::FrameRelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ietf")
    {
        ietf = value;
    }
}

Native::Interface::Gigabitethernet::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{
    yang_name = "fair-queue-conf"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::Gigabitethernet::FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Gigabitethernet::FairQueueConf::has_operation() const
{
    return is_set(operation)
	|| is_set(fair_queue.operation);
}

std::string Native::Interface::Gigabitethernet::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::FairQueueConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FairQueueConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.operation)) leaf_name_data.push_back(fair_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::FairQueueConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
    }
}

Native::Interface::Gigabitethernet::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{
    yang_name = "fair-queue"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::FairQueue::~FairQueue()
{
}

bool Native::Interface::Gigabitethernet::FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Gigabitethernet::FairQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(incomplete.operation);
}

std::string Native::Interface::Gigabitethernet::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::FairQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FairQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.operation)) leaf_name_data.push_back(incomplete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::FairQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
    }
}

Native::Interface::Gigabitethernet::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{
    yang_name = "flowcontrol"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::Gigabitethernet::Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Gigabitethernet::Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(send.operation);
}

std::string Native::Interface::Gigabitethernet::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.operation)) leaf_name_data.push_back(send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "send")
    {
        send = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Isis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
    	,
    adjacency_filter(std::make_shared<Native::Interface::Gigabitethernet::Isis::AdjacencyFilter>())
	,advertise(std::make_shared<Native::Interface::Gigabitethernet::Isis::Advertise>())
	,authentication(std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication>())
	,circuit_type(nullptr) // presence node
	,csnp_interval(std::make_shared<Native::Interface::Gigabitethernet::Isis::CsnpInterval>())
	,hello(std::make_shared<Native::Interface::Gigabitethernet::Isis::Hello>())
	,hello_interval(std::make_shared<Native::Interface::Gigabitethernet::Isis::HelloInterval>())
	,hello_multiplier(std::make_shared<Native::Interface::Gigabitethernet::Isis::HelloMultiplier>())
	,ipv6(std::make_shared<Native::Interface::Gigabitethernet::Isis::Ipv6>())
	,metric(std::make_shared<Native::Interface::Gigabitethernet::Isis::Metric>())
	,password(std::make_shared<Native::Interface::Gigabitethernet::Isis::Password>())
	,priority(std::make_shared<Native::Interface::Gigabitethernet::Isis::Priority>())
	,three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;

    advertise->parent = this;

    authentication->parent = this;

    csnp_interval->parent = this;

    hello->parent = this;

    hello_interval->parent = this;

    hello_multiplier->parent = this;

    ipv6->parent = this;

    metric->parent = this;

    password->parent = this;

    priority->parent = this;

    yang_name = "isis"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Isis::~Isis()
{
}

bool Native::Interface::Gigabitethernet::Isis::has_data() const
{
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::Gigabitethernet::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_interval.operation)
	|| is_set(mesh_group.operation)
	|| is_set(network.operation)
	|| is_set(protocol.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(retransmit_throttle_interval.operation)
	|| is_set(tag.operation)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::Gigabitethernet::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.operation)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.operation)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::Gigabitethernet::Isis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::Gigabitethernet::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::Gigabitethernet::Isis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::Gigabitethernet::Isis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::Gigabitethernet::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Gigabitethernet::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::Gigabitethernet::Isis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Gigabitethernet::Isis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Gigabitethernet::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::Gigabitethernet::Isis::Password>();
        }
        return password;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Gigabitethernet::Isis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_filter != nullptr)
    {
        children["adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        children["circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        children["csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        children["hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(three_way_handshake != nullptr)
    {
        children["three-way-handshake"] = three_way_handshake;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::AdjacencyFilter()
    :
    match_all{YType::empty, "match-all"},
    name{YType::str, "name"}
{
    yang_name = "adjacency-filter"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::has_data() const
{
    return match_all.is_set
	|| name.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(match_all.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_all.is_set || is_set(match_all.operation)) leaf_name_data.push_back(match_all.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::AdjacencyFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-all")
    {
        match_all = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{
    yang_name = "advertise"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::Advertise::~Advertise()
{
}

bool Native::Interface::Gigabitethernet::Isis::Advertise::has_data() const
{
    return prefix.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::Mode>())
	,send_only(nullptr) // presence node
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::Authentication::~Authentication()
{
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::Gigabitethernet::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::Gigabitethernet::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Authentication::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "md5"; yang_parent_name = "mode";
}

Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "text"; yang_parent_name = "mode";
}

Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Text' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{
    yang_name = "key-chain-list"; yang_parent_name = "key-chain";
}

Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChainList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "send-only"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Authentication::SendOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Gigabitethernet::Isis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "circuit-type"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::CircuitType::~CircuitType()
{
}

bool Native::Interface::Gigabitethernet::Isis::CircuitType::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::CircuitType::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::CircuitType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::CircuitType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
{
    yang_name = "csnp-interval"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::Gigabitethernet::Isis::CsnpInterval::has_data() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::CsnpInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        for(auto const & c : csnp_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList>();
        c->parent = this;
        csnp_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csnp_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::CsnpInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{
    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval";
}

Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpIntervalList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{
    yang_name = "hello"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::Hello::~Hello()
{
}

bool Native::Interface::Gigabitethernet::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::Gigabitethernet::Isis::Hello::has_operation() const
{
    return is_set(operation)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::Gigabitethernet::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hello' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::Gigabitethernet::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Hello::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{
    yang_name = "padding"; yang_parent_name = "hello";
}

Native::Interface::Gigabitethernet::Isis::Hello::Padding::~Padding()
{
}

bool Native::Interface::Gigabitethernet::Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Hello::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Hello::Padding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Hello::Padding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
}

Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
{
    yang_name = "hello-interval"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Gigabitethernet::Isis::HelloInterval::has_data() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        for(auto const & c : hello_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList>();
        c->parent = this;
        hello_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval";
}

Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloIntervalList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
{
    yang_name = "hello-multiplier"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::Gigabitethernet::Isis::HelloMultiplier::has_data() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::HelloMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultiplier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        for(auto const & c : hello_multiplier_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList>();
        c->parent = this;
        hello_multiplier_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_multiplier_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::HelloMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{
    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier";
}

Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultiplierList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
    	,
    metric(std::make_shared<Native::Interface::Gigabitethernet::Isis::Ipv6::Metric>())
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::Ipv6::~Ipv6()
{
}

bool Native::Interface::Gigabitethernet::Isis::Ipv6::has_data() const
{
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::Gigabitethernet::Isis::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::Gigabitethernet::Isis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Gigabitethernet::Isis::Ipv6::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
{
    yang_name = "metric"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "metric-list"; yang_parent_name = "metric";
}

Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Metric::Metric()
    :
    value_{YType::str, "value"}
{
    yang_name = "metric"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::Metric::~Metric()
{
}

bool Native::Interface::Gigabitethernet::Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "metric-list"; yang_parent_name = "metric";
}

Native::Interface::Gigabitethernet::Isis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Gigabitethernet::Isis::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Metric::MetricList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Metric::MetricList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Metric::MetricList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Password::Password()
    :
    password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::Password::~Password()
{
}

bool Native::Interface::Gigabitethernet::Isis::Password::has_data() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(password.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        for(auto const & c : password_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::Password::PasswordList>();
        c->parent = this;
        password_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{
    yang_name = "password-list"; yang_parent_name = "password";
}

Native::Interface::Gigabitethernet::Isis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::Gigabitethernet::Isis::Password::PasswordList::has_data() const
{
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Password::PasswordList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(password.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Password::PasswordList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PasswordList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Password::PasswordList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "priority"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::Priority::~Priority()
{
}

bool Native::Interface::Gigabitethernet::Isis::Priority::has_data() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        for(auto const & c : priority_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Isis::Priority::PriorityList>();
        c->parent = this;
        priority_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Isis::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{
    yang_name = "priority-list"; yang_parent_name = "priority";
}

Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{
    yang_name = "three-way-handshake"; yang_parent_name = "isis";
}

Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::has_data() const
{
    return implementor.is_set;
}

bool Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::has_operation() const
{
    return is_set(operation)
	|| is_set(implementor.operation);
}

std::string Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreeWayHandshake' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.operation)) leaf_name_data.push_back(implementor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "implementor")
    {
        implementor = value;
    }
}

Native::Interface::Gigabitethernet::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{
    yang_name = "keepalive-settings"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::Gigabitethernet::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Gigabitethernet::KeepaliveSettings::has_operation() const
{
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Gigabitethernet::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::KeepaliveSettings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepaliveSettings' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::Gigabitethernet::KeepaliveSettings::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{
    yang_name = "keepalive"; yang_parent_name = "keepalive-settings";
}

Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(operation)
	|| is_set(period.operation)
	|| is_set(retries.operation);
}

std::string Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.operation)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "period")
    {
        period = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
}

Native::Interface::Gigabitethernet::Bfd::Bfd()
    :
    echo{YType::boolean, "Cisco-IOS-XE-bfd:echo"},
    template_{YType::str, "Cisco-IOS-XE-bfd:template"}
    	,
    interval(std::make_shared<Native::Interface::Gigabitethernet::Bfd::Interval>())
{
    interval->parent = this;

    yang_name = "bfd"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Bfd::~Bfd()
{
}

bool Native::Interface::Gigabitethernet::Bfd::has_data() const
{
    return echo.is_set
	|| template_.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Interface::Gigabitethernet::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(echo.operation)
	|| is_set(template_.operation)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Interface::Gigabitethernet::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo.is_set || is_set(echo.operation)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Interface::Gigabitethernet::Bfd::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "echo")
    {
        echo = value;
    }
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::Interface::Gigabitethernet::Bfd::Interval::Interval()
    :
    min_rx{YType::uint16, "min_rx"},
    msecs{YType::uint16, "msecs"},
    multiplier{YType::uint8, "multiplier"}
{
    yang_name = "interval"; yang_parent_name = "bfd";
}

Native::Interface::Gigabitethernet::Bfd::Interval::~Interval()
{
}

bool Native::Interface::Gigabitethernet::Bfd::Interval::has_data() const
{
    return min_rx.is_set
	|| msecs.is_set
	|| multiplier.is_set;
}

bool Native::Interface::Gigabitethernet::Bfd::Interval::has_operation() const
{
    return is_set(operation)
	|| is_set(min_rx.operation)
	|| is_set(msecs.operation)
	|| is_set(multiplier.operation);
}

std::string Native::Interface::Gigabitethernet::Bfd::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Bfd::Interval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_rx.is_set || is_set(min_rx.operation)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (msecs.is_set || is_set(msecs.operation)) leaf_name_data.push_back(msecs.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Bfd::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Bfd::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Bfd::Interval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min_rx")
    {
        min_rx = value;
    }
    if(value_path == "msecs")
    {
        msecs = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Native::Interface::Gigabitethernet::Bandwidth::Bandwidth()
    :
    kilobits{YType::uint32, "kilobits"},
    qos_reference{YType::uint32, "qos-reference"}
    	,
    inherit(nullptr) // presence node
	,receive(std::make_shared<Native::Interface::Gigabitethernet::Bandwidth::Receive>())
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Gigabitethernet::Bandwidth::has_data() const
{
    return kilobits.is_set
	|| qos_reference.is_set
	|| (inherit !=  nullptr && inherit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Interface::Gigabitethernet::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(kilobits.operation)
	|| is_set(qos_reference.operation)
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Interface::Gigabitethernet::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());
    if (qos_reference.is_set || is_set(qos_reference.operation)) leaf_name_data.push_back(qos_reference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Gigabitethernet::Bandwidth::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Gigabitethernet::Bandwidth::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
    if(value_path == "qos-reference")
    {
        qos_reference = value;
    }
}

Native::Interface::Gigabitethernet::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{
    yang_name = "receive"; yang_parent_name = "bandwidth";
}

Native::Interface::Gigabitethernet::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::Gigabitethernet::Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Gigabitethernet::Bandwidth::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(inherit.operation)
	|| is_set(kilobits.operation);
}

std::string Native::Interface::Gigabitethernet::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Bandwidth::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.operation)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Bandwidth::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inherit")
    {
        inherit = value;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
}

Native::Interface::Gigabitethernet::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{
    yang_name = "inherit"; yang_parent_name = "bandwidth";
}

Native::Interface::Gigabitethernet::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Gigabitethernet::Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Gigabitethernet::Bandwidth::Inherit::has_operation() const
{
    return is_set(operation)
	|| is_set(kilobits.operation);
}

std::string Native::Interface::Gigabitethernet::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Bandwidth::Inherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inherit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Bandwidth::Inherit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
}

Native::Interface::Gigabitethernet::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Gigabitethernet::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Dampening::~Dampening()
{
}

bool Native::Interface::Gigabitethernet::Dampening::has_data() const
{
    return dampening_time.is_set
	|| maximum_supressing_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Gigabitethernet::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(dampening_time.operation)
	|| is_set(maximum_supressing_time.operation)
	|| is_set(start_reusing_time.operation)
	|| is_set(start_supressing_time.operation)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Gigabitethernet::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.operation)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.operation)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.operation)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.operation)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Gigabitethernet::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
    }
}

Native::Interface::Gigabitethernet::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{
    yang_name = "restart"; yang_parent_name = "dampening";
}

Native::Interface::Gigabitethernet::Dampening::Restart::~Restart()
{
}

bool Native::Interface::Gigabitethernet::Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Gigabitethernet::Dampening::Restart::has_operation() const
{
    return is_set(operation)
	|| is_set(restart.operation)
	|| is_set(restart_penalty.operation);
}

std::string Native::Interface::Gigabitethernet::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dampening::Restart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Restart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Dampening::Restart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restart")
    {
        restart = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
}

Native::Interface::Gigabitethernet::Domain::Domain()
    :
    internet_bound{YType::empty, "internet-bound"},
    name{YType::str, "name"},
    path{YType::str, "path"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{
    yang_name = "domain"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Domain::~Domain()
{
}

bool Native::Interface::Gigabitethernet::Domain::has_data() const
{
    return internet_bound.is_set
	|| name.is_set
	|| path.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Gigabitethernet::Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(internet_bound.operation)
	|| is_set(name.operation)
	|| is_set(path.operation)
	|| is_set(path_id.operation)
	|| is_set(path_last_resort.operation)
	|| is_set(zero_sla.operation);
}

std::string Native::Interface::Gigabitethernet::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_bound.is_set || is_set(internet_bound.operation)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.operation)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.operation)) leaf_name_data.push_back(zero_sla.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internet-bound")
    {
        internet_bound = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
    }
}

Native::Interface::Gigabitethernet::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{
    yang_name = "hold-queue"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::Gigabitethernet::HoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Gigabitethernet::HoldQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(queue_length.operation);
}

std::string Native::Interface::Gigabitethernet::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::HoldQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.operation)) leaf_name_data.push_back(queue_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::HoldQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
    }
}

Native::Interface::Gigabitethernet::Mpls::Mpls()
    :
    ip{YType::empty, "Cisco-IOS-XE-mpls:ip"},
    mtu{YType::str, "Cisco-IOS-XE-mpls:mtu"}
    	,
    accounting(std::make_shared<Native::Interface::Gigabitethernet::Mpls::Accounting>())
	,bgp(std::make_shared<Native::Interface::Gigabitethernet::Mpls::Bgp>())
	,label(std::make_shared<Native::Interface::Gigabitethernet::Mpls::Label>())
	,ldp(std::make_shared<Native::Interface::Gigabitethernet::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Interface::Gigabitethernet::Mpls::TrafficEng>())
{
    accounting->parent = this;

    bgp->parent = this;

    label->parent = this;

    ldp->parent = this;

    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Mpls::~Mpls()
{
}

bool Native::Interface::Gigabitethernet::Mpls::has_data() const
{
    return ip.is_set
	|| mtu.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::Gigabitethernet::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(mtu.operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Interface::Gigabitethernet::Mpls::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Interface::Gigabitethernet::Mpls::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Interface::Gigabitethernet::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Interface::Gigabitethernet::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::Gigabitethernet::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Native::Interface::Gigabitethernet::Mpls::Accounting::Accounting()
    :
    experimental(std::make_shared<Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental>())
{
    experimental->parent = this;

    yang_name = "accounting"; yang_parent_name = "mpls";
}

Native::Interface::Gigabitethernet::Mpls::Accounting::~Accounting()
{
}

bool Native::Interface::Gigabitethernet::Mpls::Accounting::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Interface::Gigabitethernet::Mpls::Accounting::has_operation() const
{
    return is_set(operation)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mpls::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:accounting";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mpls::Accounting::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::Experimental()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "experimental"; yang_parent_name = "accounting";
}

Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::~Experimental()
{
}

bool Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Experimental' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mpls::Accounting::Experimental::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::Gigabitethernet::Mpls::Bgp::Bgp()
    :
    forwarding{YType::empty, "forwarding"}
{
    yang_name = "bgp"; yang_parent_name = "mpls";
}

Native::Interface::Gigabitethernet::Mpls::Bgp::~Bgp()
{
}

bool Native::Interface::Gigabitethernet::Mpls::Bgp::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Gigabitethernet::Mpls::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Gigabitethernet::Mpls::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:bgp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mpls::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Gigabitethernet::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "label"; yang_parent_name = "mpls";
}

Native::Interface::Gigabitethernet::Mpls::Label::~Label()
{
}

bool Native::Interface::Gigabitethernet::Mpls::Label::has_data() const
{
    return protocol.is_set;
}

bool Native::Interface::Gigabitethernet::Mpls::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::Gigabitethernet::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mpls::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Interface::Gigabitethernet::Mpls::Ldp::Ldp()
    :
    discovery(std::make_shared<Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery>())
{
    discovery->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls";
}

Native::Interface::Gigabitethernet::Mpls::Ldp::~Ldp()
{
}

bool Native::Interface::Gigabitethernet::Mpls::Ldp::has_data() const
{
    return (discovery !=  nullptr && discovery->has_data());
}

bool Native::Interface::Gigabitethernet::Mpls::Ldp::has_operation() const
{
    return is_set(operation)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mpls::Ldp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::Discovery()
    :
    transport_address{YType::str, "transport-address"}
{
    yang_name = "discovery"; yang_parent_name = "ldp";
}

Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::~Discovery()
{
}

bool Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::has_data() const
{
    return transport_address.is_set;
}

bool Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(transport_address.operation);
}

std::string Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.operation)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mpls::Ldp::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
    }
}

Native::Interface::Gigabitethernet::Mpls::TrafficEng::TrafficEng()
    :
    administrative_weight{YType::uint32, "administrative-weight"},
    attribute_flags{YType::str, "attribute-flags"},
    backup_path{YType::str, "backup-path"},
    tunnels{YType::empty, "tunnels"}
    	,
    flooding(std::make_shared<Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding>())
{
    flooding->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Interface::Gigabitethernet::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::Gigabitethernet::Mpls::TrafficEng::has_data() const
{
    return administrative_weight.is_set
	|| attribute_flags.is_set
	|| backup_path.is_set
	|| tunnels.is_set
	|| (flooding !=  nullptr && flooding->has_data());
}

bool Native::Interface::Gigabitethernet::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(administrative_weight.operation)
	|| is_set(attribute_flags.operation)
	|| is_set(backup_path.operation)
	|| is_set(tunnels.operation)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficEng' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_weight.is_set || is_set(administrative_weight.operation)) leaf_name_data.push_back(administrative_weight.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.operation)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.operation)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight = value;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Flooding()
    :
    thresholds(std::make_shared<Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds>())
{
    thresholds->parent = this;

    yang_name = "flooding"; yang_parent_name = "traffic-eng";
}

Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::~Flooding()
{
}

bool Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::has_data() const
{
    return (thresholds !=  nullptr && thresholds->has_data());
}

bool Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::has_operation() const
{
    return is_set(operation)
	|| (thresholds !=  nullptr && thresholds->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds>();
        }
        return thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresholds != nullptr)
    {
        children["thresholds"] = thresholds;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::Thresholds()
    :
    down{YType::uint8, "down"},
    up{YType::uint8, "up"}
{
    yang_name = "thresholds"; yang_parent_name = "flooding";
}

Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::~Thresholds()
{
}

bool Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::has_data() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::has_operation() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Thresholds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_name_datas = down.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_name_datas.begin(), down_name_datas.end());
    auto up_name_datas = up.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_name_datas.begin(), up_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down.append(value);
    }
    if(value_path == "up")
    {
        up.append(value);
    }
}

Native::Interface::Gigabitethernet::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::Gigabitethernet::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::IpVrf::~IpVrf()
{
}

bool Native::Interface::Gigabitethernet::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Gigabitethernet::IpVrf::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Gigabitethernet::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::IpVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpVrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Gigabitethernet::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Gigabitethernet::IpVrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf";
}

Native::Interface::Gigabitethernet::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::Gigabitethernet::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Gigabitethernet::IpVrf::Ip::has_operation() const
{
    return is_set(operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Gigabitethernet::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::IpVrf::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Gigabitethernet::IpVrf::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::IpVrf::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Gigabitethernet::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Vrf::~Vrf()
{
}

bool Native::Interface::Gigabitethernet::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Gigabitethernet::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Gigabitethernet::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Ip()
    :
    admission{YType::str, "admission"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    mroute_cache{YType::boolean, "mroute-cache"},
    mtu{YType::uint16, "mtu"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
    	,
    access_group(std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup>())
	,address(std::make_shared<Native::Interface::Gigabitethernet::Ip::Address>())
	,arp(std::make_shared<Native::Interface::Gigabitethernet::Ip::Arp>())
	,authentication(std::make_shared<Native::Interface::Gigabitethernet::Ip::Authentication>())
	,dhcp(std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp>())
	,flow(std::make_shared<Native::Interface::Gigabitethernet::Ip::Flow>())
	,hello_interval(std::make_shared<Native::Interface::Gigabitethernet::Ip::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Gigabitethernet::Ip::HoldTime>())
	,igmp(std::make_shared<Native::Interface::Gigabitethernet::Ip::Igmp>())
	,lisp(std::make_shared<Native::Interface::Gigabitethernet::Ip::Lisp>())
	,nat(std::make_shared<Native::Interface::Gigabitethernet::Ip::Nat>())
	,nbar(std::make_shared<Native::Interface::Gigabitethernet::Ip::Nbar>())
	,no_address(std::make_shared<Native::Interface::Gigabitethernet::Ip::NoAddress>())
	,ospf(std::make_shared<Native::Interface::Gigabitethernet::Ip::Ospf>())
	,pim(std::make_shared<Native::Interface::Gigabitethernet::Ip::Pim>())
	,policy(std::make_shared<Native::Interface::Gigabitethernet::Ip::Policy>())
	,route_cache(nullptr) // presence node
	,route_cache_conf(std::make_shared<Native::Interface::Gigabitethernet::Ip::RouteCacheConf>())
	,router(std::make_shared<Native::Interface::Gigabitethernet::Ip::Router>())
	,summary_address(std::make_shared<Native::Interface::Gigabitethernet::Ip::SummaryAddress>())
	,tcp(std::make_shared<Native::Interface::Gigabitethernet::Ip::Tcp>())
	,verify(std::make_shared<Native::Interface::Gigabitethernet::Ip::Verify>())
	,virtual_reassembly(std::make_shared<Native::Interface::Gigabitethernet::Ip::VirtualReassembly>())
	,vrf(std::make_shared<Native::Interface::Gigabitethernet::Ip::Vrf>())
	,wccp(std::make_shared<Native::Interface::Gigabitethernet::Ip::Wccp>())
{
    access_group->parent = this;

    address->parent = this;

    arp->parent = this;

    authentication->parent = this;

    dhcp->parent = this;

    flow->parent = this;

    hello_interval->parent = this;

    hold_time->parent = this;

    igmp->parent = this;

    lisp->parent = this;

    nat->parent = this;

    nbar->parent = this;

    no_address->parent = this;

    ospf->parent = this;

    pim->parent = this;

    policy->parent = this;

    route_cache_conf->parent = this;

    router->parent = this;

    summary_address->parent = this;

    tcp->parent = this;

    verify->parent = this;

    virtual_reassembly->parent = this;

    vrf->parent = this;

    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Ip::~Ip()
{
}

bool Native::Interface::Gigabitethernet::Ip::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| mroute_cache.is_set
	|| mtu.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| unreachables.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admission.operation)
	|| is_set(directed_broadcast.operation)
	|| is_set(local_proxy_arp.operation)
	|| is_set(mroute_cache.operation)
	|| is_set(mtu.operation)
	|| is_set(proxy_arp.operation)
	|| is_set(redirects.operation)
	|| is_set(unnumbered.operation)
	|| is_set(unreachables.operation)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::get_entity_path(Entity* ancestor) const
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

    if (admission.is_set || is_set(admission.operation)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.operation)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.operation)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.operation)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.operation)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Gigabitethernet::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Gigabitethernet::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Gigabitethernet::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Gigabitethernet::Ip::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Gigabitethernet::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ip::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Gigabitethernet::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Interface::Gigabitethernet::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::Gigabitethernet::Ip::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Interface::Gigabitethernet::Ip::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Interface::Gigabitethernet::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::Gigabitethernet::Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::Gigabitethernet::Ip::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Gigabitethernet::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Gigabitethernet::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Gigabitethernet::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Gigabitethernet::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Gigabitethernet::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Gigabitethernet::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Gigabitethernet::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Gigabitethernet::Ip::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Gigabitethernet::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Gigabitethernet::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Interface::Gigabitethernet::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(wccp != nullptr)
    {
        children["wccp"] = wccp;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admission")
    {
        admission = value;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::Out>())
{
    in->parent = this;

    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::AccessGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::In::In()
    :
    acl(std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl>())
	,common_acl(std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl>())
{
    acl->parent = this;

    common_acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group";
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::In::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::In::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::AccessGroup::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::AccessGroup::In::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{
    yang_name = "common-acl"; yang_parent_name = "in";
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(common.operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.operation)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{
    yang_name = "acl"; yang_parent_name = "in";
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Out()
    :
    acl(std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl>())
	,common_acl(std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl>())
{
    acl->parent = this;

    common_acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group";
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{
    yang_name = "common-acl"; yang_parent_name = "out";
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(common.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.operation)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{
    yang_name = "acl"; yang_parent_name = "out";
}

Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Gigabitethernet::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Arp::~Arp()
{
}

bool Native::Interface::Gigabitethernet::Ip::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Arp::has_operation() const
{
    return is_set(operation)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Gigabitethernet::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Arp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp";
}

Native::Interface::Gigabitethernet::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Gigabitethernet::Ip::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Arp::Inspection::has_operation() const
{
    return is_set(operation)
	|| is_set(trust.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Arp::Inspection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inspection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Arp::Inspection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{
    yang_name = "limit"; yang_parent_name = "inspection";
}

Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(rate.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Gigabitethernet::Ip::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(sitemap.operation)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.operation)) leaf_name_data.push_back(sitemap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{
    yang_name = "forwarding"; yang_parent_name = "vrf";
}

Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(operation)
	|| is_set(liin_vrf.operation)
	|| is_set(mgmtvrf.operation)
	|| is_set(word.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.operation)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.operation)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Vrf::Forwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
    }
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::Gigabitethernet::Ip::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{
    yang_name = "no-address"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::NoAddress::~NoAddress()
{
}

bool Native::Interface::Gigabitethernet::Ip::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::NoAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::NoAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::NoAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    dhcp(nullptr) // presence node
	,primary(std::make_shared<Native::Interface::Gigabitethernet::Ip::Address::Primary>())
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Address::~Address()
{
}

bool Native::Interface::Gigabitethernet::Ip::Address::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(negotiated.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.operation)) leaf_name_data.push_back(negotiated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Gigabitethernet::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Gigabitethernet::Ip::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ip::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{
    yang_name = "primary"; yang_parent_name = "address";
}

Native::Interface::Gigabitethernet::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::Gigabitethernet::Ip::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Address::Primary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Address::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Address::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "secondary"; yang_parent_name = "address";
}

Native::Interface::Gigabitethernet::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Gigabitethernet::Ip::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Address::Secondary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation)
	|| is_set(secondary.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Address::Secondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Address::Secondary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address";
}

Native::Interface::Gigabitethernet::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Gigabitethernet::Ip::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Address::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Address::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Address::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "client-id"; yang_parent_name = "dhcp";
}

Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| fortygigabitethernet.is_set
	|| gigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(operation)
	|| is_set(fastethernet.operation)
	|| is_set(fortygigabitethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(port_channel.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.operation)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Gigabitethernet::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "hello-interval"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Gigabitethernet::Ip::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Gigabitethernet::Ip::Authentication::Mode>())
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::Gigabitethernet::Ip::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Gigabitethernet::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Gigabitethernet::Ip::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(md5.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Authentication::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
}

Native::Interface::Gigabitethernet::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "hold-time"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::Gigabitethernet::Ip::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::HoldTime::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::HoldTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Gigabitethernet::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{
    yang_name = "helper-address"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Gigabitethernet::Ip::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(global.operation)
	|| is_set(vrf.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Pim::Pim()
    :
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    sparse_mode{YType::enumeration, "Cisco-IOS-XE-multicast:sparse-mode"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
    	,
    accept_register(std::make_shared<Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister>())
	,query_interval(std::make_shared<Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval>())
{
    accept_register->parent = this;

    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Pim::~Pim()
{
}

bool Native::Interface::Gigabitethernet::Ip::Pim::has_data() const
{
    return dr_priority.is_set
	|| nbma_mode.is_set
	|| sparse_mode.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Pim::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_priority.operation)
	|| is_set(nbma_mode.operation)
	|| is_set(sparse_mode.operation)
	|| is_set(spt_threshold.operation)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pim' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.operation)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (sparse_mode.is_set || is_set(sparse_mode.operation)) leaf_name_data.push_back(sparse_mode.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.operation)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(query_interval != nullptr)
    {
        children["query-interval"] = query_interval;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Pim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode = value;
    }
    if(value_path == "sparse-mode")
    {
        sparse_mode = value;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{
    yang_name = "accept-register"; yang_parent_name = "pim";
}

Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptRegister' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::QueryInterval()
    :
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"},
    seconds_interval{YType::uint16, "seconds-interval"}
{
    yang_name = "query-interval"; yang_parent_name = "pim";
}

Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::has_data() const
{
    return milliseconds_interval.is_set
	|| msec.is_set
	|| seconds_interval.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds_interval.operation)
	|| is_set(msec.operation)
	|| is_set(seconds_interval.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueryInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds_interval.is_set || is_set(milliseconds_interval.operation)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds_interval.is_set || is_set(seconds_interval.operation)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Pim::QueryInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval = value;
    }
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "policy"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Policy::~Policy()
{
}

bool Native::Interface::Gigabitethernet::Ip::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Interface::Gigabitethernet::Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{
    yang_name = "route-cache-conf"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Gigabitethernet::Ip::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::RouteCacheConf::has_operation() const
{
    return is_set(operation)
	|| is_set(route_cache.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::RouteCacheConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCacheConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.operation)) leaf_name_data.push_back(route_cache.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::RouteCacheConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
    }
}

Native::Interface::Gigabitethernet::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{
    yang_name = "route-cache"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::Gigabitethernet::Ip::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::RouteCache::has_operation() const
{
    return is_set(operation)
	|| is_set(cef.operation)
	|| is_set(flow.operation)
	|| is_set(policy.operation)
	|| is_set(same_interface.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::RouteCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.operation)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.operation)) leaf_name_data.push_back(same_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::RouteCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cef")
    {
        cef = value;
    }
    if(value_path == "flow")
    {
        flow = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{
    yang_name = "router"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Router::~Router()
{
}

bool Native::Interface::Gigabitethernet::Ip::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Router::has_operation() const
{
    return is_set(operation)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Gigabitethernet::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Router::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{
    yang_name = "isis"; yang_parent_name = "router";
}

Native::Interface::Gigabitethernet::Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::Gigabitethernet::Ip::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Router::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Router::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Router::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{
    yang_name = "tcp"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Tcp::~Tcp()
{
}

bool Native::Interface::Gigabitethernet::Ip::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(adjust_mss.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.operation)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
    }
}

Native::Interface::Gigabitethernet::Ip::VirtualReassembly::VirtualReassembly()
    :
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"},
    max_fragments{YType::uint32, "max-fragments"},
    max_reassemblies{YType::uint32, "max-reassemblies"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "virtual-reassembly"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Gigabitethernet::Ip::VirtualReassembly::has_data() const
{
    return drop_fragments.is_set
	|| in.is_set
	|| max_fragments.is_set
	|| max_reassemblies.is_set
	|| timeout.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::VirtualReassembly::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_fragments.operation)
	|| is_set(in.operation)
	|| is_set(max_fragments.operation)
	|| is_set(max_reassemblies.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::VirtualReassembly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualReassembly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_fragments.is_set || is_set(drop_fragments.operation)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.operation)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (max_reassemblies.is_set || is_set(max_reassemblies.operation)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::VirtualReassembly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping>())
{
    client->parent = this;

    relay->parent = this;

    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Interface::Gigabitethernet::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{
    yang_name = "client"; yang_parent_name = "dhcp";
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Client::~Client()
{
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Dhcp::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Dhcp::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp";
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay";
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_action.operation)
	|| is_set(trusted.operation)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.operation)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.operation)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check_reply != nullptr)
    {
        children["check-reply"] = check_reply;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(option_insert != nullptr)
    {
        children["option-insert"] = option_insert;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-action")
    {
        policy_action = value;
    }
    if(value_path == "trusted")
    {
        trusted = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{
    yang_name = "check-reply"; yang_parent_name = "information";
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckReply' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{
    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_id.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{
    yang_name = "option-insert"; yang_parent_name = "information";
}

Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionInsert' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Mode::DynamicEnum::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Mode::DynamicEnum::desirable {1, "desirable"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::PortSecurity::ViolationEnum::protect {0, "protect"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::PortSecurity::ViolationEnum::restrict {1, "restrict"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::PortSecurity::ViolationEnum::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::TypeEnum::absolute {0, "absolute"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::PortSecurity::Aging::TypeEnum::inactivity {1, "inactivity"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Trunk::EncapsulationEnum::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Trunk::EncapsulationEnum::isl {1, "isl"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Trunk::EncapsulationEnum::negotiate {2, "negotiate"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Trunk::Native_::VlanEnum::tag {0, "tag"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::VlanEnum::dot1p {0, "dot1p"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::VlanEnum::none {1, "none"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Switchport::Voice::Vlan::VlanEnum::untagged {2, "untagged"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Backup::Delay::FailureEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Backup::Delay::SecondaryDisableEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Backup::Load::KickinEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Backup::Load::KickoutEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Flowcontrol::ReceiveEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Flowcontrol::ReceiveEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Flowcontrol::ReceiveEnum::on {2, "on"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Flowcontrol::SendEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Flowcontrol::SendEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Flowcontrol::SendEnum::on {2, "on"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::MeshGroupEnum::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::NetworkEnum::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::ProtocolEnum::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::CircuitType::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::CircuitType::LevelsEnum::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::CircuitType::LevelsEnum::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::HelloInterval::ValueEnum::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::HelloInterval::HelloIntervalList::ValueEnum::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Ipv6::Metric::MetricList::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Metric::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Metric::MetricList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Metric::MetricList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Metric::MetricList::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Password::PasswordList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Password::PasswordList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::Priority::PriorityList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::ImplementorEnum::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Isis::ThreeWayHandshake::ImplementorEnum::ietf {1, "ietf"};

const Enum::YLeaf Native::Interface::Gigabitethernet::HoldQueue::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Interface::Gigabitethernet::HoldQueue::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Mpls::Label::ProtocolEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Mpls::Label::ProtocolEnum::ldp {1, "ldp"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Mpls::Label::ProtocolEnum::tdp {2, "tdp"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ip::Pim::SparseModeEnum::sparse_dense_mode {0, "sparse-dense-mode"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ip::Pim::SparseModeEnum::sparse_mode {1, "sparse-mode"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ip::Pim::SptThresholdEnum::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::replace {3, "replace"};


}
}

