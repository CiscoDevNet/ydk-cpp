
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System>())
{
    port->parent = this;
    children["port"] = port;

    system->parent = this;
    children["system"] = system;

    yang_name = "port-info"; yang_parent_name = "partner-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
        else
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port>();
            port->parent = this;
            children["port"] = port;
        }
        return children.at("port");
    }

    if(child_yang_name == "system")
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
        else
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System>();
            system->parent = this;
            children["system"] = system;
        }
        return children.at("system");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_children()
{
    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
    }

    if(children.find("system") == children.end())
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local>())
{
    foreign->parent = this;
    children["foreign"] = foreign;

    local->parent = this;
    children["local"] = local;

    yang_name = "additional-info"; yang_parent_name = "lacp-bundle-children-member";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(mbr_type.operation)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.operation)) leaf_name_data.push_back(mbr_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "foreign")
    {
        if(foreign != nullptr)
        {
            children["foreign"] = foreign;
        }
        else
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign>();
            foreign->parent = this;
            children["foreign"] = foreign;
        }
        return children.at("foreign");
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_children()
{
    if(children.find("foreign") == children.end())
    {
        if(foreign != nullptr)
        {
            children["foreign"] = foreign;
        }
    }

    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "local"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{
    yang_name = "foreign"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(operation)
	|| is_set(member_name.operation)
	|| is_set(peer_address.operation);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Foreign' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMembers()
{
    yang_name = "lacp-members"; yang_parent_name = "lacp";
}

BundleInformation::Lacp::LacpMembers::~LacpMembers()
{
}

bool BundleInformation::Lacp::LacpMembers::has_data() const
{
    for (std::size_t index=0; index<lacp_member.size(); index++)
    {
        if(lacp_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpMembers::has_operation() const
{
    for (std::size_t index=0; index<lacp_member.size(); index++)
    {
        if(lacp_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Lacp::LacpMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-members";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lacp-member")
    {
        for(auto const & c : lacp_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember>();
        c->parent = this;
        lacp_member.push_back(std::move(c));
        children[segment_path] = lacp_member.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::get_children()
{
    for (auto const & c : lacp_member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    lacp_member_ancestor(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor>())
	,lacp_member_item(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem>())
{
    lacp_member_ancestor->parent = this;
    children["lacp-member-ancestor"] = lacp_member_ancestor;

    lacp_member_item->parent = this;
    children["lacp-member-item"] = lacp_member_item;

    yang_name = "lacp-member"; yang_parent_name = "lacp-members";
}

BundleInformation::Lacp::LacpMembers::LacpMember::~LacpMember()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_data() const
{
    return member_interface.is_set
	|| (lacp_member_ancestor !=  nullptr && lacp_member_ancestor->has_data())
	|| (lacp_member_item !=  nullptr && lacp_member_item->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (lacp_member_ancestor !=  nullptr && lacp_member_ancestor->has_operation())
	|| (lacp_member_item !=  nullptr && lacp_member_item->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/lacp-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lacp-member-ancestor")
    {
        if(lacp_member_ancestor != nullptr)
        {
            children["lacp-member-ancestor"] = lacp_member_ancestor;
        }
        else
        {
            lacp_member_ancestor = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor>();
            lacp_member_ancestor->parent = this;
            children["lacp-member-ancestor"] = lacp_member_ancestor;
        }
        return children.at("lacp-member-ancestor");
    }

    if(child_yang_name == "lacp-member-item")
    {
        if(lacp_member_item != nullptr)
        {
            children["lacp-member-item"] = lacp_member_item;
        }
        else
        {
            lacp_member_item = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem>();
            lacp_member_item->parent = this;
            children["lacp-member-item"] = lacp_member_item;
        }
        return children.at("lacp-member-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::get_children()
{
    if(children.find("lacp-member-ancestor") == children.end())
    {
        if(lacp_member_ancestor != nullptr)
        {
            children["lacp-member-ancestor"] = lacp_member_ancestor;
        }
    }

    if(children.find("lacp-member-item") == children.end())
    {
        if(lacp_member_item != nullptr)
        {
            children["lacp-member-item"] = lacp_member_item;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::LacpMemberAncestor()
    :
    bundle_data(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData>())
{
    bundle_data->parent = this;
    children["bundle-data"] = bundle_data;

    yang_name = "lacp-member-ancestor"; yang_parent_name = "lacp-member";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::~LacpMemberAncestor()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member-ancestor";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LacpMemberAncestor' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
        else
        {
            bundle_data = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData>();
            bundle_data->parent = this;
            children["bundle-data"] = bundle_data;
        }
        return children.at("bundle-data");
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_children()
{
    if(children.find("bundle-data") == children.end())
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
    }

    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData>())
	,bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    children["actor-bundle-data"] = actor_bundle_data;

    bundle_system_id->parent = this;
    children["bundle-system-id"] = bundle_system_id;

    yang_name = "bundle-data"; yang_parent_name = "lacp-member-ancestor";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::~BundleData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data != nullptr)
        {
            children["actor-bundle-data"] = actor_bundle_data;
        }
        else
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData>();
            actor_bundle_data->parent = this;
            children["actor-bundle-data"] = actor_bundle_data;
        }
        return children.at("actor-bundle-data");
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id != nullptr)
        {
            children["bundle-system-id"] = bundle_system_id;
        }
        else
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId>();
            bundle_system_id->parent = this;
            children["bundle-system-id"] = bundle_system_id;
        }
        return children.at("bundle-system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_children()
{
    if(children.find("actor-bundle-data") == children.end())
    {
        if(actor_bundle_data != nullptr)
        {
            children["actor-bundle-data"] = actor_bundle_data;
        }
    }

    if(children.find("bundle-system-id") == children.end())
    {
        if(bundle_system_id != nullptr)
        {
            children["bundle-system-id"] = bundle_system_id;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;
    children["mac-address"] = mac_address;

    yang_name = "actor-bundle-data"; yang_parent_name = "bundle-data";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(std::move(c));
        children[segment_path] = bfd_config.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
        else
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress>();
            mac_address->parent = this;
            children["mac-address"] = mac_address;
        }
        return children.at("mac-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_children()
{
    for (auto const & c : bfd_config)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mac-address") == children.end())
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;
    children["destination-address"] = destination_address;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address != nullptr)
        {
            children["destination-address"] = destination_address;
        }
        else
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress>();
            destination_address->parent = this;
            children["destination-address"] = destination_address;
        }
        return children.at("destination-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_children()
{
    if(children.find("destination-address") == children.end())
    {
        if(destination_address != nullptr)
        {
            children["destination-address"] = destination_address;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "bundle-system-id"; yang_parent_name = "bundle-data";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleSystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::MemberData()
    :
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo>())
{
    actor_info->parent = this;
    children["actor-info"] = actor_info;

    additional_info->parent = this;
    children["additional-info"] = additional_info;

    partner_info->parent = this;
    children["partner-info"] = partner_info;

    yang_name = "member-data"; yang_parent_name = "lacp-member-ancestor";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::~MemberData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_data() const
{
    return actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_churn_state.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(mux_state.operation)
	|| is_set(partner_churn_state.operation)
	|| is_set(period_state.operation)
	|| is_set(receive_machine_state.operation)
	|| is_set(selected_aggregator_id.operation)
	|| is_set(selection_state.operation)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn_state.is_set || is_set(actor_churn_state.operation)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.operation)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.operation)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.operation)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.operation)) leaf_name_data.push_back(selection_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "actor-info")
    {
        if(actor_info != nullptr)
        {
            children["actor-info"] = actor_info;
        }
        else
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo>();
            actor_info->parent = this;
            children["actor-info"] = actor_info;
        }
        return children.at("actor-info");
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info != nullptr)
        {
            children["additional-info"] = additional_info;
        }
        else
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo>();
            additional_info->parent = this;
            children["additional-info"] = additional_info;
        }
        return children.at("additional-info");
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info != nullptr)
        {
            children["partner-info"] = partner_info;
        }
        else
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo>();
            partner_info->parent = this;
            children["partner-info"] = partner_info;
        }
        return children.at("partner-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_children()
{
    if(children.find("actor-info") == children.end())
    {
        if(actor_info != nullptr)
        {
            children["actor-info"] = actor_info;
        }
    }

    if(children.find("additional-info") == children.end())
    {
        if(additional_info != nullptr)
        {
            children["additional-info"] = additional_info;
        }
    }

    if(children.find("partner-info") == children.end())
    {
        if(partner_info != nullptr)
        {
            children["partner-info"] = partner_info;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
    }
    if(value_path == "period-state")
    {
        period_state = value;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo>())
{
    port_info->parent = this;
    children["port-info"] = port_info;

    yang_name = "actor-info"; yang_parent_name = "member-data";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-info")
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
        else
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo>();
            port_info->parent = this;
            children["port-info"] = port_info;
        }
        return children.at("port-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_children()
{
    if(children.find("port-info") == children.end())
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System>())
{
    port->parent = this;
    children["port"] = port;

    system->parent = this;
    children["system"] = system;

    yang_name = "port-info"; yang_parent_name = "actor-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
        else
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port>();
            port->parent = this;
            children["port"] = port;
        }
        return children.at("port");
    }

    if(child_yang_name == "system")
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
        else
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System>();
            system->parent = this;
            children["system"] = system;
        }
        return children.at("system");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_children()
{
    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
    }

    if(children.find("system") == children.end())
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo>())
{
    port_info->parent = this;
    children["port-info"] = port_info;

    yang_name = "partner-info"; yang_parent_name = "member-data";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PartnerInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-info")
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
        else
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo>();
            port_info->parent = this;
            children["port-info"] = port_info;
        }
        return children.at("port-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_children()
{
    if(children.find("port-info") == children.end())
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System>())
{
    port->parent = this;
    children["port"] = port;

    system->parent = this;
    children["system"] = system;

    yang_name = "port-info"; yang_parent_name = "partner-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
        else
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port>();
            port->parent = this;
            children["port"] = port;
        }
        return children.at("port");
    }

    if(child_yang_name == "system")
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
        else
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System>();
            system->parent = this;
            children["system"] = system;
        }
        return children.at("system");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_children()
{
    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
    }

    if(children.find("system") == children.end())
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local>())
{
    foreign->parent = this;
    children["foreign"] = foreign;

    local->parent = this;
    children["local"] = local;

    yang_name = "additional-info"; yang_parent_name = "member-data";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(mbr_type.operation)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.operation)) leaf_name_data.push_back(mbr_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "foreign")
    {
        if(foreign != nullptr)
        {
            children["foreign"] = foreign;
        }
        else
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign>();
            foreign->parent = this;
            children["foreign"] = foreign;
        }
        return children.at("foreign");
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_children()
{
    if(children.find("foreign") == children.end())
    {
        if(foreign != nullptr)
        {
            children["foreign"] = foreign;
        }
    }

    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "local"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{
    yang_name = "foreign"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(operation)
	|| is_set(member_name.operation)
	|| is_set(peer_address.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Foreign' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::LacpMemberItem()
    :
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo>())
{
    actor_info->parent = this;
    children["actor-info"] = actor_info;

    additional_info->parent = this;
    children["additional-info"] = additional_info;

    partner_info->parent = this;
    children["partner-info"] = partner_info;

    yang_name = "lacp-member-item"; yang_parent_name = "lacp-member";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::~LacpMemberItem()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_data() const
{
    return actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_churn_state.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(mux_state.operation)
	|| is_set(partner_churn_state.operation)
	|| is_set(period_state.operation)
	|| is_set(receive_machine_state.operation)
	|| is_set(selected_aggregator_id.operation)
	|| is_set(selection_state.operation)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member-item";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LacpMemberItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn_state.is_set || is_set(actor_churn_state.operation)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.operation)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.operation)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.operation)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.operation)) leaf_name_data.push_back(selection_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "actor-info")
    {
        if(actor_info != nullptr)
        {
            children["actor-info"] = actor_info;
        }
        else
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo>();
            actor_info->parent = this;
            children["actor-info"] = actor_info;
        }
        return children.at("actor-info");
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info != nullptr)
        {
            children["additional-info"] = additional_info;
        }
        else
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo>();
            additional_info->parent = this;
            children["additional-info"] = additional_info;
        }
        return children.at("additional-info");
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info != nullptr)
        {
            children["partner-info"] = partner_info;
        }
        else
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo>();
            partner_info->parent = this;
            children["partner-info"] = partner_info;
        }
        return children.at("partner-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_children()
{
    if(children.find("actor-info") == children.end())
    {
        if(actor_info != nullptr)
        {
            children["actor-info"] = actor_info;
        }
    }

    if(children.find("additional-info") == children.end())
    {
        if(additional_info != nullptr)
        {
            children["additional-info"] = additional_info;
        }
    }

    if(children.find("partner-info") == children.end())
    {
        if(partner_info != nullptr)
        {
            children["partner-info"] = partner_info;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
    }
    if(value_path == "period-state")
    {
        period_state = value;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo>())
{
    port_info->parent = this;
    children["port-info"] = port_info;

    yang_name = "actor-info"; yang_parent_name = "lacp-member-item";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActorInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-info")
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
        else
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo>();
            port_info->parent = this;
            children["port-info"] = port_info;
        }
        return children.at("port-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_children()
{
    if(children.find("port-info") == children.end())
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System>())
{
    port->parent = this;
    children["port"] = port;

    system->parent = this;
    children["system"] = system;

    yang_name = "port-info"; yang_parent_name = "actor-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
        else
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port>();
            port->parent = this;
            children["port"] = port;
        }
        return children.at("port");
    }

    if(child_yang_name == "system")
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
        else
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System>();
            system->parent = this;
            children["system"] = system;
        }
        return children.at("system");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_children()
{
    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
    }

    if(children.find("system") == children.end())
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo>())
{
    port_info->parent = this;
    children["port-info"] = port_info;

    yang_name = "partner-info"; yang_parent_name = "lacp-member-item";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_period.operation)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PartnerInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-info")
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
        else
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo>();
            port_info->parent = this;
            children["port-info"] = port_info;
        }
        return children.at("port-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_children()
{
    if(children.find("port-info") == children.end())
    {
        if(port_info != nullptr)
        {
            children["port-info"] = port_info;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System>())
{
    port->parent = this;
    children["port"] = port;

    system->parent = this;
    children["system"] = system;

    yang_name = "port-info"; yang_parent_name = "partner-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(state.operation)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
        else
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port>();
            port->parent = this;
            children["port"] = port;
        }
        return children.at("port");
    }

    if(child_yang_name == "system")
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
        else
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System>();
            system->parent = this;
            children["system"] = system;
        }
        return children.at("system");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_children()
{
    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
    }

    if(children.find("system") == children.end())
    {
        if(system != nullptr)
        {
            children["system"] = system;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'System' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{
    yang_name = "port"; yang_parent_name = "port-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(link_number.operation)
	|| is_set(link_priority.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.operation)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.operation)) leaf_name_data.push_back(link_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-number")
    {
        link_number = value;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local>())
{
    foreign->parent = this;
    children["foreign"] = foreign;

    local->parent = this;
    children["local"] = local;

    yang_name = "additional-info"; yang_parent_name = "lacp-member-item";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(mbr_type.operation)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.operation)) leaf_name_data.push_back(mbr_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "foreign")
    {
        if(foreign != nullptr)
        {
            children["foreign"] = foreign;
        }
        else
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign>();
            foreign->parent = this;
            children["foreign"] = foreign;
        }
        return children.at("foreign");
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_children()
{
    if(children.find("foreign") == children.end())
    {
        if(foreign != nullptr)
        {
            children["foreign"] = foreign;
        }
    }

    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "local"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{
    yang_name = "foreign"; yang_parent_name = "additional-info";
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(operation)
	|| is_set(member_name.operation)
	|| is_set(peer_address.operation);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";

    return path_buffer.str();

}

EntityPath BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Foreign' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_children()
{
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
}

BundleInformation::MlacpBundleCounters::MlacpBundleCounters()
    :
    bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles>())
	,iccp_groups(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups>())
	,nodes(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes>())
{
    bundles->parent = this;
    children["bundles"] = bundles;

    iccp_groups->parent = this;
    children["iccp-groups"] = iccp_groups;

    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "mlacp-bundle-counters"; yang_parent_name = "bundle-information";
}

BundleInformation::MlacpBundleCounters::~MlacpBundleCounters()
{
}

bool BundleInformation::MlacpBundleCounters::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data())
	|| (iccp_groups !=  nullptr && iccp_groups->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool BundleInformation::MlacpBundleCounters::has_operation() const
{
    return is_set(operation)
	|| (bundles !=  nullptr && bundles->has_operation())
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundles")
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
        else
        {
            bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles>();
            bundles->parent = this;
            children["bundles"] = bundles;
        }
        return children.at("bundles");
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
        else
        {
            iccp_groups = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups>();
            iccp_groups->parent = this;
            children["iccp-groups"] = iccp_groups;
        }
        return children.at("iccp-groups");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::get_children()
{
    if(children.find("bundles") == children.end())
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
    }

    if(children.find("iccp-groups") == children.end())
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroups()
{
    yang_name = "iccp-groups"; yang_parent_name = "mlacp-bundle-counters";
}

BundleInformation::MlacpBundleCounters::IccpGroups::~IccpGroups()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(std::move(c));
        children[segment_path] = iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::get_children()
{
    for (auto const & c : iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    iccp_group_item(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem>())
{
    iccp_group_item->parent = this;
    children["iccp-group-item"] = iccp_group_item;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/iccp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-item")
    {
        if(iccp_group_item != nullptr)
        {
            children["iccp-group-item"] = iccp_group_item;
        }
        else
        {
            iccp_group_item = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem>();
            iccp_group_item->parent = this;
            children["iccp-group-item"] = iccp_group_item;
        }
        return children.at("iccp-group-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_children()
{
    if(children.find("iccp-group-item") == children.end())
    {
        if(iccp_group_item != nullptr)
        {
            children["iccp-group-item"] = iccp_group_item;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData>())
{
    iccp_group_data->parent = this;
    children["iccp-group-data"] = iccp_group_data;

    yang_name = "iccp-group-item"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::~IccpGroupItem()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
        else
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData>();
            iccp_group_data->parent = this;
            children["iccp-group-data"] = iccp_group_data;
        }
        return children.at("iccp-group-data");
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_children()
{
    if(children.find("iccp-group-data") == children.end())
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
    }

    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
	,mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_bundles->parent = this;
    children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;

    mlacp_sync_requests_on_all_local_ports->parent = this;
    children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;

    yang_name = "iccp-group-data"; yang_parent_name = "iccp-group-item";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
        else
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
            mlacp_sync_requests_on_all_local_bundles->parent = this;
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
        return children.at("mlacp-sync-requests-on-all-local-bundles");
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
            mlacp_sync_requests_on_all_local_ports->parent = this;
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        return children.at("mlacp-sync-requests-on-all-local-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-local-bundles") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-local-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalBundles' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_>())
{
    node_data->parent = this;
    children["node-data"] = node_data;

    yang_name = "node-data"; yang_parent_name = "iccp-group-item";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
        else
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_>();
            node_data->parent = this;
            children["node-data"] = node_data;
        }
        return children.at("node-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("node-data") == children.end())
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
    	,
    mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
	,mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
{
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;
    children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;

    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;

    yang_name = "node-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_data() const
{
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
            mlacp_sync_requests_on_all_foreign_bundles->parent = this;
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-bundles");
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
            mlacp_sync_requests_on_all_foreign_ports->parent = this;
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_children()
{
    if(children.find("mlacp-sync-requests-on-all-foreign-bundles") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-foreign-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignBundles' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "bundle-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundles()
{
    yang_name = "bundles"; yang_parent_name = "mlacp-bundle-counters";
}

BundleInformation::MlacpBundleCounters::Bundles::~Bundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(std::move(c));
        children[segment_path] = bundle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::get_children()
{
    for (auto const & c : bundle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_item(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem>())
{
    bundle_item->parent = this;
    children["bundle-item"] = bundle_item;

    yang_name = "bundle"; yang_parent_name = "bundles";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::~Bundle()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_item !=  nullptr && bundle_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (bundle_item !=  nullptr && bundle_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-item")
    {
        if(bundle_item != nullptr)
        {
            children["bundle-item"] = bundle_item;
        }
        else
        {
            bundle_item = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem>();
            bundle_item->parent = this;
            children["bundle-item"] = bundle_item;
        }
        return children.at("bundle-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_children()
{
    if(children.find("bundle-item") == children.end())
    {
        if(bundle_item != nullptr)
        {
            children["bundle-item"] = bundle_item;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::BundleItem()
{
    yang_name = "bundle-item"; yang_parent_name = "bundle";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::~BundleItem()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(std::move(c));
        children[segment_path] = iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_children()
{
    for (auto const & c : iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroup()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData>())
{
    iccp_group_data->parent = this;
    children["iccp-group-data"] = iccp_group_data;

    yang_name = "iccp-group"; yang_parent_name = "bundle-item";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroup' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
        else
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData>();
            iccp_group_data->parent = this;
            children["iccp-group-data"] = iccp_group_data;
        }
        return children.at("iccp-group-data");
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_children()
{
    if(children.find("iccp-group-data") == children.end())
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
    }

    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
	,mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_bundles->parent = this;
    children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;

    mlacp_sync_requests_on_all_local_ports->parent = this;
    children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;

    yang_name = "iccp-group-data"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
        else
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
            mlacp_sync_requests_on_all_local_bundles->parent = this;
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
        return children.at("mlacp-sync-requests-on-all-local-bundles");
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
            mlacp_sync_requests_on_all_local_ports->parent = this;
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        return children.at("mlacp-sync-requests-on-all-local-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-local-bundles") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-local-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalBundles' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_>())
{
    node_data->parent = this;
    children["node-data"] = node_data;

    yang_name = "node-data"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
        else
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_>();
            node_data->parent = this;
            children["node-data"] = node_data;
        }
        return children.at("node-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("node-data") == children.end())
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
    	,
    mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
	,mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
{
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;
    children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;

    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;

    yang_name = "node-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_data() const
{
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
            mlacp_sync_requests_on_all_foreign_bundles->parent = this;
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-bundles");
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
            mlacp_sync_requests_on_all_foreign_ports->parent = this;
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_children()
{
    if(children.find("mlacp-sync-requests-on-all-foreign-bundles") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-foreign-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignBundles' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "bundle-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "mlacp-bundle-counters";
}

BundleInformation::MlacpBundleCounters::Nodes::~Nodes()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    node_item(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem>())
{
    node_item->parent = this;
    children["node-item"] = node_item;

    yang_name = "node"; yang_parent_name = "nodes";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::~Node()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_data() const
{
    return node.is_set
	|| (node_item !=  nullptr && node_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (node_item !=  nullptr && node_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-item")
    {
        if(node_item != nullptr)
        {
            children["node-item"] = node_item;
        }
        else
        {
            node_item = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem>();
            node_item->parent = this;
            children["node-item"] = node_item;
        }
        return children.at("node-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::get_children()
{
    if(children.find("node-item") == children.end())
    {
        if(node_item != nullptr)
        {
            children["node-item"] = node_item;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData>())
{
    iccp_group_data->parent = this;
    children["iccp-group-data"] = iccp_group_data;

    yang_name = "node-item"; yang_parent_name = "node";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::~NodeItem()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
        else
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData>();
            iccp_group_data->parent = this;
            children["iccp-group-data"] = iccp_group_data;
        }
        return children.at("iccp-group-data");
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_children()
{
    if(children.find("iccp-group-data") == children.end())
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
    }

    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
	,mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_bundles->parent = this;
    children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;

    mlacp_sync_requests_on_all_local_ports->parent = this;
    children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;

    yang_name = "iccp-group-data"; yang_parent_name = "node-item";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
        else
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
            mlacp_sync_requests_on_all_local_bundles->parent = this;
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
        return children.at("mlacp-sync-requests-on-all-local-bundles");
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
            mlacp_sync_requests_on_all_local_ports->parent = this;
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        return children.at("mlacp-sync-requests-on-all-local-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-local-bundles") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-local-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalBundles' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_>())
{
    node_data->parent = this;
    children["node-data"] = node_data;

    yang_name = "node-data"; yang_parent_name = "node-item";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
        else
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_>();
            node_data->parent = this;
            children["node-data"] = node_data;
        }
        return children.at("node-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("node-data") == children.end())
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
    	,
    mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
	,mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
{
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;
    children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;

    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;

    yang_name = "node-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_data() const
{
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
            mlacp_sync_requests_on_all_foreign_bundles->parent = this;
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-bundles");
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
            mlacp_sync_requests_on_all_foreign_ports->parent = this;
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_children()
{
    if(children.find("mlacp-sync-requests-on-all-foreign-bundles") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-foreign-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignBundles' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "bundle-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::Protect::Protect()
    :
    protect_bundles(std::make_shared<BundleInformation::Protect::ProtectBundles>())
{
    protect_bundles->parent = this;
    children["protect-bundles"] = protect_bundles;

    yang_name = "protect"; yang_parent_name = "bundle-information";
}

BundleInformation::Protect::~Protect()
{
}

bool BundleInformation::Protect::has_data() const
{
    return (protect_bundles !=  nullptr && protect_bundles->has_data());
}

bool BundleInformation::Protect::has_operation() const
{
    return is_set(operation)
	|| (protect_bundles !=  nullptr && protect_bundles->has_operation());
}

std::string BundleInformation::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";

    return path_buffer.str();

}

EntityPath BundleInformation::Protect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protect-bundles")
    {
        if(protect_bundles != nullptr)
        {
            children["protect-bundles"] = protect_bundles;
        }
        else
        {
            protect_bundles = std::make_shared<BundleInformation::Protect::ProtectBundles>();
            protect_bundles->parent = this;
            children["protect-bundles"] = protect_bundles;
        }
        return children.at("protect-bundles");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Protect::get_children()
{
    if(children.find("protect-bundles") == children.end())
    {
        if(protect_bundles != nullptr)
        {
            children["protect-bundles"] = protect_bundles;
        }
    }

    return children;
}

void BundleInformation::Protect::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Protect::ProtectBundles::ProtectBundles()
{
    yang_name = "protect-bundles"; yang_parent_name = "protect";
}

BundleInformation::Protect::ProtectBundles::~ProtectBundles()
{
}

bool BundleInformation::Protect::ProtectBundles::has_data() const
{
    for (std::size_t index=0; index<protect_bundle.size(); index++)
    {
        if(protect_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Protect::ProtectBundles::has_operation() const
{
    for (std::size_t index=0; index<protect_bundle.size(); index++)
    {
        if(protect_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Protect::ProtectBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::Protect::ProtectBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/protect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protect-bundle")
    {
        for(auto const & c : protect_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle>();
        c->parent = this;
        protect_bundle.push_back(std::move(c));
        children[segment_path] = protect_bundle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Protect::ProtectBundles::get_children()
{
    for (auto const & c : protect_bundle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    protect_bundle_item(std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem>())
{
    protect_bundle_item->parent = this;
    children["protect-bundle-item"] = protect_bundle_item;

    yang_name = "protect-bundle"; yang_parent_name = "protect-bundles";
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::~ProtectBundle()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_data() const
{
    return bundle_interface.is_set
	|| (protect_bundle_item !=  nullptr && protect_bundle_item->has_data());
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (protect_bundle_item !=  nullptr && protect_bundle_item->has_operation());
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::Protect::ProtectBundles::ProtectBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/protect/protect-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protect-bundle-item")
    {
        if(protect_bundle_item != nullptr)
        {
            children["protect-bundle-item"] = protect_bundle_item;
        }
        else
        {
            protect_bundle_item = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem>();
            protect_bundle_item->parent = this;
            children["protect-bundle-item"] = protect_bundle_item;
        }
        return children.at("protect-bundle-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Protect::ProtectBundles::ProtectBundle::get_children()
{
    if(children.find("protect-bundle-item") == children.end())
    {
        if(protect_bundle_item != nullptr)
        {
            children["protect-bundle-item"] = protect_bundle_item;
        }
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::ProtectBundleItem()
    :
    bundle_interface_handle{YType::str, "bundle-interface-handle"},
    event_type{YType::enumeration, "event-type"},
    interface_up{YType::boolean, "interface-up"},
    minimum_active_links{YType::uint32, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    registered{YType::boolean, "registered"},
    slow_path_trigger{YType::boolean, "slow-path-trigger"},
    slow_path_up{YType::boolean, "slow-path-up"},
    time_stamp{YType::uint64, "time-stamp"}
{
    yang_name = "protect-bundle-item"; yang_parent_name = "protect-bundle";
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::~ProtectBundleItem()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_data() const
{
    for (std::size_t index=0; index<member_info.size(); index++)
    {
        if(member_info[index]->has_data())
            return true;
    }
    return bundle_interface_handle.is_set
	|| event_type.is_set
	|| interface_up.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| registered.is_set
	|| slow_path_trigger.is_set
	|| slow_path_up.is_set
	|| time_stamp.is_set;
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_operation() const
{
    for (std::size_t index=0; index<member_info.size(); index++)
    {
        if(member_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bundle_interface_handle.operation)
	|| is_set(event_type.operation)
	|| is_set(interface_up.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(registered.operation)
	|| is_set(slow_path_trigger.operation)
	|| is_set(slow_path_up.operation)
	|| is_set(time_stamp.operation);
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundle-item";

    return path_buffer.str();

}

EntityPath BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_handle.is_set || is_set(bundle_interface_handle.operation)) leaf_name_data.push_back(bundle_interface_handle.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (interface_up.is_set || is_set(interface_up.operation)) leaf_name_data.push_back(interface_up.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (registered.is_set || is_set(registered.operation)) leaf_name_data.push_back(registered.get_name_leafdata());
    if (slow_path_trigger.is_set || is_set(slow_path_trigger.operation)) leaf_name_data.push_back(slow_path_trigger.get_name_leafdata());
    if (slow_path_up.is_set || is_set(slow_path_up.operation)) leaf_name_data.push_back(slow_path_up.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-info")
    {
        for(auto const & c : member_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo>();
        c->parent = this;
        member_info.push_back(std::move(c));
        children[segment_path] = member_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_children()
{
    for (auto const & c : member_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface-handle")
    {
        bundle_interface_handle = value;
    }
    if(value_path == "event-type")
    {
        event_type = value;
    }
    if(value_path == "interface-up")
    {
        interface_up = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "registered")
    {
        registered = value;
    }
    if(value_path == "slow-path-trigger")
    {
        slow_path_trigger = value;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::MemberInfo()
    :
    active{YType::boolean, "active"},
    bandwidth{YType::uint32, "bandwidth"},
    interface_handle{YType::str, "interface-handle"},
    link_order_number{YType::uint16, "link-order-number"},
    node{YType::str, "node"},
    notification_received{YType::boolean, "notification-received"},
    slow_path_up{YType::boolean, "slow-path-up"},
    time_stamp{YType::uint64, "time-stamp"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
{
    yang_name = "member-info"; yang_parent_name = "protect-bundle-item";
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::~MemberInfo()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_data() const
{
    return active.is_set
	|| bandwidth.is_set
	|| interface_handle.is_set
	|| link_order_number.is_set
	|| node.is_set
	|| notification_received.is_set
	|| slow_path_up.is_set
	|| time_stamp.is_set
	|| underlying_link_id.is_set;
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(bandwidth.operation)
	|| is_set(interface_handle.operation)
	|| is_set(link_order_number.operation)
	|| is_set(node.operation)
	|| is_set(notification_received.operation)
	|| is_set(slow_path_up.operation)
	|| is_set(time_stamp.operation)
	|| is_set(underlying_link_id.operation);
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-info";

    return path_buffer.str();

}

EntityPath BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());
    if (notification_received.is_set || is_set(notification_received.operation)) leaf_name_data.push_back(notification_received.get_name_leafdata());
    if (slow_path_up.is_set || is_set(slow_path_up.operation)) leaf_name_data.push_back(slow_path_up.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.operation)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_children()
{
    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
    if(value_path == "node")
    {
        node = value;
    }
    if(value_path == "notification-received")
    {
        notification_received = value;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
    }
}

BundleInformation::MlacpBrief::MlacpBrief()
    :
    mlacp_brief_iccp_groups(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups>())
	,mlacp_bundle_briefs(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs>())
{
    mlacp_brief_iccp_groups->parent = this;
    children["mlacp-brief-iccp-groups"] = mlacp_brief_iccp_groups;

    mlacp_bundle_briefs->parent = this;
    children["mlacp-bundle-briefs"] = mlacp_bundle_briefs;

    yang_name = "mlacp-brief"; yang_parent_name = "bundle-information";
}

BundleInformation::MlacpBrief::~MlacpBrief()
{
}

bool BundleInformation::MlacpBrief::has_data() const
{
    return (mlacp_brief_iccp_groups !=  nullptr && mlacp_brief_iccp_groups->has_data())
	|| (mlacp_bundle_briefs !=  nullptr && mlacp_bundle_briefs->has_data());
}

bool BundleInformation::MlacpBrief::has_operation() const
{
    return is_set(operation)
	|| (mlacp_brief_iccp_groups !=  nullptr && mlacp_brief_iccp_groups->has_operation())
	|| (mlacp_bundle_briefs !=  nullptr && mlacp_bundle_briefs->has_operation());
}

std::string BundleInformation::MlacpBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-brief-iccp-groups")
    {
        if(mlacp_brief_iccp_groups != nullptr)
        {
            children["mlacp-brief-iccp-groups"] = mlacp_brief_iccp_groups;
        }
        else
        {
            mlacp_brief_iccp_groups = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups>();
            mlacp_brief_iccp_groups->parent = this;
            children["mlacp-brief-iccp-groups"] = mlacp_brief_iccp_groups;
        }
        return children.at("mlacp-brief-iccp-groups");
    }

    if(child_yang_name == "mlacp-bundle-briefs")
    {
        if(mlacp_bundle_briefs != nullptr)
        {
            children["mlacp-bundle-briefs"] = mlacp_bundle_briefs;
        }
        else
        {
            mlacp_bundle_briefs = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs>();
            mlacp_bundle_briefs->parent = this;
            children["mlacp-bundle-briefs"] = mlacp_bundle_briefs;
        }
        return children.at("mlacp-bundle-briefs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::get_children()
{
    if(children.find("mlacp-brief-iccp-groups") == children.end())
    {
        if(mlacp_brief_iccp_groups != nullptr)
        {
            children["mlacp-brief-iccp-groups"] = mlacp_brief_iccp_groups;
        }
    }

    if(children.find("mlacp-bundle-briefs") == children.end())
    {
        if(mlacp_bundle_briefs != nullptr)
        {
            children["mlacp-bundle-briefs"] = mlacp_bundle_briefs;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBriefs()
{
    yang_name = "mlacp-bundle-briefs"; yang_parent_name = "mlacp-brief";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::~MlacpBundleBriefs()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_brief.size(); index++)
    {
        if(mlacp_bundle_brief[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_brief.size(); index++)
    {
        if(mlacp_bundle_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-briefs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundle-brief")
    {
        for(auto const & c : mlacp_bundle_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief>();
        c->parent = this;
        mlacp_bundle_brief.push_back(std::move(c));
        children[segment_path] = mlacp_bundle_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::get_children()
{
    for (auto const & c : mlacp_bundle_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleBrief()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    mlacp_bundle_item_brief(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief>())
{
    mlacp_bundle_item_brief->parent = this;
    children["mlacp-bundle-item-brief"] = mlacp_bundle_item_brief;

    yang_name = "mlacp-bundle-brief"; yang_parent_name = "mlacp-bundle-briefs";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::~MlacpBundleBrief()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_data() const
{
    return bundle_interface.is_set
	|| (mlacp_bundle_item_brief !=  nullptr && mlacp_bundle_item_brief->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (mlacp_bundle_item_brief !=  nullptr && mlacp_bundle_item_brief->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-brief" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/mlacp-bundle-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundle-item-brief")
    {
        if(mlacp_bundle_item_brief != nullptr)
        {
            children["mlacp-bundle-item-brief"] = mlacp_bundle_item_brief;
        }
        else
        {
            mlacp_bundle_item_brief = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief>();
            mlacp_bundle_item_brief->parent = this;
            children["mlacp-bundle-item-brief"] = mlacp_bundle_item_brief;
        }
        return children.at("mlacp-bundle-item-brief");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_children()
{
    if(children.find("mlacp-bundle-item-brief") == children.end())
    {
        if(mlacp_bundle_item_brief != nullptr)
        {
            children["mlacp-bundle-item-brief"] = mlacp_bundle_item_brief;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpBundleItemBrief()
{
    yang_name = "mlacp-bundle-item-brief"; yang_parent_name = "mlacp-bundle-brief";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::~MlacpBundleItemBrief()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_data() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_operation() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-item-brief";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpBundleItemBrief' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-data")
    {
        for(auto const & c : mlacp_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData>();
        c->parent = this;
        mlacp_data.push_back(std::move(c));
        children[segment_path] = mlacp_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_children()
{
    for (auto const & c : mlacp_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::MlacpData()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData>())
{
    iccp_group_data->parent = this;
    children["iccp-group-data"] = iccp_group_data;

    yang_name = "mlacp-data"; yang_parent_name = "mlacp-bundle-item-brief";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::~MlacpData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
        else
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData>();
            iccp_group_data->parent = this;
            children["iccp-group-data"] = iccp_group_data;
        }
        return children.at("iccp-group-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("iccp-group-data") == children.end())
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{
    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-data";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(connect_timer_running.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(singleton.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.operation)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_children()
{
    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;
    children["system-id"] = system_id;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_state.operation)
	|| is_set(ldp_id.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(node_state.operation)
	|| is_set(version_number.operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.operation)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.operation)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.operation)) leaf_name_data.push_back(version_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id")
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
        else
        {
            system_id = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId>();
            system_id->parent = this;
            children["system-id"] = system_id;
        }
        return children.at("system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_children()
{
    if(children.find("system-id") == children.end())
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "node-state")
    {
        node_state = value;
    }
    if(value_path == "version-number")
    {
        version_number = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system-id"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system-id";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{
    yang_name = "bundle-data"; yang_parent_name = "mlacp-data";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bundle_interface_key.operation)
	|| is_set(media_type.operation)
	|| is_set(redundancy_object_id.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.operation)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(std::move(c));
        children[segment_path] = mlacp_bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(std::move(c));
        children[segment_path] = mlacp_member_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_children()
{
    for (auto const & c : mlacp_bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mlacp_member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
    }
    if(value_path == "media-type")
    {
        media_type = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;
    children["mac-address"] = mac_address;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregator_id.operation)
	|| is_set(bundle_name.operation)
	|| is_set(bundle_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(port_priority.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.operation)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.operation)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
        else
        {
            mac_address = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress>();
            mac_address->parent = this;
            children["mac-address"] = mac_address;
        }
        return children.at("mac-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_children()
{
    if(children.find("mac-address") == children.end())
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_children()
{
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{
    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_priority.operation)
	|| is_set(interface_handle.operation)
	|| is_set(member_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(operational_priority.operation)
	|| is_set(port_name.operation)
	|| is_set(port_number.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpMemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.operation)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_children()
{
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
    }
    if(value_path == "port-name")
    {
        port_name = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroups()
{
    yang_name = "mlacp-brief-iccp-groups"; yang_parent_name = "mlacp-brief";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::~MlacpBriefIccpGroups()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_data() const
{
    for (std::size_t index=0; index<mlacp_brief_iccp_group.size(); index++)
    {
        if(mlacp_brief_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<mlacp_brief_iccp_group.size(); index++)
    {
        if(mlacp_brief_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-groups";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-brief-iccp-group")
    {
        for(auto const & c : mlacp_brief_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup>();
        c->parent = this;
        mlacp_brief_iccp_group.push_back(std::move(c));
        children[segment_path] = mlacp_brief_iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_children()
{
    for (auto const & c : mlacp_brief_iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    mlacp_brief_iccp_group_item(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem>())
{
    mlacp_brief_iccp_group_item->parent = this;
    children["mlacp-brief-iccp-group-item"] = mlacp_brief_iccp_group_item;

    yang_name = "mlacp-brief-iccp-group"; yang_parent_name = "mlacp-brief-iccp-groups";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::~MlacpBriefIccpGroup()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (mlacp_brief_iccp_group_item !=  nullptr && mlacp_brief_iccp_group_item->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (mlacp_brief_iccp_group_item !=  nullptr && mlacp_brief_iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/mlacp-brief-iccp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-brief-iccp-group-item")
    {
        if(mlacp_brief_iccp_group_item != nullptr)
        {
            children["mlacp-brief-iccp-group-item"] = mlacp_brief_iccp_group_item;
        }
        else
        {
            mlacp_brief_iccp_group_item = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem>();
            mlacp_brief_iccp_group_item->parent = this;
            children["mlacp-brief-iccp-group-item"] = mlacp_brief_iccp_group_item;
        }
        return children.at("mlacp-brief-iccp-group-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_children()
{
    if(children.find("mlacp-brief-iccp-group-item") == children.end())
    {
        if(mlacp_brief_iccp_group_item != nullptr)
        {
            children["mlacp-brief-iccp-group-item"] = mlacp_brief_iccp_group_item;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::MlacpBriefIccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData>())
{
    iccp_group_data->parent = this;
    children["iccp-group-data"] = iccp_group_data;

    yang_name = "mlacp-brief-iccp-group-item"; yang_parent_name = "mlacp-brief-iccp-group";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::~MlacpBriefIccpGroupItem()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-group-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpBriefIccpGroupItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
        else
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData>();
            iccp_group_data->parent = this;
            children["iccp-group-data"] = iccp_group_data;
        }
        return children.at("iccp-group-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("iccp-group-data") == children.end())
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{
    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-brief-iccp-group-item";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(connect_timer_running.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(singleton.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.operation)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_children()
{
    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;
    children["system-id"] = system_id;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_state.operation)
	|| is_set(ldp_id.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(node_state.operation)
	|| is_set(version_number.operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.operation)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.operation)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.operation)) leaf_name_data.push_back(version_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id")
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
        else
        {
            system_id = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId>();
            system_id->parent = this;
            children["system-id"] = system_id;
        }
        return children.at("system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_children()
{
    if(children.find("system-id") == children.end())
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "node-state")
    {
        node_state = value;
    }
    if(value_path == "version-number")
    {
        version_number = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system-id"; yang_parent_name = "node-data";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system-id";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{
    yang_name = "bundle-data"; yang_parent_name = "mlacp-brief-iccp-group-item";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bundle_interface_key.operation)
	|| is_set(media_type.operation)
	|| is_set(redundancy_object_id.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.operation)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(std::move(c));
        children[segment_path] = mlacp_bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(std::move(c));
        children[segment_path] = mlacp_member_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_children()
{
    for (auto const & c : mlacp_bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mlacp_member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
    }
    if(value_path == "media-type")
    {
        media_type = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;
    children["mac-address"] = mac_address;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregator_id.operation)
	|| is_set(bundle_name.operation)
	|| is_set(bundle_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(port_priority.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.operation)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.operation)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
        else
        {
            mac_address = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress>();
            mac_address->parent = this;
            children["mac-address"] = mac_address;
        }
        return children.at("mac-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_children()
{
    if(children.find("mac-address") == children.end())
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_children()
{
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{
    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_priority.operation)
	|| is_set(interface_handle.operation)
	|| is_set(member_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(operational_priority.operation)
	|| is_set(port_name.operation)
	|| is_set(port_number.operation);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpMemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.operation)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_children()
{
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
    }
    if(value_path == "port-name")
    {
        port_name = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
}

BundleInformation::Mlacp::Mlacp()
    :
    mlacp_bundles(std::make_shared<BundleInformation::Mlacp::MlacpBundles>())
	,mlacp_iccp_groups(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups>())
{
    mlacp_bundles->parent = this;
    children["mlacp-bundles"] = mlacp_bundles;

    mlacp_iccp_groups->parent = this;
    children["mlacp-iccp-groups"] = mlacp_iccp_groups;

    yang_name = "mlacp"; yang_parent_name = "bundle-information";
}

BundleInformation::Mlacp::~Mlacp()
{
}

bool BundleInformation::Mlacp::has_data() const
{
    return (mlacp_bundles !=  nullptr && mlacp_bundles->has_data())
	|| (mlacp_iccp_groups !=  nullptr && mlacp_iccp_groups->has_data());
}

bool BundleInformation::Mlacp::has_operation() const
{
    return is_set(operation)
	|| (mlacp_bundles !=  nullptr && mlacp_bundles->has_operation())
	|| (mlacp_iccp_groups !=  nullptr && mlacp_iccp_groups->has_operation());
}

std::string BundleInformation::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundles")
    {
        if(mlacp_bundles != nullptr)
        {
            children["mlacp-bundles"] = mlacp_bundles;
        }
        else
        {
            mlacp_bundles = std::make_shared<BundleInformation::Mlacp::MlacpBundles>();
            mlacp_bundles->parent = this;
            children["mlacp-bundles"] = mlacp_bundles;
        }
        return children.at("mlacp-bundles");
    }

    if(child_yang_name == "mlacp-iccp-groups")
    {
        if(mlacp_iccp_groups != nullptr)
        {
            children["mlacp-iccp-groups"] = mlacp_iccp_groups;
        }
        else
        {
            mlacp_iccp_groups = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups>();
            mlacp_iccp_groups->parent = this;
            children["mlacp-iccp-groups"] = mlacp_iccp_groups;
        }
        return children.at("mlacp-iccp-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::get_children()
{
    if(children.find("mlacp-bundles") == children.end())
    {
        if(mlacp_bundles != nullptr)
        {
            children["mlacp-bundles"] = mlacp_bundles;
        }
    }

    if(children.find("mlacp-iccp-groups") == children.end())
    {
        if(mlacp_iccp_groups != nullptr)
        {
            children["mlacp-iccp-groups"] = mlacp_iccp_groups;
        }
    }

    return children;
}

void BundleInformation::Mlacp::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundles()
{
    yang_name = "mlacp-bundles"; yang_parent_name = "mlacp";
}

BundleInformation::Mlacp::MlacpBundles::~MlacpBundles()
{
}

bool BundleInformation::Mlacp::MlacpBundles::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle.size(); index++)
    {
        if(mlacp_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpBundles::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle.size(); index++)
    {
        if(mlacp_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Mlacp::MlacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundle")
    {
        for(auto const & c : mlacp_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle>();
        c->parent = this;
        mlacp_bundle.push_back(std::move(c));
        children[segment_path] = mlacp_bundle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::get_children()
{
    for (auto const & c : mlacp_bundle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    mlacp_bundle_item(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem>())
{
    mlacp_bundle_item->parent = this;
    children["mlacp-bundle-item"] = mlacp_bundle_item;

    yang_name = "mlacp-bundle"; yang_parent_name = "mlacp-bundles";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::~MlacpBundle()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_data() const
{
    return bundle_interface.is_set
	|| (mlacp_bundle_item !=  nullptr && mlacp_bundle_item->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (mlacp_bundle_item !=  nullptr && mlacp_bundle_item->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/mlacp-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundle-item")
    {
        if(mlacp_bundle_item != nullptr)
        {
            children["mlacp-bundle-item"] = mlacp_bundle_item;
        }
        else
        {
            mlacp_bundle_item = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem>();
            mlacp_bundle_item->parent = this;
            children["mlacp-bundle-item"] = mlacp_bundle_item;
        }
        return children.at("mlacp-bundle-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_children()
{
    if(children.find("mlacp-bundle-item") == children.end())
    {
        if(mlacp_bundle_item != nullptr)
        {
            children["mlacp-bundle-item"] = mlacp_bundle_item;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpBundleItem()
{
    yang_name = "mlacp-bundle-item"; yang_parent_name = "mlacp-bundle";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::~MlacpBundleItem()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_data() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_operation() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-item";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-data")
    {
        for(auto const & c : mlacp_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData>();
        c->parent = this;
        mlacp_data.push_back(std::move(c));
        children[segment_path] = mlacp_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_children()
{
    for (auto const & c : mlacp_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::MlacpData()
    :
    iccp_group_data(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData>())
{
    iccp_group_data->parent = this;
    children["iccp-group-data"] = iccp_group_data;

    yang_name = "mlacp-data"; yang_parent_name = "mlacp-bundle-item";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::~MlacpData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
        else
        {
            iccp_group_data = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData>();
            iccp_group_data->parent = this;
            children["iccp-group-data"] = iccp_group_data;
        }
        return children.at("iccp-group-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("iccp-group-data") == children.end())
    {
        if(iccp_group_data != nullptr)
        {
            children["iccp-group-data"] = iccp_group_data;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{
    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-data";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(connect_timer_running.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(singleton.operation);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.operation)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_children()
{
    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;
    children["system-id"] = system_id;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_state.operation)
	|| is_set(ldp_id.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(node_state.operation)
	|| is_set(version_number.operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.operation)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.operation)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.operation)) leaf_name_data.push_back(version_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id")
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
        else
        {
            system_id = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId>();
            system_id->parent = this;
            children["system-id"] = system_id;
        }
        return children.at("system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_children()
{
    if(children.find("system-id") == children.end())
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "node-state")
    {
        node_state = value;
    }
    if(value_path == "version-number")
    {
        version_number = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system-id"; yang_parent_name = "node-data";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system-id";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{
    yang_name = "bundle-data"; yang_parent_name = "mlacp-data";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::~BundleData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bundle_interface_key.operation)
	|| is_set(media_type.operation)
	|| is_set(redundancy_object_id.operation);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.operation)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(std::move(c));
        children[segment_path] = mlacp_bundle_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(std::move(c));
        children[segment_path] = mlacp_member_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_children()
{
    for (auto const & c : mlacp_bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mlacp_member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
    }
    if(value_path == "media-type")
    {
        media_type = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;
    children["mac-address"] = mac_address;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregator_id.operation)
	|| is_set(bundle_name.operation)
	|| is_set(bundle_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(port_priority.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.operation)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.operation)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
        else
        {
            mac_address = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress>();
            mac_address->parent = this;
            children["mac-address"] = mac_address;
        }
        return children.at("mac-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_children()
{
    if(children.find("mac-address") == children.end())
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_children()
{
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{
    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data";
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_priority.operation)
	|| is_set(interface_handle.operation)
	|| is_set(member_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(operational_priority.operation)
	|| is_set(port_name.operation)
	|| is_set(port_number.operation);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpMemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.operation)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_children()
{
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
    }
    if(value_path == "port-name")
    {
        port_name = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroups()
{
    yang_name = "mlacp-iccp-groups"; yang_parent_name = "mlacp";
}

BundleInformation::Mlacp::MlacpIccpGroups::~MlacpIccpGroups()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_data() const
{
    for (std::size_t index=0; index<mlacp_iccp_group.size(); index++)
    {
        if(mlacp_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<mlacp_iccp_group.size(); index++)
    {
        if(mlacp_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-groups";

    return path_buffer.str();

}

EntityPath BundleInformation::Mlacp::MlacpIccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-iccp-group")
    {
        for(auto const & c : mlacp_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup>();
        c->parent = this;
        mlacp_iccp_group.push_back(std::move(c));
        children[segment_path] = mlacp_iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::Mlacp::MlacpIccpGroups::get_children()
{
    for (auto const & c : mlacp_iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::set_value(const std::string & value_path, std::string value)
{
}


}
}

