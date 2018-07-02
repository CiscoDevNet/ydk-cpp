
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
        ,
    local(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local>())
    , foreign(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign>())
{
    local->parent = this;
    foreign->parent = this;

    yang_name = "additional-info"; yang_parent_name = "lacp-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_data() const
{
    if (is_presence_container) return true;
    return mbr_type.is_set
	|| (local !=  nullptr && local->has_data())
	|| (foreign !=  nullptr && foreign->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (foreign !=  nullptr && foreign->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local>();
        }
        return local;
    }

    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "foreign" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::Foreign()
    :
    peer_address{YType::str, "peer-address"},
    member_name{YType::str, "member-name"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| member_name.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(member_name.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "member-name")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMembers()
    :
    lacp_member(this, {"member_interface"})
{

    yang_name = "lacp-members"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Lacp::LacpMembers::~LacpMembers()
{
}

bool BundleInformation::Lacp::LacpMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lacp_member.len(); index++)
    {
        if(lacp_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpMembers::has_operation() const
{
    for (std::size_t index=0; index<lacp_member.len(); index++)
    {
        if(lacp_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-member")
    {
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember>();
        c->parent = this;
        lacp_member.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lacp_member.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-member")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMember()
    :
    member_interface{YType::str, "member-interface"}
        ,
    lacp_member_ancestor(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor>())
    , lacp_member_item(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem>())
{
    lacp_member_ancestor->parent = this;
    lacp_member_item->parent = this;

    yang_name = "lacp-member"; yang_parent_name = "lacp-members"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::~LacpMember()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (lacp_member_ancestor !=  nullptr && lacp_member_ancestor->has_data())
	|| (lacp_member_item !=  nullptr && lacp_member_item->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (lacp_member_ancestor !=  nullptr && lacp_member_ancestor->has_operation())
	|| (lacp_member_item !=  nullptr && lacp_member_item->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/lacp-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-member-ancestor")
    {
        if(lacp_member_ancestor == nullptr)
        {
            lacp_member_ancestor = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor>();
        }
        return lacp_member_ancestor;
    }

    if(child_yang_name == "lacp-member-item")
    {
        if(lacp_member_item == nullptr)
        {
            lacp_member_item = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem>();
        }
        return lacp_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lacp_member_ancestor != nullptr)
    {
        children["lacp-member-ancestor"] = lacp_member_ancestor;
    }

    if(lacp_member_item != nullptr)
    {
        children["lacp-member-item"] = lacp_member_item;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-member-ancestor" || name == "lacp-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::LacpMemberAncestor()
    :
    bundle_data(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData>())
    , member_data(this, {})
{
    bundle_data->parent = this;

    yang_name = "lacp-member-ancestor"; yang_parent_name = "lacp-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::~LacpMemberAncestor()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData>();
        c->parent = this;
        member_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    count = 0;
    for (auto c : member_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"}
        ,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData>())
    , bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "lacp-member-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::~BundleData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::ActorBundleData()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    count = 0;
    for (auto c : bfd_config.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::MemberData()
    :
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    mux_state{YType::enumeration, "mux-state"},
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
        ,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo>())
    , partner_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo>())
    , additional_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo>())
{
    actor_info->parent = this;
    partner_info->parent = this;
    additional_info->parent = this;

    yang_name = "member-data"; yang_parent_name = "lacp-member-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::~MemberData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_data() const
{
    if (is_presence_container) return true;
    return selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| selection_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| mux_state.is_set
	|| actor_churn_state.is_set
	|| partner_churn_state.is_set
	|| iccp_group_id.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo>();
        }
        return partner_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo>();
        }
        return additional_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "partner-info" || name == "additional-info" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "selection-state" || name == "period-state" || name == "receive-machine-state" || name == "mux-state" || name == "actor-churn-state" || name == "partner-churn-state" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
        ,
    local(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local>())
    , foreign(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign>())
{
    local->parent = this;
    foreign->parent = this;

    yang_name = "additional-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_data() const
{
    if (is_presence_container) return true;
    return mbr_type.is_set
	|| (local !=  nullptr && local->has_data())
	|| (foreign !=  nullptr && foreign->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (foreign !=  nullptr && foreign->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local>();
        }
        return local;
    }

    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "foreign" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::Foreign()
    :
    peer_address{YType::str, "peer-address"},
    member_name{YType::str, "member-name"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| member_name.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(member_name.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "member-name")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::LacpMemberItem()
    :
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    mux_state{YType::enumeration, "mux-state"},
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
        ,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo>())
    , partner_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo>())
    , additional_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo>())
{
    actor_info->parent = this;
    partner_info->parent = this;
    additional_info->parent = this;

    yang_name = "lacp-member-item"; yang_parent_name = "lacp-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::~LacpMemberItem()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_data() const
{
    if (is_presence_container) return true;
    return selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| selection_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| mux_state.is_set
	|| actor_churn_state.is_set
	|| partner_churn_state.is_set
	|| iccp_group_id.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo>();
        }
        return partner_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo>();
        }
        return additional_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "partner-info" || name == "additional-info" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "selection-state" || name == "period-state" || name == "receive-machine-state" || name == "mux-state" || name == "actor-churn-state" || name == "partner-churn-state" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "lacp-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "lacp-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
        ,
    local(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local>())
    , foreign(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign>())
{
    local->parent = this;
    foreign->parent = this;

    yang_name = "additional-info"; yang_parent_name = "lacp-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_data() const
{
    if (is_presence_container) return true;
    return mbr_type.is_set
	|| (local !=  nullptr && local->has_data())
	|| (foreign !=  nullptr && foreign->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (foreign !=  nullptr && foreign->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local>();
        }
        return local;
    }

    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "foreign" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::Foreign()
    :
    peer_address{YType::str, "peer-address"},
    member_name{YType::str, "member-name"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| member_name.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(member_name.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "member-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::MlacpBundleCounters()
    :
    iccp_groups(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups>())
    , bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles>())
    , nodes(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes>())
{
    iccp_groups->parent = this;
    bundles->parent = this;
    nodes->parent = this;

    yang_name = "mlacp-bundle-counters"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBundleCounters::~MlacpBundleCounters()
{
}

bool BundleInformation::MlacpBundleCounters::has_data() const
{
    if (is_presence_container) return true;
    return (iccp_groups !=  nullptr && iccp_groups->has_data())
	|| (bundles !=  nullptr && bundles->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool BundleInformation::MlacpBundleCounters::has_operation() const
{
    return is_set(yfilter)
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation())
	|| (bundles !=  nullptr && bundles->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups>();
        }
        return iccp_groups;
    }

    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles>();
        }
        return bundles;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_groups != nullptr)
    {
        children["iccp-groups"] = iccp_groups;
    }

    if(bundles != nullptr)
    {
        children["bundles"] = bundles;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-groups" || name == "bundles" || name == "nodes")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroups()
    :
    iccp_group(this, {"iccp_group"})
{

    yang_name = "iccp-groups"; yang_parent_name = "mlacp-bundle-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::~IccpGroups()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iccp_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
        ,
    iccp_group_item(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem>())
{
    iccp_group_item->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group";
    ADD_KEY_TOKEN(iccp_group, "iccp-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-item")
    {
        if(iccp_group_item == nullptr)
        {
            iccp_group_item = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem>();
        }
        return iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_group_item != nullptr)
    {
        children["iccp-group-item"] = iccp_group_item;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData>())
    , node_data(this, {})
{
    iccp_group_data->parent = this;

    yang_name = "iccp-group-item"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::~IccpGroupItem()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "node-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData>();
        c->parent = this;
        node_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    count = 0;
    for (auto c : node_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
        ,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
    , mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
    , bundle_data(this, {})
{
    mlacp_sync_requests_on_all_local_ports->parent = this;
    mlacp_sync_requests_on_all_local_bundles->parent = this;

    yang_name = "iccp-group-data"; yang_parent_name = "iccp-group-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data())
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation())
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
        }
        return mlacp_sync_requests_on_all_local_bundles;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    if(mlacp_sync_requests_on_all_local_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-local-ports" || name == "mlacp-sync-requests-on-all-local-bundles" || name == "bundle-data" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
        ,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    if (is_presence_container) return true;
    return sent_config_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| received_nak_tl_vs.is_set
	|| last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| last_unexpected_event.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "sent-config-tl-vs" || name == "sent-state-tl-vs" || name == "sent-priority-tl-vs" || name == "received-priority-tl-vs" || name == "received-nak-tl-vs" || name == "last-time-cleared" || name == "time-since-cleared" || name == "last-unexpected-event")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_>())
    , bundle_data(this, {})
{
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_>();
        }
        return node_data;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "bundle-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
        ,
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
    , mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
        }
        return mlacp_sync_requests_on_all_foreign_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-foreign-ports" || name == "mlacp-sync-requests-on-all-foreign-bundles" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
        ,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    if (is_presence_container) return true;
    return sent_config_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| received_nak_tl_vs.is_set
	|| last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| last_unexpected_event.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "sent-config-tl-vs" || name == "sent-state-tl-vs" || name == "sent-priority-tl-vs" || name == "received-priority-tl-vs" || name == "received-nak-tl-vs" || name == "last-time-cleared" || name == "time-since-cleared" || name == "last-unexpected-event")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundles()
    :
    bundle(this, {"bundle_interface"})
{

    yang_name = "bundles"; yang_parent_name = "mlacp-bundle-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBundleCounters::Bundles::~Bundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle.len(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.len(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle>();
        c->parent = this;
        bundle.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bundle.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    bundle_item(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem>())
{
    bundle_item->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::~Bundle()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (bundle_item !=  nullptr && bundle_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bundle_item !=  nullptr && bundle_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-item")
    {
        if(bundle_item == nullptr)
        {
            bundle_item = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem>();
        }
        return bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bundle_item != nullptr)
    {
        children["bundle-item"] = bundle_item;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::BundleItem()
    :
    iccp_group(this, {})
{

    yang_name = "bundle-item"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::~BundleItem()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup>();
        c->parent = this;
        iccp_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iccp_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroup()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData>())
    , node_data(this, {})
{
    iccp_group_data->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "node-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData>();
        c->parent = this;
        node_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    count = 0;
    for (auto c : node_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
        ,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
    , mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
    , bundle_data(this, {})
{
    mlacp_sync_requests_on_all_local_ports->parent = this;
    mlacp_sync_requests_on_all_local_bundles->parent = this;

    yang_name = "iccp-group-data"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data())
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation())
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
        }
        return mlacp_sync_requests_on_all_local_bundles;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    if(mlacp_sync_requests_on_all_local_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-local-ports" || name == "mlacp-sync-requests-on-all-local-bundles" || name == "bundle-data" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
        ,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    if (is_presence_container) return true;
    return sent_config_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| received_nak_tl_vs.is_set
	|| last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| last_unexpected_event.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "sent-config-tl-vs" || name == "sent-state-tl-vs" || name == "sent-priority-tl-vs" || name == "received-priority-tl-vs" || name == "received-nak-tl-vs" || name == "last-time-cleared" || name == "time-since-cleared" || name == "last-unexpected-event")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_>())
    , bundle_data(this, {})
{
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_>();
        }
        return node_data;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "bundle-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
        ,
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
    , mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
        }
        return mlacp_sync_requests_on_all_foreign_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-foreign-ports" || name == "mlacp-sync-requests-on-all-foreign-bundles" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
        ,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    if (is_presence_container) return true;
    return sent_config_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| received_nak_tl_vs.is_set
	|| last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| last_unexpected_event.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "sent-config-tl-vs" || name == "sent-state-tl-vs" || name == "sent-priority-tl-vs" || name == "received-priority-tl-vs" || name == "received-nak-tl-vs" || name == "last-time-cleared" || name == "time-since-cleared" || name == "last-unexpected-event")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Nodes()
    :
    node(this, {"node"})
{

    yang_name = "nodes"; yang_parent_name = "mlacp-bundle-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBundleCounters::Nodes::~Nodes()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::Node()
    :
    node{YType::str, "node"}
        ,
    node_item(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem>())
{
    node_item->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::~Node()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| (node_item !=  nullptr && node_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (node_item !=  nullptr && node_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-item")
    {
        if(node_item == nullptr)
        {
            node_item = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem>();
        }
        return node_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_item != nullptr)
    {
        children["node-item"] = node_item;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-item" || name == "node")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData>())
    , node_data(this, {})
{
    iccp_group_data->parent = this;

    yang_name = "node-item"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::~NodeItem()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "node-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData>();
        c->parent = this;
        node_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    count = 0;
    for (auto c : node_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
        ,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
    , mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
    , bundle_data(this, {})
{
    mlacp_sync_requests_on_all_local_ports->parent = this;
    mlacp_sync_requests_on_all_local_bundles->parent = this;

    yang_name = "iccp-group-data"; yang_parent_name = "node-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data())
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation())
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
        }
        return mlacp_sync_requests_on_all_local_bundles;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    if(mlacp_sync_requests_on_all_local_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-local-ports" || name == "mlacp-sync-requests-on-all-local-bundles" || name == "bundle-data" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
        ,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    if (is_presence_container) return true;
    return sent_config_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| received_nak_tl_vs.is_set
	|| last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| last_unexpected_event.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "sent-config-tl-vs" || name == "sent-state-tl-vs" || name == "sent-priority-tl-vs" || name == "received-priority-tl-vs" || name == "received-nak-tl-vs" || name == "last-time-cleared" || name == "time-since-cleared" || name == "last-unexpected-event")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_>())
    , bundle_data(this, {})
{
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_>();
        }
        return node_data;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "bundle-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
        ,
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
    , mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
        }
        return mlacp_sync_requests_on_all_foreign_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-foreign-ports" || name == "mlacp-sync-requests-on-all-foreign-bundles" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    if (is_presence_container) return true;
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
        ,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"}
        ,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    if (is_presence_container) return true;
    return sent_config_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| received_nak_tl_vs.is_set
	|| last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| last_unexpected_event.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "sent-config-tl-vs" || name == "sent-state-tl-vs" || name == "sent-priority-tl-vs" || name == "received-priority-tl-vs" || name == "received-nak-tl-vs" || name == "last-time-cleared" || name == "time-since-cleared" || name == "last-unexpected-event")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    if (is_presence_container) return true;
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::Protect::Protect()
    :
    protect_bundles(std::make_shared<BundleInformation::Protect::ProtectBundles>())
{
    protect_bundles->parent = this;

    yang_name = "protect"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Protect::~Protect()
{
}

bool BundleInformation::Protect::has_data() const
{
    if (is_presence_container) return true;
    return (protect_bundles !=  nullptr && protect_bundles->has_data());
}

bool BundleInformation::Protect::has_operation() const
{
    return is_set(yfilter)
	|| (protect_bundles !=  nullptr && protect_bundles->has_operation());
}

std::string BundleInformation::Protect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-bundles")
    {
        if(protect_bundles == nullptr)
        {
            protect_bundles = std::make_shared<BundleInformation::Protect::ProtectBundles>();
        }
        return protect_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protect_bundles != nullptr)
    {
        children["protect-bundles"] = protect_bundles;
    }

    return children;
}

void BundleInformation::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-bundles")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundles()
    :
    protect_bundle(this, {"bundle_interface"})
{

    yang_name = "protect-bundles"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Protect::ProtectBundles::~ProtectBundles()
{
}

bool BundleInformation::Protect::ProtectBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protect_bundle.len(); index++)
    {
        if(protect_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Protect::ProtectBundles::has_operation() const
{
    for (std::size_t index=0; index<protect_bundle.len(); index++)
    {
        if(protect_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Protect::ProtectBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/protect/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Protect::ProtectBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-bundle")
    {
        auto c = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle>();
        c->parent = this;
        protect_bundle.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protect_bundle.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Protect::ProtectBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Protect::ProtectBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-bundle")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    protect_bundle_item(std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem>())
{
    protect_bundle_item->parent = this;

    yang_name = "protect-bundle"; yang_parent_name = "protect-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::~ProtectBundle()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (protect_bundle_item !=  nullptr && protect_bundle_item->has_data());
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (protect_bundle_item !=  nullptr && protect_bundle_item->has_operation());
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/protect/protect-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::ProtectBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-bundle-item")
    {
        if(protect_bundle_item == nullptr)
        {
            protect_bundle_item = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem>();
        }
        return protect_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::ProtectBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protect_bundle_item != nullptr)
    {
        children["protect-bundle-item"] = protect_bundle_item;
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::ProtectBundleItem()
    :
    bundle_interface_handle{YType::str, "bundle-interface-handle"},
    interface_up{YType::boolean, "interface-up"},
    registered{YType::boolean, "registered"},
    slow_path_up{YType::boolean, "slow-path-up"},
    slow_path_trigger{YType::boolean, "slow-path-trigger"},
    minimum_active_links{YType::uint32, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    event_type{YType::enumeration, "event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    member_info(this, {})
{

    yang_name = "protect-bundle-item"; yang_parent_name = "protect-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::~ProtectBundleItem()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_info.len(); index++)
    {
        if(member_info[index]->has_data())
            return true;
    }
    return bundle_interface_handle.is_set
	|| interface_up.is_set
	|| registered.is_set
	|| slow_path_up.is_set
	|| slow_path_trigger.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| event_type.is_set
	|| time_stamp.is_set;
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_operation() const
{
    for (std::size_t index=0; index<member_info.len(); index++)
    {
        if(member_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_handle.yfilter)
	|| ydk::is_set(interface_up.yfilter)
	|| ydk::is_set(registered.yfilter)
	|| ydk::is_set(slow_path_up.yfilter)
	|| ydk::is_set(slow_path_trigger.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter);
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_handle.is_set || is_set(bundle_interface_handle.yfilter)) leaf_name_data.push_back(bundle_interface_handle.get_name_leafdata());
    if (interface_up.is_set || is_set(interface_up.yfilter)) leaf_name_data.push_back(interface_up.get_name_leafdata());
    if (registered.is_set || is_set(registered.yfilter)) leaf_name_data.push_back(registered.get_name_leafdata());
    if (slow_path_up.is_set || is_set(slow_path_up.yfilter)) leaf_name_data.push_back(slow_path_up.get_name_leafdata());
    if (slow_path_trigger.is_set || is_set(slow_path_trigger.yfilter)) leaf_name_data.push_back(slow_path_trigger.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-info")
    {
        auto c = std::make_shared<BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo>();
        c->parent = this;
        member_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : member_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-handle")
    {
        bundle_interface_handle = value;
        bundle_interface_handle.value_namespace = name_space;
        bundle_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-up")
    {
        interface_up = value;
        interface_up.value_namespace = name_space;
        interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered")
    {
        registered = value;
        registered.value_namespace = name_space;
        registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up = value;
        slow_path_up.value_namespace = name_space;
        slow_path_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-path-trigger")
    {
        slow_path_trigger = value;
        slow_path_trigger.value_namespace = name_space;
        slow_path_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-handle")
    {
        bundle_interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-up")
    {
        interface_up.yfilter = yfilter;
    }
    if(value_path == "registered")
    {
        registered.yfilter = yfilter;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up.yfilter = yfilter;
    }
    if(value_path == "slow-path-trigger")
    {
        slow_path_trigger.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-info" || name == "bundle-interface-handle" || name == "interface-up" || name == "registered" || name == "slow-path-up" || name == "slow-path-trigger" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::MemberInfo()
    :
    interface_handle{YType::str, "interface-handle"},
    underlying_link_id{YType::uint16, "underlying-link-id"},
    link_order_number{YType::uint16, "link-order-number"},
    bandwidth{YType::uint32, "bandwidth"},
    node{YType::str, "node"},
    active{YType::boolean, "active"},
    notification_received{YType::boolean, "notification-received"},
    slow_path_up{YType::boolean, "slow-path-up"},
    time_stamp{YType::uint64, "time-stamp"}
{

    yang_name = "member-info"; yang_parent_name = "protect-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::~MemberInfo()
{
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| underlying_link_id.is_set
	|| link_order_number.is_set
	|| bandwidth.is_set
	|| node.is_set
	|| active.is_set
	|| notification_received.is_set
	|| slow_path_up.is_set
	|| time_stamp.is_set;
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(notification_received.yfilter)
	|| ydk::is_set(slow_path_up.yfilter)
	|| ydk::is_set(time_stamp.yfilter);
}

std::string BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (notification_received.is_set || is_set(notification_received.yfilter)) leaf_name_data.push_back(notification_received.get_name_leafdata());
    if (slow_path_up.is_set || is_set(slow_path_up.yfilter)) leaf_name_data.push_back(slow_path_up.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-received")
    {
        notification_received = value;
        notification_received.value_namespace = name_space;
        notification_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up = value;
        slow_path_up.value_namespace = name_space;
        slow_path_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "notification-received")
    {
        notification_received.yfilter = yfilter;
    }
    if(value_path == "slow-path-up")
    {
        slow_path_up.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "underlying-link-id" || name == "link-order-number" || name == "bandwidth" || name == "node" || name == "active" || name == "notification-received" || name == "slow-path-up" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBrief()
    :
    mlacp_bundle_briefs(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs>())
    , mlacp_brief_iccp_groups(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups>())
{
    mlacp_bundle_briefs->parent = this;
    mlacp_brief_iccp_groups->parent = this;

    yang_name = "mlacp-brief"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBrief::~MlacpBrief()
{
}

bool BundleInformation::MlacpBrief::has_data() const
{
    if (is_presence_container) return true;
    return (mlacp_bundle_briefs !=  nullptr && mlacp_bundle_briefs->has_data())
	|| (mlacp_brief_iccp_groups !=  nullptr && mlacp_brief_iccp_groups->has_data());
}

bool BundleInformation::MlacpBrief::has_operation() const
{
    return is_set(yfilter)
	|| (mlacp_bundle_briefs !=  nullptr && mlacp_bundle_briefs->has_operation())
	|| (mlacp_brief_iccp_groups !=  nullptr && mlacp_brief_iccp_groups->has_operation());
}

std::string BundleInformation::MlacpBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-briefs")
    {
        if(mlacp_bundle_briefs == nullptr)
        {
            mlacp_bundle_briefs = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs>();
        }
        return mlacp_bundle_briefs;
    }

    if(child_yang_name == "mlacp-brief-iccp-groups")
    {
        if(mlacp_brief_iccp_groups == nullptr)
        {
            mlacp_brief_iccp_groups = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups>();
        }
        return mlacp_brief_iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_bundle_briefs != nullptr)
    {
        children["mlacp-bundle-briefs"] = mlacp_bundle_briefs;
    }

    if(mlacp_brief_iccp_groups != nullptr)
    {
        children["mlacp-brief-iccp-groups"] = mlacp_brief_iccp_groups;
    }

    return children;
}

void BundleInformation::MlacpBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-briefs" || name == "mlacp-brief-iccp-groups")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBriefs()
    :
    mlacp_bundle_brief(this, {"bundle_interface"})
{

    yang_name = "mlacp-bundle-briefs"; yang_parent_name = "mlacp-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::~MlacpBundleBriefs()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_bundle_brief.len(); index++)
    {
        if(mlacp_bundle_brief[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_brief.len(); index++)
    {
        if(mlacp_bundle_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-brief")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief>();
        c->parent = this;
        mlacp_bundle_brief.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_bundle_brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-brief")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleBrief()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    mlacp_bundle_item_brief(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief>())
{
    mlacp_bundle_item_brief->parent = this;

    yang_name = "mlacp-bundle-brief"; yang_parent_name = "mlacp-bundle-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::~MlacpBundleBrief()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (mlacp_bundle_item_brief !=  nullptr && mlacp_bundle_item_brief->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (mlacp_bundle_item_brief !=  nullptr && mlacp_bundle_item_brief->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/mlacp-bundle-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-brief";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-item-brief")
    {
        if(mlacp_bundle_item_brief == nullptr)
        {
            mlacp_bundle_item_brief = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief>();
        }
        return mlacp_bundle_item_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_bundle_item_brief != nullptr)
    {
        children["mlacp-bundle-item-brief"] = mlacp_bundle_item_brief;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-item-brief" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpBundleItemBrief()
    :
    mlacp_data(this, {})
{

    yang_name = "mlacp-bundle-item-brief"; yang_parent_name = "mlacp-bundle-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::~MlacpBundleItemBrief()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_data.len(); index++)
    {
        if(mlacp_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_operation() const
{
    for (std::size_t index=0; index<mlacp_data.len(); index++)
    {
        if(mlacp_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-item-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData>();
        c->parent = this;
        mlacp_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-data")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::MlacpData()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData>())
    , bundle_data(this, {})
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-data"; yang_parent_name = "mlacp-bundle-item-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::~MlacpData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "bundle-data")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"},
    connect_timer_running{YType::uint64, "connect-timer-running"}
        ,
    node_data(this, {})
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| singleton.is_set
	|| connect_timer_running.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(connect_timer_running.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "iccp-group-id" || name == "singleton" || name == "connect-timer-running")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::NodeData()
    :
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    ldp_id{YType::str, "ldp-id"},
    version_number{YType::uint32, "version-number"},
    node_state{YType::enumeration, "node-state"},
    iccp_group_state{YType::enumeration, "iccp-group-state"}
        ,
    system_id(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_data() const
{
    if (is_presence_container) return true;
    return mlacp_node_id.is_set
	|| ldp_id.is_set
	|| version_number.is_set
	|| node_state.is_set
	|| iccp_group_state.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "mlacp-node-id" || name == "ldp-id" || name == "version-number" || name == "node-state" || name == "iccp-group-state")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
        ,
    mlacp_bundle_data(this, {})
    , mlacp_member_data(this, {})
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
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
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.append(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mlacp_member_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MlacpBundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_state{YType::enumeration, "bundle-state"},
    port_priority{YType::uint16, "port-priority"}
        ,
    mac_address(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| mlacp_node_id.is_set
	|| aggregator_id.is_set
	|| bundle_state.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bundle-name" || name == "mlacp-node-id" || name == "aggregator-id" || name == "bundle-state" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::MlacpMemberData()
    :
    port_name{YType::str, "port-name"},
    interface_handle{YType::str, "interface-handle"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_number{YType::uint16, "port-number"},
    operational_priority{YType::uint16, "operational-priority"},
    configured_priority{YType::uint16, "configured-priority"},
    member_state{YType::enumeration, "member-state"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_data() const
{
    if (is_presence_container) return true;
    return port_name.is_set
	|| interface_handle.is_set
	|| mlacp_node_id.is_set
	|| port_number.is_set
	|| operational_priority.is_set
	|| configured_priority.is_set
	|| member_state.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(member_state.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-name" || name == "interface-handle" || name == "mlacp-node-id" || name == "port-number" || name == "operational-priority" || name == "configured-priority" || name == "member-state")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroups()
    :
    mlacp_brief_iccp_group(this, {"iccp_group"})
{

    yang_name = "mlacp-brief-iccp-groups"; yang_parent_name = "mlacp-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::~MlacpBriefIccpGroups()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_brief_iccp_group.len(); index++)
    {
        if(mlacp_brief_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<mlacp_brief_iccp_group.len(); index++)
    {
        if(mlacp_brief_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-brief-iccp-group")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup>();
        c->parent = this;
        mlacp_brief_iccp_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_brief_iccp_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-brief-iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
        ,
    mlacp_brief_iccp_group_item(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem>())
{
    mlacp_brief_iccp_group_item->parent = this;

    yang_name = "mlacp-brief-iccp-group"; yang_parent_name = "mlacp-brief-iccp-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::~MlacpBriefIccpGroup()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| (mlacp_brief_iccp_group_item !=  nullptr && mlacp_brief_iccp_group_item->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (mlacp_brief_iccp_group_item !=  nullptr && mlacp_brief_iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/mlacp-brief-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-group";
    ADD_KEY_TOKEN(iccp_group, "iccp-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-brief-iccp-group-item")
    {
        if(mlacp_brief_iccp_group_item == nullptr)
        {
            mlacp_brief_iccp_group_item = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem>();
        }
        return mlacp_brief_iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_brief_iccp_group_item != nullptr)
    {
        children["mlacp-brief-iccp-group-item"] = mlacp_brief_iccp_group_item;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-brief-iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::MlacpBriefIccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData>())
    , bundle_data(this, {})
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-brief-iccp-group-item"; yang_parent_name = "mlacp-brief-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::~MlacpBriefIccpGroupItem()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "bundle-data")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"},
    connect_timer_running{YType::uint64, "connect-timer-running"}
        ,
    node_data(this, {})
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-brief-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| singleton.is_set
	|| connect_timer_running.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(connect_timer_running.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "iccp-group-id" || name == "singleton" || name == "connect-timer-running")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::NodeData()
    :
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    ldp_id{YType::str, "ldp-id"},
    version_number{YType::uint32, "version-number"},
    node_state{YType::enumeration, "node-state"},
    iccp_group_state{YType::enumeration, "iccp-group-state"}
        ,
    system_id(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_data() const
{
    if (is_presence_container) return true;
    return mlacp_node_id.is_set
	|| ldp_id.is_set
	|| version_number.is_set
	|| node_state.is_set
	|| iccp_group_state.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "mlacp-node-id" || name == "ldp-id" || name == "version-number" || name == "node-state" || name == "iccp-group-state")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
        ,
    mlacp_bundle_data(this, {})
    , mlacp_member_data(this, {})
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-brief-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
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
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.append(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mlacp_member_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MlacpBundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_state{YType::enumeration, "bundle-state"},
    port_priority{YType::uint16, "port-priority"}
        ,
    mac_address(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| mlacp_node_id.is_set
	|| aggregator_id.is_set
	|| bundle_state.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bundle-name" || name == "mlacp-node-id" || name == "aggregator-id" || name == "bundle-state" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::MlacpMemberData()
    :
    port_name{YType::str, "port-name"},
    interface_handle{YType::str, "interface-handle"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_number{YType::uint16, "port-number"},
    operational_priority{YType::uint16, "operational-priority"},
    configured_priority{YType::uint16, "configured-priority"},
    member_state{YType::enumeration, "member-state"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_data() const
{
    if (is_presence_container) return true;
    return port_name.is_set
	|| interface_handle.is_set
	|| mlacp_node_id.is_set
	|| port_number.is_set
	|| operational_priority.is_set
	|| configured_priority.is_set
	|| member_state.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(member_state.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-name" || name == "interface-handle" || name == "mlacp-node-id" || name == "port-number" || name == "operational-priority" || name == "configured-priority" || name == "member-state")
        return true;
    return false;
}

BundleInformation::Mlacp::Mlacp()
    :
    mlacp_bundles(std::make_shared<BundleInformation::Mlacp::MlacpBundles>())
    , mlacp_iccp_groups(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups>())
{
    mlacp_bundles->parent = this;
    mlacp_iccp_groups->parent = this;

    yang_name = "mlacp"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Mlacp::~Mlacp()
{
}

bool BundleInformation::Mlacp::has_data() const
{
    if (is_presence_container) return true;
    return (mlacp_bundles !=  nullptr && mlacp_bundles->has_data())
	|| (mlacp_iccp_groups !=  nullptr && mlacp_iccp_groups->has_data());
}

bool BundleInformation::Mlacp::has_operation() const
{
    return is_set(yfilter)
	|| (mlacp_bundles !=  nullptr && mlacp_bundles->has_operation())
	|| (mlacp_iccp_groups !=  nullptr && mlacp_iccp_groups->has_operation());
}

std::string BundleInformation::Mlacp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundles")
    {
        if(mlacp_bundles == nullptr)
        {
            mlacp_bundles = std::make_shared<BundleInformation::Mlacp::MlacpBundles>();
        }
        return mlacp_bundles;
    }

    if(child_yang_name == "mlacp-iccp-groups")
    {
        if(mlacp_iccp_groups == nullptr)
        {
            mlacp_iccp_groups = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups>();
        }
        return mlacp_iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_bundles != nullptr)
    {
        children["mlacp-bundles"] = mlacp_bundles;
    }

    if(mlacp_iccp_groups != nullptr)
    {
        children["mlacp-iccp-groups"] = mlacp_iccp_groups;
    }

    return children;
}

void BundleInformation::Mlacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundles" || name == "mlacp-iccp-groups")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundles()
    :
    mlacp_bundle(this, {"bundle_interface"})
{

    yang_name = "mlacp-bundles"; yang_parent_name = "mlacp"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Mlacp::MlacpBundles::~MlacpBundles()
{
}

bool BundleInformation::Mlacp::MlacpBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_bundle.len(); index++)
    {
        if(mlacp_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpBundles::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle.len(); index++)
    {
        if(mlacp_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle")
    {
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle>();
        c->parent = this;
        mlacp_bundle.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_bundle.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    mlacp_bundle_item(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem>())
{
    mlacp_bundle_item->parent = this;

    yang_name = "mlacp-bundle"; yang_parent_name = "mlacp-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::~MlacpBundle()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (mlacp_bundle_item !=  nullptr && mlacp_bundle_item->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (mlacp_bundle_item !=  nullptr && mlacp_bundle_item->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/mlacp-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-item")
    {
        if(mlacp_bundle_item == nullptr)
        {
            mlacp_bundle_item = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem>();
        }
        return mlacp_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mlacp_bundle_item != nullptr)
    {
        children["mlacp-bundle-item"] = mlacp_bundle_item;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpBundleItem()
    :
    mlacp_data(this, {})
{

    yang_name = "mlacp-bundle-item"; yang_parent_name = "mlacp-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::~MlacpBundleItem()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_data.len(); index++)
    {
        if(mlacp_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_operation() const
{
    for (std::size_t index=0; index<mlacp_data.len(); index++)
    {
        if(mlacp_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-data")
    {
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData>();
        c->parent = this;
        mlacp_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-data")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::MlacpData()
    :
    iccp_group_data(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData>())
    , bundle_data(this, {})
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-data"; yang_parent_name = "mlacp-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::~MlacpData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.len(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "bundle-data")
    {
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData>();
        c->parent = this;
        bundle_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    count = 0;
    for (auto c : bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "bundle-data")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"},
    connect_timer_running{YType::uint64, "connect-timer-running"}
        ,
    node_data(this, {})
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| singleton.is_set
	|| connect_timer_running.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(connect_timer_running.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "iccp-group-id" || name == "singleton" || name == "connect-timer-running")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::NodeData()
    :
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    ldp_id{YType::str, "ldp-id"},
    version_number{YType::uint32, "version-number"},
    node_state{YType::enumeration, "node-state"},
    iccp_group_state{YType::enumeration, "iccp-group-state"}
        ,
    system_id(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_data() const
{
    if (is_presence_container) return true;
    return mlacp_node_id.is_set
	|| ldp_id.is_set
	|| version_number.is_set
	|| node_state.is_set
	|| iccp_group_state.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "mlacp-node-id" || name == "ldp-id" || name == "version-number" || name == "node-state" || name == "iccp-group-state")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
        ,
    mlacp_bundle_data(this, {})
    , mlacp_member_data(this, {})
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::~BundleData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
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
    for (std::size_t index=0; index<mlacp_bundle_data.len(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.len(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.append(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_bundle_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mlacp_member_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MlacpBundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_state{YType::enumeration, "bundle-state"},
    port_priority{YType::uint16, "port-priority"}
        ,
    mac_address(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| mlacp_node_id.is_set
	|| aggregator_id.is_set
	|| bundle_state.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bundle-name" || name == "mlacp-node-id" || name == "aggregator-id" || name == "bundle-state" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::MlacpMemberData()
    :
    port_name{YType::str, "port-name"},
    interface_handle{YType::str, "interface-handle"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_number{YType::uint16, "port-number"},
    operational_priority{YType::uint16, "operational-priority"},
    configured_priority{YType::uint16, "configured-priority"},
    member_state{YType::enumeration, "member-state"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_data() const
{
    if (is_presence_container) return true;
    return port_name.is_set
	|| interface_handle.is_set
	|| mlacp_node_id.is_set
	|| port_number.is_set
	|| operational_priority.is_set
	|| configured_priority.is_set
	|| member_state.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(member_state.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-name" || name == "interface-handle" || name == "mlacp-node-id" || name == "port-number" || name == "operational-priority" || name == "configured-priority" || name == "member-state")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroups()
    :
    mlacp_iccp_group(this, {"iccp_group"})
{

    yang_name = "mlacp-iccp-groups"; yang_parent_name = "mlacp"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Mlacp::MlacpIccpGroups::~MlacpIccpGroups()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mlacp_iccp_group.len(); index++)
    {
        if(mlacp_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<mlacp_iccp_group.len(); index++)
    {
        if(mlacp_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-iccp-group")
    {
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup>();
        c->parent = this;
        mlacp_iccp_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mlacp_iccp_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-iccp-group")
        return true;
    return false;
}


}
}

