
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_vrrp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_vrrp_oper {

Vrrp::Vrrp()
    :
    summary(std::make_shared<Vrrp::Summary>())
	,ipv6(std::make_shared<Vrrp::Ipv6>())
	,ipv4(std::make_shared<Vrrp::Ipv4>())
	,mgo_sessions(std::make_shared<Vrrp::MgoSessions>())
{
    summary->parent = this;
    ipv6->parent = this;
    ipv4->parent = this;
    mgo_sessions->parent = this;

    yang_name = "vrrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-vrrp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Vrrp::~Vrrp()
{
}

bool Vrrp::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (mgo_sessions !=  nullptr && mgo_sessions->has_data());
}

bool Vrrp::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (mgo_sessions !=  nullptr && mgo_sessions->has_operation());
}

std::string Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Vrrp::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Vrrp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Vrrp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "mgo-sessions")
    {
        if(mgo_sessions == nullptr)
        {
            mgo_sessions = std::make_shared<Vrrp::MgoSessions>();
        }
        return mgo_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(mgo_sessions != nullptr)
    {
        children["mgo-sessions"] = mgo_sessions;
    }

    return children;
}

void Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Vrrp::clone_ptr() const
{
    return std::make_shared<Vrrp>();
}

std::string Vrrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vrrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vrrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vrrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "ipv6" || name == "ipv4" || name == "mgo-sessions")
        return true;
    return false;
}

Vrrp::Summary::Summary()
    :
    ipv4_sessions_master_owner{YType::uint32, "ipv4-sessions-master-owner"},
    ipv4_sessions_master{YType::uint32, "ipv4-sessions-master"},
    ipv4_sessions_backup{YType::uint32, "ipv4-sessions-backup"},
    ipv4_sessions_init{YType::uint32, "ipv4-sessions-init"},
    ipv4_slaves_master{YType::uint32, "ipv4-slaves-master"},
    ipv4_slaves_backup{YType::uint32, "ipv4-slaves-backup"},
    ipv4_slaves_init{YType::uint32, "ipv4-slaves-init"},
    ipv4_virtual_ip_addresses_master_owner_up{YType::uint32, "ipv4-virtual-ip-addresses-master-owner-up"},
    ipv4_virtual_ip_addresses_master_owner_down{YType::uint32, "ipv4-virtual-ip-addresses-master-owner-down"},
    ipv4_virtual_ip_addresses_master_up{YType::uint32, "ipv4-virtual-ip-addresses-master-up"},
    ipv4_virtual_ip_addresses_master_down{YType::uint32, "ipv4-virtual-ip-addresses-master-down"},
    ipv4_virtual_ip_addresses_backup_up{YType::uint32, "ipv4-virtual-ip-addresses-backup-up"},
    ipv4_virtual_ip_addresses_backup_down{YType::uint32, "ipv4-virtual-ip-addresses-backup-down"},
    ipv4_virtual_ip_addresses_init_up{YType::uint32, "ipv4-virtual-ip-addresses-init-up"},
    ipv4_virtual_ip_addresses_init_down{YType::uint32, "ipv4-virtual-ip-addresses-init-down"},
    ipv6_sessions_master_owner{YType::uint32, "ipv6-sessions-master-owner"},
    ipv6_sessions_master{YType::uint32, "ipv6-sessions-master"},
    ipv6_sessions_backup{YType::uint32, "ipv6-sessions-backup"},
    ipv6_sessions_init{YType::uint32, "ipv6-sessions-init"},
    ipv6_slaves_master{YType::uint32, "ipv6-slaves-master"},
    ipv6_slaves_backup{YType::uint32, "ipv6-slaves-backup"},
    ipv6_slaves_init{YType::uint32, "ipv6-slaves-init"},
    ipv6_virtual_ip_addresses_master_owner_up{YType::uint32, "ipv6-virtual-ip-addresses-master-owner-up"},
    ipv6_virtual_ip_addresses_master_owner_down{YType::uint32, "ipv6-virtual-ip-addresses-master-owner-down"},
    ipv6_virtual_ip_addresses_master_up{YType::uint32, "ipv6-virtual-ip-addresses-master-up"},
    ipv6_virtual_ip_addresses_master_down{YType::uint32, "ipv6-virtual-ip-addresses-master-down"},
    ipv6_virtual_ip_addresses_backup_up{YType::uint32, "ipv6-virtual-ip-addresses-backup-up"},
    ipv6_virtual_ip_addresses_backup_down{YType::uint32, "ipv6-virtual-ip-addresses-backup-down"},
    ipv6_virtual_ip_addresses_init_up{YType::uint32, "ipv6-virtual-ip-addresses-init-up"},
    ipv6_virtual_ip_addresses_init_down{YType::uint32, "ipv6-virtual-ip-addresses-init-down"},
    interfaces_ipv4_state_up{YType::uint32, "interfaces-ipv4-state-up"},
    interfaces_ipv4_state_down{YType::uint32, "interfaces-ipv4-state-down"},
    tracked_interfaces_ipv4_state_up{YType::uint32, "tracked-interfaces-ipv4-state-up"},
    tracked_interfaces_ipv4_state_down{YType::uint32, "tracked-interfaces-ipv4-state-down"},
    interfaces_ipv6_state_up{YType::uint32, "interfaces-ipv6-state-up"},
    interfaces_ipv6_state_down{YType::uint32, "interfaces-ipv6-state-down"},
    tracked_interfaces_ipv6_state_up{YType::uint32, "tracked-interfaces-ipv6-state-up"},
    tracked_interfaces_ipv6_state_down{YType::uint32, "tracked-interfaces-ipv6-state-down"},
    tracked_objects_state_up{YType::uint32, "tracked-objects-state-up"},
    tracked_objects_state_down{YType::uint32, "tracked-objects-state-down"},
    bfd_sessions_up{YType::uint32, "bfd-sessions-up"},
    bfd_sessions_down{YType::uint32, "bfd-sessions-down"},
    bfd_session_inactive{YType::uint32, "bfd-session-inactive"},
    ipv6bfd_sessions_up{YType::uint32, "ipv6bfd-sessions-up"},
    ipv6bfd_sessions_down{YType::uint32, "ipv6bfd-sessions-down"},
    ipv6bfd_session_inactive{YType::uint32, "ipv6bfd-session-inactive"}
{

    yang_name = "summary"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Summary::~Summary()
{
}

bool Vrrp::Summary::has_data() const
{
    return ipv4_sessions_master_owner.is_set
	|| ipv4_sessions_master.is_set
	|| ipv4_sessions_backup.is_set
	|| ipv4_sessions_init.is_set
	|| ipv4_slaves_master.is_set
	|| ipv4_slaves_backup.is_set
	|| ipv4_slaves_init.is_set
	|| ipv4_virtual_ip_addresses_master_owner_up.is_set
	|| ipv4_virtual_ip_addresses_master_owner_down.is_set
	|| ipv4_virtual_ip_addresses_master_up.is_set
	|| ipv4_virtual_ip_addresses_master_down.is_set
	|| ipv4_virtual_ip_addresses_backup_up.is_set
	|| ipv4_virtual_ip_addresses_backup_down.is_set
	|| ipv4_virtual_ip_addresses_init_up.is_set
	|| ipv4_virtual_ip_addresses_init_down.is_set
	|| ipv6_sessions_master_owner.is_set
	|| ipv6_sessions_master.is_set
	|| ipv6_sessions_backup.is_set
	|| ipv6_sessions_init.is_set
	|| ipv6_slaves_master.is_set
	|| ipv6_slaves_backup.is_set
	|| ipv6_slaves_init.is_set
	|| ipv6_virtual_ip_addresses_master_owner_up.is_set
	|| ipv6_virtual_ip_addresses_master_owner_down.is_set
	|| ipv6_virtual_ip_addresses_master_up.is_set
	|| ipv6_virtual_ip_addresses_master_down.is_set
	|| ipv6_virtual_ip_addresses_backup_up.is_set
	|| ipv6_virtual_ip_addresses_backup_down.is_set
	|| ipv6_virtual_ip_addresses_init_up.is_set
	|| ipv6_virtual_ip_addresses_init_down.is_set
	|| interfaces_ipv4_state_up.is_set
	|| interfaces_ipv4_state_down.is_set
	|| tracked_interfaces_ipv4_state_up.is_set
	|| tracked_interfaces_ipv4_state_down.is_set
	|| interfaces_ipv6_state_up.is_set
	|| interfaces_ipv6_state_down.is_set
	|| tracked_interfaces_ipv6_state_up.is_set
	|| tracked_interfaces_ipv6_state_down.is_set
	|| tracked_objects_state_up.is_set
	|| tracked_objects_state_down.is_set
	|| bfd_sessions_up.is_set
	|| bfd_sessions_down.is_set
	|| bfd_session_inactive.is_set
	|| ipv6bfd_sessions_up.is_set
	|| ipv6bfd_sessions_down.is_set
	|| ipv6bfd_session_inactive.is_set;
}

bool Vrrp::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_sessions_master_owner.yfilter)
	|| ydk::is_set(ipv4_sessions_master.yfilter)
	|| ydk::is_set(ipv4_sessions_backup.yfilter)
	|| ydk::is_set(ipv4_sessions_init.yfilter)
	|| ydk::is_set(ipv4_slaves_master.yfilter)
	|| ydk::is_set(ipv4_slaves_backup.yfilter)
	|| ydk::is_set(ipv4_slaves_init.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_master_owner_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_master_owner_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_master_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_master_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_backup_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_backup_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_init_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_init_down.yfilter)
	|| ydk::is_set(ipv6_sessions_master_owner.yfilter)
	|| ydk::is_set(ipv6_sessions_master.yfilter)
	|| ydk::is_set(ipv6_sessions_backup.yfilter)
	|| ydk::is_set(ipv6_sessions_init.yfilter)
	|| ydk::is_set(ipv6_slaves_master.yfilter)
	|| ydk::is_set(ipv6_slaves_backup.yfilter)
	|| ydk::is_set(ipv6_slaves_init.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_master_owner_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_master_owner_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_master_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_master_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_backup_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_backup_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_init_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_init_down.yfilter)
	|| ydk::is_set(interfaces_ipv4_state_up.yfilter)
	|| ydk::is_set(interfaces_ipv4_state_down.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv4_state_up.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv4_state_down.yfilter)
	|| ydk::is_set(interfaces_ipv6_state_up.yfilter)
	|| ydk::is_set(interfaces_ipv6_state_down.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv6_state_up.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv6_state_down.yfilter)
	|| ydk::is_set(tracked_objects_state_up.yfilter)
	|| ydk::is_set(tracked_objects_state_down.yfilter)
	|| ydk::is_set(bfd_sessions_up.yfilter)
	|| ydk::is_set(bfd_sessions_down.yfilter)
	|| ydk::is_set(bfd_session_inactive.yfilter)
	|| ydk::is_set(ipv6bfd_sessions_up.yfilter)
	|| ydk::is_set(ipv6bfd_sessions_down.yfilter)
	|| ydk::is_set(ipv6bfd_session_inactive.yfilter);
}

