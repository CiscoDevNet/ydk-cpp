
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_vrrp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_vrrp_oper {

Vrrp::Summary::Summary()
    :
    	bfd_session_inactive{YType::uint32, "bfd-session-inactive"},
	 bfd_sessions_down{YType::uint32, "bfd-sessions-down"},
	 bfd_sessions_up{YType::uint32, "bfd-sessions-up"},
	 interfaces_ipv4_state_down{YType::uint32, "interfaces-ipv4-state-down"},
	 interfaces_ipv4_state_up{YType::uint32, "interfaces-ipv4-state-up"},
	 interfaces_ipv6_state_down{YType::uint32, "interfaces-ipv6-state-down"},
	 interfaces_ipv6_state_up{YType::uint32, "interfaces-ipv6-state-up"},
	 ipv4_sessions_backup{YType::uint32, "ipv4-sessions-backup"},
	 ipv4_sessions_init{YType::uint32, "ipv4-sessions-init"},
	 ipv4_sessions_master{YType::uint32, "ipv4-sessions-master"},
	 ipv4_sessions_master_owner{YType::uint32, "ipv4-sessions-master-owner"},
	 ipv4_slaves_backup{YType::uint32, "ipv4-slaves-backup"},
	 ipv4_slaves_init{YType::uint32, "ipv4-slaves-init"},
	 ipv4_slaves_master{YType::uint32, "ipv4-slaves-master"},
	 ipv4_virtual_ip_addresses_backup_down{YType::uint32, "ipv4-virtual-ip-addresses-backup-down"},
	 ipv4_virtual_ip_addresses_backup_up{YType::uint32, "ipv4-virtual-ip-addresses-backup-up"},
	 ipv4_virtual_ip_addresses_init_down{YType::uint32, "ipv4-virtual-ip-addresses-init-down"},
	 ipv4_virtual_ip_addresses_init_up{YType::uint32, "ipv4-virtual-ip-addresses-init-up"},
	 ipv4_virtual_ip_addresses_master_down{YType::uint32, "ipv4-virtual-ip-addresses-master-down"},
	 ipv4_virtual_ip_addresses_master_owner_down{YType::uint32, "ipv4-virtual-ip-addresses-master-owner-down"},
	 ipv4_virtual_ip_addresses_master_owner_up{YType::uint32, "ipv4-virtual-ip-addresses-master-owner-up"},
	 ipv4_virtual_ip_addresses_master_up{YType::uint32, "ipv4-virtual-ip-addresses-master-up"},
	 ipv6_sessions_backup{YType::uint32, "ipv6-sessions-backup"},
	 ipv6_sessions_init{YType::uint32, "ipv6-sessions-init"},
	 ipv6_sessions_master{YType::uint32, "ipv6-sessions-master"},
	 ipv6_sessions_master_owner{YType::uint32, "ipv6-sessions-master-owner"},
	 ipv6_slaves_backup{YType::uint32, "ipv6-slaves-backup"},
	 ipv6_slaves_init{YType::uint32, "ipv6-slaves-init"},
	 ipv6_slaves_master{YType::uint32, "ipv6-slaves-master"},
	 ipv6_virtual_ip_addresses_backup_down{YType::uint32, "ipv6-virtual-ip-addresses-backup-down"},
	 ipv6_virtual_ip_addresses_backup_up{YType::uint32, "ipv6-virtual-ip-addresses-backup-up"},
	 ipv6_virtual_ip_addresses_init_down{YType::uint32, "ipv6-virtual-ip-addresses-init-down"},
	 ipv6_virtual_ip_addresses_init_up{YType::uint32, "ipv6-virtual-ip-addresses-init-up"},
	 ipv6_virtual_ip_addresses_master_down{YType::uint32, "ipv6-virtual-ip-addresses-master-down"},
	 ipv6_virtual_ip_addresses_master_owner_down{YType::uint32, "ipv6-virtual-ip-addresses-master-owner-down"},
	 ipv6_virtual_ip_addresses_master_owner_up{YType::uint32, "ipv6-virtual-ip-addresses-master-owner-up"},
	 ipv6_virtual_ip_addresses_master_up{YType::uint32, "ipv6-virtual-ip-addresses-master-up"},
	 ipv6bfd_session_inactive{YType::uint32, "ipv6bfd-session-inactive"},
	 ipv6bfd_sessions_down{YType::uint32, "ipv6bfd-sessions-down"},
	 ipv6bfd_sessions_up{YType::uint32, "ipv6bfd-sessions-up"},
	 tracked_interfaces_ipv4_state_down{YType::uint32, "tracked-interfaces-ipv4-state-down"},
	 tracked_interfaces_ipv4_state_up{YType::uint32, "tracked-interfaces-ipv4-state-up"},
	 tracked_interfaces_ipv6_state_down{YType::uint32, "tracked-interfaces-ipv6-state-down"},
	 tracked_interfaces_ipv6_state_up{YType::uint32, "tracked-interfaces-ipv6-state-up"},
	 tracked_objects_state_down{YType::uint32, "tracked-objects-state-down"},
	 tracked_objects_state_up{YType::uint32, "tracked-objects-state-up"}
{
    yang_name = "summary"; yang_parent_name = "vrrp";
}

Vrrp::Summary::~Summary()
{
}

bool Vrrp::Summary::has_data() const
{
    return bfd_session_inactive.is_set
	|| bfd_sessions_down.is_set
	|| bfd_sessions_up.is_set
	|| interfaces_ipv4_state_down.is_set
	|| interfaces_ipv4_state_up.is_set
	|| interfaces_ipv6_state_down.is_set
	|| interfaces_ipv6_state_up.is_set
	|| ipv4_sessions_backup.is_set
	|| ipv4_sessions_init.is_set
	|| ipv4_sessions_master.is_set
	|| ipv4_sessions_master_owner.is_set
	|| ipv4_slaves_backup.is_set
	|| ipv4_slaves_init.is_set
	|| ipv4_slaves_master.is_set
	|| ipv4_virtual_ip_addresses_backup_down.is_set
	|| ipv4_virtual_ip_addresses_backup_up.is_set
	|| ipv4_virtual_ip_addresses_init_down.is_set
	|| ipv4_virtual_ip_addresses_init_up.is_set
	|| ipv4_virtual_ip_addresses_master_down.is_set
	|| ipv4_virtual_ip_addresses_master_owner_down.is_set
	|| ipv4_virtual_ip_addresses_master_owner_up.is_set
	|| ipv4_virtual_ip_addresses_master_up.is_set
	|| ipv6_sessions_backup.is_set
	|| ipv6_sessions_init.is_set
	|| ipv6_sessions_master.is_set
	|| ipv6_sessions_master_owner.is_set
	|| ipv6_slaves_backup.is_set
	|| ipv6_slaves_init.is_set
	|| ipv6_slaves_master.is_set
	|| ipv6_virtual_ip_addresses_backup_down.is_set
	|| ipv6_virtual_ip_addresses_backup_up.is_set
	|| ipv6_virtual_ip_addresses_init_down.is_set
	|| ipv6_virtual_ip_addresses_init_up.is_set
	|| ipv6_virtual_ip_addresses_master_down.is_set
	|| ipv6_virtual_ip_addresses_master_owner_down.is_set
	|| ipv6_virtual_ip_addresses_master_owner_up.is_set
	|| ipv6_virtual_ip_addresses_master_up.is_set
	|| ipv6bfd_session_inactive.is_set
	|| ipv6bfd_sessions_down.is_set
	|| ipv6bfd_sessions_up.is_set
	|| tracked_interfaces_ipv4_state_down.is_set
	|| tracked_interfaces_ipv4_state_up.is_set
	|| tracked_interfaces_ipv6_state_down.is_set
	|| tracked_interfaces_ipv6_state_up.is_set
	|| tracked_objects_state_down.is_set
	|| tracked_objects_state_up.is_set;
}

bool Vrrp::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_session_inactive.operation)
	|| is_set(bfd_sessions_down.operation)
	|| is_set(bfd_sessions_up.operation)
	|| is_set(interfaces_ipv4_state_down.operation)
	|| is_set(interfaces_ipv4_state_up.operation)
	|| is_set(interfaces_ipv6_state_down.operation)
	|| is_set(interfaces_ipv6_state_up.operation)
	|| is_set(ipv4_sessions_backup.operation)
	|| is_set(ipv4_sessions_init.operation)
	|| is_set(ipv4_sessions_master.operation)
	|| is_set(ipv4_sessions_master_owner.operation)
	|| is_set(ipv4_slaves_backup.operation)
	|| is_set(ipv4_slaves_init.operation)
	|| is_set(ipv4_slaves_master.operation)
	|| is_set(ipv4_virtual_ip_addresses_backup_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_backup_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_init_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_init_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_master_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_master_owner_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_master_owner_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_master_up.operation)
	|| is_set(ipv6_sessions_backup.operation)
	|| is_set(ipv6_sessions_init.operation)
	|| is_set(ipv6_sessions_master.operation)
	|| is_set(ipv6_sessions_master_owner.operation)
	|| is_set(ipv6_slaves_backup.operation)
	|| is_set(ipv6_slaves_init.operation)
	|| is_set(ipv6_slaves_master.operation)
	|| is_set(ipv6_virtual_ip_addresses_backup_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_backup_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_init_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_init_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_master_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_master_owner_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_master_owner_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_master_up.operation)
	|| is_set(ipv6bfd_session_inactive.operation)
	|| is_set(ipv6bfd_sessions_down.operation)
	|| is_set(ipv6bfd_sessions_up.operation)
	|| is_set(tracked_interfaces_ipv4_state_down.operation)
	|| is_set(tracked_interfaces_ipv4_state_up.operation)
	|| is_set(tracked_interfaces_ipv6_state_down.operation)
	|| is_set(tracked_interfaces_ipv6_state_up.operation)
	|| is_set(tracked_objects_state_down.operation)
	|| is_set(tracked_objects_state_up.operation);
}