std::string Vrrp::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_sessions_master_owner.is_set || is_set(ipv4_sessions_master_owner.yfilter)) leaf_name_data.push_back(ipv4_sessions_master_owner.get_name_leafdata());
    if (ipv4_sessions_master.is_set || is_set(ipv4_sessions_master.yfilter)) leaf_name_data.push_back(ipv4_sessions_master.get_name_leafdata());
    if (ipv4_sessions_backup.is_set || is_set(ipv4_sessions_backup.yfilter)) leaf_name_data.push_back(ipv4_sessions_backup.get_name_leafdata());
    if (ipv4_sessions_init.is_set || is_set(ipv4_sessions_init.yfilter)) leaf_name_data.push_back(ipv4_sessions_init.get_name_leafdata());
    if (ipv4_slaves_master.is_set || is_set(ipv4_slaves_master.yfilter)) leaf_name_data.push_back(ipv4_slaves_master.get_name_leafdata());
    if (ipv4_slaves_backup.is_set || is_set(ipv4_slaves_backup.yfilter)) leaf_name_data.push_back(ipv4_slaves_backup.get_name_leafdata());
    if (ipv4_slaves_init.is_set || is_set(ipv4_slaves_init.yfilter)) leaf_name_data.push_back(ipv4_slaves_init.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_owner_up.is_set || is_set(ipv4_virtual_ip_addresses_master_owner_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_owner_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_owner_down.is_set || is_set(ipv4_virtual_ip_addresses_master_owner_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_owner_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_up.is_set || is_set(ipv4_virtual_ip_addresses_master_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_master_down.is_set || is_set(ipv4_virtual_ip_addresses_master_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_master_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_backup_up.is_set || is_set(ipv4_virtual_ip_addresses_backup_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_backup_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_backup_down.is_set || is_set(ipv4_virtual_ip_addresses_backup_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_backup_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_up.is_set || is_set(ipv4_virtual_ip_addresses_init_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_down.is_set || is_set(ipv4_virtual_ip_addresses_init_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_down.get_name_leafdata());
    if (ipv6_sessions_master_owner.is_set || is_set(ipv6_sessions_master_owner.yfilter)) leaf_name_data.push_back(ipv6_sessions_master_owner.get_name_leafdata());
    if (ipv6_sessions_master.is_set || is_set(ipv6_sessions_master.yfilter)) leaf_name_data.push_back(ipv6_sessions_master.get_name_leafdata());
    if (ipv6_sessions_backup.is_set || is_set(ipv6_sessions_backup.yfilter)) leaf_name_data.push_back(ipv6_sessions_backup.get_name_leafdata());
    if (ipv6_sessions_init.is_set || is_set(ipv6_sessions_init.yfilter)) leaf_name_data.push_back(ipv6_sessions_init.get_name_leafdata());
    if (ipv6_slaves_master.is_set || is_set(ipv6_slaves_master.yfilter)) leaf_name_data.push_back(ipv6_slaves_master.get_name_leafdata());
    if (ipv6_slaves_backup.is_set || is_set(ipv6_slaves_backup.yfilter)) leaf_name_data.push_back(ipv6_slaves_backup.get_name_leafdata());
    if (ipv6_slaves_init.is_set || is_set(ipv6_slaves_init.yfilter)) leaf_name_data.push_back(ipv6_slaves_init.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_owner_up.is_set || is_set(ipv6_virtual_ip_addresses_master_owner_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_owner_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_owner_down.is_set || is_set(ipv6_virtual_ip_addresses_master_owner_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_owner_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_up.is_set || is_set(ipv6_virtual_ip_addresses_master_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_master_down.is_set || is_set(ipv6_virtual_ip_addresses_master_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_master_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_backup_up.is_set || is_set(ipv6_virtual_ip_addresses_backup_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_backup_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_backup_down.is_set || is_set(ipv6_virtual_ip_addresses_backup_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_backup_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_up.is_set || is_set(ipv6_virtual_ip_addresses_init_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_down.is_set || is_set(ipv6_virtual_ip_addresses_init_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_down.get_name_leafdata());
    if (interfaces_ipv4_state_up.is_set || is_set(interfaces_ipv4_state_up.yfilter)) leaf_name_data.push_back(interfaces_ipv4_state_up.get_name_leafdata());
    if (interfaces_ipv4_state_down.is_set || is_set(interfaces_ipv4_state_down.yfilter)) leaf_name_data.push_back(interfaces_ipv4_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_up.is_set || is_set(tracked_interfaces_ipv4_state_up.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_up.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_down.is_set || is_set(tracked_interfaces_ipv4_state_down.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_down.get_name_leafdata());
    if (interfaces_ipv6_state_up.is_set || is_set(interfaces_ipv6_state_up.yfilter)) leaf_name_data.push_back(interfaces_ipv6_state_up.get_name_leafdata());
    if (interfaces_ipv6_state_down.is_set || is_set(interfaces_ipv6_state_down.yfilter)) leaf_name_data.push_back(interfaces_ipv6_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_up.is_set || is_set(tracked_interfaces_ipv6_state_up.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_up.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_down.is_set || is_set(tracked_interfaces_ipv6_state_down.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_down.get_name_leafdata());
    if (tracked_objects_state_up.is_set || is_set(tracked_objects_state_up.yfilter)) leaf_name_data.push_back(tracked_objects_state_up.get_name_leafdata());
    if (tracked_objects_state_down.is_set || is_set(tracked_objects_state_down.yfilter)) leaf_name_data.push_back(tracked_objects_state_down.get_name_leafdata());
    if (bfd_sessions_up.is_set || is_set(bfd_sessions_up.yfilter)) leaf_name_data.push_back(bfd_sessions_up.get_name_leafdata());
    if (bfd_sessions_down.is_set || is_set(bfd_sessions_down.yfilter)) leaf_name_data.push_back(bfd_sessions_down.get_name_leafdata());
    if (bfd_session_inactive.is_set || is_set(bfd_session_inactive.yfilter)) leaf_name_data.push_back(bfd_session_inactive.get_name_leafdata());
    if (ipv6bfd_sessions_up.is_set || is_set(ipv6bfd_sessions_up.yfilter)) leaf_name_data.push_back(ipv6bfd_sessions_up.get_name_leafdata());
    if (ipv6bfd_sessions_down.is_set || is_set(ipv6bfd_sessions_down.yfilter)) leaf_name_data.push_back(ipv6bfd_sessions_down.get_name_leafdata());
    if (ipv6bfd_session_inactive.is_set || is_set(ipv6bfd_session_inactive.yfilter)) leaf_name_data.push_back(ipv6bfd_session_inactive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-sessions-master-owner")
    {
        ipv4_sessions_master_owner = value;
        ipv4_sessions_master_owner.value_namespace = name_space;
        ipv4_sessions_master_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-master")
    {
        ipv4_sessions_master = value;
        ipv4_sessions_master.value_namespace = name_space;
        ipv4_sessions_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-backup")
    {
        ipv4_sessions_backup = value;
        ipv4_sessions_backup.value_namespace = name_space;
        ipv4_sessions_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-init")
    {
        ipv4_sessions_init = value;
        ipv4_sessions_init.value_namespace = name_space;
        ipv4_sessions_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-master")
    {
        ipv4_slaves_master = value;
        ipv4_slaves_master.value_namespace = name_space;
        ipv4_slaves_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-backup")
    {
        ipv4_slaves_backup = value;
        ipv4_slaves_backup.value_namespace = name_space;
        ipv4_slaves_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-init")
    {
        ipv4_slaves_init = value;
        ipv4_slaves_init.value_namespace = name_space;
        ipv4_slaves_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-owner-up")
    {
        ipv4_virtual_ip_addresses_master_owner_up = value;
        ipv4_virtual_ip_addresses_master_owner_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_master_owner_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-owner-down")
    {
        ipv4_virtual_ip_addresses_master_owner_down = value;
        ipv4_virtual_ip_addresses_master_owner_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_master_owner_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-up")
    {
        ipv4_virtual_ip_addresses_master_up = value;
        ipv4_virtual_ip_addresses_master_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_master_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-down")
    {
        ipv4_virtual_ip_addresses_master_down = value;
        ipv4_virtual_ip_addresses_master_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_master_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-backup-up")
    {
        ipv4_virtual_ip_addresses_backup_up = value;
        ipv4_virtual_ip_addresses_backup_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_backup_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-backup-down")
    {
        ipv4_virtual_ip_addresses_backup_down = value;
        ipv4_virtual_ip_addresses_backup_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_backup_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-up")
    {
        ipv4_virtual_ip_addresses_init_up = value;
        ipv4_virtual_ip_addresses_init_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_init_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-down")
    {
        ipv4_virtual_ip_addresses_init_down = value;
        ipv4_virtual_ip_addresses_init_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_init_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-master-owner")
    {
        ipv6_sessions_master_owner = value;
        ipv6_sessions_master_owner.value_namespace = name_space;
        ipv6_sessions_master_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-master")
    {
        ipv6_sessions_master = value;
        ipv6_sessions_master.value_namespace = name_space;
        ipv6_sessions_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-backup")
    {
        ipv6_sessions_backup = value;
        ipv6_sessions_backup.value_namespace = name_space;
        ipv6_sessions_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-init")
    {
        ipv6_sessions_init = value;
        ipv6_sessions_init.value_namespace = name_space;
        ipv6_sessions_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-master")
    {
        ipv6_slaves_master = value;
        ipv6_slaves_master.value_namespace = name_space;
        ipv6_slaves_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-backup")
    {
        ipv6_slaves_backup = value;
        ipv6_slaves_backup.value_namespace = name_space;
        ipv6_slaves_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-init")
    {
        ipv6_slaves_init = value;
        ipv6_slaves_init.value_namespace = name_space;
        ipv6_slaves_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-owner-up")
    {
        ipv6_virtual_ip_addresses_master_owner_up = value;
        ipv6_virtual_ip_addresses_master_owner_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_master_owner_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-owner-down")
    {
        ipv6_virtual_ip_addresses_master_owner_down = value;
        ipv6_virtual_ip_addresses_master_owner_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_master_owner_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-up")
    {
        ipv6_virtual_ip_addresses_master_up = value;
        ipv6_virtual_ip_addresses_master_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_master_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-down")
    {
        ipv6_virtual_ip_addresses_master_down = value;
        ipv6_virtual_ip_addresses_master_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_master_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-backup-up")
    {
        ipv6_virtual_ip_addresses_backup_up = value;
        ipv6_virtual_ip_addresses_backup_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_backup_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-backup-down")
    {
        ipv6_virtual_ip_addresses_backup_down = value;
        ipv6_virtual_ip_addresses_backup_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_backup_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-up")
    {
        ipv6_virtual_ip_addresses_init_up = value;
        ipv6_virtual_ip_addresses_init_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_init_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-down")
    {
        ipv6_virtual_ip_addresses_init_down = value;
        ipv6_virtual_ip_addresses_init_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_init_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv4-state-up")
    {
        interfaces_ipv4_state_up = value;
        interfaces_ipv4_state_up.value_namespace = name_space;
        interfaces_ipv4_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv4-state-down")
    {
        interfaces_ipv4_state_down = value;
        interfaces_ipv4_state_down.value_namespace = name_space;
        interfaces_ipv4_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv4-state-up")
    {
        tracked_interfaces_ipv4_state_up = value;
        tracked_interfaces_ipv4_state_up.value_namespace = name_space;
        tracked_interfaces_ipv4_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv4-state-down")
    {
        tracked_interfaces_ipv4_state_down = value;
        tracked_interfaces_ipv4_state_down.value_namespace = name_space;
        tracked_interfaces_ipv4_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv6-state-up")
    {
        interfaces_ipv6_state_up = value;
        interfaces_ipv6_state_up.value_namespace = name_space;
        interfaces_ipv6_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv6-state-down")
    {
        interfaces_ipv6_state_down = value;
        interfaces_ipv6_state_down.value_namespace = name_space;
        interfaces_ipv6_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv6-state-up")
    {
        tracked_interfaces_ipv6_state_up = value;
        tracked_interfaces_ipv6_state_up.value_namespace = name_space;
        tracked_interfaces_ipv6_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv6-state-down")
    {
        tracked_interfaces_ipv6_state_down = value;
        tracked_interfaces_ipv6_state_down.value_namespace = name_space;
        tracked_interfaces_ipv6_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-objects-state-up")
    {
        tracked_objects_state_up = value;
        tracked_objects_state_up.value_namespace = name_space;
        tracked_objects_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-objects-state-down")
    {
        tracked_objects_state_down = value;
        tracked_objects_state_down.value_namespace = name_space;
        tracked_objects_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-sessions-up")
    {
        bfd_sessions_up = value;
        bfd_sessions_up.value_namespace = name_space;
        bfd_sessions_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-sessions-down")
    {
        bfd_sessions_down = value;
        bfd_sessions_down.value_namespace = name_space;
        bfd_sessions_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-inactive")
    {
        bfd_session_inactive = value;
        bfd_session_inactive.value_namespace = name_space;
        bfd_session_inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-sessions-up")
    {
        ipv6bfd_sessions_up = value;
        ipv6bfd_sessions_up.value_namespace = name_space;
        ipv6bfd_sessions_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-sessions-down")
    {
        ipv6bfd_sessions_down = value;
        ipv6bfd_sessions_down.value_namespace = name_space;
        ipv6bfd_sessions_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-session-inactive")
    {
        ipv6bfd_session_inactive = value;
        ipv6bfd_session_inactive.value_namespace = name_space;
        ipv6bfd_session_inactive.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-sessions-master-owner")
    {
        ipv4_sessions_master_owner.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-master")
    {
        ipv4_sessions_master.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-backup")
    {
        ipv4_sessions_backup.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-init")
    {
        ipv4_sessions_init.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-master")
    {
        ipv4_slaves_master.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-backup")
    {
        ipv4_slaves_backup.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-init")
    {
        ipv4_slaves_init.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-owner-up")
    {
        ipv4_virtual_ip_addresses_master_owner_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-owner-down")
    {
        ipv4_virtual_ip_addresses_master_owner_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-up")
    {
        ipv4_virtual_ip_addresses_master_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-master-down")
    {
        ipv4_virtual_ip_addresses_master_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-backup-up")
    {
        ipv4_virtual_ip_addresses_backup_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-backup-down")
    {
        ipv4_virtual_ip_addresses_backup_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-up")
    {
        ipv4_virtual_ip_addresses_init_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-down")
    {
        ipv4_virtual_ip_addresses_init_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-master-owner")
    {
        ipv6_sessions_master_owner.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-master")
    {
        ipv6_sessions_master.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-backup")
    {
        ipv6_sessions_backup.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-init")
    {
        ipv6_sessions_init.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-master")
    {
        ipv6_slaves_master.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-backup")
    {
        ipv6_slaves_backup.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-init")
    {
        ipv6_slaves_init.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-owner-up")
    {
        ipv6_virtual_ip_addresses_master_owner_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-owner-down")
    {
        ipv6_virtual_ip_addresses_master_owner_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-up")
    {
        ipv6_virtual_ip_addresses_master_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-master-down")
    {
        ipv6_virtual_ip_addresses_master_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-backup-up")
    {
        ipv6_virtual_ip_addresses_backup_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-backup-down")
    {
        ipv6_virtual_ip_addresses_backup_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-up")
    {
        ipv6_virtual_ip_addresses_init_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-down")
    {
        ipv6_virtual_ip_addresses_init_down.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv4-state-up")
    {
        interfaces_ipv4_state_up.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv4-state-down")
    {
        interfaces_ipv4_state_down.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv4-state-up")
    {
        tracked_interfaces_ipv4_state_up.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv4-state-down")
    {
        tracked_interfaces_ipv4_state_down.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv6-state-up")
    {
        interfaces_ipv6_state_up.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv6-state-down")
    {
        interfaces_ipv6_state_down.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv6-state-up")
    {
        tracked_interfaces_ipv6_state_up.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv6-state-down")
    {
        tracked_interfaces_ipv6_state_down.yfilter = yfilter;
    }
    if(value_path == "tracked-objects-state-up")
    {
        tracked_objects_state_up.yfilter = yfilter;
    }
    if(value_path == "tracked-objects-state-down")
    {
        tracked_objects_state_down.yfilter = yfilter;
    }
    if(value_path == "bfd-sessions-up")
    {
        bfd_sessions_up.yfilter = yfilter;
    }
    if(value_path == "bfd-sessions-down")
    {
        bfd_sessions_down.yfilter = yfilter;
    }
    if(value_path == "bfd-session-inactive")
    {
        bfd_session_inactive.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-sessions-up")
    {
        ipv6bfd_sessions_up.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-sessions-down")
    {
        ipv6bfd_sessions_down.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-session-inactive")
    {
        ipv6bfd_session_inactive.yfilter = yfilter;
    }
}

bool Vrrp::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sessions-master-owner" || name == "ipv4-sessions-master" || name == "ipv4-sessions-backup" || name == "ipv4-sessions-init" || name == "ipv4-slaves-master" || name == "ipv4-slaves-backup" || name == "ipv4-slaves-init" || name == "ipv4-virtual-ip-addresses-master-owner-up" || name == "ipv4-virtual-ip-addresses-master-owner-down" || name == "ipv4-virtual-ip-addresses-master-up" || name == "ipv4-virtual-ip-addresses-master-down" || name == "ipv4-virtual-ip-addresses-backup-up" || name == "ipv4-virtual-ip-addresses-backup-down" || name == "ipv4-virtual-ip-addresses-init-up" || name == "ipv4-virtual-ip-addresses-init-down" || name == "ipv6-sessions-master-owner" || name == "ipv6-sessions-master" || name == "ipv6-sessions-backup" || name == "ipv6-sessions-init" || name == "ipv6-slaves-master" || name == "ipv6-slaves-backup" || name == "ipv6-slaves-init" || name == "ipv6-virtual-ip-addresses-master-owner-up" || name == "ipv6-virtual-ip-addresses-master-owner-down" || name == "ipv6-virtual-ip-addresses-master-up" || name == "ipv6-virtual-ip-addresses-master-down" || name == "ipv6-virtual-ip-addresses-backup-up" || name == "ipv6-virtual-ip-addresses-backup-down" || name == "ipv6-virtual-ip-addresses-init-up" || name == "ipv6-virtual-ip-addresses-init-down" || name == "interfaces-ipv4-state-up" || name == "interfaces-ipv4-state-down" || name == "tracked-interfaces-ipv4-state-up" || name == "tracked-interfaces-ipv4-state-down" || name == "interfaces-ipv6-state-up" || name == "interfaces-ipv6-state-down" || name == "tracked-interfaces-ipv6-state-up" || name == "tracked-interfaces-ipv6-state-down" || name == "tracked-objects-state-up" || name == "tracked-objects-state-down" || name == "bfd-sessions-up" || name == "bfd-sessions-down" || name == "bfd-session-inactive" || name == "ipv6bfd-sessions-up" || name == "ipv6bfd-sessions-down" || name == "ipv6bfd-session-inactive")
        return true;
    return false;
}

Vrrp::Ipv6::Ipv6()
    :
    track_items(std::make_shared<Vrrp::Ipv6::TrackItems>())
	,virtual_routers(std::make_shared<Vrrp::Ipv6::VirtualRouters>())
	,interfaces(std::make_shared<Vrrp::Ipv6::Interfaces>())
{
    track_items->parent = this;
    virtual_routers->parent = this;
    interfaces->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Ipv6::~Ipv6()
{
}

bool Vrrp::Ipv6::has_data() const
{
    return (track_items !=  nullptr && track_items->has_data())
	|| (virtual_routers !=  nullptr && virtual_routers->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Vrrp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (track_items !=  nullptr && track_items->has_operation())
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Vrrp::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-items")
    {
        if(track_items == nullptr)
        {
            track_items = std::make_shared<Vrrp::Ipv6::TrackItems>();
        }
        return track_items;
    }

    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Ipv6::VirtualRouters>();
        }
        return virtual_routers;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Vrrp::Ipv6::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(track_items != nullptr)
    {
        children["track-items"] = track_items;
    }

    if(virtual_routers != nullptr)
    {
        children["virtual-routers"] = virtual_routers;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Vrrp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-items" || name == "virtual-routers" || name == "interfaces")
        return true;
    return false;
}

Vrrp::Ipv6::TrackItems::TrackItems()
{

    yang_name = "track-items"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::Ipv6::TrackItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv6::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::TrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-item")
    {
        for(auto const & c : track_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv6::TrackItems::TrackItem>();
        c->parent = this;
        track_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::TrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : track_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv6::TrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv6::TrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv6::TrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-item")
        return true;
    return false;
}

Vrrp::Ipv6::TrackItems::TrackItem::TrackItem()
    :
    interface_name{YType::str, "interface-name"},
    virtual_router_id{YType::int32, "virtual-router-id"},
    tracked_interface_name{YType::str, "tracked-interface-name"},
    interface{YType::str, "interface"},
    virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"},
    tracked_item_type{YType::uint16, "tracked-item-type"},
    tracked_item_index{YType::str, "tracked-item-index"},
    state{YType::uint8, "state"},
    priority{YType::uint8, "priority"}
{

    yang_name = "track-item"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Ipv6::TrackItems::TrackItem::~TrackItem()
{
}

bool Vrrp::Ipv6::TrackItems::TrackItem::has_data() const
{
    return interface_name.is_set
	|| virtual_router_id.is_set
	|| tracked_interface_name.is_set
	|| interface.is_set
	|| virtual_router_id_xr.is_set
	|| tracked_item_type.is_set
	|| tracked_item_index.is_set
	|| state.is_set
	|| priority.is_set;
}

bool Vrrp::Ipv6::TrackItems::TrackItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| ydk::is_set(tracked_interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(virtual_router_id_xr.yfilter)
	|| ydk::is_set(tracked_item_type.yfilter)
	|| ydk::is_set(tracked_item_index.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Ipv6::TrackItems::TrackItem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/track-items/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv6::TrackItems::TrackItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-item" <<"[interface-name='" <<interface_name <<"']" <<"[virtual-router-id='" <<virtual_router_id <<"']" <<"[tracked-interface-name='" <<tracked_interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::TrackItems::TrackItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.yfilter)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.yfilter)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());
    if (tracked_item_type.is_set || is_set(tracked_item_type.yfilter)) leaf_name_data.push_back(tracked_item_type.get_name_leafdata());
    if (tracked_item_index.is_set || is_set(tracked_item_index.yfilter)) leaf_name_data.push_back(tracked_item_index.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::TrackItems::TrackItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::TrackItems::TrackItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv6::TrackItems::TrackItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
        tracked_interface_name.value_namespace = name_space;
        tracked_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
        virtual_router_id_xr.value_namespace = name_space;
        virtual_router_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-type")
    {
        tracked_item_type = value;
        tracked_item_type.value_namespace = name_space;
        tracked_item_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-index")
    {
        tracked_item_index = value;
        tracked_item_index.value_namespace = name_space;
        tracked_item_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::TrackItems::TrackItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr.yfilter = yfilter;
    }
    if(value_path == "tracked-item-type")
    {
        tracked_item_type.yfilter = yfilter;
    }
    if(value_path == "tracked-item-index")
    {
        tracked_item_index.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::TrackItems::TrackItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "virtual-router-id" || name == "tracked-interface-name" || name == "interface" || name == "virtual-router-id-xr" || name == "tracked-item-type" || name == "tracked-item-index" || name == "state" || name == "priority")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouters()
{

    yang_name = "virtual-routers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::Ipv6::VirtualRouters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv6::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv6::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv6::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv6::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    interface_name{YType::str, "interface-name"},
    virtual_router_id{YType::int32, "virtual-router-id"},
    interface_name_xr{YType::str, "interface-name-xr"},
    virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"},
    version{YType::uint8, "version"},
    address_family{YType::enumeration, "address-family"},
    session_name{YType::str, "session-name"},
    slaves{YType::uint32, "slaves"},
    is_slave{YType::boolean, "is-slave"},
    followed_session_name{YType::str, "followed-session-name"},
    secondary_address_count{YType::uint8, "secondary-address-count"},
    operational_address_count{YType::uint8, "operational-address-count"},
    primary_virtual_ip{YType::str, "primary-virtual-ip"},
    configured_down_address_count{YType::uint8, "configured-down-address-count"},
    virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
    primary_state{YType::enumeration, "primary-state"},
    master_ip_address{YType::str, "master-ip-address"},
    master_ipv6_address{YType::str, "master-ipv6-address"},
    master_priority{YType::uint8, "master-priority"},
    vrrp_state{YType::enumeration, "vrrp-state"},
    authentication_type{YType::enumeration, "authentication-type"},
    authentication_string{YType::str, "authentication-string"},
    configured_advertize_time{YType::uint32, "configured-advertize-time"},
    oper_advertize_time{YType::uint32, "oper-advertize-time"},
    min_delay_time{YType::uint32, "min-delay-time"},
    reload_delay_time{YType::uint32, "reload-delay-time"},
    delay_timer_flag{YType::boolean, "delay-timer-flag"},
    delay_timer_secs{YType::uint32, "delay-timer-secs"},
    delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
    authentication_flag{YType::boolean, "authentication-flag"},
    force_timer_flag{YType::boolean, "force-timer-flag"},
    preempt_flag{YType::boolean, "preempt-flag"},
    ip_address_owner_flag{YType::boolean, "ip-address-owner-flag"},
    is_accept_mode{YType::boolean, "is-accept-mode"},
    preempt_delay_time{YType::uint16, "preempt-delay-time"},
    configured_priority{YType::uint8, "configured-priority"},
    operational_priority{YType::uint8, "operational-priority"},
    priority_decrement{YType::uint32, "priority-decrement"},
    tracked_interface_count{YType::uint32, "tracked-interface-count"},
    tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
    tracked_item_count{YType::uint32, "tracked-item-count"},
    tracked_item_up_count{YType::uint32, "tracked-item-up-count"},
    time_in_current_state{YType::uint32, "time-in-current-state"},
    state_change_count{YType::uint32, "state-change-count"},
    time_vrouter_up{YType::uint32, "time-vrouter-up"},
    master_count{YType::uint32, "master-count"},
    adverts_received_count{YType::uint32, "adverts-received-count"},
    advert_interval_error_count{YType::uint32, "advert-interval-error-count"},
    adverts_sent_count{YType::uint32, "adverts-sent-count"},
    authentication_fail_count{YType::uint32, "authentication-fail-count"},
    ttl_error_count{YType::uint32, "ttl-error-count"},
    priority_zero_received_count{YType::uint32, "priority-zero-received-count"},
    priority_zero_sent_count{YType::uint32, "priority-zero-sent-count"},
    invalid_packet_count{YType::uint32, "invalid-packet-count"},
    address_list_error_count{YType::uint32, "address-list-error-count"},
    invalid_auth_type_count{YType::uint32, "invalid-auth-type-count"},
    auth_type_mismatch_count{YType::uint32, "auth-type-mismatch-count"},
    pkt_length_errors_count{YType::uint32, "pkt-length-errors-count"},
    time_stats_discontinuity{YType::uint32, "time-stats-discontinuity"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_cfg_remote_ip{YType::str, "bfd-cfg-remote-ip"},
    bfd_configured_remote_ipv6_address{YType::str, "bfd-configured-remote-ipv6-address"},
    state_from_checkpoint{YType::boolean, "state-from-checkpoint"},
    interface_ipv4_address{YType::str, "interface-ipv4-address"},
    interface_ipv6_address{YType::str, "interface-ipv6-address"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"},
    operational_address{YType::str, "operational-address"},
    ipv4_configured_down_address{YType::str, "ipv4-configured-down-address"}
    	,
    resign_sent_time(std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime>())
	,resign_received_time(std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime>())
{
    resign_sent_time->parent = this;
    resign_received_time->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::has_data() const
{
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : operational_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| virtual_router_id.is_set
	|| interface_name_xr.is_set
	|| virtual_router_id_xr.is_set
	|| version.is_set
	|| address_family.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| is_slave.is_set
	|| followed_session_name.is_set
	|| secondary_address_count.is_set
	|| operational_address_count.is_set
	|| primary_virtual_ip.is_set
	|| configured_down_address_count.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| primary_state.is_set
	|| master_ip_address.is_set
	|| master_ipv6_address.is_set
	|| master_priority.is_set
	|| vrrp_state.is_set
	|| authentication_type.is_set
	|| authentication_string.is_set
	|| configured_advertize_time.is_set
	|| oper_advertize_time.is_set
	|| min_delay_time.is_set
	|| reload_delay_time.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_secs.is_set
	|| delay_timer_msecs.is_set
	|| authentication_flag.is_set
	|| force_timer_flag.is_set
	|| preempt_flag.is_set
	|| ip_address_owner_flag.is_set
	|| is_accept_mode.is_set
	|| preempt_delay_time.is_set
	|| configured_priority.is_set
	|| operational_priority.is_set
	|| priority_decrement.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| tracked_item_count.is_set
	|| tracked_item_up_count.is_set
	|| time_in_current_state.is_set
	|| state_change_count.is_set
	|| time_vrouter_up.is_set
	|| master_count.is_set
	|| adverts_received_count.is_set
	|| advert_interval_error_count.is_set
	|| adverts_sent_count.is_set
	|| authentication_fail_count.is_set
	|| ttl_error_count.is_set
	|| priority_zero_received_count.is_set
	|| priority_zero_sent_count.is_set
	|| invalid_packet_count.is_set
	|| address_list_error_count.is_set
	|| invalid_auth_type_count.is_set
	|| auth_type_mismatch_count.is_set
	|| pkt_length_errors_count.is_set
	|| time_stats_discontinuity.is_set
	|| bfd_session_state.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| bfd_cfg_remote_ip.is_set
	|| bfd_configured_remote_ipv6_address.is_set
	|| state_from_checkpoint.is_set
	|| interface_ipv4_address.is_set
	|| interface_ipv6_address.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_state.is_set
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data())
	|| (resign_received_time !=  nullptr && resign_received_time->has_data());
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::has_operation() const
{
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : operational_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(virtual_router_id_xr.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(slaves.yfilter)
	|| ydk::is_set(is_slave.yfilter)
	|| ydk::is_set(followed_session_name.yfilter)
	|| ydk::is_set(secondary_address_count.yfilter)
	|| ydk::is_set(operational_address_count.yfilter)
	|| ydk::is_set(primary_virtual_ip.yfilter)
	|| ydk::is_set(configured_down_address_count.yfilter)
	|| ydk::is_set(virtual_linklocal_ipv6_address.yfilter)
	|| ydk::is_set(primary_state.yfilter)
	|| ydk::is_set(master_ip_address.yfilter)
	|| ydk::is_set(master_ipv6_address.yfilter)
	|| ydk::is_set(master_priority.yfilter)
	|| ydk::is_set(vrrp_state.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(authentication_string.yfilter)
	|| ydk::is_set(configured_advertize_time.yfilter)
	|| ydk::is_set(oper_advertize_time.yfilter)
	|| ydk::is_set(min_delay_time.yfilter)
	|| ydk::is_set(reload_delay_time.yfilter)
	|| ydk::is_set(delay_timer_flag.yfilter)
	|| ydk::is_set(delay_timer_secs.yfilter)
	|| ydk::is_set(delay_timer_msecs.yfilter)
	|| ydk::is_set(authentication_flag.yfilter)
	|| ydk::is_set(force_timer_flag.yfilter)
	|| ydk::is_set(preempt_flag.yfilter)
	|| ydk::is_set(ip_address_owner_flag.yfilter)
	|| ydk::is_set(is_accept_mode.yfilter)
	|| ydk::is_set(preempt_delay_time.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(tracked_interface_count.yfilter)
	|| ydk::is_set(tracked_interface_up_count.yfilter)
	|| ydk::is_set(tracked_item_count.yfilter)
	|| ydk::is_set(tracked_item_up_count.yfilter)
	|| ydk::is_set(time_in_current_state.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| ydk::is_set(time_vrouter_up.yfilter)
	|| ydk::is_set(master_count.yfilter)
	|| ydk::is_set(adverts_received_count.yfilter)
	|| ydk::is_set(advert_interval_error_count.yfilter)
	|| ydk::is_set(adverts_sent_count.yfilter)
	|| ydk::is_set(authentication_fail_count.yfilter)
	|| ydk::is_set(ttl_error_count.yfilter)
	|| ydk::is_set(priority_zero_received_count.yfilter)
	|| ydk::is_set(priority_zero_sent_count.yfilter)
	|| ydk::is_set(invalid_packet_count.yfilter)
	|| ydk::is_set(address_list_error_count.yfilter)
	|| ydk::is_set(invalid_auth_type_count.yfilter)
	|| ydk::is_set(auth_type_mismatch_count.yfilter)
	|| ydk::is_set(pkt_length_errors_count.yfilter)
	|| ydk::is_set(time_stats_discontinuity.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_cfg_remote_ip.yfilter)
	|| ydk::is_set(bfd_configured_remote_ipv6_address.yfilter)
	|| ydk::is_set(state_from_checkpoint.yfilter)
	|| ydk::is_set(interface_ipv4_address.yfilter)
	|| ydk::is_set(interface_ipv6_address.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(virtual_mac_address_state.yfilter)
	|| ydk::is_set(operational_address.yfilter)
	|| ydk::is_set(ipv4_configured_down_address.yfilter)
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_operation())
	|| (resign_received_time !=  nullptr && resign_received_time->has_operation());
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/virtual-routers/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router" <<"[interface-name='" <<interface_name <<"']" <<"[virtual-router-id='" <<virtual_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.yfilter)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.yfilter)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.yfilter)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.yfilter)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (secondary_address_count.is_set || is_set(secondary_address_count.yfilter)) leaf_name_data.push_back(secondary_address_count.get_name_leafdata());
    if (operational_address_count.is_set || is_set(operational_address_count.yfilter)) leaf_name_data.push_back(operational_address_count.get_name_leafdata());
    if (primary_virtual_ip.is_set || is_set(primary_virtual_ip.yfilter)) leaf_name_data.push_back(primary_virtual_ip.get_name_leafdata());
    if (configured_down_address_count.is_set || is_set(configured_down_address_count.yfilter)) leaf_name_data.push_back(configured_down_address_count.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.yfilter)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (primary_state.is_set || is_set(primary_state.yfilter)) leaf_name_data.push_back(primary_state.get_name_leafdata());
    if (master_ip_address.is_set || is_set(master_ip_address.yfilter)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (master_ipv6_address.is_set || is_set(master_ipv6_address.yfilter)) leaf_name_data.push_back(master_ipv6_address.get_name_leafdata());
    if (master_priority.is_set || is_set(master_priority.yfilter)) leaf_name_data.push_back(master_priority.get_name_leafdata());
    if (vrrp_state.is_set || is_set(vrrp_state.yfilter)) leaf_name_data.push_back(vrrp_state.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (authentication_string.is_set || is_set(authentication_string.yfilter)) leaf_name_data.push_back(authentication_string.get_name_leafdata());
    if (configured_advertize_time.is_set || is_set(configured_advertize_time.yfilter)) leaf_name_data.push_back(configured_advertize_time.get_name_leafdata());
    if (oper_advertize_time.is_set || is_set(oper_advertize_time.yfilter)) leaf_name_data.push_back(oper_advertize_time.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.yfilter)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.yfilter)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.yfilter)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.yfilter)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.yfilter)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (authentication_flag.is_set || is_set(authentication_flag.yfilter)) leaf_name_data.push_back(authentication_flag.get_name_leafdata());
    if (force_timer_flag.is_set || is_set(force_timer_flag.yfilter)) leaf_name_data.push_back(force_timer_flag.get_name_leafdata());
    if (preempt_flag.is_set || is_set(preempt_flag.yfilter)) leaf_name_data.push_back(preempt_flag.get_name_leafdata());
    if (ip_address_owner_flag.is_set || is_set(ip_address_owner_flag.yfilter)) leaf_name_data.push_back(ip_address_owner_flag.get_name_leafdata());
    if (is_accept_mode.is_set || is_set(is_accept_mode.yfilter)) leaf_name_data.push_back(is_accept_mode.get_name_leafdata());
    if (preempt_delay_time.is_set || is_set(preempt_delay_time.yfilter)) leaf_name_data.push_back(preempt_delay_time.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.yfilter)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.yfilter)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (tracked_item_count.is_set || is_set(tracked_item_count.yfilter)) leaf_name_data.push_back(tracked_item_count.get_name_leafdata());
    if (tracked_item_up_count.is_set || is_set(tracked_item_up_count.yfilter)) leaf_name_data.push_back(tracked_item_up_count.get_name_leafdata());
    if (time_in_current_state.is_set || is_set(time_in_current_state.yfilter)) leaf_name_data.push_back(time_in_current_state.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (time_vrouter_up.is_set || is_set(time_vrouter_up.yfilter)) leaf_name_data.push_back(time_vrouter_up.get_name_leafdata());
    if (master_count.is_set || is_set(master_count.yfilter)) leaf_name_data.push_back(master_count.get_name_leafdata());
    if (adverts_received_count.is_set || is_set(adverts_received_count.yfilter)) leaf_name_data.push_back(adverts_received_count.get_name_leafdata());
    if (advert_interval_error_count.is_set || is_set(advert_interval_error_count.yfilter)) leaf_name_data.push_back(advert_interval_error_count.get_name_leafdata());
    if (adverts_sent_count.is_set || is_set(adverts_sent_count.yfilter)) leaf_name_data.push_back(adverts_sent_count.get_name_leafdata());
    if (authentication_fail_count.is_set || is_set(authentication_fail_count.yfilter)) leaf_name_data.push_back(authentication_fail_count.get_name_leafdata());
    if (ttl_error_count.is_set || is_set(ttl_error_count.yfilter)) leaf_name_data.push_back(ttl_error_count.get_name_leafdata());
    if (priority_zero_received_count.is_set || is_set(priority_zero_received_count.yfilter)) leaf_name_data.push_back(priority_zero_received_count.get_name_leafdata());
    if (priority_zero_sent_count.is_set || is_set(priority_zero_sent_count.yfilter)) leaf_name_data.push_back(priority_zero_sent_count.get_name_leafdata());
    if (invalid_packet_count.is_set || is_set(invalid_packet_count.yfilter)) leaf_name_data.push_back(invalid_packet_count.get_name_leafdata());
    if (address_list_error_count.is_set || is_set(address_list_error_count.yfilter)) leaf_name_data.push_back(address_list_error_count.get_name_leafdata());
    if (invalid_auth_type_count.is_set || is_set(invalid_auth_type_count.yfilter)) leaf_name_data.push_back(invalid_auth_type_count.get_name_leafdata());
    if (auth_type_mismatch_count.is_set || is_set(auth_type_mismatch_count.yfilter)) leaf_name_data.push_back(auth_type_mismatch_count.get_name_leafdata());
    if (pkt_length_errors_count.is_set || is_set(pkt_length_errors_count.yfilter)) leaf_name_data.push_back(pkt_length_errors_count.get_name_leafdata());
    if (time_stats_discontinuity.is_set || is_set(time_stats_discontinuity.yfilter)) leaf_name_data.push_back(time_stats_discontinuity.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_cfg_remote_ip.is_set || is_set(bfd_cfg_remote_ip.yfilter)) leaf_name_data.push_back(bfd_cfg_remote_ip.get_name_leafdata());
    if (bfd_configured_remote_ipv6_address.is_set || is_set(bfd_configured_remote_ipv6_address.yfilter)) leaf_name_data.push_back(bfd_configured_remote_ipv6_address.get_name_leafdata());
    if (state_from_checkpoint.is_set || is_set(state_from_checkpoint.yfilter)) leaf_name_data.push_back(state_from_checkpoint.get_name_leafdata());
    if (interface_ipv4_address.is_set || is_set(interface_ipv4_address.yfilter)) leaf_name_data.push_back(interface_ipv4_address.get_name_leafdata());
    if (interface_ipv6_address.is_set || is_set(interface_ipv6_address.yfilter)) leaf_name_data.push_back(interface_ipv6_address.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.yfilter)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());

    auto operational_address_name_datas = operational_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operational_address_name_datas.begin(), operational_address_name_datas.end());
    auto ipv4_configured_down_address_name_datas = ipv4_configured_down_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_configured_down_address_name_datas.begin(), ipv4_configured_down_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time == nullptr)
        {
            resign_sent_time = std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime>();
        }
        return resign_sent_time;
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time == nullptr)
        {
            resign_received_time = std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime>();
        }
        return resign_received_time;
    }

    if(child_yang_name == "ipv6-operational-address")
    {
        for(auto const & c : ipv6_operational_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress>();
        c->parent = this;
        ipv6_operational_address.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-configured-down-address")
    {
        for(auto const & c : ipv6_configured_down_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress>();
        c->parent = this;
        ipv6_configured_down_address.push_back(c);
        return c;
    }

    if(child_yang_name == "state-change-history")
    {
        for(auto const & c : state_change_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory>();
        c->parent = this;
        state_change_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resign_sent_time != nullptr)
    {
        children["resign-sent-time"] = resign_sent_time;
    }

    if(resign_received_time != nullptr)
    {
        children["resign-received-time"] = resign_received_time;
    }

    for (auto const & c : ipv6_operational_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_configured_down_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : state_change_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
        virtual_router_id_xr.value_namespace = name_space;
        virtual_router_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slaves")
    {
        slaves = value;
        slaves.value_namespace = name_space;
        slaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
        is_slave.value_namespace = name_space;
        is_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
        followed_session_name.value_namespace = name_space;
        followed_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-address-count")
    {
        secondary_address_count = value;
        secondary_address_count.value_namespace = name_space;
        secondary_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-address-count")
    {
        operational_address_count = value;
        operational_address_count.value_namespace = name_space;
        operational_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-virtual-ip")
    {
        primary_virtual_ip = value;
        primary_virtual_ip.value_namespace = name_space;
        primary_virtual_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-down-address-count")
    {
        configured_down_address_count = value;
        configured_down_address_count.value_namespace = name_space;
        configured_down_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
        virtual_linklocal_ipv6_address.value_namespace = name_space;
        virtual_linklocal_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-state")
    {
        primary_state = value;
        primary_state.value_namespace = name_space;
        primary_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
        master_ip_address.value_namespace = name_space;
        master_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-ipv6-address")
    {
        master_ipv6_address = value;
        master_ipv6_address.value_namespace = name_space;
        master_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-priority")
    {
        master_priority = value;
        master_priority.value_namespace = name_space;
        master_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state = value;
        vrrp_state.value_namespace = name_space;
        vrrp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-string")
    {
        authentication_string = value;
        authentication_string.value_namespace = name_space;
        authentication_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-advertize-time")
    {
        configured_advertize_time = value;
        configured_advertize_time.value_namespace = name_space;
        configured_advertize_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-advertize-time")
    {
        oper_advertize_time = value;
        oper_advertize_time.value_namespace = name_space;
        oper_advertize_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
        min_delay_time.value_namespace = name_space;
        min_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
        reload_delay_time.value_namespace = name_space;
        reload_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
        delay_timer_flag.value_namespace = name_space;
        delay_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
        delay_timer_secs.value_namespace = name_space;
        delay_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
        delay_timer_msecs.value_namespace = name_space;
        delay_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-flag")
    {
        authentication_flag = value;
        authentication_flag.value_namespace = name_space;
        authentication_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-timer-flag")
    {
        force_timer_flag = value;
        force_timer_flag.value_namespace = name_space;
        force_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-flag")
    {
        preempt_flag = value;
        preempt_flag.value_namespace = name_space;
        preempt_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-owner-flag")
    {
        ip_address_owner_flag = value;
        ip_address_owner_flag.value_namespace = name_space;
        ip_address_owner_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-accept-mode")
    {
        is_accept_mode = value;
        is_accept_mode.value_namespace = name_space;
        is_accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay-time")
    {
        preempt_delay_time = value;
        preempt_delay_time.value_namespace = name_space;
        preempt_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
        tracked_interface_count.value_namespace = name_space;
        tracked_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
        tracked_interface_up_count.value_namespace = name_space;
        tracked_interface_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-count")
    {
        tracked_item_count = value;
        tracked_item_count.value_namespace = name_space;
        tracked_item_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-up-count")
    {
        tracked_item_up_count = value;
        tracked_item_up_count.value_namespace = name_space;
        tracked_item_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-current-state")
    {
        time_in_current_state = value;
        time_in_current_state.value_namespace = name_space;
        time_in_current_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-vrouter-up")
    {
        time_vrouter_up = value;
        time_vrouter_up.value_namespace = name_space;
        time_vrouter_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-count")
    {
        master_count = value;
        master_count.value_namespace = name_space;
        master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adverts-received-count")
    {
        adverts_received_count = value;
        adverts_received_count.value_namespace = name_space;
        adverts_received_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert-interval-error-count")
    {
        advert_interval_error_count = value;
        advert_interval_error_count.value_namespace = name_space;
        advert_interval_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adverts-sent-count")
    {
        adverts_sent_count = value;
        adverts_sent_count.value_namespace = name_space;
        adverts_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-fail-count")
    {
        authentication_fail_count = value;
        authentication_fail_count.value_namespace = name_space;
        authentication_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-error-count")
    {
        ttl_error_count = value;
        ttl_error_count.value_namespace = name_space;
        ttl_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-zero-received-count")
    {
        priority_zero_received_count = value;
        priority_zero_received_count.value_namespace = name_space;
        priority_zero_received_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-zero-sent-count")
    {
        priority_zero_sent_count = value;
        priority_zero_sent_count.value_namespace = name_space;
        priority_zero_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packet-count")
    {
        invalid_packet_count = value;
        invalid_packet_count.value_namespace = name_space;
        invalid_packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-list-error-count")
    {
        address_list_error_count = value;
        address_list_error_count.value_namespace = name_space;
        address_list_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-auth-type-count")
    {
        invalid_auth_type_count = value;
        invalid_auth_type_count.value_namespace = name_space;
        invalid_auth_type_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type-mismatch-count")
    {
        auth_type_mismatch_count = value;
        auth_type_mismatch_count.value_namespace = name_space;
        auth_type_mismatch_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-length-errors-count")
    {
        pkt_length_errors_count = value;
        pkt_length_errors_count.value_namespace = name_space;
        pkt_length_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stats-discontinuity")
    {
        time_stats_discontinuity = value;
        time_stats_discontinuity.value_namespace = name_space;
        time_stats_discontinuity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-cfg-remote-ip")
    {
        bfd_cfg_remote_ip = value;
        bfd_cfg_remote_ip.value_namespace = name_space;
        bfd_cfg_remote_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-configured-remote-ipv6-address")
    {
        bfd_configured_remote_ipv6_address = value;
        bfd_configured_remote_ipv6_address.value_namespace = name_space;
        bfd_configured_remote_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-from-checkpoint")
    {
        state_from_checkpoint = value;
        state_from_checkpoint.value_namespace = name_space;
        state_from_checkpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ipv4-address")
    {
        interface_ipv4_address = value;
        interface_ipv4_address.value_namespace = name_space;
        interface_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ipv6-address")
    {
        interface_ipv6_address = value;
        interface_ipv6_address.value_namespace = name_space;
        interface_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
        virtual_mac_address_state.value_namespace = name_space;
        virtual_mac_address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-address")
    {
        operational_address.append(value);
    }
    if(value_path == "ipv4-configured-down-address")
    {
        ipv4_configured_down_address.append(value);
    }
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "slaves")
    {
        slaves.yfilter = yfilter;
    }
    if(value_path == "is-slave")
    {
        is_slave.yfilter = yfilter;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name.yfilter = yfilter;
    }
    if(value_path == "secondary-address-count")
    {
        secondary_address_count.yfilter = yfilter;
    }
    if(value_path == "operational-address-count")
    {
        operational_address_count.yfilter = yfilter;
    }
    if(value_path == "primary-virtual-ip")
    {
        primary_virtual_ip.yfilter = yfilter;
    }
    if(value_path == "configured-down-address-count")
    {
        configured_down_address_count.yfilter = yfilter;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "primary-state")
    {
        primary_state.yfilter = yfilter;
    }
    if(value_path == "master-ip-address")
    {
        master_ip_address.yfilter = yfilter;
    }
    if(value_path == "master-ipv6-address")
    {
        master_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "master-priority")
    {
        master_priority.yfilter = yfilter;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "authentication-string")
    {
        authentication_string.yfilter = yfilter;
    }
    if(value_path == "configured-advertize-time")
    {
        configured_advertize_time.yfilter = yfilter;
    }
    if(value_path == "oper-advertize-time")
    {
        oper_advertize_time.yfilter = yfilter;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time.yfilter = yfilter;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time.yfilter = yfilter;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag.yfilter = yfilter;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs.yfilter = yfilter;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "authentication-flag")
    {
        authentication_flag.yfilter = yfilter;
    }
    if(value_path == "force-timer-flag")
    {
        force_timer_flag.yfilter = yfilter;
    }
    if(value_path == "preempt-flag")
    {
        preempt_flag.yfilter = yfilter;
    }
    if(value_path == "ip-address-owner-flag")
    {
        ip_address_owner_flag.yfilter = yfilter;
    }
    if(value_path == "is-accept-mode")
    {
        is_accept_mode.yfilter = yfilter;
    }
    if(value_path == "preempt-delay-time")
    {
        preempt_delay_time.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count.yfilter = yfilter;
    }
    if(value_path == "tracked-item-count")
    {
        tracked_item_count.yfilter = yfilter;
    }
    if(value_path == "tracked-item-up-count")
    {
        tracked_item_up_count.yfilter = yfilter;
    }
    if(value_path == "time-in-current-state")
    {
        time_in_current_state.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
    if(value_path == "time-vrouter-up")
    {
        time_vrouter_up.yfilter = yfilter;
    }
    if(value_path == "master-count")
    {
        master_count.yfilter = yfilter;
    }
    if(value_path == "adverts-received-count")
    {
        adverts_received_count.yfilter = yfilter;
    }
    if(value_path == "advert-interval-error-count")
    {
        advert_interval_error_count.yfilter = yfilter;
    }
    if(value_path == "adverts-sent-count")
    {
        adverts_sent_count.yfilter = yfilter;
    }
    if(value_path == "authentication-fail-count")
    {
        authentication_fail_count.yfilter = yfilter;
    }
    if(value_path == "ttl-error-count")
    {
        ttl_error_count.yfilter = yfilter;
    }
    if(value_path == "priority-zero-received-count")
    {
        priority_zero_received_count.yfilter = yfilter;
    }
    if(value_path == "priority-zero-sent-count")
    {
        priority_zero_sent_count.yfilter = yfilter;
    }
    if(value_path == "invalid-packet-count")
    {
        invalid_packet_count.yfilter = yfilter;
    }
    if(value_path == "address-list-error-count")
    {
        address_list_error_count.yfilter = yfilter;
    }
    if(value_path == "invalid-auth-type-count")
    {
        invalid_auth_type_count.yfilter = yfilter;
    }
    if(value_path == "auth-type-mismatch-count")
    {
        auth_type_mismatch_count.yfilter = yfilter;
    }
    if(value_path == "pkt-length-errors-count")
    {
        pkt_length_errors_count.yfilter = yfilter;
    }
    if(value_path == "time-stats-discontinuity")
    {
        time_stats_discontinuity.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-cfg-remote-ip")
    {
        bfd_cfg_remote_ip.yfilter = yfilter;
    }
    if(value_path == "bfd-configured-remote-ipv6-address")
    {
        bfd_configured_remote_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "state-from-checkpoint")
    {
        state_from_checkpoint.yfilter = yfilter;
    }
    if(value_path == "interface-ipv4-address")
    {
        interface_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "interface-ipv6-address")
    {
        interface_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state.yfilter = yfilter;
    }
    if(value_path == "operational-address")
    {
        operational_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-configured-down-address")
    {
        ipv4_configured_down_address.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resign-sent-time" || name == "resign-received-time" || name == "ipv6-operational-address" || name == "ipv6-configured-down-address" || name == "state-change-history" || name == "interface-name" || name == "virtual-router-id" || name == "interface-name-xr" || name == "virtual-router-id-xr" || name == "version" || name == "address-family" || name == "session-name" || name == "slaves" || name == "is-slave" || name == "followed-session-name" || name == "secondary-address-count" || name == "operational-address-count" || name == "primary-virtual-ip" || name == "configured-down-address-count" || name == "virtual-linklocal-ipv6-address" || name == "primary-state" || name == "master-ip-address" || name == "master-ipv6-address" || name == "master-priority" || name == "vrrp-state" || name == "authentication-type" || name == "authentication-string" || name == "configured-advertize-time" || name == "oper-advertize-time" || name == "min-delay-time" || name == "reload-delay-time" || name == "delay-timer-flag" || name == "delay-timer-secs" || name == "delay-timer-msecs" || name == "authentication-flag" || name == "force-timer-flag" || name == "preempt-flag" || name == "ip-address-owner-flag" || name == "is-accept-mode" || name == "preempt-delay-time" || name == "configured-priority" || name == "operational-priority" || name == "priority-decrement" || name == "tracked-interface-count" || name == "tracked-interface-up-count" || name == "tracked-item-count" || name == "tracked-item-up-count" || name == "time-in-current-state" || name == "state-change-count" || name == "time-vrouter-up" || name == "master-count" || name == "adverts-received-count" || name == "advert-interval-error-count" || name == "adverts-sent-count" || name == "authentication-fail-count" || name == "ttl-error-count" || name == "priority-zero-received-count" || name == "priority-zero-sent-count" || name == "invalid-packet-count" || name == "address-list-error-count" || name == "invalid-auth-type-count" || name == "auth-type-mismatch-count" || name == "pkt-length-errors-count" || name == "time-stats-discontinuity" || name == "bfd-session-state" || name == "bfd-interval" || name == "bfd-multiplier" || name == "bfd-cfg-remote-ip" || name == "bfd-configured-remote-ipv6-address" || name == "state-from-checkpoint" || name == "interface-ipv4-address" || name == "interface-ipv6-address" || name == "virtual-mac-address" || name == "virtual-mac-address-state" || name == "operational-address" || name == "ipv4-configured-down-address")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::ResignSentTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-sent-time"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::~ResignSentTime()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::ResignReceivedTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-received-time"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::Ipv6OperationalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-operational-address"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-operational-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::Ipv6ConfiguredDownAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-configured-down-address"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-configured-down-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::StateChangeHistory()
    :
    old_state{YType::enumeration, "old-state"},
    new_state{YType::enumeration, "new-state"},
    reason{YType::enumeration, "reason"}
    	,
    time(std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time>())
{
    time->parent = this;

    yang_name = "state-change-history"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::~StateChangeHistory()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::has_data() const
{
    return old_state.is_set
	|| new_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(old_state.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (old_state.is_set || is_set(old_state.yfilter)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "old-state")
    {
        old_state = value;
        old_state.value_namespace = name_space;
        old_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "old-state")
    {
        old_state.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "old-state" || name == "new-state" || name == "reason")
        return true;
    return false;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::Time()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "time"; yang_parent_name = "state-change-history"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::~Time()
{
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Vrrp::Ipv6::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::Ipv6::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv6::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv6::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv6::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Vrrp::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    invalid_checksum_count{YType::uint32, "invalid-checksum-count"},
    invalid_version_count{YType::uint32, "invalid-version-count"},
    invalid_vrid_count{YType::uint32, "invalid-vrid-count"},
    invalid_packet_length_count{YType::uint32, "invalid-packet-length-count"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Vrrp::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface.is_set
	|| invalid_checksum_count.is_set
	|| invalid_version_count.is_set
	|| invalid_vrid_count.is_set
	|| invalid_packet_length_count.is_set;
}

bool Vrrp::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(invalid_checksum_count.yfilter)
	|| ydk::is_set(invalid_version_count.yfilter)
	|| ydk::is_set(invalid_vrid_count.yfilter)
	|| ydk::is_set(invalid_packet_length_count.yfilter);
}

std::string Vrrp::Ipv6::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv6/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv6::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_checksum_count.is_set || is_set(invalid_checksum_count.yfilter)) leaf_name_data.push_back(invalid_checksum_count.get_name_leafdata());
    if (invalid_version_count.is_set || is_set(invalid_version_count.yfilter)) leaf_name_data.push_back(invalid_version_count.get_name_leafdata());
    if (invalid_vrid_count.is_set || is_set(invalid_vrid_count.yfilter)) leaf_name_data.push_back(invalid_vrid_count.get_name_leafdata());
    if (invalid_packet_length_count.is_set || is_set(invalid_packet_length_count.yfilter)) leaf_name_data.push_back(invalid_packet_length_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv6::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-checksum-count")
    {
        invalid_checksum_count = value;
        invalid_checksum_count.value_namespace = name_space;
        invalid_checksum_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-version-count")
    {
        invalid_version_count = value;
        invalid_version_count.value_namespace = name_space;
        invalid_version_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-vrid-count")
    {
        invalid_vrid_count = value;
        invalid_vrid_count.value_namespace = name_space;
        invalid_vrid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packet-length-count")
    {
        invalid_packet_length_count = value;
        invalid_packet_length_count.value_namespace = name_space;
        invalid_packet_length_count.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv6::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "invalid-checksum-count")
    {
        invalid_checksum_count.yfilter = yfilter;
    }
    if(value_path == "invalid-version-count")
    {
        invalid_version_count.yfilter = yfilter;
    }
    if(value_path == "invalid-vrid-count")
    {
        invalid_vrid_count.yfilter = yfilter;
    }
    if(value_path == "invalid-packet-length-count")
    {
        invalid_packet_length_count.yfilter = yfilter;
    }
}

bool Vrrp::Ipv6::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface" || name == "invalid-checksum-count" || name == "invalid-version-count" || name == "invalid-vrid-count" || name == "invalid-packet-length-count")
        return true;
    return false;
}

Vrrp::Ipv4::Ipv4()
    :
    interfaces(std::make_shared<Vrrp::Ipv4::Interfaces>())
	,track_items(std::make_shared<Vrrp::Ipv4::TrackItems>())
	,virtual_routers(std::make_shared<Vrrp::Ipv4::VirtualRouters>())
{
    interfaces->parent = this;
    track_items->parent = this;
    virtual_routers->parent = this;

    yang_name = "ipv4"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (track_items !=  nullptr && track_items->has_operation())
	|| (virtual_routers !=  nullptr && virtual_routers->has_operation());
}

std::string Vrrp::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Vrrp::Ipv4::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "track-items")
    {
        if(track_items == nullptr)
        {
            track_items = std::make_shared<Vrrp::Ipv4::TrackItems>();
        }
        return track_items;
    }

    if(child_yang_name == "virtual-routers")
    {
        if(virtual_routers == nullptr)
        {
            virtual_routers = std::make_shared<Vrrp::Ipv4::VirtualRouters>();
        }
        return virtual_routers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(track_items != nullptr)
    {
        children["track-items"] = track_items;
    }

    if(virtual_routers != nullptr)
    {
        children["virtual-routers"] = virtual_routers;
    }

    return children;
}

void Vrrp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "track-items" || name == "virtual-routers")
        return true;
    return false;
}

Vrrp::Ipv4::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::Ipv4::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv4::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv4::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv4::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Vrrp::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    invalid_checksum_count{YType::uint32, "invalid-checksum-count"},
    invalid_version_count{YType::uint32, "invalid-version-count"},
    invalid_vrid_count{YType::uint32, "invalid-vrid-count"},
    invalid_packet_length_count{YType::uint32, "invalid-packet-length-count"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Vrrp::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface.is_set
	|| invalid_checksum_count.is_set
	|| invalid_version_count.is_set
	|| invalid_vrid_count.is_set
	|| invalid_packet_length_count.is_set;
}

bool Vrrp::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(invalid_checksum_count.yfilter)
	|| ydk::is_set(invalid_version_count.yfilter)
	|| ydk::is_set(invalid_vrid_count.yfilter)
	|| ydk::is_set(invalid_packet_length_count.yfilter);
}

std::string Vrrp::Ipv4::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_checksum_count.is_set || is_set(invalid_checksum_count.yfilter)) leaf_name_data.push_back(invalid_checksum_count.get_name_leafdata());
    if (invalid_version_count.is_set || is_set(invalid_version_count.yfilter)) leaf_name_data.push_back(invalid_version_count.get_name_leafdata());
    if (invalid_vrid_count.is_set || is_set(invalid_vrid_count.yfilter)) leaf_name_data.push_back(invalid_vrid_count.get_name_leafdata());
    if (invalid_packet_length_count.is_set || is_set(invalid_packet_length_count.yfilter)) leaf_name_data.push_back(invalid_packet_length_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-checksum-count")
    {
        invalid_checksum_count = value;
        invalid_checksum_count.value_namespace = name_space;
        invalid_checksum_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-version-count")
    {
        invalid_version_count = value;
        invalid_version_count.value_namespace = name_space;
        invalid_version_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-vrid-count")
    {
        invalid_vrid_count = value;
        invalid_vrid_count.value_namespace = name_space;
        invalid_vrid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packet-length-count")
    {
        invalid_packet_length_count = value;
        invalid_packet_length_count.value_namespace = name_space;
        invalid_packet_length_count.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "invalid-checksum-count")
    {
        invalid_checksum_count.yfilter = yfilter;
    }
    if(value_path == "invalid-version-count")
    {
        invalid_version_count.yfilter = yfilter;
    }
    if(value_path == "invalid-vrid-count")
    {
        invalid_vrid_count.yfilter = yfilter;
    }
    if(value_path == "invalid-packet-length-count")
    {
        invalid_packet_length_count.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface" || name == "invalid-checksum-count" || name == "invalid-version-count" || name == "invalid-vrid-count" || name == "invalid-packet-length-count")
        return true;
    return false;
}

Vrrp::Ipv4::TrackItems::TrackItems()
{

    yang_name = "track-items"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::Ipv4::TrackItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv4::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::TrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-item")
    {
        for(auto const & c : track_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv4::TrackItems::TrackItem>();
        c->parent = this;
        track_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::TrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : track_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv4::TrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv4::TrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv4::TrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-item")
        return true;
    return false;
}

Vrrp::Ipv4::TrackItems::TrackItem::TrackItem()
    :
    interface_name{YType::str, "interface-name"},
    virtual_router_id{YType::int32, "virtual-router-id"},
    tracked_interface_name{YType::str, "tracked-interface-name"},
    interface{YType::str, "interface"},
    virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"},
    tracked_item_type{YType::uint16, "tracked-item-type"},
    tracked_item_index{YType::str, "tracked-item-index"},
    state{YType::uint8, "state"},
    priority{YType::uint8, "priority"}
{

    yang_name = "track-item"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Ipv4::TrackItems::TrackItem::~TrackItem()
{
}

bool Vrrp::Ipv4::TrackItems::TrackItem::has_data() const
{
    return interface_name.is_set
	|| virtual_router_id.is_set
	|| tracked_interface_name.is_set
	|| interface.is_set
	|| virtual_router_id_xr.is_set
	|| tracked_item_type.is_set
	|| tracked_item_index.is_set
	|| state.is_set
	|| priority.is_set;
}

bool Vrrp::Ipv4::TrackItems::TrackItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| ydk::is_set(tracked_interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(virtual_router_id_xr.yfilter)
	|| ydk::is_set(tracked_item_type.yfilter)
	|| ydk::is_set(tracked_item_index.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Vrrp::Ipv4::TrackItems::TrackItem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/track-items/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv4::TrackItems::TrackItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-item" <<"[interface-name='" <<interface_name <<"']" <<"[virtual-router-id='" <<virtual_router_id <<"']" <<"[tracked-interface-name='" <<tracked_interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::TrackItems::TrackItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.yfilter)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.yfilter)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());
    if (tracked_item_type.is_set || is_set(tracked_item_type.yfilter)) leaf_name_data.push_back(tracked_item_type.get_name_leafdata());
    if (tracked_item_index.is_set || is_set(tracked_item_index.yfilter)) leaf_name_data.push_back(tracked_item_index.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::TrackItems::TrackItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::TrackItems::TrackItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv4::TrackItems::TrackItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
        tracked_interface_name.value_namespace = name_space;
        tracked_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
        virtual_router_id_xr.value_namespace = name_space;
        virtual_router_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-type")
    {
        tracked_item_type = value;
        tracked_item_type.value_namespace = name_space;
        tracked_item_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-index")
    {
        tracked_item_index = value;
        tracked_item_index.value_namespace = name_space;
        tracked_item_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::TrackItems::TrackItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr.yfilter = yfilter;
    }
    if(value_path == "tracked-item-type")
    {
        tracked_item_type.yfilter = yfilter;
    }
    if(value_path == "tracked-item-index")
    {
        tracked_item_index.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::TrackItems::TrackItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "virtual-router-id" || name == "tracked-interface-name" || name == "interface" || name == "virtual-router-id-xr" || name == "tracked-item-type" || name == "tracked-item-index" || name == "state" || name == "priority")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouters()
{

    yang_name = "virtual-routers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::Ipv4::VirtualRouters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv4::VirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-router")
    {
        for(auto const & c : virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter>();
        c->parent = this;
        virtual_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv4::VirtualRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::Ipv4::VirtualRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::Ipv4::VirtualRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-router")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::VirtualRouter()
    :
    interface_name{YType::str, "interface-name"},
    virtual_router_id{YType::int32, "virtual-router-id"},
    interface_name_xr{YType::str, "interface-name-xr"},
    virtual_router_id_xr{YType::uint32, "virtual-router-id-xr"},
    version{YType::uint8, "version"},
    address_family{YType::enumeration, "address-family"},
    session_name{YType::str, "session-name"},
    slaves{YType::uint32, "slaves"},
    is_slave{YType::boolean, "is-slave"},
    followed_session_name{YType::str, "followed-session-name"},
    secondary_address_count{YType::uint8, "secondary-address-count"},
    operational_address_count{YType::uint8, "operational-address-count"},
    primary_virtual_ip{YType::str, "primary-virtual-ip"},
    configured_down_address_count{YType::uint8, "configured-down-address-count"},
    virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
    primary_state{YType::enumeration, "primary-state"},
    master_ip_address{YType::str, "master-ip-address"},
    master_ipv6_address{YType::str, "master-ipv6-address"},
    master_priority{YType::uint8, "master-priority"},
    vrrp_state{YType::enumeration, "vrrp-state"},
    authentication_type{YType::enumeration, "authentication-type"},
    authentication_string{YType::str, "authentication-string"},
    configured_advertize_time{YType::uint32, "configured-advertize-time"},
    oper_advertize_time{YType::uint32, "oper-advertize-time"},
    min_delay_time{YType::uint32, "min-delay-time"},
    reload_delay_time{YType::uint32, "reload-delay-time"},
    delay_timer_flag{YType::boolean, "delay-timer-flag"},
    delay_timer_secs{YType::uint32, "delay-timer-secs"},
    delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
    authentication_flag{YType::boolean, "authentication-flag"},
    force_timer_flag{YType::boolean, "force-timer-flag"},
    preempt_flag{YType::boolean, "preempt-flag"},
    ip_address_owner_flag{YType::boolean, "ip-address-owner-flag"},
    is_accept_mode{YType::boolean, "is-accept-mode"},
    preempt_delay_time{YType::uint16, "preempt-delay-time"},
    configured_priority{YType::uint8, "configured-priority"},
    operational_priority{YType::uint8, "operational-priority"},
    priority_decrement{YType::uint32, "priority-decrement"},
    tracked_interface_count{YType::uint32, "tracked-interface-count"},
    tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
    tracked_item_count{YType::uint32, "tracked-item-count"},
    tracked_item_up_count{YType::uint32, "tracked-item-up-count"},
    time_in_current_state{YType::uint32, "time-in-current-state"},
    state_change_count{YType::uint32, "state-change-count"},
    time_vrouter_up{YType::uint32, "time-vrouter-up"},
    master_count{YType::uint32, "master-count"},
    adverts_received_count{YType::uint32, "adverts-received-count"},
    advert_interval_error_count{YType::uint32, "advert-interval-error-count"},
    adverts_sent_count{YType::uint32, "adverts-sent-count"},
    authentication_fail_count{YType::uint32, "authentication-fail-count"},
    ttl_error_count{YType::uint32, "ttl-error-count"},
    priority_zero_received_count{YType::uint32, "priority-zero-received-count"},
    priority_zero_sent_count{YType::uint32, "priority-zero-sent-count"},
    invalid_packet_count{YType::uint32, "invalid-packet-count"},
    address_list_error_count{YType::uint32, "address-list-error-count"},
    invalid_auth_type_count{YType::uint32, "invalid-auth-type-count"},
    auth_type_mismatch_count{YType::uint32, "auth-type-mismatch-count"},
    pkt_length_errors_count{YType::uint32, "pkt-length-errors-count"},
    time_stats_discontinuity{YType::uint32, "time-stats-discontinuity"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_cfg_remote_ip{YType::str, "bfd-cfg-remote-ip"},
    bfd_configured_remote_ipv6_address{YType::str, "bfd-configured-remote-ipv6-address"},
    state_from_checkpoint{YType::boolean, "state-from-checkpoint"},
    interface_ipv4_address{YType::str, "interface-ipv4-address"},
    interface_ipv6_address{YType::str, "interface-ipv6-address"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"},
    operational_address{YType::str, "operational-address"},
    ipv4_configured_down_address{YType::str, "ipv4-configured-down-address"}
    	,
    resign_sent_time(std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime>())
	,resign_received_time(std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime>())
{
    resign_sent_time->parent = this;
    resign_received_time->parent = this;

    yang_name = "virtual-router"; yang_parent_name = "virtual-routers"; is_top_level_class = false; has_list_ancestor = false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::~VirtualRouter()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::has_data() const
{
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : operational_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| virtual_router_id.is_set
	|| interface_name_xr.is_set
	|| virtual_router_id_xr.is_set
	|| version.is_set
	|| address_family.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| is_slave.is_set
	|| followed_session_name.is_set
	|| secondary_address_count.is_set
	|| operational_address_count.is_set
	|| primary_virtual_ip.is_set
	|| configured_down_address_count.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| primary_state.is_set
	|| master_ip_address.is_set
	|| master_ipv6_address.is_set
	|| master_priority.is_set
	|| vrrp_state.is_set
	|| authentication_type.is_set
	|| authentication_string.is_set
	|| configured_advertize_time.is_set
	|| oper_advertize_time.is_set
	|| min_delay_time.is_set
	|| reload_delay_time.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_secs.is_set
	|| delay_timer_msecs.is_set
	|| authentication_flag.is_set
	|| force_timer_flag.is_set
	|| preempt_flag.is_set
	|| ip_address_owner_flag.is_set
	|| is_accept_mode.is_set
	|| preempt_delay_time.is_set
	|| configured_priority.is_set
	|| operational_priority.is_set
	|| priority_decrement.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| tracked_item_count.is_set
	|| tracked_item_up_count.is_set
	|| time_in_current_state.is_set
	|| state_change_count.is_set
	|| time_vrouter_up.is_set
	|| master_count.is_set
	|| adverts_received_count.is_set
	|| advert_interval_error_count.is_set
	|| adverts_sent_count.is_set
	|| authentication_fail_count.is_set
	|| ttl_error_count.is_set
	|| priority_zero_received_count.is_set
	|| priority_zero_sent_count.is_set
	|| invalid_packet_count.is_set
	|| address_list_error_count.is_set
	|| invalid_auth_type_count.is_set
	|| auth_type_mismatch_count.is_set
	|| pkt_length_errors_count.is_set
	|| time_stats_discontinuity.is_set
	|| bfd_session_state.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| bfd_cfg_remote_ip.is_set
	|| bfd_configured_remote_ipv6_address.is_set
	|| state_from_checkpoint.is_set
	|| interface_ipv4_address.is_set
	|| interface_ipv6_address.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_state.is_set
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data())
	|| (resign_received_time !=  nullptr && resign_received_time->has_data());
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::has_operation() const
{
    for (std::size_t index=0; index<ipv6_operational_address.size(); index++)
    {
        if(ipv6_operational_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_configured_down_address.size(); index++)
    {
        if(ipv6_configured_down_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : operational_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_configured_down_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(virtual_router_id.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(virtual_router_id_xr.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(slaves.yfilter)
	|| ydk::is_set(is_slave.yfilter)
	|| ydk::is_set(followed_session_name.yfilter)
	|| ydk::is_set(secondary_address_count.yfilter)
	|| ydk::is_set(operational_address_count.yfilter)
	|| ydk::is_set(primary_virtual_ip.yfilter)
	|| ydk::is_set(configured_down_address_count.yfilter)
	|| ydk::is_set(virtual_linklocal_ipv6_address.yfilter)
	|| ydk::is_set(primary_state.yfilter)
	|| ydk::is_set(master_ip_address.yfilter)
	|| ydk::is_set(master_ipv6_address.yfilter)
	|| ydk::is_set(master_priority.yfilter)
	|| ydk::is_set(vrrp_state.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(authentication_string.yfilter)
	|| ydk::is_set(configured_advertize_time.yfilter)
	|| ydk::is_set(oper_advertize_time.yfilter)
	|| ydk::is_set(min_delay_time.yfilter)
	|| ydk::is_set(reload_delay_time.yfilter)
	|| ydk::is_set(delay_timer_flag.yfilter)
	|| ydk::is_set(delay_timer_secs.yfilter)
	|| ydk::is_set(delay_timer_msecs.yfilter)
	|| ydk::is_set(authentication_flag.yfilter)
	|| ydk::is_set(force_timer_flag.yfilter)
	|| ydk::is_set(preempt_flag.yfilter)
	|| ydk::is_set(ip_address_owner_flag.yfilter)
	|| ydk::is_set(is_accept_mode.yfilter)
	|| ydk::is_set(preempt_delay_time.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(tracked_interface_count.yfilter)
	|| ydk::is_set(tracked_interface_up_count.yfilter)
	|| ydk::is_set(tracked_item_count.yfilter)
	|| ydk::is_set(tracked_item_up_count.yfilter)
	|| ydk::is_set(time_in_current_state.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| ydk::is_set(time_vrouter_up.yfilter)
	|| ydk::is_set(master_count.yfilter)
	|| ydk::is_set(adverts_received_count.yfilter)
	|| ydk::is_set(advert_interval_error_count.yfilter)
	|| ydk::is_set(adverts_sent_count.yfilter)
	|| ydk::is_set(authentication_fail_count.yfilter)
	|| ydk::is_set(ttl_error_count.yfilter)
	|| ydk::is_set(priority_zero_received_count.yfilter)
	|| ydk::is_set(priority_zero_sent_count.yfilter)
	|| ydk::is_set(invalid_packet_count.yfilter)
	|| ydk::is_set(address_list_error_count.yfilter)
	|| ydk::is_set(invalid_auth_type_count.yfilter)
	|| ydk::is_set(auth_type_mismatch_count.yfilter)
	|| ydk::is_set(pkt_length_errors_count.yfilter)
	|| ydk::is_set(time_stats_discontinuity.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_cfg_remote_ip.yfilter)
	|| ydk::is_set(bfd_configured_remote_ipv6_address.yfilter)
	|| ydk::is_set(state_from_checkpoint.yfilter)
	|| ydk::is_set(interface_ipv4_address.yfilter)
	|| ydk::is_set(interface_ipv6_address.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(virtual_mac_address_state.yfilter)
	|| ydk::is_set(operational_address.yfilter)
	|| ydk::is_set(ipv4_configured_down_address.yfilter)
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_operation())
	|| (resign_received_time !=  nullptr && resign_received_time->has_operation());
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/ipv4/virtual-routers/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-router" <<"[interface-name='" <<interface_name <<"']" <<"[virtual-router-id='" <<virtual_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.yfilter)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (virtual_router_id_xr.is_set || is_set(virtual_router_id_xr.yfilter)) leaf_name_data.push_back(virtual_router_id_xr.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.yfilter)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.yfilter)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.yfilter)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (secondary_address_count.is_set || is_set(secondary_address_count.yfilter)) leaf_name_data.push_back(secondary_address_count.get_name_leafdata());
    if (operational_address_count.is_set || is_set(operational_address_count.yfilter)) leaf_name_data.push_back(operational_address_count.get_name_leafdata());
    if (primary_virtual_ip.is_set || is_set(primary_virtual_ip.yfilter)) leaf_name_data.push_back(primary_virtual_ip.get_name_leafdata());
    if (configured_down_address_count.is_set || is_set(configured_down_address_count.yfilter)) leaf_name_data.push_back(configured_down_address_count.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.yfilter)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (primary_state.is_set || is_set(primary_state.yfilter)) leaf_name_data.push_back(primary_state.get_name_leafdata());
    if (master_ip_address.is_set || is_set(master_ip_address.yfilter)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (master_ipv6_address.is_set || is_set(master_ipv6_address.yfilter)) leaf_name_data.push_back(master_ipv6_address.get_name_leafdata());
    if (master_priority.is_set || is_set(master_priority.yfilter)) leaf_name_data.push_back(master_priority.get_name_leafdata());
    if (vrrp_state.is_set || is_set(vrrp_state.yfilter)) leaf_name_data.push_back(vrrp_state.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (authentication_string.is_set || is_set(authentication_string.yfilter)) leaf_name_data.push_back(authentication_string.get_name_leafdata());
    if (configured_advertize_time.is_set || is_set(configured_advertize_time.yfilter)) leaf_name_data.push_back(configured_advertize_time.get_name_leafdata());
    if (oper_advertize_time.is_set || is_set(oper_advertize_time.yfilter)) leaf_name_data.push_back(oper_advertize_time.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.yfilter)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.yfilter)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.yfilter)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.yfilter)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.yfilter)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (authentication_flag.is_set || is_set(authentication_flag.yfilter)) leaf_name_data.push_back(authentication_flag.get_name_leafdata());
    if (force_timer_flag.is_set || is_set(force_timer_flag.yfilter)) leaf_name_data.push_back(force_timer_flag.get_name_leafdata());
    if (preempt_flag.is_set || is_set(preempt_flag.yfilter)) leaf_name_data.push_back(preempt_flag.get_name_leafdata());
    if (ip_address_owner_flag.is_set || is_set(ip_address_owner_flag.yfilter)) leaf_name_data.push_back(ip_address_owner_flag.get_name_leafdata());
    if (is_accept_mode.is_set || is_set(is_accept_mode.yfilter)) leaf_name_data.push_back(is_accept_mode.get_name_leafdata());
    if (preempt_delay_time.is_set || is_set(preempt_delay_time.yfilter)) leaf_name_data.push_back(preempt_delay_time.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.yfilter)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.yfilter)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (tracked_item_count.is_set || is_set(tracked_item_count.yfilter)) leaf_name_data.push_back(tracked_item_count.get_name_leafdata());
    if (tracked_item_up_count.is_set || is_set(tracked_item_up_count.yfilter)) leaf_name_data.push_back(tracked_item_up_count.get_name_leafdata());
    if (time_in_current_state.is_set || is_set(time_in_current_state.yfilter)) leaf_name_data.push_back(time_in_current_state.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (time_vrouter_up.is_set || is_set(time_vrouter_up.yfilter)) leaf_name_data.push_back(time_vrouter_up.get_name_leafdata());
    if (master_count.is_set || is_set(master_count.yfilter)) leaf_name_data.push_back(master_count.get_name_leafdata());
    if (adverts_received_count.is_set || is_set(adverts_received_count.yfilter)) leaf_name_data.push_back(adverts_received_count.get_name_leafdata());
    if (advert_interval_error_count.is_set || is_set(advert_interval_error_count.yfilter)) leaf_name_data.push_back(advert_interval_error_count.get_name_leafdata());
    if (adverts_sent_count.is_set || is_set(adverts_sent_count.yfilter)) leaf_name_data.push_back(adverts_sent_count.get_name_leafdata());
    if (authentication_fail_count.is_set || is_set(authentication_fail_count.yfilter)) leaf_name_data.push_back(authentication_fail_count.get_name_leafdata());
    if (ttl_error_count.is_set || is_set(ttl_error_count.yfilter)) leaf_name_data.push_back(ttl_error_count.get_name_leafdata());
    if (priority_zero_received_count.is_set || is_set(priority_zero_received_count.yfilter)) leaf_name_data.push_back(priority_zero_received_count.get_name_leafdata());
    if (priority_zero_sent_count.is_set || is_set(priority_zero_sent_count.yfilter)) leaf_name_data.push_back(priority_zero_sent_count.get_name_leafdata());
    if (invalid_packet_count.is_set || is_set(invalid_packet_count.yfilter)) leaf_name_data.push_back(invalid_packet_count.get_name_leafdata());
    if (address_list_error_count.is_set || is_set(address_list_error_count.yfilter)) leaf_name_data.push_back(address_list_error_count.get_name_leafdata());
    if (invalid_auth_type_count.is_set || is_set(invalid_auth_type_count.yfilter)) leaf_name_data.push_back(invalid_auth_type_count.get_name_leafdata());
    if (auth_type_mismatch_count.is_set || is_set(auth_type_mismatch_count.yfilter)) leaf_name_data.push_back(auth_type_mismatch_count.get_name_leafdata());
    if (pkt_length_errors_count.is_set || is_set(pkt_length_errors_count.yfilter)) leaf_name_data.push_back(pkt_length_errors_count.get_name_leafdata());
    if (time_stats_discontinuity.is_set || is_set(time_stats_discontinuity.yfilter)) leaf_name_data.push_back(time_stats_discontinuity.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_cfg_remote_ip.is_set || is_set(bfd_cfg_remote_ip.yfilter)) leaf_name_data.push_back(bfd_cfg_remote_ip.get_name_leafdata());
    if (bfd_configured_remote_ipv6_address.is_set || is_set(bfd_configured_remote_ipv6_address.yfilter)) leaf_name_data.push_back(bfd_configured_remote_ipv6_address.get_name_leafdata());
    if (state_from_checkpoint.is_set || is_set(state_from_checkpoint.yfilter)) leaf_name_data.push_back(state_from_checkpoint.get_name_leafdata());
    if (interface_ipv4_address.is_set || is_set(interface_ipv4_address.yfilter)) leaf_name_data.push_back(interface_ipv4_address.get_name_leafdata());
    if (interface_ipv6_address.is_set || is_set(interface_ipv6_address.yfilter)) leaf_name_data.push_back(interface_ipv6_address.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.yfilter)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());

    auto operational_address_name_datas = operational_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operational_address_name_datas.begin(), operational_address_name_datas.end());
    auto ipv4_configured_down_address_name_datas = ipv4_configured_down_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_configured_down_address_name_datas.begin(), ipv4_configured_down_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time == nullptr)
        {
            resign_sent_time = std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime>();
        }
        return resign_sent_time;
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time == nullptr)
        {
            resign_received_time = std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime>();
        }
        return resign_received_time;
    }

    if(child_yang_name == "ipv6-operational-address")
    {
        for(auto const & c : ipv6_operational_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress>();
        c->parent = this;
        ipv6_operational_address.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-configured-down-address")
    {
        for(auto const & c : ipv6_configured_down_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress>();
        c->parent = this;
        ipv6_configured_down_address.push_back(c);
        return c;
    }

    if(child_yang_name == "state-change-history")
    {
        for(auto const & c : state_change_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory>();
        c->parent = this;
        state_change_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::VirtualRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resign_sent_time != nullptr)
    {
        children["resign-sent-time"] = resign_sent_time;
    }

    if(resign_received_time != nullptr)
    {
        children["resign-received-time"] = resign_received_time;
    }

    for (auto const & c : ipv6_operational_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_configured_down_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : state_change_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
        virtual_router_id.value_namespace = name_space;
        virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr = value;
        virtual_router_id_xr.value_namespace = name_space;
        virtual_router_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slaves")
    {
        slaves = value;
        slaves.value_namespace = name_space;
        slaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
        is_slave.value_namespace = name_space;
        is_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
        followed_session_name.value_namespace = name_space;
        followed_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-address-count")
    {
        secondary_address_count = value;
        secondary_address_count.value_namespace = name_space;
        secondary_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-address-count")
    {
        operational_address_count = value;
        operational_address_count.value_namespace = name_space;
        operational_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-virtual-ip")
    {
        primary_virtual_ip = value;
        primary_virtual_ip.value_namespace = name_space;
        primary_virtual_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-down-address-count")
    {
        configured_down_address_count = value;
        configured_down_address_count.value_namespace = name_space;
        configured_down_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
        virtual_linklocal_ipv6_address.value_namespace = name_space;
        virtual_linklocal_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-state")
    {
        primary_state = value;
        primary_state.value_namespace = name_space;
        primary_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
        master_ip_address.value_namespace = name_space;
        master_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-ipv6-address")
    {
        master_ipv6_address = value;
        master_ipv6_address.value_namespace = name_space;
        master_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-priority")
    {
        master_priority = value;
        master_priority.value_namespace = name_space;
        master_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state = value;
        vrrp_state.value_namespace = name_space;
        vrrp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-string")
    {
        authentication_string = value;
        authentication_string.value_namespace = name_space;
        authentication_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-advertize-time")
    {
        configured_advertize_time = value;
        configured_advertize_time.value_namespace = name_space;
        configured_advertize_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-advertize-time")
    {
        oper_advertize_time = value;
        oper_advertize_time.value_namespace = name_space;
        oper_advertize_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
        min_delay_time.value_namespace = name_space;
        min_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
        reload_delay_time.value_namespace = name_space;
        reload_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
        delay_timer_flag.value_namespace = name_space;
        delay_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
        delay_timer_secs.value_namespace = name_space;
        delay_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
        delay_timer_msecs.value_namespace = name_space;
        delay_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-flag")
    {
        authentication_flag = value;
        authentication_flag.value_namespace = name_space;
        authentication_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-timer-flag")
    {
        force_timer_flag = value;
        force_timer_flag.value_namespace = name_space;
        force_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-flag")
    {
        preempt_flag = value;
        preempt_flag.value_namespace = name_space;
        preempt_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-owner-flag")
    {
        ip_address_owner_flag = value;
        ip_address_owner_flag.value_namespace = name_space;
        ip_address_owner_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-accept-mode")
    {
        is_accept_mode = value;
        is_accept_mode.value_namespace = name_space;
        is_accept_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay-time")
    {
        preempt_delay_time = value;
        preempt_delay_time.value_namespace = name_space;
        preempt_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
        tracked_interface_count.value_namespace = name_space;
        tracked_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
        tracked_interface_up_count.value_namespace = name_space;
        tracked_interface_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-count")
    {
        tracked_item_count = value;
        tracked_item_count.value_namespace = name_space;
        tracked_item_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-item-up-count")
    {
        tracked_item_up_count = value;
        tracked_item_up_count.value_namespace = name_space;
        tracked_item_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-current-state")
    {
        time_in_current_state = value;
        time_in_current_state.value_namespace = name_space;
        time_in_current_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-vrouter-up")
    {
        time_vrouter_up = value;
        time_vrouter_up.value_namespace = name_space;
        time_vrouter_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-count")
    {
        master_count = value;
        master_count.value_namespace = name_space;
        master_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adverts-received-count")
    {
        adverts_received_count = value;
        adverts_received_count.value_namespace = name_space;
        adverts_received_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert-interval-error-count")
    {
        advert_interval_error_count = value;
        advert_interval_error_count.value_namespace = name_space;
        advert_interval_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adverts-sent-count")
    {
        adverts_sent_count = value;
        adverts_sent_count.value_namespace = name_space;
        adverts_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-fail-count")
    {
        authentication_fail_count = value;
        authentication_fail_count.value_namespace = name_space;
        authentication_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-error-count")
    {
        ttl_error_count = value;
        ttl_error_count.value_namespace = name_space;
        ttl_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-zero-received-count")
    {
        priority_zero_received_count = value;
        priority_zero_received_count.value_namespace = name_space;
        priority_zero_received_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-zero-sent-count")
    {
        priority_zero_sent_count = value;
        priority_zero_sent_count.value_namespace = name_space;
        priority_zero_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-packet-count")
    {
        invalid_packet_count = value;
        invalid_packet_count.value_namespace = name_space;
        invalid_packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-list-error-count")
    {
        address_list_error_count = value;
        address_list_error_count.value_namespace = name_space;
        address_list_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-auth-type-count")
    {
        invalid_auth_type_count = value;
        invalid_auth_type_count.value_namespace = name_space;
        invalid_auth_type_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type-mismatch-count")
    {
        auth_type_mismatch_count = value;
        auth_type_mismatch_count.value_namespace = name_space;
        auth_type_mismatch_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-length-errors-count")
    {
        pkt_length_errors_count = value;
        pkt_length_errors_count.value_namespace = name_space;
        pkt_length_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stats-discontinuity")
    {
        time_stats_discontinuity = value;
        time_stats_discontinuity.value_namespace = name_space;
        time_stats_discontinuity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-cfg-remote-ip")
    {
        bfd_cfg_remote_ip = value;
        bfd_cfg_remote_ip.value_namespace = name_space;
        bfd_cfg_remote_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-configured-remote-ipv6-address")
    {
        bfd_configured_remote_ipv6_address = value;
        bfd_configured_remote_ipv6_address.value_namespace = name_space;
        bfd_configured_remote_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-from-checkpoint")
    {
        state_from_checkpoint = value;
        state_from_checkpoint.value_namespace = name_space;
        state_from_checkpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ipv4-address")
    {
        interface_ipv4_address = value;
        interface_ipv4_address.value_namespace = name_space;
        interface_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ipv6-address")
    {
        interface_ipv6_address = value;
        interface_ipv6_address.value_namespace = name_space;
        interface_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
        virtual_mac_address_state.value_namespace = name_space;
        virtual_mac_address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-address")
    {
        operational_address.append(value);
    }
    if(value_path == "ipv4-configured-down-address")
    {
        ipv4_configured_down_address.append(value);
    }
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "virtual-router-id-xr")
    {
        virtual_router_id_xr.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "slaves")
    {
        slaves.yfilter = yfilter;
    }
    if(value_path == "is-slave")
    {
        is_slave.yfilter = yfilter;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name.yfilter = yfilter;
    }
    if(value_path == "secondary-address-count")
    {
        secondary_address_count.yfilter = yfilter;
    }
    if(value_path == "operational-address-count")
    {
        operational_address_count.yfilter = yfilter;
    }
    if(value_path == "primary-virtual-ip")
    {
        primary_virtual_ip.yfilter = yfilter;
    }
    if(value_path == "configured-down-address-count")
    {
        configured_down_address_count.yfilter = yfilter;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "primary-state")
    {
        primary_state.yfilter = yfilter;
    }
    if(value_path == "master-ip-address")
    {
        master_ip_address.yfilter = yfilter;
    }
    if(value_path == "master-ipv6-address")
    {
        master_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "master-priority")
    {
        master_priority.yfilter = yfilter;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "authentication-string")
    {
        authentication_string.yfilter = yfilter;
    }
    if(value_path == "configured-advertize-time")
    {
        configured_advertize_time.yfilter = yfilter;
    }
    if(value_path == "oper-advertize-time")
    {
        oper_advertize_time.yfilter = yfilter;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time.yfilter = yfilter;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time.yfilter = yfilter;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag.yfilter = yfilter;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs.yfilter = yfilter;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "authentication-flag")
    {
        authentication_flag.yfilter = yfilter;
    }
    if(value_path == "force-timer-flag")
    {
        force_timer_flag.yfilter = yfilter;
    }
    if(value_path == "preempt-flag")
    {
        preempt_flag.yfilter = yfilter;
    }
    if(value_path == "ip-address-owner-flag")
    {
        ip_address_owner_flag.yfilter = yfilter;
    }
    if(value_path == "is-accept-mode")
    {
        is_accept_mode.yfilter = yfilter;
    }
    if(value_path == "preempt-delay-time")
    {
        preempt_delay_time.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count.yfilter = yfilter;
    }
    if(value_path == "tracked-item-count")
    {
        tracked_item_count.yfilter = yfilter;
    }
    if(value_path == "tracked-item-up-count")
    {
        tracked_item_up_count.yfilter = yfilter;
    }
    if(value_path == "time-in-current-state")
    {
        time_in_current_state.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
    if(value_path == "time-vrouter-up")
    {
        time_vrouter_up.yfilter = yfilter;
    }
    if(value_path == "master-count")
    {
        master_count.yfilter = yfilter;
    }
    if(value_path == "adverts-received-count")
    {
        adverts_received_count.yfilter = yfilter;
    }
    if(value_path == "advert-interval-error-count")
    {
        advert_interval_error_count.yfilter = yfilter;
    }
    if(value_path == "adverts-sent-count")
    {
        adverts_sent_count.yfilter = yfilter;
    }
    if(value_path == "authentication-fail-count")
    {
        authentication_fail_count.yfilter = yfilter;
    }
    if(value_path == "ttl-error-count")
    {
        ttl_error_count.yfilter = yfilter;
    }
    if(value_path == "priority-zero-received-count")
    {
        priority_zero_received_count.yfilter = yfilter;
    }
    if(value_path == "priority-zero-sent-count")
    {
        priority_zero_sent_count.yfilter = yfilter;
    }
    if(value_path == "invalid-packet-count")
    {
        invalid_packet_count.yfilter = yfilter;
    }
    if(value_path == "address-list-error-count")
    {
        address_list_error_count.yfilter = yfilter;
    }
    if(value_path == "invalid-auth-type-count")
    {
        invalid_auth_type_count.yfilter = yfilter;
    }
    if(value_path == "auth-type-mismatch-count")
    {
        auth_type_mismatch_count.yfilter = yfilter;
    }
    if(value_path == "pkt-length-errors-count")
    {
        pkt_length_errors_count.yfilter = yfilter;
    }
    if(value_path == "time-stats-discontinuity")
    {
        time_stats_discontinuity.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-cfg-remote-ip")
    {
        bfd_cfg_remote_ip.yfilter = yfilter;
    }
    if(value_path == "bfd-configured-remote-ipv6-address")
    {
        bfd_configured_remote_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "state-from-checkpoint")
    {
        state_from_checkpoint.yfilter = yfilter;
    }
    if(value_path == "interface-ipv4-address")
    {
        interface_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "interface-ipv6-address")
    {
        interface_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state.yfilter = yfilter;
    }
    if(value_path == "operational-address")
    {
        operational_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-configured-down-address")
    {
        ipv4_configured_down_address.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resign-sent-time" || name == "resign-received-time" || name == "ipv6-operational-address" || name == "ipv6-configured-down-address" || name == "state-change-history" || name == "interface-name" || name == "virtual-router-id" || name == "interface-name-xr" || name == "virtual-router-id-xr" || name == "version" || name == "address-family" || name == "session-name" || name == "slaves" || name == "is-slave" || name == "followed-session-name" || name == "secondary-address-count" || name == "operational-address-count" || name == "primary-virtual-ip" || name == "configured-down-address-count" || name == "virtual-linklocal-ipv6-address" || name == "primary-state" || name == "master-ip-address" || name == "master-ipv6-address" || name == "master-priority" || name == "vrrp-state" || name == "authentication-type" || name == "authentication-string" || name == "configured-advertize-time" || name == "oper-advertize-time" || name == "min-delay-time" || name == "reload-delay-time" || name == "delay-timer-flag" || name == "delay-timer-secs" || name == "delay-timer-msecs" || name == "authentication-flag" || name == "force-timer-flag" || name == "preempt-flag" || name == "ip-address-owner-flag" || name == "is-accept-mode" || name == "preempt-delay-time" || name == "configured-priority" || name == "operational-priority" || name == "priority-decrement" || name == "tracked-interface-count" || name == "tracked-interface-up-count" || name == "tracked-item-count" || name == "tracked-item-up-count" || name == "time-in-current-state" || name == "state-change-count" || name == "time-vrouter-up" || name == "master-count" || name == "adverts-received-count" || name == "advert-interval-error-count" || name == "adverts-sent-count" || name == "authentication-fail-count" || name == "ttl-error-count" || name == "priority-zero-received-count" || name == "priority-zero-sent-count" || name == "invalid-packet-count" || name == "address-list-error-count" || name == "invalid-auth-type-count" || name == "auth-type-mismatch-count" || name == "pkt-length-errors-count" || name == "time-stats-discontinuity" || name == "bfd-session-state" || name == "bfd-interval" || name == "bfd-multiplier" || name == "bfd-cfg-remote-ip" || name == "bfd-configured-remote-ipv6-address" || name == "state-from-checkpoint" || name == "interface-ipv4-address" || name == "interface-ipv6-address" || name == "virtual-mac-address" || name == "virtual-mac-address-state" || name == "operational-address" || name == "ipv4-configured-down-address")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::ResignSentTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-sent-time"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::~ResignSentTime()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::ResignReceivedTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-received-time"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::Ipv6OperationalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-operational-address"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-operational-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::Ipv6ConfiguredDownAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "ipv6-configured-down-address"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-configured-down-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::StateChangeHistory()
    :
    old_state{YType::enumeration, "old-state"},
    new_state{YType::enumeration, "new-state"},
    reason{YType::enumeration, "reason"}
    	,
    time(std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time>())
{
    time->parent = this;

    yang_name = "state-change-history"; yang_parent_name = "virtual-router"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::~StateChangeHistory()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::has_data() const
{
    return old_state.is_set
	|| new_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(old_state.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (old_state.is_set || is_set(old_state.yfilter)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "old-state")
    {
        old_state = value;
        old_state.value_namespace = name_space;
        old_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "old-state")
    {
        old_state.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "old-state" || name == "new-state" || name == "reason")
        return true;
    return false;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::Time()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "time"; yang_parent_name = "state-change-history"; is_top_level_class = false; has_list_ancestor = true;
}

Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::~Time()
{
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Vrrp::MgoSessions::MgoSessions()
{

    yang_name = "mgo-sessions"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Vrrp::MgoSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::MgoSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::MgoSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::MgoSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgo-session")
    {
        for(auto const & c : mgo_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::MgoSessions::MgoSession>();
        c->parent = this;
        mgo_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::MgoSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mgo_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::MgoSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vrrp::MgoSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vrrp::MgoSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgo-session")
        return true;
    return false;
}

Vrrp::MgoSessions::MgoSession::MgoSession()
    :
    session_name{YType::str, "session-name"},
    primary_session_name{YType::str, "primary-session-name"},
    primary_session_interface{YType::str, "primary-session-interface"},
    primary_af_name{YType::enumeration, "primary-af-name"},
    primary_session_number{YType::uint32, "primary-session-number"},
    primary_session_state{YType::enumeration, "primary-session-state"}
{

    yang_name = "mgo-session"; yang_parent_name = "mgo-sessions"; is_top_level_class = false; has_list_ancestor = false;
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
	|| primary_session_name.is_set
	|| primary_session_interface.is_set
	|| primary_af_name.is_set
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
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(primary_session_name.yfilter)
	|| ydk::is_set(primary_session_interface.yfilter)
	|| ydk::is_set(primary_af_name.yfilter)
	|| ydk::is_set(primary_session_number.yfilter)
	|| ydk::is_set(primary_session_state.yfilter);
}

std::string Vrrp::MgoSessions::MgoSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-oper:vrrp/mgo-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Vrrp::MgoSessions::MgoSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-session" <<"[session-name='" <<session_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::MgoSessions::MgoSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (primary_session_name.is_set || is_set(primary_session_name.yfilter)) leaf_name_data.push_back(primary_session_name.get_name_leafdata());
    if (primary_session_interface.is_set || is_set(primary_session_interface.yfilter)) leaf_name_data.push_back(primary_session_interface.get_name_leafdata());
    if (primary_af_name.is_set || is_set(primary_af_name.yfilter)) leaf_name_data.push_back(primary_af_name.get_name_leafdata());
    if (primary_session_number.is_set || is_set(primary_session_number.yfilter)) leaf_name_data.push_back(primary_session_number.get_name_leafdata());
    if (primary_session_state.is_set || is_set(primary_session_state.yfilter)) leaf_name_data.push_back(primary_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::MgoSessions::MgoSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        for(auto const & c : slave)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vrrp::MgoSessions::MgoSession::Slave>();
        c->parent = this;
        slave.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::MgoSessions::MgoSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slave)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vrrp::MgoSessions::MgoSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-name")
    {
        primary_session_name = value;
        primary_session_name.value_namespace = name_space;
        primary_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-interface")
    {
        primary_session_interface = value;
        primary_session_interface.value_namespace = name_space;
        primary_session_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-af-name")
    {
        primary_af_name = value;
        primary_af_name.value_namespace = name_space;
        primary_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-number")
    {
        primary_session_number = value;
        primary_session_number.value_namespace = name_space;
        primary_session_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-state")
    {
        primary_session_state = value;
        primary_session_state.value_namespace = name_space;
        primary_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::MgoSessions::MgoSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "primary-session-name")
    {
        primary_session_name.yfilter = yfilter;
    }
    if(value_path == "primary-session-interface")
    {
        primary_session_interface.yfilter = yfilter;
    }
    if(value_path == "primary-af-name")
    {
        primary_af_name.yfilter = yfilter;
    }
    if(value_path == "primary-session-number")
    {
        primary_session_number.yfilter = yfilter;
    }
    if(value_path == "primary-session-state")
    {
        primary_session_state.yfilter = yfilter;
    }
}

bool Vrrp::MgoSessions::MgoSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave" || name == "session-name" || name == "primary-session-name" || name == "primary-session-interface" || name == "primary-af-name" || name == "primary-session-number" || name == "primary-session-state")
        return true;
    return false;
}

Vrrp::MgoSessions::MgoSession::Slave::Slave()
    :
    slave_interface{YType::str, "slave-interface"},
    slave_virtual_router_id{YType::uint32, "slave-virtual-router-id"}
{

    yang_name = "slave"; yang_parent_name = "mgo-session"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(slave_interface.yfilter)
	|| ydk::is_set(slave_virtual_router_id.yfilter);
}

std::string Vrrp::MgoSessions::MgoSession::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vrrp::MgoSessions::MgoSession::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_interface.is_set || is_set(slave_interface.yfilter)) leaf_name_data.push_back(slave_interface.get_name_leafdata());
    if (slave_virtual_router_id.is_set || is_set(slave_virtual_router_id.yfilter)) leaf_name_data.push_back(slave_virtual_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vrrp::MgoSessions::MgoSession::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vrrp::MgoSessions::MgoSession::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vrrp::MgoSessions::MgoSession::Slave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-interface")
    {
        slave_interface = value;
        slave_interface.value_namespace = name_space;
        slave_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id = value;
        slave_virtual_router_id.value_namespace = name_space;
        slave_virtual_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vrrp::MgoSessions::MgoSession::Slave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-interface")
    {
        slave_interface.yfilter = yfilter;
    }
    if(value_path == "slave-virtual-router-id")
    {
        slave_virtual_router_id.yfilter = yfilter;
    }
}

bool Vrrp::MgoSessions::MgoSession::Slave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-interface" || name == "slave-virtual-router-id")
        return true;
    return false;
}

const Enum::YLeaf VrrpVmacState::stored {0, "stored"};
const Enum::YLeaf VrrpVmacState::reserved {1, "reserved"};
const Enum::YLeaf VrrpVmacState::active {2, "active"};
const Enum::YLeaf VrrpVmacState::reserving {3, "reserving"};

const Enum::YLeaf VrrpStateChangeReason::state_change_bfd_down {0, "state-change-bfd-down"};
const Enum::YLeaf VrrpStateChangeReason::state_change_virtual_ip_configured {1, "state-change-virtual-ip-configured"};
const Enum::YLeaf VrrpStateChangeReason::state_change_interface_ip {2, "state-change-interface-ip"};
const Enum::YLeaf VrrpStateChangeReason::state_change_delay_timer {3, "state-change-delay-timer"};
const Enum::YLeaf VrrpStateChangeReason::state_change_startup {4, "state-change-startup"};
const Enum::YLeaf VrrpStateChangeReason::state_change_interface_up {5, "state-change-interface-up"};
const Enum::YLeaf VrrpStateChangeReason::state_change_interface_down {6, "state-change-interface-down"};
const Enum::YLeaf VrrpStateChangeReason::state_change_master_down_timer {7, "state-change-master-down-timer"};
const Enum::YLeaf VrrpStateChangeReason::state_change_higher_priority_master {8, "state-change-higher-priority-master"};
const Enum::YLeaf VrrpStateChangeReason::state_change_fhrp_admin {9, "state-change-fhrp-admin"};
const Enum::YLeaf VrrpStateChangeReason::state_change_mgo_parent {10, "state-change-mgo-parent"};
const Enum::YLeaf VrrpStateChangeReason::state_change_chkpt_update {11, "state-change-chkpt-update"};
const Enum::YLeaf VrrpStateChangeReason::state_change_issu_resync {12, "state-change-issu-resync"};

const Enum::YLeaf VrrpBfdSessionState::bfd_state_none {0, "bfd-state-none"};
const Enum::YLeaf VrrpBfdSessionState::bfd_state_inactive {1, "bfd-state-inactive"};
const Enum::YLeaf VrrpBfdSessionState::bfd_state_up {2, "bfd-state-up"};
const Enum::YLeaf VrrpBfdSessionState::bfd_state_down {3, "bfd-state-down"};

const Enum::YLeaf VrrpProtAuth::authentication_none {0, "authentication-none"};
const Enum::YLeaf VrrpProtAuth::authentication_text {1, "authentication-text"};
const Enum::YLeaf VrrpProtAuth::authentication_ip {2, "authentication-ip"};

const Enum::YLeaf VrrpBagProtocolState::state_initial {1, "state-initial"};
const Enum::YLeaf VrrpBagProtocolState::state_backup {2, "state-backup"};
const Enum::YLeaf VrrpBagProtocolState::state_master {3, "state-master"};

const Enum::YLeaf VrrpVipState::virtual_ip_state_down {0, "virtual-ip-state-down"};
const Enum::YLeaf VrrpVipState::virtual_ip_state_up {1, "virtual-ip-state-up"};

const Enum::YLeaf VrrpBAf::address_family_ipv4 {0, "address-family-ipv4"};
const Enum::YLeaf VrrpBAf::address_family_ipv6 {1, "address-family-ipv6"};
const Enum::YLeaf VrrpBAf::vrrp_baf_count {2, "vrrp-baf-count"};


}
}