std::string Vrrp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Vrrp::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_inactive.is_set || is_set(bfd_session_inactive.operation)) leaf_name_data.push_back(bfd_session_inactive.get_name_leafdata());
    if (bfd_sessions_down.is_set || is_set(bfd_sessions_down.operation)) leaf_name_data.push_back(bfd_sessions_down.get_name_leafdata());
    if (bfd_sessions_up.is_set || is_set(bfd_sessions_up.operation)) leaf_name_data.push_back(bfd_sessions_up.get_name_leafdata());
    if (interfaces_ipv4_state_down.is_set || is_set(interfaces_ipv4_state_down.operation)) leaf_name_data.push_back(interfaces_ipv4_state_down.get_name_leafdata());
    if (interfaces_ipv4_state_up.is_set || is_set(interfaces_ipv4_state_up.operation)) leaf_name_data.push_back(interfaces_ipv4_state_up.get_name_leafdata());
    if (interfaces_ipv6_state_down.is_set || is_set(interfaces_ipv6_state_down.operation)) leaf_name_data.push_back(interfaces_ipv6_state_down.get_name_leafdata());
    if (interfaces_ipv6_state_up.is_set || is_set(interfaces_ipv6_state_up.operation)) leaf_name_data.push_back(interfaces_ipv6_state_up.get_name_leafdata());
    if (ipv4_sessions_backup.is_set || is_set(ipv4_sessions_backup.operation)) leaf_name_data.push_back(ipv4_sessions_backup.get_name_leafdata());
    if (ipv4_sessions_init.is_set || is_set(ipv4_sessions_init.operation)) leaf_name_data.push_back(ipv4_sessions_init.get_name_leafdata());
    if (ipv4_sessions_master.is_set || is_set(ipv4_sessions_master.operation)) leaf_name_data.push_back(ipv4_sessions_master.get_name_leafdata());
    if (ipv4_sessions_master_owner.is_set || is_set(ipv4_sessions_master_owner.operation)) leaf_name_data.push_back(ipv4_sessions_master_owner.get_name_leafdata());
    if (ipv4_slaves_backup.is_set || is_set(ipv4_slaves_backup.operation)) leaf_name_data.push_back(ipv4_slaves_backup.get_name_leafdata());
    if (ipv4_slaves_init.is_set || is_set(ipv4_slaves_init.operation)) leaf_name_data.push_back(ipv4_slaves_init.get_name_leafdata());
    if (ipv4_slaves_master.is_set || is_set(ipv4_slaves_master.operation)) leaf_name_data.push_back(ipv4_slaves_master.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_backup_down.is_set || is_set(ipv4_virtual_ip_addresses_backup_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_backup_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_backup_up.is_set || is_set(ipv4_virtual_ip_addresses_backup_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_backup_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_down.is_set || is_set(ipv4_virtual_ip_addresses_init_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_up.is_set || is_set(ipv4_virtual_ip_addresses_init_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_down.is_set || is_set(ipv4_virtual_ip_addresses_master_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_owner_down.is_set || is_set(ipv4_virtual_ip_addresses_master_owner_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_owner_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_owner_up.is_set || is_set(ipv4_virtual_ip_addresses_master_owner_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_owner_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_up.is_set || is_set(ipv4_virtual_ip_addresses_master_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_up.get_name_leafdata());
    if (ipv6_sessions_backup.is_set || is_set(ipv6_sessions_backup.operation)) leaf_name_data.push_back(ipv6_sessions_backup.get_name_leafdata());
    if (ipv6_sessions_init.is_set || is_set(ipv6_sessions_init.operation)) leaf_name_data.push_back(ipv6_sessions_init.get_name_leafdata());
    if (ipv6_sessions_master.is_set || is_set(ipv6_sessions_master.operation)) leaf_name_data.push_back(ipv6_sessions_master.get_name_leafdata());
    if (ipv6_sessions_master_owner.is_set || is_set(ipv6_sessions_master_owner.operation)) leaf_name_data.push_back(ipv6_sessions_master_owner.get_name_leafdata());
    if (ipv6_slaves_backup.is_set || is_set(ipv6_slaves_backup.operation)) leaf_name_data.push_back(ipv6_slaves_backup.get_name_leafdata());
    if (ipv6_slaves_init.is_set || is_set(ipv6_slaves_init.operation)) leaf_name_data.push_back(ipv6_slaves_init.get_name_leafdata());
    if (ipv6_slaves_master.is_set || is_set(ipv6_slaves_master.operation)) leaf_name_data.push_back(ipv6_slaves_master.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_backup_down.is_set || is_set(ipv6_virtual_ip_addresses_backup_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_backup_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_backup_up.is_set || is_set(ipv6_virtual_ip_addresses_backup_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_backup_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_down.is_set || is_set(ipv6_virtual_ip_addresses_init_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_up.is_set || is_set(ipv6_virtual_ip_addresses_init_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_down.is_set || is_set(ipv6_virtual_ip_addresses_master_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_owner_down.is_set || is_set(ipv6_virtual_ip_addresses_master_owner_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_owner_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_owner_up.is_set || is_set(ipv6_virtual_ip_addresses_master_owner_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_owner_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_up.is_set || is_set(ipv6_virtual_ip_addresses_master_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_up.get_name_leafdata());
    if (ipv6bfd_session_inactive.is_set || is_set(ipv6bfd_session_inactive.operation)) leaf_name_data.push_back(ipv6bfd_session_inactive.get_name_leafdata());
    if (ipv6bfd_sessions_down.is_set || is_set(ipv6bfd_sessions_down.operation)) leaf_name_data.push_back(ipv6bfd_sessions_down.get_name_leafdata());
    if (ipv6bfd_sessions_up.is_set || is_set(ipv6bfd_sessions_up.operation)) leaf_name_data.push_back(ipv6bfd_sessions_up.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_down.is_set || is_set(tracked_interfaces_ipv4_state_down.operation)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_up.is_set || is_set(tracked_interfaces_ipv4_state_up.operation)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_up.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_down.is_set || is_set(tracked_interfaces_ipv6_state_down.operation)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_up.is_set || is_set(tracked_interfaces_ipv6_state_up.operation)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_up.get_name_leafdata());
    if (tracked_objects_state_down.is_set || is_set(tracked_objects_state_down.operation)) leaf_name_data.push_back(tracked_objects_state_down.get_name_leafdata());
    if (tracked_objects_state_up.is_set || is_set(tracked_objects_state_up.operation)) leaf_name_data.push_back(tracked_objects_state_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Summary::get_children()
{
    return children;
}

void Vrrp::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-session-inactive")
    {
        bfd_session_inactive = value;
    }
    if(value_path == "bfd-sessions-down")
    {
        bfd_sessions_down = value;
    }
    if(value_path == "bfd-sessions-up")
    {
        bfd_sessions_up = value;
    }
    if(value_path == "interfaces-ipv4-state-down")
    {
        interfaces_ipv4_state_down = value;
    }
    if(value_path == "interfaces-ipv4-state-up")
    {
        interfaces_ipv4_state_up = value;
    }
    if(value_path == "interfaces-ipv6-state-down")
    {
        interfaces_ipv6_state_down = value;
    }
    if(value_path == "interfaces-ipv6-state-up")
    {
        interfaces_ipv6_state_up = value;
    }
    if(value_path == "ipv4-sessions-backup")
    {
        ipv4_sessions_backup = value;
    }
    if(value_path == "ipv4-sessions-init")
    {
        ipv4_sessions_init = value;
    }
    if(value_path == "ipv4-sessions-master")
    {
        ipv4_sessions_master = value;
    }
    if(value_path == "ipv4-sessions-master-owner")
    {
        ipv4_sessions_master_owner = value;
    }
    if(value_path == "ipv4-slaves-backup")
    {
        ipv4_slaves_backup = value;
    }
    if(value_path == "ipv4-slaves-init")
    {
        ipv4_slaves_init = value;
    }
    if(value_path == "ipv4-slaves-master")
    {
        ipv4_slaves_master = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-backup-down")
    {
        ipv4_virtual_ip_addresses_backup_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-backup-up")
    {
        ipv4_virtual_ip_addresses_backup_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-down")
    {
        ipv4_virtual_ip_addresses_init_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-up")
    {
        ipv4_virtual_ip_addresses_init_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-down")
    {
        ipv4_virtual_ip_addresses_master_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-owner-down")
    {
        ipv4_virtual_ip_addresses_master_owner_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-owner-up")
    {
        ipv4_virtual_ip_addresses_master_owner_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-up")
    {
        ipv4_virtual_ip_addresses_master_up = value;
    }
    if(value_path == "ipv6-sessions-backup")
    {
        ipv6_sessions_backup = value;
    }
    if(value_path == "ipv6-sessions-init")
    {
        ipv6_sessions_init = value;
    }
    if(value_path == "ipv6-sessions-master")
    {
        ipv6_sessions_master = value;
    }
    if(value_path == "ipv6-sessions-master-owner")
    {
        ipv6_sessions_master_owner = value;
    }
    if(value_path == "ipv6-slaves-backup")
    {
        ipv6_slaves_backup = value;
    }
    if(value_path == "ipv6-slaves-init")
    {
        ipv6_slaves_init = value;
    }
    if(value_path == "ipv6-slaves-master")
    {
        ipv6_slaves_master = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-backup-down")
    {
        ipv6_virtual_ip_addresses_backup_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-backup-up")
    {
        ipv6_virtual_ip_addresses_backup_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-down")
    {
        ipv6_virtual_ip_addresses_init_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-up")
    {
        ipv6_virtual_ip_addresses_init_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-down")
    {
        ipv6_virtual_ip_addresses_master_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-owner-down")
    {
        ipv6_virtual_ip_addresses_master_owner_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-owner-up")
    {
        ipv6_virtual_ip_addresses_master_owner_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-up")
    {
        ipv6_virtual_ip_addresses_master_up = value;
    }
    if(value_path == "ipv6bfd-session-inactive")
    {
        ipv6bfd_session_inactive = value;
    }
    if(value_path == "ipv6bfd-sessions-down")
    {
        ipv6bfd_sessions_down = value;
    }
    if(value_path == "ipv6bfd-sessions-up")
    {
        ipv6bfd_sessions_up = value;
    }
    if(value_path == "tracked-interfaces-ipv4-state-down")
    {
        tracked_interfaces_ipv4_state_down = value;
    }
    if(value_path == "tracked-interfaces-ipv4-state-up")
    {
        tracked_interfaces_ipv4_state_up = value;
    }
    if(value_path == "tracked-interfaces-ipv6-state-down")
    {
        tracked_interfaces_ipv6_state_down = value;
    }
    if(value_path == "tracked-interfaces-ipv6-state-up")
    {
        tracked_interfaces_ipv6_state_up = value;
    }
    if(value_path == "tracked-objects-state-down")
    {
        tracked_objects_state_down = value;
    }
    if(value_path == "tracked-objects-state-up")
    {
        tracked_objects_state_up = value;
    }
}

Vrrp::Ipv6::TrackItems::TrackItem::TrackItem()
    :
    	interface_name{YType::str, "interface-name"},
	 tracked_interface_name{YType::str, "tracked-interface-name"},
	 virtual_router_id{YType::int32, "virtual-router-id"},
	 interface{YType::str, "interface"},
	 priority{YType::uint8, "priority"},
	 state{YType::uint8, "state"},
	 tracked_item_index{YType::str, "tracked-item-index"},
	 tracked_item_type{YType::uint16, "tracked-item-type"},
	 virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"}
{
    yang_name = "track-item"; yang_parent_name = "track-items";
}

Vrrp::Ipv6::TrackItems::TrackItem::~TrackItem()
{
}

bool Vrrp::Ipv6::TrackItems::TrackItem::has_data() const
{
    return interface_name.is_set
	|| tracked_interface_name.is_set
	|| virtual_router_id.is_set
	|| interface.is_set
	|| priority.is_set
	|| state.is_set
	|| tracked_item_index.is_set
	|| tracked_item_type.is_set
	|| virtual_router_id_xr.is_set;
}

bool Vrrp::Ipv6::TrackItems::TrackItem::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(tracked_interface_name.operation)
	|| is_set(virtual_router_id.operation)
	|| is_set(interface.operation)
	|| is_set(priority.operation)
	|| is_set(state.operation)
	|| is_set(tracked_item_index.operation)
	|| is_set(tracked_item_type.operation)
	|| is_set(virtual_router_id_xr.operation);
}

std::string Vrrp::Ipv6::TrackItems::TrackItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-item" <<"[interface-name='" <<interface_name.get() <<"']" <<"[tracked-interface-name='" <<tracked_interface_name.get() <<"']" <<"[virtual-router-id='" <<virtual_router_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::TrackItems::TrackItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/track-items/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.operation)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tracked_item_index.is_set || is_set(tracked_item_index.operation)) leaf_name_data.push_back(tracked_item_index.get_name_leafdata());
    if (tracked_item_type.is_set || is_set(tracked_item_type.operation)) leaf_name_data.push_back(tracked_item_type.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.operation)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::TrackItems::TrackItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv6::TrackItems::TrackItem::get_children()
{
    return children;
}

void Vrrp::Ipv6::TrackItems::TrackItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tracked-item-index")
    {
        tracked_item_index = value;
    }
    if(value_path == "tracked-item-type")
    {
        tracked_item_type = value;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
    }
}

Vrrp::Ipv6::TrackItems::TrackItems()
{
    yang_name = "track-items"; yang_parent_name = "ipv6";
}

Vrrp::Ipv6::TrackItems::~TrackItems()
{
}

bool Vrrp::Ipv6::TrackItems::has_data() const
{
    for (std::size_t index=0; index<track_item.size(); index++)
    {
        if(track_item[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Ipv6::TrackItems::has_operation() const
{
    for (std::size_t index=0; index<track_item.size(); index++)
    {
        if(track_item[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Ipv6::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::TrackItems::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-item")
    {
        for(auto const & c : track_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv6::TrackItems::TrackItem>();
        c->parent = this;
        track_item.push_back(std::move(c));
        children[segment_path] = track_item.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv6::TrackItems::get_children()
{
    for (auto const & c : track_item)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv6::TrackItems::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::ResignSentTime()
    :
    	nanoseconds{YType::uint32, "nanoseconds"},
	 seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-sent-time"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::~ResignSentTime()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_children()
{
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::ResignReceivedTime()
    :
    	nanoseconds{YType::uint32, "nanoseconds"},
	 seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-received-time"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_children()
{
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::Ipv6OperationalAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "ipv6-operational-address"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::~Ipv6OperationalAddress()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-operational-address";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_children()
{
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::Ipv6ConfiguredDownAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "ipv6-configured-down-address"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::~Ipv6ConfiguredDownAddress()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-configured-down-address";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_children()
{
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::Time()
    :
    	nanoseconds{YType::uint32, "nanoseconds"},
	 seconds{YType::uint32, "seconds"}
{
    yang_name = "time"; yang_parent_name = "state-change-history";
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::~Time()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_children()
{
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::StateChangeHistory()
    :
    	new_state{YType::enumeration, "new-state"},
	 old_state{YType::enumeration, "old-state"},
	 reason{YType::enumeration, "reason"}
    	,
    time(std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time>())
{
    time->parent = this;
    children["time"] = time.get();

    yang_name = "state-change-history"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::~StateChangeHistory()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::has_data() const
{
    return new_state.is_set
	|| old_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(new_state.operation)
	|| is_set(old_state.operation)
	|| is_set(reason.operation)
	|| (time !=  nullptr && is_set(time->operation));
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_state.is_set || is_set(new_state.operation)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (old_state.is_set || is_set(old_state.operation)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "time")
    {
        if(time != nullptr)
        {
            children["time"] = time.get();
        }
        else
        {
            time = std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time>();
            time->parent = this;
            children["time"] = time.get();
        }
        return children.at("time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_children()
{
    if(children.find("time") == children.end())
    {
        if(time != nullptr)
        {
            children["time"] = time.get();
        }
    }

    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "new-state")
    {
        new_state = value;
    }
    if(value_path == "old-state")
    {
        old_state = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    	interface_name{YType::str, "interface-name"},
	 virtual_router_id{YType::int32, "virtual-router-id"},
	 address_family{YType::enumeration, "address-family"},
	 address_list_error_count{YType::uint32, "address-list-error-count"},
	 advert_interval_error_count{YType::uint32, "advert-interval-error-count"},
	 adverts_received_count{YType::uint32, "adverts-received-count"},
	 adverts_sent_count{YType::uint32, "adverts-sent-count"},
	 auth_type_mismatch_count{YType::uint32, "auth-type-mismatch-count"},
	 authentication_fail_count{YType::uint32, "authentication-fail-count"},
	 authentication_flag{YType::boolean, "authentication-flag"},
	 authentication_string{YType::uint8, "authentication-string"},
	 authentication_type{YType::enumeration, "authentication-type"},
	 bfd_cfg_remote_ip{YType::str, "bfd-cfg-remote-ip"},
	 bfd_configured_remote_ipv6_address{YType::str, "bfd-configured-remote-ipv6-address"},
	 bfd_interval{YType::uint32, "bfd-interval"},
	 bfd_multiplier{YType::uint32, "bfd-multiplier"},
	 bfd_session_state{YType::enumeration, "bfd-session-state"},
	 configured_advertize_time{YType::uint32, "configured-advertize-time"},
	 configured_down_address_count{YType::uint8, "configured-down-address-count"},
	 configured_priority{YType::uint8, "configured-priority"},
	 delay_timer_flag{YType::boolean, "delay-timer-flag"},
	 delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
	 delay_timer_secs{YType::uint32, "delay-timer-secs"},
	 followed_session_name{YType::str, "followed-session-name"},
	 force_timer_flag{YType::boolean, "force-timer-flag"},
	 interface_ipv4_address{YType::str, "interface-ipv4-address"},
	 interface_ipv6_address{YType::str, "interface-ipv6-address"},
	 interface_name_xr{YType::str, "interface-name-xr"},
	 invalid_auth_type_count{YType::uint32, "invalid-auth-type-count"},
	 invalid_packet_count{YType::uint32, "invalid-packet-count"},
	 ip_address_owner_flag{YType::boolean, "ip-address-owner-flag"},
	 ipv4_configured_down_address{YType::str, "ipv4-configured-down-address"},
	 is_accept_mode{YType::boolean, "is-accept-mode"},
	 is_slave{YType::boolean, "is-slave"},
	 master_count{YType::uint32, "master-count"},
	 master_ip_address{YType::str, "master-ip-address"},
	 master_ipv6_address{YType::str, "master-ipv6-address"},
	 master_priority{YType::uint8, "master-priority"},
	 min_delay_time{YType::uint32, "min-delay-time"},
	 oper_advertize_time{YType::uint32, "oper-advertize-time"},
	 operational_address{YType::str, "operational-address"},
	 operational_address_count{YType::uint8, "operational-address-count"},
	 operational_priority{YType::uint8, "operational-priority"},
	 pkt_length_errors_count{YType::uint32, "pkt-length-errors-count"},
	 preempt_delay_time{YType::uint16, "preempt-delay-time"},
	 preempt_flag{YType::boolean, "preempt-flag"},
	 primary_state{YType::enumeration, "primary-state"},
	 primary_virtual_ip{YType::str, "primary-virtual-ip"},
	 priority_decrement{YType::uint32, "priority-decrement"},
	 priority_zero_received_count{YType::uint32, "priority-zero-received-count"},
	 priority_zero_sent_count{YType::uint32, "priority-zero-sent-count"},
	 reload_delay_time{YType::uint32, "reload-delay-time"},
	 secondary_address_count{YType::uint8, "secondary-address-count"},
	 session_name{YType::str, "session-name"},
	 slaves{YType::uint32, "slaves"},
	 state_change_count{YType::uint32, "state-change-count"},
	 state_from_checkpoint{YType::boolean, "state-from-checkpoint"},
	 time_in_current_state{YType::uint32, "time-in-current-state"},
	 time_stats_discontinuity{YType::uint32, "time-stats-discontinuity"},
	 time_vrouter_up{YType::uint32, "time-vrouter-up"},
	 tracked_interface_count{YType::uint32, "tracked-interface-count"},
	 tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
	 tracked_item_count{YType::uint32, "tracked-item-count"},
	 tracked_item_up_count{YType::uint32, "tracked-item-up-count"},
	 ttl_error_count{YType::uint32, "ttl-error-count"},
	 version{YType::uint8, "version"},
	 virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
	 virtual_mac_address{YType::str, "virtual-mac-address"},
	 virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"},
	 virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"},
	 vrrp_state{YType::enumeration, "vrrp-state"}
    	,
    resign_received_time(std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime>())
	,resign_sent_time(std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime>())
{
    resign_received_time->parent = this;
    children["resign-received-time"] = resign_received_time.get();

    resign_sent_time->parent = this;
    children["resign-sent-time"] = resign_sent_time.get();

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers";
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::has_data() const
{
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : authentication_string.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operational_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| virtual_router_id.is_set
	|| address_family.is_set
	|| address_list_error_count.is_set
	|| advert_interval_error_count.is_set
	|| adverts_received_count.is_set
	|| adverts_sent_count.is_set
	|| auth_type_mismatch_count.is_set
	|| authentication_fail_count.is_set
	|| authentication_flag.is_set
	|| authentication_type.is_set
	|| bfd_cfg_remote_ip.is_set
	|| bfd_configured_remote_ipv6_address.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| bfd_session_state.is_set
	|| configured_advertize_time.is_set
	|| configured_down_address_count.is_set
	|| configured_priority.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_msecs.is_set
	|| delay_timer_secs.is_set
	|| followed_session_name.is_set
	|| force_timer_flag.is_set
	|| interface_ipv4_address.is_set
	|| interface_ipv6_address.is_set
	|| interface_name_xr.is_set
	|| invalid_auth_type_count.is_set
	|| invalid_packet_count.is_set
	|| ip_address_owner_flag.is_set
	|| is_accept_mode.is_set
	|| is_slave.is_set
	|| master_count.is_set
	|| master_ip_address.is_set
	|| master_ipv6_address.is_set
	|| master_priority.is_set
	|| min_delay_time.is_set
	|| oper_advertize_time.is_set
	|| operational_address_count.is_set
	|| operational_priority.is_set
	|| pkt_length_errors_count.is_set
	|| preempt_delay_time.is_set
	|| preempt_flag.is_set
	|| primary_state.is_set
	|| primary_virtual_ip.is_set
	|| priority_decrement.is_set
	|| priority_zero_received_count.is_set
	|| priority_zero_sent_count.is_set
	|| reload_delay_time.is_set
	|| secondary_address_count.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| state_change_count.is_set
	|| state_from_checkpoint.is_set
	|| time_in_current_state.is_set
	|| time_stats_discontinuity.is_set
	|| time_vrouter_up.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| tracked_item_count.is_set
	|| tracked_item_up_count.is_set
	|| ttl_error_count.is_set
	|| version.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_state.is_set
	|| virtual_router_id_xr.is_set
	|| vrrp_state.is_set
	|| (resign_received_time !=  nullptr && resign_received_time->has_data())
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data());
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::has_operation() const
{
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : authentication_string.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : operational_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(virtual_router_id.operation)
	|| is_set(address_family.operation)
	|| is_set(address_list_error_count.operation)
	|| is_set(advert_interval_error_count.operation)
	|| is_set(adverts_received_count.operation)
	|| is_set(adverts_sent_count.operation)
	|| is_set(auth_type_mismatch_count.operation)
	|| is_set(authentication_fail_count.operation)
	|| is_set(authentication_flag.operation)
	|| is_set(authentication_type.operation)
	|| is_set(bfd_cfg_remote_ip.operation)
	|| is_set(bfd_configured_remote_ipv6_address.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(configured_advertize_time.operation)
	|| is_set(configured_down_address_count.operation)
	|| is_set(configured_priority.operation)
	|| is_set(delay_timer_flag.operation)
	|| is_set(delay_timer_msecs.operation)
	|| is_set(delay_timer_secs.operation)
	|| is_set(followed_session_name.operation)
	|| is_set(force_timer_flag.operation)
	|| is_set(interface_ipv4_address.operation)
	|| is_set(interface_ipv6_address.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(invalid_auth_type_count.operation)
	|| is_set(invalid_packet_count.operation)
	|| is_set(ip_address_owner_flag.operation)
	|| is_set(is_accept_mode.operation)
	|| is_set(is_slave.operation)
	|| is_set(master_count.operation)
	|| is_set(master_ip_address.operation)
	|| is_set(master_ipv6_address.operation)
	|| is_set(master_priority.operation)
	|| is_set(min_delay_time.operation)
	|| is_set(oper_advertize_time.operation)
	|| is_set(operational_address_count.operation)
	|| is_set(operational_priority.operation)
	|| is_set(pkt_length_errors_count.operation)
	|| is_set(preempt_delay_time.operation)
	|| is_set(preempt_flag.operation)
	|| is_set(primary_state.operation)
	|| is_set(primary_virtual_ip.operation)
	|| is_set(priority_decrement.operation)
	|| is_set(priority_zero_received_count.operation)
	|| is_set(priority_zero_sent_count.operation)
	|| is_set(reload_delay_time.operation)
	|| is_set(secondary_address_count.operation)
	|| is_set(session_name.operation)
	|| is_set(slaves.operation)
	|| is_set(state_change_count.operation)
	|| is_set(state_from_checkpoint.operation)
	|| is_set(time_in_current_state.operation)
	|| is_set(time_stats_discontinuity.operation)
	|| is_set(time_vrouter_up.operation)
	|| is_set(tracked_interface_count.operation)
	|| is_set(tracked_interface_up_count.operation)
	|| is_set(tracked_item_count.operation)
	|| is_set(tracked_item_up_count.operation)
	|| is_set(ttl_error_count.operation)
	|| is_set(version.operation)
	|| is_set(virtual_linklocal_ipv6_address.operation)
	|| is_set(virtual_mac_address.operation)
	|| is_set(virtual_mac_address_state.operation)
	|| is_set(virtual_router_id_xr.operation)
	|| is_set(vrrp_state.operation)
	|| (resign_received_time !=  nullptr && is_set(resign_received_time->operation))
	|| (resign_sent_time !=  nullptr && is_set(resign_sent_time->operation));
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router" <<"[interface-name='" <<interface_name.get() <<"']" <<"[virtual-router-id='" <<virtual_router_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/virtual-routers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (address_list_error_count.is_set || is_set(address_list_error_count.operation)) leaf_name_data.push_back(address_list_error_count.get_name_leafdata());
    if (advert_interval_error_count.is_set || is_set(advert_interval_error_count.operation)) leaf_name_data.push_back(advert_interval_error_count.get_name_leafdata());
    if (adverts_received_count.is_set || is_set(adverts_received_count.operation)) leaf_name_data.push_back(adverts_received_count.get_name_leafdata());
    if (adverts_sent_count.is_set || is_set(adverts_sent_count.operation)) leaf_name_data.push_back(adverts_sent_count.get_name_leafdata());
    if (auth_type_mismatch_count.is_set || is_set(auth_type_mismatch_count.operation)) leaf_name_data.push_back(auth_type_mismatch_count.get_name_leafdata());
    if (authentication_fail_count.is_set || is_set(authentication_fail_count.operation)) leaf_name_data.push_back(authentication_fail_count.get_name_leafdata());
    if (authentication_flag.is_set || is_set(authentication_flag.operation)) leaf_name_data.push_back(authentication_flag.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (bfd_cfg_remote_ip.is_set || is_set(bfd_cfg_remote_ip.operation)) leaf_name_data.push_back(bfd_cfg_remote_ip.get_name_leafdata());
    if (bfd_configured_remote_ipv6_address.is_set || is_set(bfd_configured_remote_ipv6_address.operation)) leaf_name_data.push_back(bfd_configured_remote_ipv6_address.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (configured_advertize_time.is_set || is_set(configured_advertize_time.operation)) leaf_name_data.push_back(configured_advertize_time.get_name_leafdata());
    if (configured_down_address_count.is_set || is_set(configured_down_address_count.operation)) leaf_name_data.push_back(configured_down_address_count.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.operation)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.operation)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.operation)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.operation)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (force_timer_flag.is_set || is_set(force_timer_flag.operation)) leaf_name_data.push_back(force_timer_flag.get_name_leafdata());
    if (interface_ipv4_address.is_set || is_set(interface_ipv4_address.operation)) leaf_name_data.push_back(interface_ipv4_address.get_name_leafdata());
    if (interface_ipv6_address.is_set || is_set(interface_ipv6_address.operation)) leaf_name_data.push_back(interface_ipv6_address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (invalid_auth_type_count.is_set || is_set(invalid_auth_type_count.operation)) leaf_name_data.push_back(invalid_auth_type_count.get_name_leafdata());
    if (invalid_packet_count.is_set || is_set(invalid_packet_count.operation)) leaf_name_data.push_back(invalid_packet_count.get_name_leafdata());
    if (ip_address_owner_flag.is_set || is_set(ip_address_owner_flag.operation)) leaf_name_data.push_back(ip_address_owner_flag.get_name_leafdata());
    if (is_accept_mode.is_set || is_set(is_accept_mode.operation)) leaf_name_data.push_back(is_accept_mode.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.operation)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (master_count.is_set || is_set(master_count.operation)) leaf_name_data.push_back(master_count.get_name_leafdata());
    if (master_ip_address.is_set || is_set(master_ip_address.operation)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (master_ipv6_address.is_set || is_set(master_ipv6_address.operation)) leaf_name_data.push_back(master_ipv6_address.get_name_leafdata());
    if (master_priority.is_set || is_set(master_priority.operation)) leaf_name_data.push_back(master_priority.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.operation)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (oper_advertize_time.is_set || is_set(oper_advertize_time.operation)) leaf_name_data.push_back(oper_advertize_time.get_name_leafdata());
    if (operational_address_count.is_set || is_set(operational_address_count.operation)) leaf_name_data.push_back(operational_address_count.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.operation)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (pkt_length_errors_count.is_set || is_set(pkt_length_errors_count.operation)) leaf_name_data.push_back(pkt_length_errors_count.get_name_leafdata());
    if (preempt_delay_time.is_set || is_set(preempt_delay_time.operation)) leaf_name_data.push_back(preempt_delay_time.get_name_leafdata());
    if (preempt_flag.is_set || is_set(preempt_flag.operation)) leaf_name_data.push_back(preempt_flag.get_name_leafdata());
    if (primary_state.is_set || is_set(primary_state.operation)) leaf_name_data.push_back(primary_state.get_name_leafdata());
    if (primary_virtual_ip.is_set || is_set(primary_virtual_ip.operation)) leaf_name_data.push_back(primary_virtual_ip.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (priority_zero_received_count.is_set || is_set(priority_zero_received_count.operation)) leaf_name_data.push_back(priority_zero_received_count.get_name_leafdata());
    if (priority_zero_sent_count.is_set || is_set(priority_zero_sent_count.operation)) leaf_name_data.push_back(priority_zero_sent_count.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.operation)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (secondary_address_count.is_set || is_set(secondary_address_count.operation)) leaf_name_data.push_back(secondary_address_count.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.operation)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.operation)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (state_from_checkpoint.is_set || is_set(state_from_checkpoint.operation)) leaf_name_data.push_back(state_from_checkpoint.get_name_leafdata());
    if (time_in_current_state.is_set || is_set(time_in_current_state.operation)) leaf_name_data.push_back(time_in_current_state.get_name_leafdata());
    if (time_stats_discontinuity.is_set || is_set(time_stats_discontinuity.operation)) leaf_name_data.push_back(time_stats_discontinuity.get_name_leafdata());
    if (time_vrouter_up.is_set || is_set(time_vrouter_up.operation)) leaf_name_data.push_back(time_vrouter_up.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.operation)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.operation)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (tracked_item_count.is_set || is_set(tracked_item_count.operation)) leaf_name_data.push_back(tracked_item_count.get_name_leafdata());
    if (tracked_item_up_count.is_set || is_set(tracked_item_up_count.operation)) leaf_name_data.push_back(tracked_item_up_count.get_name_leafdata());
    if (ttl_error_count.is_set || is_set(ttl_error_count.operation)) leaf_name_data.push_back(ttl_error_count.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.operation)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.operation)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.operation)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());
    if (vrrp_state.is_set || is_set(vrrp_state.operation)) leaf_name_data.push_back(vrrp_state.get_name_leafdata());

    auto authentication_string_name_datas = authentication_string.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), authentication_string_name_datas.begin(), authentication_string_name_datas.end());
    auto ipv4_configured_down_address_name_datas = ipv4_configured_down_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_configured_down_address_name_datas.begin(), ipv4_configured_down_address_name_datas.end());
    auto operational_address_name_datas = operational_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operational_address_name_datas.begin(), operational_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-configured-down-address")
    {
        for(auto const & c : ipv6_configured_down_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress>();
        c->parent = this;
        ipv6_configured_down_address.push_back(std::move(c));
        children[segment_path] = ipv6_configured_down_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-operational-address")
    {
        for(auto const & c : ipv6_operational_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress>();
        c->parent = this;
        ipv6_operational_address.push_back(std::move(c));
        children[segment_path] = ipv6_operational_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time.get();
        }
        else
        {
            resign_received_time = std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime>();
            resign_received_time->parent = this;
            children["resign-received-time"] = resign_received_time.get();
        }
        return children.at("resign-received-time");
    }

    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time.get();
        }
        else
        {
            resign_sent_time = std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime>();
            resign_sent_time->parent = this;
            children["resign-sent-time"] = resign_sent_time.get();
        }
        return children.at("resign-sent-time");
    }

    if(child_yang_name == "state-change-history")
    {
        for(auto const & c : state_change_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory>();
        c->parent = this;
        state_change_history.push_back(std::move(c));
        children[segment_path] = state_change_history.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_children()
{
    for (auto const & c : ipv6_configured_down_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : ipv6_operational_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("resign-received-time") == children.end())
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time.get();
        }
    }

    if(children.find("resign-sent-time") == children.end())
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time.get();
        }
    }

    for (auto const & c : state_change_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "address-list-error-count")
    {
        address_list_error_count = value;
    }
    if(value_path == "advert-interval-error-count")
    {
        advert_interval_error_count = value;
    }
    if(value_path == "adverts-received-count")
    {
        adverts_received_count = value;
    }
    if(value_path == "adverts-sent-count")
    {
        adverts_sent_count = value;
    }
    if(value_path == "auth-type-mismatch-count")
    {
        auth_type_mismatch_count = value;
    }
    if(value_path == "authentication-fail-count")
    {
        authentication_fail_count = value;
    }
    if(value_path == "authentication-flag")
    {
        authentication_flag = value;
    }
    if(value_path == "authentication-string")
    {
        authentication_string.append(value);
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
    if(value_path == "bfd-cfg-remote-ip")
    {
        bfd_cfg_remote_ip = value;
    }
    if(value_path == "bfd-configured-remote-ipv6-address")
    {
        bfd_configured_remote_ipv6_address = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "configured-advertize-time")
    {
        configured_advertize_time = value;
    }
    if(value_path == "configured-down-address-count")
    {
        configured_down_address_count = value;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
    }
    if(value_path == "force-timer-flag")
    {
        force_timer_flag = value;
    }
    if(value_path == "interface-ipv4-address")
    {
        interface_ipv4_address = value;
    }
    if(value_path == "interface-ipv6-address")
    {
        interface_ipv6_address = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "invalid-auth-type-count")
    {
        invalid_auth_type_count = value;
    }
    if(value_path == "invalid-packet-count")
    {
        invalid_packet_count = value;
    }
    if(value_path == "ip-address-owner-flag")
    {
        ip_address_owner_flag = value;
    }
    if(value_path == "ipv4-configured-down-address")
    {
        ipv4_configured_down_address.append(value);
    }
    if(value_path == "is-accept-mode")
    {
        is_accept_mode = value;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
    }
    if(value_path == "master-count")
    {
        master_count = value;
    }
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
    }
    if(value_path == "master-ipv6-address")
    {
        master_ipv6_address = value;
    }
    if(value_path == "master-priority")
    {
        master_priority = value;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
    }
    if(value_path == "oper-advertize-time")
    {
        oper_advertize_time = value;
    }
    if(value_path == "operational-address")
    {
        operational_address.append(value);
    }
    if(value_path == "operational-address-count")
    {
        operational_address_count = value;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
    }
    if(value_path == "pkt-length-errors-count")
    {
        pkt_length_errors_count = value;
    }
    if(value_path == "preempt-delay-time")
    {
        preempt_delay_time = value;
    }
    if(value_path == "preempt-flag")
    {
        preempt_flag = value;
    }
    if(value_path == "primary-state")
    {
        primary_state = value;
    }
    if(value_path == "primary-virtual-ip")
    {
        primary_virtual_ip = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "priority-zero-received-count")
    {
        priority_zero_received_count = value;
    }
    if(value_path == "priority-zero-sent-count")
    {
        priority_zero_sent_count = value;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
    }
    if(value_path == "secondary-address-count")
    {
        secondary_address_count = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "slaves")
    {
        slaves = value;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
    }
    if(value_path == "state-from-checkpoint")
    {
        state_from_checkpoint = value;
    }
    if(value_path == "time-in-current-state")
    {
        time_in_current_state = value;
    }
    if(value_path == "time-stats-discontinuity")
    {
        time_stats_discontinuity = value;
    }
    if(value_path == "time-vrouter-up")
    {
        time_vrouter_up = value;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
    }
    if(value_path == "tracked-item-count")
    {
        tracked_item_count = value;
    }
    if(value_path == "tracked-item-up-count")
    {
        tracked_item_up_count = value;
    }
    if(value_path == "ttl-error-count")
    {
        ttl_error_count = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state = value;
    }
}

Vrrp::Ipv6::VirtualRouters::VirtualRouters()
{
    yang_name = "virtual-routers"; yang_parent_name = "ipv6";
}

Vrrp::Ipv6::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Ipv6::VirtualRouters::has_data() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Ipv6::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Ipv6::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::VirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv6::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(std::move(c));
        children[segment_path] = virtual_router.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv6::VirtualRouters::get_children()
{
    for (auto const & c : virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv6::VirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Ipv6::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 interface{YType::str, "interface"},
	 invalid_checksum_count{YType::uint32, "invalid-checksum-count"},
	 invalid_packet_length_count{YType::uint32, "invalid-packet-length-count"},
	 invalid_version_count{YType::uint32, "invalid-version-count"},
	 invalid_vrid_count{YType::uint32, "invalid-vrid-count"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Vrrp::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Vrrp::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface.is_set
	|| invalid_checksum_count.is_set
	|| invalid_packet_length_count.is_set
	|| invalid_version_count.is_set
	|| invalid_vrid_count.is_set;
}

bool Vrrp::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(invalid_checksum_count.operation)
	|| is_set(invalid_packet_length_count.operation)
	|| is_set(invalid_version_count.operation)
	|| is_set(invalid_vrid_count.operation);
}

std::string Vrrp::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_checksum_count.is_set || is_set(invalid_checksum_count.operation)) leaf_name_data.push_back(invalid_checksum_count.get_name_leafdata());
    if (invalid_packet_length_count.is_set || is_set(invalid_packet_length_count.operation)) leaf_name_data.push_back(invalid_packet_length_count.get_name_leafdata());
    if (invalid_version_count.is_set || is_set(invalid_version_count.operation)) leaf_name_data.push_back(invalid_version_count.get_name_leafdata());
    if (invalid_vrid_count.is_set || is_set(invalid_vrid_count.operation)) leaf_name_data.push_back(invalid_vrid_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv6::Interfaces::Interface::get_children()
{
    return children;
}

void Vrrp::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "invalid-checksum-count")
    {
        invalid_checksum_count = value;
    }
    if(value_path == "invalid-packet-length-count")
    {
        invalid_packet_length_count = value;
    }
    if(value_path == "invalid-version-count")
    {
        invalid_version_count = value;
    }
    if(value_path == "invalid-vrid-count")
    {
        invalid_vrid_count = value;
    }
}

Vrrp::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
}

Vrrp::Ipv6::Interfaces::~Interfaces()
{
}

bool Vrrp::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv6::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv6::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Ipv6::Ipv6()
    :
    interfaces(std::make_unique<Vrrp::Ipv6::Interfaces>())
	,track_items(std::make_unique<Vrrp::Ipv6::TrackItems>())
	,virtual_routers(std::make_unique<Vrrp::Ipv6::VirtualRouters>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    track_items->parent = this;
    children["track-items"] = track_items.get();

    virtual_routers->parent = this;
    children["virtual-routers"] = virtual_routers.get();

    yang_name = "ipv6"; yang_parent_name = "vrrp";
}

Vrrp::Ipv6::~Ipv6()
{
}

bool Vrrp::Ipv6::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (track_items !=  nullptr && track_items->has_data())
	|| (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (track_items !=  nullptr && is_set(track_items->operation))
	|| (virtual_routers !=  nullptr && is_set(virtual_routers->operation));
}

std::string Vrrp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Vrrp::Ipv6::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "track-items")
    {
        if(track_items != nullptr)
        {
            children["track-items"] = track_items.get();
        }
        else
        {
            track_items = std::make_unique<Vrrp::Ipv6::TrackItems>();
            track_items->parent = this;
            children["track-items"] = track_items.get();
        }
        return children.at("track-items");
    }

    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers.get();
        }
        else
        {
            virtual_routers = std::make_unique<Vrrp::Ipv6::VirtualRouters>();
            virtual_routers->parent = this;
            children["virtual-routers"] = virtual_routers.get();
        }
        return children.at("virtual-routers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv6::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("track-items") == children.end())
    {
        if(track_items != nullptr)
        {
            children["track-items"] = track_items.get();
        }
    }

    if(children.find("virtual-routers") == children.end())
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers.get();
        }
    }

    return children;
}

void Vrrp::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Ipv4::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 interface{YType::str, "interface"},
	 invalid_checksum_count{YType::uint32, "invalid-checksum-count"},
	 invalid_packet_length_count{YType::uint32, "invalid-packet-length-count"},
	 invalid_version_count{YType::uint32, "invalid-version-count"},
	 invalid_vrid_count{YType::uint32, "invalid-vrid-count"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Vrrp::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Vrrp::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface.is_set
	|| invalid_checksum_count.is_set
	|| invalid_packet_length_count.is_set
	|| invalid_version_count.is_set
	|| invalid_vrid_count.is_set;
}

bool Vrrp::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(invalid_checksum_count.operation)
	|| is_set(invalid_packet_length_count.operation)
	|| is_set(invalid_version_count.operation)
	|| is_set(invalid_vrid_count.operation);
}

std::string Vrrp::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_checksum_count.is_set || is_set(invalid_checksum_count.operation)) leaf_name_data.push_back(invalid_checksum_count.get_name_leafdata());
    if (invalid_packet_length_count.is_set || is_set(invalid_packet_length_count.operation)) leaf_name_data.push_back(invalid_packet_length_count.get_name_leafdata());
    if (invalid_version_count.is_set || is_set(invalid_version_count.operation)) leaf_name_data.push_back(invalid_version_count.get_name_leafdata());
    if (invalid_vrid_count.is_set || is_set(invalid_vrid_count.operation)) leaf_name_data.push_back(invalid_vrid_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv4::Interfaces::Interface::get_children()
{
    return children;
}

void Vrrp::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "invalid-checksum-count")
    {
        invalid_checksum_count = value;
    }
    if(value_path == "invalid-packet-length-count")
    {
        invalid_packet_length_count = value;
    }
    if(value_path == "invalid-version-count")
    {
        invalid_version_count = value;
    }
    if(value_path == "invalid-vrid-count")
    {
        invalid_vrid_count = value;
    }
}

Vrrp::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
}

Vrrp::Ipv4::Interfaces::~Interfaces()
{
}

bool Vrrp::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv4::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv4::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Ipv4::TrackItems::TrackItem::TrackItem()
    :
    	interface_name{YType::str, "interface-name"},
	 tracked_interface_name{YType::str, "tracked-interface-name"},
	 virtual_router_id{YType::int32, "virtual-router-id"},
	 interface{YType::str, "interface"},
	 priority{YType::uint8, "priority"},
	 state{YType::uint8, "state"},
	 tracked_item_index{YType::str, "tracked-item-index"},
	 tracked_item_type{YType::uint16, "tracked-item-type"},
	 virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"}
{
    yang_name = "track-item"; yang_parent_name = "track-items";
}

Vrrp::Ipv4::TrackItems::TrackItem::~TrackItem()
{
}

bool Vrrp::Ipv4::TrackItems::TrackItem::has_data() const
{
    return interface_name.is_set
	|| tracked_interface_name.is_set
	|| virtual_router_id.is_set
	|| interface.is_set
	|| priority.is_set
	|| state.is_set
	|| tracked_item_index.is_set
	|| tracked_item_type.is_set
	|| virtual_router_id_xr.is_set;
}

bool Vrrp::Ipv4::TrackItems::TrackItem::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(tracked_interface_name.operation)
	|| is_set(virtual_router_id.operation)
	|| is_set(interface.operation)
	|| is_set(priority.operation)
	|| is_set(state.operation)
	|| is_set(tracked_item_index.operation)
	|| is_set(tracked_item_type.operation)
	|| is_set(virtual_router_id_xr.operation);
}

std::string Vrrp::Ipv4::TrackItems::TrackItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-item" <<"[interface-name='" <<interface_name.get() <<"']" <<"[tracked-interface-name='" <<tracked_interface_name.get() <<"']" <<"[virtual-router-id='" <<virtual_router_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::TrackItems::TrackItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/track-items/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.operation)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tracked_item_index.is_set || is_set(tracked_item_index.operation)) leaf_name_data.push_back(tracked_item_index.get_name_leafdata());
    if (tracked_item_type.is_set || is_set(tracked_item_type.operation)) leaf_name_data.push_back(tracked_item_type.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.operation)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::TrackItems::TrackItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv4::TrackItems::TrackItem::get_children()
{
    return children;
}

void Vrrp::Ipv4::TrackItems::TrackItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tracked-item-index")
    {
        tracked_item_index = value;
    }
    if(value_path == "tracked-item-type")
    {
        tracked_item_type = value;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
    }
}

Vrrp::Ipv4::TrackItems::TrackItems()
{
    yang_name = "track-items"; yang_parent_name = "ipv4";
}

Vrrp::Ipv4::TrackItems::~TrackItems()
{
}

bool Vrrp::Ipv4::TrackItems::has_data() const
{
    for (std::size_t index=0; index<track_item.size(); index++)
    {
        if(track_item[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Ipv4::TrackItems::has_operation() const
{
    for (std::size_t index=0; index<track_item.size(); index++)
    {
        if(track_item[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Ipv4::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::TrackItems::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-item")
    {
        for(auto const & c : track_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv4::TrackItems::TrackItem>();
        c->parent = this;
        track_item.push_back(std::move(c));
        children[segment_path] = track_item.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv4::TrackItems::get_children()
{
    for (auto const & c : track_item)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv4::TrackItems::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::ResignSentTime()
    :
    	nanoseconds{YType::uint32, "nanoseconds"},
	 seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-sent-time"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::~ResignSentTime()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_children()
{
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::ResignReceivedTime()
    :
    	nanoseconds{YType::uint32, "nanoseconds"},
	 seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-received-time"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_children()
{
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::Ipv6OperationalAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "ipv6-operational-address"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::~Ipv6OperationalAddress()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-operational-address";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_children()
{
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::Ipv6ConfiguredDownAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "ipv6-configured-down-address"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::~Ipv6ConfiguredDownAddress()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-configured-down-address";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_children()
{
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::Time()
    :
    	nanoseconds{YType::uint32, "nanoseconds"},
	 seconds{YType::uint32, "seconds"}
{
    yang_name = "time"; yang_parent_name = "state-change-history";
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::~Time()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_children()
{
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::StateChangeHistory()
    :
    	new_state{YType::enumeration, "new-state"},
	 old_state{YType::enumeration, "old-state"},
	 reason{YType::enumeration, "reason"}
    	,
    time(std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time>())
{
    time->parent = this;
    children["time"] = time.get();

    yang_name = "state-change-history"; yang_parent_name = "virtual-router";
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::~StateChangeHistory()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::has_data() const
{
    return new_state.is_set
	|| old_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(new_state.operation)
	|| is_set(old_state.operation)
	|| is_set(reason.operation)
	|| (time !=  nullptr && is_set(time->operation));
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_state.is_set || is_set(new_state.operation)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (old_state.is_set || is_set(old_state.operation)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "time")
    {
        if(time != nullptr)
        {
            children["time"] = time.get();
        }
        else
        {
            time = std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time>();
            time->parent = this;
            children["time"] = time.get();
        }
        return children.at("time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_children()
{
    if(children.find("time") == children.end())
    {
        if(time != nullptr)
        {
            children["time"] = time.get();
        }
    }

    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "new-state")
    {
        new_state = value;
    }
    if(value_path == "old-state")
    {
        old_state = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    	interface_name{YType::str, "interface-name"},
	 virtual_router_id{YType::int32, "virtual-router-id"},
	 address_family{YType::enumeration, "address-family"},
	 address_list_error_count{YType::uint32, "address-list-error-count"},
	 advert_interval_error_count{YType::uint32, "advert-interval-error-count"},
	 adverts_received_count{YType::uint32, "adverts-received-count"},
	 adverts_sent_count{YType::uint32, "adverts-sent-count"},
	 auth_type_mismatch_count{YType::uint32, "auth-type-mismatch-count"},
	 authentication_fail_count{YType::uint32, "authentication-fail-count"},
	 authentication_flag{YType::boolean, "authentication-flag"},
	 authentication_string{YType::uint8, "authentication-string"},
	 authentication_type{YType::enumeration, "authentication-type"},
	 bfd_cfg_remote_ip{YType::str, "bfd-cfg-remote-ip"},
	 bfd_configured_remote_ipv6_address{YType::str, "bfd-configured-remote-ipv6-address"},
	 bfd_interval{YType::uint32, "bfd-interval"},
	 bfd_multiplier{YType::uint32, "bfd-multiplier"},
	 bfd_session_state{YType::enumeration, "bfd-session-state"},
	 configured_advertize_time{YType::uint32, "configured-advertize-time"},
	 configured_down_address_count{YType::uint8, "configured-down-address-count"},
	 configured_priority{YType::uint8, "configured-priority"},
	 delay_timer_flag{YType::boolean, "delay-timer-flag"},
	 delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
	 delay_timer_secs{YType::uint32, "delay-timer-secs"},
	 followed_session_name{YType::str, "followed-session-name"},
	 force_timer_flag{YType::boolean, "force-timer-flag"},
	 interface_ipv4_address{YType::str, "interface-ipv4-address"},
	 interface_ipv6_address{YType::str, "interface-ipv6-address"},
	 interface_name_xr{YType::str, "interface-name-xr"},
	 invalid_auth_type_count{YType::uint32, "invalid-auth-type-count"},
	 invalid_packet_count{YType::uint32, "invalid-packet-count"},
	 ip_address_owner_flag{YType::boolean, "ip-address-owner-flag"},
	 ipv4_configured_down_address{YType::str, "ipv4-configured-down-address"},
	 is_accept_mode{YType::boolean, "is-accept-mode"},
	 is_slave{YType::boolean, "is-slave"},
	 master_count{YType::uint32, "master-count"},
	 master_ip_address{YType::str, "master-ip-address"},
	 master_ipv6_address{YType::str, "master-ipv6-address"},
	 master_priority{YType::uint8, "master-priority"},
	 min_delay_time{YType::uint32, "min-delay-time"},
	 oper_advertize_time{YType::uint32, "oper-advertize-time"},
	 operational_address{YType::str, "operational-address"},
	 operational_address_count{YType::uint8, "operational-address-count"},
	 operational_priority{YType::uint8, "operational-priority"},
	 pkt_length_errors_count{YType::uint32, "pkt-length-errors-count"},
	 preempt_delay_time{YType::uint16, "preempt-delay-time"},
	 preempt_flag{YType::boolean, "preempt-flag"},
	 primary_state{YType::enumeration, "primary-state"},
	 primary_virtual_ip{YType::str, "primary-virtual-ip"},
	 priority_decrement{YType::uint32, "priority-decrement"},
	 priority_zero_received_count{YType::uint32, "priority-zero-received-count"},
	 priority_zero_sent_count{YType::uint32, "priority-zero-sent-count"},
	 reload_delay_time{YType::uint32, "reload-delay-time"},
	 secondary_address_count{YType::uint8, "secondary-address-count"},
	 session_name{YType::str, "session-name"},
	 slaves{YType::uint32, "slaves"},
	 state_change_count{YType::uint32, "state-change-count"},
	 state_from_checkpoint{YType::boolean, "state-from-checkpoint"},
	 time_in_current_state{YType::uint32, "time-in-current-state"},
	 time_stats_discontinuity{YType::uint32, "time-stats-discontinuity"},
	 time_vrouter_up{YType::uint32, "time-vrouter-up"},
	 tracked_interface_count{YType::uint32, "tracked-interface-count"},
	 tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
	 tracked_item_count{YType::uint32, "tracked-item-count"},
	 tracked_item_up_count{YType::uint32, "tracked-item-up-count"},
	 ttl_error_count{YType::uint32, "ttl-error-count"},
	 version{YType::uint8, "version"},
	 virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
	 virtual_mac_address{YType::str, "virtual-mac-address"},
	 virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"},
	 virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"},
	 vrrp_state{YType::enumeration, "vrrp-state"}
    	,
    resign_received_time(std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime>())
	,resign_sent_time(std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime>())
{
    resign_received_time->parent = this;
    children["resign-received-time"] = resign_received_time.get();

    resign_sent_time->parent = this;
    children["resign-sent-time"] = resign_sent_time.get();

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers";
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::has_data() const
{
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : authentication_string.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operational_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| virtual_router_id.is_set
	|| address_family.is_set
	|| address_list_error_count.is_set
	|| advert_interval_error_count.is_set
	|| adverts_received_count.is_set
	|| adverts_sent_count.is_set
	|| auth_type_mismatch_count.is_set
	|| authentication_fail_count.is_set
	|| authentication_flag.is_set
	|| authentication_type.is_set
	|| bfd_cfg_remote_ip.is_set
	|| bfd_configured_remote_ipv6_address.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| bfd_session_state.is_set
	|| configured_advertize_time.is_set
	|| configured_down_address_count.is_set
	|| configured_priority.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_msecs.is_set
	|| delay_timer_secs.is_set
	|| followed_session_name.is_set
	|| force_timer_flag.is_set
	|| interface_ipv4_address.is_set
	|| interface_ipv6_address.is_set
	|| interface_name_xr.is_set
	|| invalid_auth_type_count.is_set
	|| invalid_packet_count.is_set
	|| ip_address_owner_flag.is_set
	|| is_accept_mode.is_set
	|| is_slave.is_set
	|| master_count.is_set
	|| master_ip_address.is_set
	|| master_ipv6_address.is_set
	|| master_priority.is_set
	|| min_delay_time.is_set
	|| oper_advertize_time.is_set
	|| operational_address_count.is_set
	|| operational_priority.is_set
	|| pkt_length_errors_count.is_set
	|| preempt_delay_time.is_set
	|| preempt_flag.is_set
	|| primary_state.is_set
	|| primary_virtual_ip.is_set
	|| priority_decrement.is_set
	|| priority_zero_received_count.is_set
	|| priority_zero_sent_count.is_set
	|| reload_delay_time.is_set
	|| secondary_address_count.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| state_change_count.is_set
	|| state_from_checkpoint.is_set
	|| time_in_current_state.is_set
	|| time_stats_discontinuity.is_set
	|| time_vrouter_up.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| tracked_item_count.is_set
	|| tracked_item_up_count.is_set
	|| ttl_error_count.is_set
	|| version.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_state.is_set
	|| virtual_router_id_xr.is_set
	|| vrrp_state.is_set
	|| (resign_received_time !=  nullptr && resign_received_time->has_data())
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data());
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::has_operation() const
{
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : authentication_string.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : operational_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(virtual_router_id.operation)
	|| is_set(address_family.operation)
	|| is_set(address_list_error_count.operation)
	|| is_set(advert_interval_error_count.operation)
	|| is_set(adverts_received_count.operation)
	|| is_set(adverts_sent_count.operation)
	|| is_set(auth_type_mismatch_count.operation)
	|| is_set(authentication_fail_count.operation)
	|| is_set(authentication_flag.operation)
	|| is_set(authentication_type.operation)
	|| is_set(bfd_cfg_remote_ip.operation)
	|| is_set(bfd_configured_remote_ipv6_address.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(configured_advertize_time.operation)
	|| is_set(configured_down_address_count.operation)
	|| is_set(configured_priority.operation)
	|| is_set(delay_timer_flag.operation)
	|| is_set(delay_timer_msecs.operation)
	|| is_set(delay_timer_secs.operation)
	|| is_set(followed_session_name.operation)
	|| is_set(force_timer_flag.operation)
	|| is_set(interface_ipv4_address.operation)
	|| is_set(interface_ipv6_address.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(invalid_auth_type_count.operation)
	|| is_set(invalid_packet_count.operation)
	|| is_set(ip_address_owner_flag.operation)
	|| is_set(is_accept_mode.operation)
	|| is_set(is_slave.operation)
	|| is_set(master_count.operation)
	|| is_set(master_ip_address.operation)
	|| is_set(master_ipv6_address.operation)
	|| is_set(master_priority.operation)
	|| is_set(min_delay_time.operation)
	|| is_set(oper_advertize_time.operation)
	|| is_set(operational_address_count.operation)
	|| is_set(operational_priority.operation)
	|| is_set(pkt_length_errors_count.operation)
	|| is_set(preempt_delay_time.operation)
	|| is_set(preempt_flag.operation)
	|| is_set(primary_state.operation)
	|| is_set(primary_virtual_ip.operation)
	|| is_set(priority_decrement.operation)
	|| is_set(priority_zero_received_count.operation)
	|| is_set(priority_zero_sent_count.operation)
	|| is_set(reload_delay_time.operation)
	|| is_set(secondary_address_count.operation)
	|| is_set(session_name.operation)
	|| is_set(slaves.operation)
	|| is_set(state_change_count.operation)
	|| is_set(state_from_checkpoint.operation)
	|| is_set(time_in_current_state.operation)
	|| is_set(time_stats_discontinuity.operation)
	|| is_set(time_vrouter_up.operation)
	|| is_set(tracked_interface_count.operation)
	|| is_set(tracked_interface_up_count.operation)
	|| is_set(tracked_item_count.operation)
	|| is_set(tracked_item_up_count.operation)
	|| is_set(ttl_error_count.operation)
	|| is_set(version.operation)
	|| is_set(virtual_linklocal_ipv6_address.operation)
	|| is_set(virtual_mac_address.operation)
	|| is_set(virtual_mac_address_state.operation)
	|| is_set(virtual_router_id_xr.operation)
	|| is_set(vrrp_state.operation)
	|| (resign_received_time !=  nullptr && is_set(resign_received_time->operation))
	|| (resign_sent_time !=  nullptr && is_set(resign_sent_time->operation));
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router" <<"[interface-name='" <<interface_name.get() <<"']" <<"[virtual-router-id='" <<virtual_router_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/virtual-routers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (address_list_error_count.is_set || is_set(address_list_error_count.operation)) leaf_name_data.push_back(address_list_error_count.get_name_leafdata());
    if (advert_interval_error_count.is_set || is_set(advert_interval_error_count.operation)) leaf_name_data.push_back(advert_interval_error_count.get_name_leafdata());
    if (adverts_received_count.is_set || is_set(adverts_received_count.operation)) leaf_name_data.push_back(adverts_received_count.get_name_leafdata());
    if (adverts_sent_count.is_set || is_set(adverts_sent_count.operation)) leaf_name_data.push_back(adverts_sent_count.get_name_leafdata());
    if (auth_type_mismatch_count.is_set || is_set(auth_type_mismatch_count.operation)) leaf_name_data.push_back(auth_type_mismatch_count.get_name_leafdata());
    if (authentication_fail_count.is_set || is_set(authentication_fail_count.operation)) leaf_name_data.push_back(authentication_fail_count.get_name_leafdata());
    if (authentication_flag.is_set || is_set(authentication_flag.operation)) leaf_name_data.push_back(authentication_flag.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (bfd_cfg_remote_ip.is_set || is_set(bfd_cfg_remote_ip.operation)) leaf_name_data.push_back(bfd_cfg_remote_ip.get_name_leafdata());
    if (bfd_configured_remote_ipv6_address.is_set || is_set(bfd_configured_remote_ipv6_address.operation)) leaf_name_data.push_back(bfd_configured_remote_ipv6_address.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (configured_advertize_time.is_set || is_set(configured_advertize_time.operation)) leaf_name_data.push_back(configured_advertize_time.get_name_leafdata());
    if (configured_down_address_count.is_set || is_set(configured_down_address_count.operation)) leaf_name_data.push_back(configured_down_address_count.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.operation)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.operation)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.operation)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.operation)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (force_timer_flag.is_set || is_set(force_timer_flag.operation)) leaf_name_data.push_back(force_timer_flag.get_name_leafdata());
    if (interface_ipv4_address.is_set || is_set(interface_ipv4_address.operation)) leaf_name_data.push_back(interface_ipv4_address.get_name_leafdata());
    if (interface_ipv6_address.is_set || is_set(interface_ipv6_address.operation)) leaf_name_data.push_back(interface_ipv6_address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (invalid_auth_type_count.is_set || is_set(invalid_auth_type_count.operation)) leaf_name_data.push_back(invalid_auth_type_count.get_name_leafdata());
    if (invalid_packet_count.is_set || is_set(invalid_packet_count.operation)) leaf_name_data.push_back(invalid_packet_count.get_name_leafdata());
    if (ip_address_owner_flag.is_set || is_set(ip_address_owner_flag.operation)) leaf_name_data.push_back(ip_address_owner_flag.get_name_leafdata());
    if (is_accept_mode.is_set || is_set(is_accept_mode.operation)) leaf_name_data.push_back(is_accept_mode.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.operation)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (master_count.is_set || is_set(master_count.operation)) leaf_name_data.push_back(master_count.get_name_leafdata());
    if (master_ip_address.is_set || is_set(master_ip_address.operation)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (master_ipv6_address.is_set || is_set(master_ipv6_address.operation)) leaf_name_data.push_back(master_ipv6_address.get_name_leafdata());
    if (master_priority.is_set || is_set(master_priority.operation)) leaf_name_data.push_back(master_priority.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.operation)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (oper_advertize_time.is_set || is_set(oper_advertize_time.operation)) leaf_name_data.push_back(oper_advertize_time.get_name_leafdata());
    if (operational_address_count.is_set || is_set(operational_address_count.operation)) leaf_name_data.push_back(operational_address_count.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.operation)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (pkt_length_errors_count.is_set || is_set(pkt_length_errors_count.operation)) leaf_name_data.push_back(pkt_length_errors_count.get_name_leafdata());
    if (preempt_delay_time.is_set || is_set(preempt_delay_time.operation)) leaf_name_data.push_back(preempt_delay_time.get_name_leafdata());
    if (preempt_flag.is_set || is_set(preempt_flag.operation)) leaf_name_data.push_back(preempt_flag.get_name_leafdata());
    if (primary_state.is_set || is_set(primary_state.operation)) leaf_name_data.push_back(primary_state.get_name_leafdata());
    if (primary_virtual_ip.is_set || is_set(primary_virtual_ip.operation)) leaf_name_data.push_back(primary_virtual_ip.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (priority_zero_received_count.is_set || is_set(priority_zero_received_count.operation)) leaf_name_data.push_back(priority_zero_received_count.get_name_leafdata());
    if (priority_zero_sent_count.is_set || is_set(priority_zero_sent_count.operation)) leaf_name_data.push_back(priority_zero_sent_count.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.operation)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (secondary_address_count.is_set || is_set(secondary_address_count.operation)) leaf_name_data.push_back(secondary_address_count.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.operation)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.operation)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (state_from_checkpoint.is_set || is_set(state_from_checkpoint.operation)) leaf_name_data.push_back(state_from_checkpoint.get_name_leafdata());
    if (time_in_current_state.is_set || is_set(time_in_current_state.operation)) leaf_name_data.push_back(time_in_current_state.get_name_leafdata());
    if (time_stats_discontinuity.is_set || is_set(time_stats_discontinuity.operation)) leaf_name_data.push_back(time_stats_discontinuity.get_name_leafdata());
    if (time_vrouter_up.is_set || is_set(time_vrouter_up.operation)) leaf_name_data.push_back(time_vrouter_up.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.operation)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.operation)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (tracked_item_count.is_set || is_set(tracked_item_count.operation)) leaf_name_data.push_back(tracked_item_count.get_name_leafdata());
    if (tracked_item_up_count.is_set || is_set(tracked_item_up_count.operation)) leaf_name_data.push_back(tracked_item_up_count.get_name_leafdata());
    if (ttl_error_count.is_set || is_set(ttl_error_count.operation)) leaf_name_data.push_back(ttl_error_count.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.operation)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.operation)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.operation)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());
    if (vrrp_state.is_set || is_set(vrrp_state.operation)) leaf_name_data.push_back(vrrp_state.get_name_leafdata());

    auto authentication_string_name_datas = authentication_string.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), authentication_string_name_datas.begin(), authentication_string_name_datas.end());
    auto ipv4_configured_down_address_name_datas = ipv4_configured_down_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_configured_down_address_name_datas.begin(), ipv4_configured_down_address_name_datas.end());
    auto operational_address_name_datas = operational_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operational_address_name_datas.begin(), operational_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-configured-down-address")
    {
        for(auto const & c : ipv6_configured_down_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress>();
        c->parent = this;
        ipv6_configured_down_address.push_back(std::move(c));
        children[segment_path] = ipv6_configured_down_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-operational-address")
    {
        for(auto const & c : ipv6_operational_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress>();
        c->parent = this;
        ipv6_operational_address.push_back(std::move(c));
        children[segment_path] = ipv6_operational_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time.get();
        }
        else
        {
            resign_received_time = std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime>();
            resign_received_time->parent = this;
            children["resign-received-time"] = resign_received_time.get();
        }
        return children.at("resign-received-time");
    }

    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time.get();
        }
        else
        {
            resign_sent_time = std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime>();
            resign_sent_time->parent = this;
            children["resign-sent-time"] = resign_sent_time.get();
        }
        return children.at("resign-sent-time");
    }

    if(child_yang_name == "state-change-history")
    {
        for(auto const & c : state_change_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory>();
        c->parent = this;
        state_change_history.push_back(std::move(c));
        children[segment_path] = state_change_history.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_children()
{
    for (auto const & c : ipv6_configured_down_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : ipv6_operational_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("resign-received-time") == children.end())
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time.get();
        }
    }

    if(children.find("resign-sent-time") == children.end())
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time.get();
        }
    }

    for (auto const & c : state_change_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "address-list-error-count")
    {
        address_list_error_count = value;
    }
    if(value_path == "advert-interval-error-count")
    {
        advert_interval_error_count = value;
    }
    if(value_path == "adverts-received-count")
    {
        adverts_received_count = value;
    }
    if(value_path == "adverts-sent-count")
    {
        adverts_sent_count = value;
    }
    if(value_path == "auth-type-mismatch-count")
    {
        auth_type_mismatch_count = value;
    }
    if(value_path == "authentication-fail-count")
    {
        authentication_fail_count = value;
    }
    if(value_path == "authentication-flag")
    {
        authentication_flag = value;
    }
    if(value_path == "authentication-string")
    {
        authentication_string.append(value);
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
    if(value_path == "bfd-cfg-remote-ip")
    {
        bfd_cfg_remote_ip = value;
    }
    if(value_path == "bfd-configured-remote-ipv6-address")
    {
        bfd_configured_remote_ipv6_address = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "configured-advertize-time")
    {
        configured_advertize_time = value;
    }
    if(value_path == "configured-down-address-count")
    {
        configured_down_address_count = value;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
    }
    if(value_path == "force-timer-flag")
    {
        force_timer_flag = value;
    }
    if(value_path == "interface-ipv4-address")
    {
        interface_ipv4_address = value;
    }
    if(value_path == "interface-ipv6-address")
    {
        interface_ipv6_address = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "invalid-auth-type-count")
    {
        invalid_auth_type_count = value;
    }
    if(value_path == "invalid-packet-count")
    {
        invalid_packet_count = value;
    }
    if(value_path == "ip-address-owner-flag")
    {
        ip_address_owner_flag = value;
    }
    if(value_path == "ipv4-configured-down-address")
    {
        ipv4_configured_down_address.append(value);
    }
    if(value_path == "is-accept-mode")
    {
        is_accept_mode = value;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
    }
    if(value_path == "master-count")
    {
        master_count = value;
    }
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
    }
    if(value_path == "master-ipv6-address")
    {
        master_ipv6_address = value;
    }
    if(value_path == "master-priority")
    {
        master_priority = value;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
    }
    if(value_path == "oper-advertize-time")
    {
        oper_advertize_time = value;
    }
    if(value_path == "operational-address")
    {
        operational_address.append(value);
    }
    if(value_path == "operational-address-count")
    {
        operational_address_count = value;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
    }
    if(value_path == "pkt-length-errors-count")
    {
        pkt_length_errors_count = value;
    }
    if(value_path == "preempt-delay-time")
    {
        preempt_delay_time = value;
    }
    if(value_path == "preempt-flag")
    {
        preempt_flag = value;
    }
    if(value_path == "primary-state")
    {
        primary_state = value;
    }
    if(value_path == "primary-virtual-ip")
    {
        primary_virtual_ip = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "priority-zero-received-count")
    {
        priority_zero_received_count = value;
    }
    if(value_path == "priority-zero-sent-count")
    {
        priority_zero_sent_count = value;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
    }
    if(value_path == "secondary-address-count")
    {
        secondary_address_count = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "slaves")
    {
        slaves = value;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
    }
    if(value_path == "state-from-checkpoint")
    {
        state_from_checkpoint = value;
    }
    if(value_path == "time-in-current-state")
    {
        time_in_current_state = value;
    }
    if(value_path == "time-stats-discontinuity")
    {
        time_stats_discontinuity = value;
    }
    if(value_path == "time-vrouter-up")
    {
        time_vrouter_up = value;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
    }
    if(value_path == "tracked-item-count")
    {
        tracked_item_count = value;
    }
    if(value_path == "tracked-item-up-count")
    {
        tracked_item_up_count = value;
    }
    if(value_path == "ttl-error-count")
    {
        ttl_error_count = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state = value;
    }
}

Vrrp::Ipv4::VirtualRouters::VirtualRouters()
{
    yang_name = "virtual-routers"; yang_parent_name = "ipv4";
}

Vrrp::Ipv4::VirtualRouters::~VirtualRouters()
{
}

bool Vrrp::Ipv4::VirtualRouters::has_data() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::Ipv4::VirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<virtual_router.size(); index++)
    {
        if(virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::Ipv4::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::VirtualRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::Ipv4::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(std::move(c));
        children[segment_path] = virtual_router.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv4::VirtualRouters::get_children()
{
    for (auto const & c : virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::Ipv4::VirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Ipv4::Ipv4()
    :
    interfaces(std::make_unique<Vrrp::Ipv4::Interfaces>())
	,track_items(std::make_unique<Vrrp::Ipv4::TrackItems>())
	,virtual_routers(std::make_unique<Vrrp::Ipv4::VirtualRouters>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    track_items->parent = this;
    children["track-items"] = track_items.get();

    virtual_routers->parent = this;
    children["virtual-routers"] = virtual_routers.get();

    yang_name = "ipv4"; yang_parent_name = "vrrp";
}

Vrrp::Ipv4::~Ipv4()
{
}

bool Vrrp::Ipv4::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (track_items !=  nullptr && track_items->has_data())
	|| (virtual_routers !=  nullptr && virtual_routers->has_data());
}

bool Vrrp::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (track_items !=  nullptr && is_set(track_items->operation))
	|| (virtual_routers !=  nullptr && is_set(virtual_routers->operation));
}

std::string Vrrp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Vrrp::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Vrrp::Ipv4::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "track-items")
    {
        if(track_items != nullptr)
        {
            children["track-items"] = track_items.get();
        }
        else
        {
            track_items = std::make_unique<Vrrp::Ipv4::TrackItems>();
            track_items->parent = this;
            children["track-items"] = track_items.get();
        }
        return children.at("track-items");
    }

    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers.get();
        }
        else
        {
            virtual_routers = std::make_unique<Vrrp::Ipv4::VirtualRouters>();
            virtual_routers->parent = this;
            children["virtual-routers"] = virtual_routers.get();
        }
        return children.at("virtual-routers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::Ipv4::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("track-items") == children.end())
    {
        if(track_items != nullptr)
        {
            children["track-items"] = track_items.get();
        }
    }

    if(children.find("virtual-routers") == children.end())
    {
        if(virtual_routers != nullptr)
        {
            children["virtual-routers"] = virtual_routers.get();
        }
    }

    return children;
}

void Vrrp::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::MgoSessions::MgoSession::Slave::Slave()
    :
    	slave_interface{YType::str, "slave-interface"},
	 slave_virtual_router_id{YType::uint32, "slave-virtual-router-id"}
{
    yang_name = "slave"; yang_parent_name = "mgo-session";
}

Vrrp::MgoSessions::MgoSession::Slave::~Slave()
{
}

bool Vrrp::MgoSessions::MgoSession::Slave::has_data() const
{
    return slave_interface.is_set
	|| slave_virtual_router_id.is_set;
}

bool Vrrp::MgoSessions::MgoSession::Slave::has_operation() const
{
    return is_set(operation)
	|| is_set(slave_interface.operation)
	|| is_set(slave_virtual_router_id.operation);
}

std::string Vrrp::MgoSessions::MgoSession::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave";

    return path_buffer.str();

}

EntityPath Vrrp::MgoSessions::MgoSession::Slave::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_interface.is_set || is_set(slave_interface.operation)) leaf_name_data.push_back(slave_interface.get_name_leafdata());
    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.operation)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::MgoSessions::MgoSession::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrrp::MgoSessions::MgoSession::Slave::get_children()
{
    return children;
}

void Vrrp::MgoSessions::MgoSession::Slave::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slave-interface")
    {
        slave_interface = value;
    }
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
    }
}

Vrrp::MgoSessions::MgoSession::MgoSession()
    :
    	session_name{YType::str, "session-name"},
	 primary_af_name{YType::enumeration, "primary-af-name"},
	 primary_session_interface{YType::str, "primary-session-interface"},
	 primary_session_name{YType::str, "primary-session-name"},
	 primary_session_number{YType::uint32, "primary-session-number"},
	 primary_session_state{YType::enumeration, "primary-session-state"}
{
    yang_name = "mgo-session"; yang_parent_name = "mgo-sessions";
}

Vrrp::MgoSessions::MgoSession::~MgoSession()
{
}

bool Vrrp::MgoSessions::MgoSession::has_data() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return session_name.is_set
	|| primary_af_name.is_set
	|| primary_session_interface.is_set
	|| primary_session_name.is_set
	|| primary_session_number.is_set
	|| primary_session_state.is_set;
}

bool Vrrp::MgoSessions::MgoSession::has_operation() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(session_name.operation)
	|| is_set(primary_af_name.operation)
	|| is_set(primary_session_interface.operation)
	|| is_set(primary_session_name.operation)
	|| is_set(primary_session_number.operation)
	|| is_set(primary_session_state.operation);
}

std::string Vrrp::MgoSessions::MgoSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-session" <<"[session-name='" <<session_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrrp::MgoSessions::MgoSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/mgo-sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (primary_af_name.is_set || is_set(primary_af_name.operation)) leaf_name_data.push_back(primary_af_name.get_name_leafdata());
    if (primary_session_interface.is_set || is_set(primary_session_interface.operation)) leaf_name_data.push_back(primary_session_interface.get_name_leafdata());
    if (primary_session_name.is_set || is_set(primary_session_name.operation)) leaf_name_data.push_back(primary_session_name.get_name_leafdata());
    if (primary_session_number.is_set || is_set(primary_session_number.operation)) leaf_name_data.push_back(primary_session_number.get_name_leafdata());
    if (primary_session_state.is_set || is_set(primary_session_state.operation)) leaf_name_data.push_back(primary_session_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::MgoSessions::MgoSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave")
    {
        for(auto const & c : slave)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::MgoSessions::MgoSession::Slave>();
        c->parent = this;
        slave.push_back(std::move(c));
        children[segment_path] = slave.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::MgoSessions::MgoSession::get_children()
{
    for (auto const & c : slave)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::MgoSessions::MgoSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "primary-af-name")
    {
        primary_af_name = value;
    }
    if(value_path == "primary-session-interface")
    {
        primary_session_interface = value;
    }
    if(value_path == "primary-session-name")
    {
        primary_session_name = value;
    }
    if(value_path == "primary-session-number")
    {
        primary_session_number = value;
    }
    if(value_path == "primary-session-state")
    {
        primary_session_state = value;
    }
}

Vrrp::MgoSessions::MgoSessions()
{
    yang_name = "mgo-sessions"; yang_parent_name = "vrrp";
}

Vrrp::MgoSessions::~MgoSessions()
{
}

bool Vrrp::MgoSessions::has_data() const
{
    for (std::size_t index=0; index<mgo_session.size(); index++)
    {
        if(mgo_session[index]->has_data())
            return true;
    }
    return false;
}

bool Vrrp::MgoSessions::has_operation() const
{
    for (std::size_t index=0; index<mgo_session.size(); index++)
    {
        if(mgo_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrrp::MgoSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-sessions";

    return path_buffer.str();

}

EntityPath Vrrp::MgoSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrrp::MgoSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mgo-session")
    {
        for(auto const & c : mgo_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrrp::MgoSessions::MgoSession>();
        c->parent = this;
        mgo_session.push_back(std::move(c));
        children[segment_path] = mgo_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::MgoSessions::get_children()
{
    for (auto const & c : mgo_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrrp::MgoSessions::set_value(const std::string & value_path, std::string value)
{
}

Vrrp::Vrrp()
    :
    ipv4(std::make_unique<Vrrp::Ipv4>())
	,ipv6(std::make_unique<Vrrp::Ipv6>())
	,mgo_sessions(std::make_unique<Vrrp::MgoSessions>())
	,summary(std::make_unique<Vrrp::Summary>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    mgo_sessions->parent = this;
    children["mgo-sessions"] = mgo_sessions.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "vrrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-vrrp-oper";
}

Vrrp::~Vrrp()
{
}

bool Vrrp::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (mgo_sessions !=  nullptr && mgo_sessions->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Vrrp::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation))
	|| (mgo_sessions !=  nullptr && is_set(mgo_sessions->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
}

std::string Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp";

    return path_buffer.str();

}

EntityPath Vrrp::get_entity_path(Entity* ancestor) const
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

Entity* Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<Vrrp::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4.get();
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
        else
        {
            ipv6 = std::make_unique<Vrrp::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "mgo-sessions")
    {
        if(mgo_sessions != nullptr)
        {
            children["mgo-sessions"] = mgo_sessions.get();
        }
        else
        {
            mgo_sessions = std::make_unique<Vrrp::MgoSessions>();
            mgo_sessions->parent = this;
            children["mgo-sessions"] = mgo_sessions.get();
        }
        return children.at("mgo-sessions");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<Vrrp::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrrp::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
    }

    if(children.find("mgo-sessions") == children.end())
    {
        if(mgo_sessions != nullptr)
        {
            children["mgo-sessions"] = mgo_sessions.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void Vrrp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Vrrp::clone_ptr()
{
    return std::make_unique<Vrrp>();
}

const Enum::Value VrrpStateChangeReasonEnum::state_change_bfd_down {0, "state-change-bfd-down"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_virtual_ip_configured {1, "state-change-virtual-ip-configured"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_interface_ip {2, "state-change-interface-ip"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_delay_timer {3, "state-change-delay-timer"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_startup {4, "state-change-startup"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_interface_up {5, "state-change-interface-up"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_interface_down {6, "state-change-interface-down"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_master_down_timer {7, "state-change-master-down-timer"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_higher_priority_master {8, "state-change-higher-priority-master"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_fhrp_admin {9, "state-change-fhrp-admin"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_mgo_parent {10, "state-change-mgo-parent"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_chkpt_update {11, "state-change-chkpt-update"};
const Enum::Value VrrpStateChangeReasonEnum::state_change_issu_resync {12, "state-change-issu-resync"};

const Enum::Value VrrpVmacStateEnum::stored {0, "stored"};
const Enum::Value VrrpVmacStateEnum::reserved {1, "reserved"};
const Enum::Value VrrpVmacStateEnum::active {2, "active"};
const Enum::Value VrrpVmacStateEnum::reserving {3, "reserving"};

const Enum::Value VrrpBAfEnum::address_family_ipv4 {0, "address-family-ipv4"};
const Enum::Value VrrpBAfEnum::address_family_ipv6 {1, "address-family-ipv6"};
const Enum::Value VrrpBAfEnum::vrrp_baf_count {2, "vrrp-baf-count"};

const Enum::Value VrrpVipStateEnum::virtual_ip_state_down {0, "virtual-ip-state-down"};
const Enum::Value VrrpVipStateEnum::virtual_ip_state_up {1, "virtual-ip-state-up"};

const Enum::Value VrrpProtAuthEnum::authentication_none {0, "authentication-none"};
const Enum::Value VrrpProtAuthEnum::authentication_text {1, "authentication-text"};
const Enum::Value VrrpProtAuthEnum::authentication_ip {2, "authentication-ip"};

const Enum::Value VrrpBfdSessionStateEnum::bfd_state_none {0, "bfd-state-none"};
const Enum::Value VrrpBfdSessionStateEnum::bfd_state_inactive {1, "bfd-state-inactive"};
const Enum::Value VrrpBfdSessionStateEnum::bfd_state_up {2, "bfd-state-up"};
const Enum::Value VrrpBfdSessionStateEnum::bfd_state_down {3, "bfd-state-down"};

const Enum::Value VrrpBagProtocolStateEnum::state_initial {1, "state-initial"};
const Enum::Value VrrpBagProtocolStateEnum::state_backup {2, "state-backup"};
const Enum::Value VrrpBagProtocolStateEnum::state_master {3, "state-master"};


}
}

