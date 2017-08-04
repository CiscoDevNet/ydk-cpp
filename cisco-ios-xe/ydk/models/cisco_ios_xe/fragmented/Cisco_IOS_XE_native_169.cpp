
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_169.hpp"
#include "Cisco_IOS_XE_native_170.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::Plogd()
{
    yang_name = "plogd"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::~Plogd()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plogd";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::PortSecurity()
    :
    trap_rate{YType::uint16, "trap-rate"}
{
    yang_name = "port-security"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::~PortSecurity()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_data() const
{
    return trap_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_rate.is_set || is_set(trap_rate.yfilter)) leaf_name_data.push_back(trap_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-rate")
    {
        trap_rate = value;
        trap_rate.value_namespace = name_space;
        trap_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-rate")
    {
        trap_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::PowerEthernet()
    :
    group{YType::str, "group"},
    police{YType::empty, "police"}
{
    yang_name = "power-ethernet"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::~PowerEthernet()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_data() const
{
    return group.is_set
	|| police.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(police.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-ethernet";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (police.is_set || is_set(police.yfilter)) leaf_name_data.push_back(police.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "police")
    {
        police = value;
        police.value_namespace = name_space;
        police.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "police")
    {
        police.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "police")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pw::Pw()
    :
    vc{YType::empty, "vc"}
{
    yang_name = "pw"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pw::~Pw()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_data() const
{
    return vc.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vc.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc.is_set || is_set(vc.yfilter)) leaf_name_data.push_back(vc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vc")
    {
        vc = value;
        vc.value_namespace = name_space;
        vc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vc")
    {
        vc.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vc")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Slb::Slb()
    :
    csrp{YType::empty, "csrp"},
    real{YType::empty, "real"},
    virtual_{YType::empty, "virtual"}
{
    yang_name = "slb"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Slb::~Slb()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Slb::has_data() const
{
    return csrp.is_set
	|| real.is_set
	|| virtual_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Slb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csrp.yfilter)
	|| ydk::is_set(real.yfilter)
	|| ydk::is_set(virtual_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slb";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csrp.is_set || is_set(csrp.yfilter)) leaf_name_data.push_back(csrp.get_name_leafdata());
    if (real.is_set || is_set(real.yfilter)) leaf_name_data.push_back(real.get_name_leafdata());
    if (virtual_.is_set || is_set(virtual_.yfilter)) leaf_name_data.push_back(virtual_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Slb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csrp")
    {
        csrp = value;
        csrp.value_namespace = name_space;
        csrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real")
    {
        real = value;
        real.value_namespace = name_space;
        real.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual")
    {
        virtual_ = value;
        virtual_.value_namespace = name_space;
        virtual_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Slb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csrp")
    {
        csrp.yfilter = yfilter;
    }
    if(value_path == "real")
    {
        real.yfilter = yfilter;
    }
    if(value_path == "virtual")
    {
        virtual_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Slb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrp" || name == "real" || name == "virtual")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::Snmp()
    :
    authentication{YType::empty, "authentication"},
    coldstart{YType::empty, "coldstart"},
    linkdown{YType::empty, "linkdown"},
    linkup{YType::empty, "linkup"},
    warmstart{YType::empty, "warmstart"}
{
    yang_name = "snmp"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::~Snmp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::has_data() const
{
    return authentication.is_set
	|| coldstart.is_set
	|| linkdown.is_set
	|| linkup.is_set
	|| warmstart.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(coldstart.yfilter)
	|| ydk::is_set(linkdown.yfilter)
	|| ydk::is_set(linkup.yfilter)
	|| ydk::is_set(warmstart.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (coldstart.is_set || is_set(coldstart.yfilter)) leaf_name_data.push_back(coldstart.get_name_leafdata());
    if (linkdown.is_set || is_set(linkdown.yfilter)) leaf_name_data.push_back(linkdown.get_name_leafdata());
    if (linkup.is_set || is_set(linkup.yfilter)) leaf_name_data.push_back(linkup.get_name_leafdata());
    if (warmstart.is_set || is_set(warmstart.yfilter)) leaf_name_data.push_back(warmstart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coldstart")
    {
        coldstart = value;
        coldstart.value_namespace = name_space;
        coldstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkdown")
    {
        linkdown = value;
        linkdown.value_namespace = name_space;
        linkdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkup")
    {
        linkup = value;
        linkup.value_namespace = name_space;
        linkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warmstart")
    {
        warmstart = value;
        warmstart.value_namespace = name_space;
        warmstart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "coldstart")
    {
        coldstart.yfilter = yfilter;
    }
    if(value_path == "linkdown")
    {
        linkdown.yfilter = yfilter;
    }
    if(value_path == "linkup")
    {
        linkup.yfilter = yfilter;
    }
    if(value_path == "warmstart")
    {
        warmstart.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "coldstart" || name == "linkdown" || name == "linkup" || name == "warmstart")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::Stackwise()
    :
    gls{YType::empty, "GLS"},
    ils{YType::empty, "ILS"},
    insufficient_power{YType::empty, "insufficient-power"},
    invalid_input_current{YType::empty, "invalid-input-current"},
    invalid_output_current{YType::empty, "invalid-output-current"},
    member_removed{YType::empty, "member-removed"},
    member_upgrade_notification{YType::empty, "member-upgrade-notification"},
    new_master{YType::empty, "new-master"},
    new_member{YType::empty, "new-member"},
    port_change{YType::empty, "port-change"},
    power_budget_warning{YType::empty, "power-budget-warning"},
    power_invalid_topology{YType::empty, "power-invalid-topology"},
    power_link_status_changed{YType::empty, "power-link-status-changed"},
    power_oper_status_changed{YType::empty, "power-oper-status-changed"},
    power_priority_conflict{YType::empty, "power-priority-conflict"},
    power_version_mismatch{YType::empty, "power-version-mismatch"},
    ring_redundant{YType::empty, "ring-redundant"},
    srls{YType::empty, "SRLS"},
    stack_mismatch{YType::empty, "stack-mismatch"},
    unbalanced_power_supplies{YType::empty, "unbalanced-power-supplies"},
    under_budget{YType::empty, "under-budget"},
    under_voltage{YType::empty, "under-voltage"}
{
    yang_name = "stackwise"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::~Stackwise()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::has_data() const
{
    return gls.is_set
	|| ils.is_set
	|| insufficient_power.is_set
	|| invalid_input_current.is_set
	|| invalid_output_current.is_set
	|| member_removed.is_set
	|| member_upgrade_notification.is_set
	|| new_master.is_set
	|| new_member.is_set
	|| port_change.is_set
	|| power_budget_warning.is_set
	|| power_invalid_topology.is_set
	|| power_link_status_changed.is_set
	|| power_oper_status_changed.is_set
	|| power_priority_conflict.is_set
	|| power_version_mismatch.is_set
	|| ring_redundant.is_set
	|| srls.is_set
	|| stack_mismatch.is_set
	|| unbalanced_power_supplies.is_set
	|| under_budget.is_set
	|| under_voltage.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gls.yfilter)
	|| ydk::is_set(ils.yfilter)
	|| ydk::is_set(insufficient_power.yfilter)
	|| ydk::is_set(invalid_input_current.yfilter)
	|| ydk::is_set(invalid_output_current.yfilter)
	|| ydk::is_set(member_removed.yfilter)
	|| ydk::is_set(member_upgrade_notification.yfilter)
	|| ydk::is_set(new_master.yfilter)
	|| ydk::is_set(new_member.yfilter)
	|| ydk::is_set(port_change.yfilter)
	|| ydk::is_set(power_budget_warning.yfilter)
	|| ydk::is_set(power_invalid_topology.yfilter)
	|| ydk::is_set(power_link_status_changed.yfilter)
	|| ydk::is_set(power_oper_status_changed.yfilter)
	|| ydk::is_set(power_priority_conflict.yfilter)
	|| ydk::is_set(power_version_mismatch.yfilter)
	|| ydk::is_set(ring_redundant.yfilter)
	|| ydk::is_set(srls.yfilter)
	|| ydk::is_set(stack_mismatch.yfilter)
	|| ydk::is_set(unbalanced_power_supplies.yfilter)
	|| ydk::is_set(under_budget.yfilter)
	|| ydk::is_set(under_voltage.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gls.is_set || is_set(gls.yfilter)) leaf_name_data.push_back(gls.get_name_leafdata());
    if (ils.is_set || is_set(ils.yfilter)) leaf_name_data.push_back(ils.get_name_leafdata());
    if (insufficient_power.is_set || is_set(insufficient_power.yfilter)) leaf_name_data.push_back(insufficient_power.get_name_leafdata());
    if (invalid_input_current.is_set || is_set(invalid_input_current.yfilter)) leaf_name_data.push_back(invalid_input_current.get_name_leafdata());
    if (invalid_output_current.is_set || is_set(invalid_output_current.yfilter)) leaf_name_data.push_back(invalid_output_current.get_name_leafdata());
    if (member_removed.is_set || is_set(member_removed.yfilter)) leaf_name_data.push_back(member_removed.get_name_leafdata());
    if (member_upgrade_notification.is_set || is_set(member_upgrade_notification.yfilter)) leaf_name_data.push_back(member_upgrade_notification.get_name_leafdata());
    if (new_master.is_set || is_set(new_master.yfilter)) leaf_name_data.push_back(new_master.get_name_leafdata());
    if (new_member.is_set || is_set(new_member.yfilter)) leaf_name_data.push_back(new_member.get_name_leafdata());
    if (port_change.is_set || is_set(port_change.yfilter)) leaf_name_data.push_back(port_change.get_name_leafdata());
    if (power_budget_warning.is_set || is_set(power_budget_warning.yfilter)) leaf_name_data.push_back(power_budget_warning.get_name_leafdata());
    if (power_invalid_topology.is_set || is_set(power_invalid_topology.yfilter)) leaf_name_data.push_back(power_invalid_topology.get_name_leafdata());
    if (power_link_status_changed.is_set || is_set(power_link_status_changed.yfilter)) leaf_name_data.push_back(power_link_status_changed.get_name_leafdata());
    if (power_oper_status_changed.is_set || is_set(power_oper_status_changed.yfilter)) leaf_name_data.push_back(power_oper_status_changed.get_name_leafdata());
    if (power_priority_conflict.is_set || is_set(power_priority_conflict.yfilter)) leaf_name_data.push_back(power_priority_conflict.get_name_leafdata());
    if (power_version_mismatch.is_set || is_set(power_version_mismatch.yfilter)) leaf_name_data.push_back(power_version_mismatch.get_name_leafdata());
    if (ring_redundant.is_set || is_set(ring_redundant.yfilter)) leaf_name_data.push_back(ring_redundant.get_name_leafdata());
    if (srls.is_set || is_set(srls.yfilter)) leaf_name_data.push_back(srls.get_name_leafdata());
    if (stack_mismatch.is_set || is_set(stack_mismatch.yfilter)) leaf_name_data.push_back(stack_mismatch.get_name_leafdata());
    if (unbalanced_power_supplies.is_set || is_set(unbalanced_power_supplies.yfilter)) leaf_name_data.push_back(unbalanced_power_supplies.get_name_leafdata());
    if (under_budget.is_set || is_set(under_budget.yfilter)) leaf_name_data.push_back(under_budget.get_name_leafdata());
    if (under_voltage.is_set || is_set(under_voltage.yfilter)) leaf_name_data.push_back(under_voltage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "GLS")
    {
        gls = value;
        gls.value_namespace = name_space;
        gls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ILS")
    {
        ils = value;
        ils.value_namespace = name_space;
        ils.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-power")
    {
        insufficient_power = value;
        insufficient_power.value_namespace = name_space;
        insufficient_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-input-current")
    {
        invalid_input_current = value;
        invalid_input_current.value_namespace = name_space;
        invalid_input_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-output-current")
    {
        invalid_output_current = value;
        invalid_output_current.value_namespace = name_space;
        invalid_output_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-removed")
    {
        member_removed = value;
        member_removed.value_namespace = name_space;
        member_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-upgrade-notification")
    {
        member_upgrade_notification = value;
        member_upgrade_notification.value_namespace = name_space;
        member_upgrade_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-master")
    {
        new_master = value;
        new_master.value_namespace = name_space;
        new_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-member")
    {
        new_member = value;
        new_member.value_namespace = name_space;
        new_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-change")
    {
        port_change = value;
        port_change.value_namespace = name_space;
        port_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-budget-warning")
    {
        power_budget_warning = value;
        power_budget_warning.value_namespace = name_space;
        power_budget_warning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-invalid-topology")
    {
        power_invalid_topology = value;
        power_invalid_topology.value_namespace = name_space;
        power_invalid_topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-link-status-changed")
    {
        power_link_status_changed = value;
        power_link_status_changed.value_namespace = name_space;
        power_link_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-oper-status-changed")
    {
        power_oper_status_changed = value;
        power_oper_status_changed.value_namespace = name_space;
        power_oper_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-priority-conflict")
    {
        power_priority_conflict = value;
        power_priority_conflict.value_namespace = name_space;
        power_priority_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-version-mismatch")
    {
        power_version_mismatch = value;
        power_version_mismatch.value_namespace = name_space;
        power_version_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-redundant")
    {
        ring_redundant = value;
        ring_redundant.value_namespace = name_space;
        ring_redundant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SRLS")
    {
        srls = value;
        srls.value_namespace = name_space;
        srls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stack-mismatch")
    {
        stack_mismatch = value;
        stack_mismatch.value_namespace = name_space;
        stack_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbalanced-power-supplies")
    {
        unbalanced_power_supplies = value;
        unbalanced_power_supplies.value_namespace = name_space;
        unbalanced_power_supplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-budget")
    {
        under_budget = value;
        under_budget.value_namespace = name_space;
        under_budget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-voltage")
    {
        under_voltage = value;
        under_voltage.value_namespace = name_space;
        under_voltage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "GLS")
    {
        gls.yfilter = yfilter;
    }
    if(value_path == "ILS")
    {
        ils.yfilter = yfilter;
    }
    if(value_path == "insufficient-power")
    {
        insufficient_power.yfilter = yfilter;
    }
    if(value_path == "invalid-input-current")
    {
        invalid_input_current.yfilter = yfilter;
    }
    if(value_path == "invalid-output-current")
    {
        invalid_output_current.yfilter = yfilter;
    }
    if(value_path == "member-removed")
    {
        member_removed.yfilter = yfilter;
    }
    if(value_path == "member-upgrade-notification")
    {
        member_upgrade_notification.yfilter = yfilter;
    }
    if(value_path == "new-master")
    {
        new_master.yfilter = yfilter;
    }
    if(value_path == "new-member")
    {
        new_member.yfilter = yfilter;
    }
    if(value_path == "port-change")
    {
        port_change.yfilter = yfilter;
    }
    if(value_path == "power-budget-warning")
    {
        power_budget_warning.yfilter = yfilter;
    }
    if(value_path == "power-invalid-topology")
    {
        power_invalid_topology.yfilter = yfilter;
    }
    if(value_path == "power-link-status-changed")
    {
        power_link_status_changed.yfilter = yfilter;
    }
    if(value_path == "power-oper-status-changed")
    {
        power_oper_status_changed.yfilter = yfilter;
    }
    if(value_path == "power-priority-conflict")
    {
        power_priority_conflict.yfilter = yfilter;
    }
    if(value_path == "power-version-mismatch")
    {
        power_version_mismatch.yfilter = yfilter;
    }
    if(value_path == "ring-redundant")
    {
        ring_redundant.yfilter = yfilter;
    }
    if(value_path == "SRLS")
    {
        srls.yfilter = yfilter;
    }
    if(value_path == "stack-mismatch")
    {
        stack_mismatch.yfilter = yfilter;
    }
    if(value_path == "unbalanced-power-supplies")
    {
        unbalanced_power_supplies.yfilter = yfilter;
    }
    if(value_path == "under-budget")
    {
        under_budget.yfilter = yfilter;
    }
    if(value_path == "under-voltage")
    {
        under_voltage.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GLS" || name == "ILS" || name == "insufficient-power" || name == "invalid-input-current" || name == "invalid-output-current" || name == "member-removed" || name == "member-upgrade-notification" || name == "new-master" || name == "new-member" || name == "port-change" || name == "power-budget-warning" || name == "power-invalid-topology" || name == "power-link-status-changed" || name == "power-oper-status-changed" || name == "power-priority-conflict" || name == "power-version-mismatch" || name == "ring-redundant" || name == "SRLS" || name == "stack-mismatch" || name == "unbalanced-power-supplies" || name == "under-budget" || name == "under-voltage")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::Stpx()
    :
    inconsistency{YType::empty, "inconsistency"},
    loop_inconsistency{YType::empty, "loop-inconsistency"},
    root_inconsistency{YType::empty, "root-inconsistency"}
{
    yang_name = "stpx"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::~Stpx()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_data() const
{
    return inconsistency.is_set
	|| loop_inconsistency.is_set
	|| root_inconsistency.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inconsistency.yfilter)
	|| ydk::is_set(loop_inconsistency.yfilter)
	|| ydk::is_set(root_inconsistency.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpx";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inconsistency.is_set || is_set(inconsistency.yfilter)) leaf_name_data.push_back(inconsistency.get_name_leafdata());
    if (loop_inconsistency.is_set || is_set(loop_inconsistency.yfilter)) leaf_name_data.push_back(loop_inconsistency.get_name_leafdata());
    if (root_inconsistency.is_set || is_set(root_inconsistency.yfilter)) leaf_name_data.push_back(root_inconsistency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inconsistency")
    {
        inconsistency = value;
        inconsistency.value_namespace = name_space;
        inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-inconsistency")
    {
        loop_inconsistency = value;
        loop_inconsistency.value_namespace = name_space;
        loop_inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-inconsistency")
    {
        root_inconsistency = value;
        root_inconsistency.value_namespace = name_space;
        root_inconsistency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inconsistency")
    {
        inconsistency.yfilter = yfilter;
    }
    if(value_path == "loop-inconsistency")
    {
        loop_inconsistency.yfilter = yfilter;
    }
    if(value_path == "root-inconsistency")
    {
        root_inconsistency.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inconsistency" || name == "loop-inconsistency" || name == "root-inconsistency")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::Transceiver()
    :
    all{YType::empty, "all"}
{
    yang_name = "transceiver"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::~Transceiver()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_data() const
{
    return all.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Udld::Udld()
    :
    link_fail_rpt{YType::empty, "link-fail-rpt"},
    status_change{YType::empty, "status-change"}
{
    yang_name = "udld"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Udld::~Udld()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_data() const
{
    return link_fail_rpt.is_set
	|| status_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_fail_rpt.yfilter)
	|| ydk::is_set(status_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_fail_rpt.is_set || is_set(link_fail_rpt.yfilter)) leaf_name_data.push_back(link_fail_rpt.get_name_leafdata());
    if (status_change.is_set || is_set(status_change.yfilter)) leaf_name_data.push_back(status_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-fail-rpt")
    {
        link_fail_rpt = value;
        link_fail_rpt.value_namespace = name_space;
        link_fail_rpt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-change")
    {
        status_change = value;
        status_change.value_namespace = name_space;
        status_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-fail-rpt")
    {
        link_fail_rpt.yfilter = yfilter;
    }
    if(value_path == "status-change")
    {
        status_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-fail-rpt" || name == "status-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::Vrfmib()
    :
    vnet_trunk_down{YType::empty, "vnet-trunk-down"},
    vnet_trunk_up{YType::empty, "vnet-trunk-up"},
    vrf_down{YType::empty, "vrf-down"},
    vrf_up{YType::empty, "vrf-up"}
{
    yang_name = "vrfmib"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::~Vrfmib()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_data() const
{
    return vnet_trunk_down.is_set
	|| vnet_trunk_up.is_set
	|| vrf_down.is_set
	|| vrf_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnet_trunk_down.yfilter)
	|| ydk::is_set(vnet_trunk_up.yfilter)
	|| ydk::is_set(vrf_down.yfilter)
	|| ydk::is_set(vrf_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfmib";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnet_trunk_down.is_set || is_set(vnet_trunk_down.yfilter)) leaf_name_data.push_back(vnet_trunk_down.get_name_leafdata());
    if (vnet_trunk_up.is_set || is_set(vnet_trunk_up.yfilter)) leaf_name_data.push_back(vnet_trunk_up.get_name_leafdata());
    if (vrf_down.is_set || is_set(vrf_down.yfilter)) leaf_name_data.push_back(vrf_down.get_name_leafdata());
    if (vrf_up.is_set || is_set(vrf_up.yfilter)) leaf_name_data.push_back(vrf_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnet-trunk-down")
    {
        vnet_trunk_down = value;
        vnet_trunk_down.value_namespace = name_space;
        vnet_trunk_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnet-trunk-up")
    {
        vnet_trunk_up = value;
        vnet_trunk_up.value_namespace = name_space;
        vnet_trunk_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-down")
    {
        vrf_down = value;
        vrf_down.value_namespace = name_space;
        vrf_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-up")
    {
        vrf_up = value;
        vrf_up.value_namespace = name_space;
        vrf_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnet-trunk-down")
    {
        vnet_trunk_down.yfilter = yfilter;
    }
    if(value_path == "vnet-trunk-up")
    {
        vnet_trunk_up.yfilter = yfilter;
    }
    if(value_path == "vrf-down")
    {
        vrf_down.yfilter = yfilter;
    }
    if(value_path == "vrf-up")
    {
        vrf_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnet-trunk-down" || name == "vnet-trunk-up" || name == "vrf-down" || name == "vrf-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::Vstack()
    :
    addition{YType::empty, "addition"},
    failure{YType::empty, "failure"},
    lost{YType::empty, "lost"},
    operation_{YType::empty, "operation"}
{
    yang_name = "vstack"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::~Vstack()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_data() const
{
    return addition.is_set
	|| failure.is_set
	|| lost.is_set
	|| operation_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addition.yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(lost.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vstack";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addition.is_set || is_set(addition.yfilter)) leaf_name_data.push_back(addition.get_name_leafdata());
    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (lost.is_set || is_set(lost.yfilter)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addition")
    {
        addition = value;
        addition.value_namespace = name_space;
        addition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost")
    {
        lost = value;
        lost.value_namespace = name_space;
        lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addition")
    {
        addition.yfilter = yfilter;
    }
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "lost")
    {
        lost.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addition" || name == "failure" || name == "lost" || name == "operation")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Wireless()
    :
    bsnmobilestation(nullptr) // presence node
{
    yang_name = "wireless"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::~Wireless()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_data() const
{
    return (bsnmobilestation !=  nullptr && bsnmobilestation->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_operation() const
{
    return is_set(yfilter)
	|| (bsnmobilestation !=  nullptr && bsnmobilestation->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnMobileStation")
    {
        if(bsnmobilestation == nullptr)
        {
            bsnmobilestation = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation>();
        }
        return bsnmobilestation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsnmobilestation != nullptr)
    {
        children["bsnMobileStation"] = bsnmobilestation;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnMobileStation")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnmobilestation()
    :
    bsnaccesspoint(nullptr) // presence node
{
    yang_name = "bsnMobileStation"; yang_parent_name = "wireless";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::~Bsnmobilestation()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_data() const
{
    return (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_operation() const
{
    return is_set(yfilter)
	|| (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnMobileStation";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnAccessPoint")
    {
        if(bsnaccesspoint == nullptr)
        {
            bsnaccesspoint = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint>();
        }
        return bsnaccesspoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsnaccesspoint != nullptr)
    {
        children["bsnAccessPoint"] = bsnaccesspoint;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnAccessPoint")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::Bsnaccesspoint()
    :
    bsnrogue{YType::empty, "bsnRogue"}
{
    yang_name = "bsnAccessPoint"; yang_parent_name = "bsnMobileStation";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::~Bsnaccesspoint()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_data() const
{
    return bsnrogue.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsnrogue.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnAccessPoint";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/bsnMobileStation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsnrogue.is_set || is_set(bsnrogue.yfilter)) leaf_name_data.push_back(bsnrogue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsnRogue")
    {
        bsnrogue = value;
        bsnrogue.value_namespace = name_space;
        bsnrogue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsnRogue")
    {
        bsnrogue.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnRogue")
        return true;
    return false;
}

Native::SnmpServer::Engineid::Engineid()
    :
    local{YType::str, "local"}
    	,
    remote(std::make_shared<Native::SnmpServer::Engineid::Remote>())
{
    remote->parent = this;

    yang_name = "engineID"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Engineid::~Engineid()
{
}

bool Native::SnmpServer::Engineid::has_data() const
{
    return local.is_set
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::SnmpServer::Engineid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::SnmpServer::Engineid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:engineID";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Engineid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Engineid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::SnmpServer::Engineid::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Engineid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::SnmpServer::Engineid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Engineid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Engineid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote" || name == "local")
        return true;
    return false;
}

Native::SnmpServer::Engineid::Remote::Remote()
{
    yang_name = "remote"; yang_parent_name = "engineID";
}

Native::SnmpServer::Engineid::Remote::~Remote()
{
}

bool Native::SnmpServer::Engineid::Remote::has_data() const
{
    return false;
}

bool Native::SnmpServer::Engineid::Remote::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Engineid::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Engineid::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:engineID/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Engineid::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Engineid::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Engineid::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Engineid::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Engineid::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::Group()
    :
    id{YType::str, "id"}
    	,
    v1(std::make_shared<Native::SnmpServer::Group::V1>())
	,v2c(std::make_shared<Native::SnmpServer::Group::V2C>())
	,v3(std::make_shared<Native::SnmpServer::Group::V3>())
{
    v1->parent = this;

    v2c->parent = this;

    v3->parent = this;

    yang_name = "group"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Group::~Group()
{
}

bool Native::SnmpServer::Group::has_data() const
{
    return id.is_set
	|| (v1 !=  nullptr && v1->has_data())
	|| (v2c !=  nullptr && v2c->has_data())
	|| (v3 !=  nullptr && v3->has_data());
}

bool Native::SnmpServer::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (v1 !=  nullptr && v1->has_operation())
	|| (v2c !=  nullptr && v2c->has_operation())
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Native::SnmpServer::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:group" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v1")
    {
        if(v1 == nullptr)
        {
            v1 = std::make_shared<Native::SnmpServer::Group::V1>();
        }
        return v1;
    }

    if(child_yang_name == "v2c")
    {
        if(v2c == nullptr)
        {
            v2c = std::make_shared<Native::SnmpServer::Group::V2C>();
        }
        return v2c;
    }

    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Native::SnmpServer::Group::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(v1 != nullptr)
    {
        children["v1"] = v1;
    }

    if(v2c != nullptr)
    {
        children["v2c"] = v2c;
    }

    if(v3 != nullptr)
    {
        children["v3"] = v3;
    }

    return children;
}

void Native::SnmpServer::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1" || name == "v2c" || name == "v3" || name == "id")
        return true;
    return false;
}

Native::SnmpServer::Group::V1::V1()
{
    yang_name = "v1"; yang_parent_name = "group";
}

Native::SnmpServer::Group::V1::~V1()
{
}

bool Native::SnmpServer::Group::V1::has_data() const
{
    return false;
}

bool Native::SnmpServer::Group::V1::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Group::V1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v1";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::V1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Group::V1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Group::V1::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::V2C::V2C()
{
    yang_name = "v2c"; yang_parent_name = "group";
}

Native::SnmpServer::Group::V2C::~V2C()
{
}

bool Native::SnmpServer::Group::V2C::has_data() const
{
    return false;
}

bool Native::SnmpServer::Group::V2C::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Group::V2C::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v2c";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::V2C::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V2C' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V2C::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V2C::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V2C::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Group::V2C::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Group::V2C::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::V3::V3()
    :
    access{YType::str, "access"},
    context{YType::str, "context"},
    match{YType::enumeration, "match"},
    notify{YType::str, "notify"},
    read{YType::str, "read"},
    security_level{YType::enumeration, "security-level"},
    write{YType::str, "write"}
{
    yang_name = "v3"; yang_parent_name = "group";
}

Native::SnmpServer::Group::V3::~V3()
{
}

bool Native::SnmpServer::Group::V3::has_data() const
{
    return access.is_set
	|| context.is_set
	|| match.is_set
	|| notify.is_set
	|| read.is_set
	|| security_level.is_set
	|| write.is_set;
}

bool Native::SnmpServer::Group::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(read.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(write.yfilter);
}

std::string Native::SnmpServer::Group::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (read.is_set || is_set(read.yfilter)) leaf_name_data.push_back(read.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (write.is_set || is_set(write.yfilter)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read")
    {
        read = value;
        read.value_namespace = name_space;
        read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write")
    {
        write = value;
        write.value_namespace = name_space;
        write.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Group::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "read")
    {
        read.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "write")
    {
        write.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Group::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "context" || name == "match" || name == "notify" || name == "read" || name == "security-level" || name == "write")
        return true;
    return false;
}

Native::SnmpServer::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    community_string{YType::str, "community-string"},
    informs{YType::empty, "informs"},
    security_level{YType::enumeration, "security-level"},
    traps{YType::empty, "traps"},
    version{YType::enumeration, "version"},
    vrf{YType::str, "vrf"}
    	,
    trap_enable(std::make_shared<Native::SnmpServer::Host::TrapEnable>())
{
    trap_enable->parent = this;

    yang_name = "host"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Host::~Host()
{
}

bool Native::SnmpServer::Host::has_data() const
{
    return ip_address.is_set
	|| community_string.is_set
	|| informs.is_set
	|| security_level.is_set
	|| traps.is_set
	|| version.is_set
	|| vrf.is_set
	|| (trap_enable !=  nullptr && trap_enable->has_data());
}

bool Native::SnmpServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| ydk::is_set(informs.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(traps.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (trap_enable !=  nullptr && trap_enable->has_operation());
}

std::string Native::SnmpServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:host" <<"[ip-address='" <<ip_address <<"']" <<"[community-string='" <<community_string <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());
    if (informs.is_set || is_set(informs.yfilter)) leaf_name_data.push_back(informs.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (traps.is_set || is_set(traps.yfilter)) leaf_name_data.push_back(traps.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-enable")
    {
        if(trap_enable == nullptr)
        {
            trap_enable = std::make_shared<Native::SnmpServer::Host::TrapEnable>();
        }
        return trap_enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap_enable != nullptr)
    {
        children["trap-enable"] = trap_enable;
    }

    return children;
}

void Native::SnmpServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "informs")
    {
        informs = value;
        informs.value_namespace = name_space;
        informs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traps")
    {
        traps = value;
        traps.value_namespace = name_space;
        traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
    if(value_path == "informs")
    {
        informs.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "traps")
    {
        traps.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-enable" || name == "ip-address" || name == "community-string" || name == "informs" || name == "security-level" || name == "traps" || name == "version" || name == "vrf")
        return true;
    return false;
}

Native::SnmpServer::Host::TrapEnable::TrapEnable()
    :
    aaa_server{YType::empty, "aaa_server"},
    alarms{YType::empty, "alarms"},
    atm{YType::empty, "atm"},
    bfd{YType::empty, "bfd"},
    bgp{YType::empty, "bgp"},
    bstun{YType::empty, "bstun"},
    bulkstat{YType::empty, "bulkstat"},
    call_home{YType::empty, "call-home"},
    casa{YType::empty, "casa"},
    cef{YType::empty, "cef"},
    cnpd{YType::empty, "cnpd"},
    config{YType::empty, "config"},
    config_copy{YType::empty, "config-copy"},
    config_ctid{YType::empty, "config-ctid"},
    cpu{YType::empty, "cpu"},
    dhcp{YType::empty, "dhcp"},
    dlsw{YType::empty, "dlsw"},
    ds1{YType::empty, "ds1"},
    dsp{YType::empty, "dsp"},
    dspu{YType::empty, "dspu"},
    eigrp{YType::empty, "eigrp"},
    entity_{YType::empty, "entity"},
    entity_diag{YType::empty, "entity-diag"},
    entity_qfp{YType::empty, "entity-qfp"},
    entity_state{YType::empty, "entity-state"},
    ethernet_cfm{YType::empty, "ethernet-cfm"},
    evc{YType::empty, "evc"},
    event_manager{YType::empty, "event-manager"},
    firewall{YType::empty, "firewall"},
    flash{YType::empty, "flash"},
    flowmon{YType::empty, "flowmon"},
    frame_relay{YType::empty, "frame-relay"},
    fru_ctrl{YType::empty, "fru-ctrl"},
    gdoi{YType::empty, "gdoi"},
    hsrp{YType::empty, "hsrp"},
    iplocalpool{YType::empty, "iplocalpool"},
    ipmulticast{YType::empty, "ipmulticast"},
    ipsec{YType::empty, "ipsec"},
    ipsla{YType::empty, "ipsla"},
    isakmp{YType::empty, "isakmp"},
    isg_mib{YType::empty, "isg-mib"},
    isis{YType::empty, "isis"},
    l2tun_pseudowire_status{YType::empty, "l2tun-pseudowire-status"},
    l2tun_session{YType::empty, "l2tun-session"},
    license{YType::empty, "license"},
    memory{YType::empty, "memory"},
    mpls_fast_reroute{YType::empty, "mpls-fast-reroute"},
    mpls_ldp{YType::empty, "mpls-ldp"},
    mpls_traffic_eng{YType::empty, "mpls-traffic-eng"},
    mpls_vpn{YType::empty, "mpls-vpn"},
    msdp{YType::empty, "msdp"},
    mvpn{YType::empty, "mvpn"},
    nhrp{YType::empty, "nhrp"},
    ospf{YType::empty, "ospf"},
    ospfv3{YType::empty, "ospfv3"},
    pfr{YType::empty, "pfr"},
    pim{YType::empty, "pim"},
    pw_vc{YType::empty, "pw-vc"},
    resource_policy{YType::empty, "resource-policy"},
    rf{YType::empty, "rf"},
    rsrb{YType::empty, "rsrb"},
    rsvp{YType::empty, "rsvp"},
    sdlc{YType::empty, "sdlc"},
    sdllc{YType::empty, "sdllc"},
    snmp{YType::empty, "snmp"},
    sonet{YType::empty, "sonet"},
    srp{YType::empty, "srp"},
    stun{YType::empty, "stun"},
    syslog{YType::empty, "syslog"},
    trustsec_sxp{YType::empty, "trustsec-sxp"},
    tty{YType::empty, "tty"},
    udp_port{YType::uint16, "udp-port"},
    voice{YType::empty, "voice"},
    vrfmib{YType::empty, "vrfmib"},
    vrrp{YType::empty, "vrrp"},
    x25{YType::empty, "x25"}
{
    yang_name = "trap-enable"; yang_parent_name = "host";
}

Native::SnmpServer::Host::TrapEnable::~TrapEnable()
{
}

bool Native::SnmpServer::Host::TrapEnable::has_data() const
{
    return aaa_server.is_set
	|| alarms.is_set
	|| atm.is_set
	|| bfd.is_set
	|| bgp.is_set
	|| bstun.is_set
	|| bulkstat.is_set
	|| call_home.is_set
	|| casa.is_set
	|| cef.is_set
	|| cnpd.is_set
	|| config.is_set
	|| config_copy.is_set
	|| config_ctid.is_set
	|| cpu.is_set
	|| dhcp.is_set
	|| dlsw.is_set
	|| ds1.is_set
	|| dsp.is_set
	|| dspu.is_set
	|| eigrp.is_set
	|| entity_.is_set
	|| entity_diag.is_set
	|| entity_qfp.is_set
	|| entity_state.is_set
	|| ethernet_cfm.is_set
	|| evc.is_set
	|| event_manager.is_set
	|| firewall.is_set
	|| flash.is_set
	|| flowmon.is_set
	|| frame_relay.is_set
	|| fru_ctrl.is_set
	|| gdoi.is_set
	|| hsrp.is_set
	|| iplocalpool.is_set
	|| ipmulticast.is_set
	|| ipsec.is_set
	|| ipsla.is_set
	|| isakmp.is_set
	|| isg_mib.is_set
	|| isis.is_set
	|| l2tun_pseudowire_status.is_set
	|| l2tun_session.is_set
	|| license.is_set
	|| memory.is_set
	|| mpls_fast_reroute.is_set
	|| mpls_ldp.is_set
	|| mpls_traffic_eng.is_set
	|| mpls_vpn.is_set
	|| msdp.is_set
	|| mvpn.is_set
	|| nhrp.is_set
	|| ospf.is_set
	|| ospfv3.is_set
	|| pfr.is_set
	|| pim.is_set
	|| pw_vc.is_set
	|| resource_policy.is_set
	|| rf.is_set
	|| rsrb.is_set
	|| rsvp.is_set
	|| sdlc.is_set
	|| sdllc.is_set
	|| snmp.is_set
	|| sonet.is_set
	|| srp.is_set
	|| stun.is_set
	|| syslog.is_set
	|| trustsec_sxp.is_set
	|| tty.is_set
	|| udp_port.is_set
	|| voice.is_set
	|| vrfmib.is_set
	|| vrrp.is_set
	|| x25.is_set;
}

bool Native::SnmpServer::Host::TrapEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_server.yfilter)
	|| ydk::is_set(alarms.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(bstun.yfilter)
	|| ydk::is_set(bulkstat.yfilter)
	|| ydk::is_set(call_home.yfilter)
	|| ydk::is_set(casa.yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(cnpd.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(config_copy.yfilter)
	|| ydk::is_set(config_ctid.yfilter)
	|| ydk::is_set(cpu.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(dlsw.yfilter)
	|| ydk::is_set(ds1.yfilter)
	|| ydk::is_set(dsp.yfilter)
	|| ydk::is_set(dspu.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(entity_.yfilter)
	|| ydk::is_set(entity_diag.yfilter)
	|| ydk::is_set(entity_qfp.yfilter)
	|| ydk::is_set(entity_state.yfilter)
	|| ydk::is_set(ethernet_cfm.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(event_manager.yfilter)
	|| ydk::is_set(firewall.yfilter)
	|| ydk::is_set(flash.yfilter)
	|| ydk::is_set(flowmon.yfilter)
	|| ydk::is_set(frame_relay.yfilter)
	|| ydk::is_set(fru_ctrl.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(hsrp.yfilter)
	|| ydk::is_set(iplocalpool.yfilter)
	|| ydk::is_set(ipmulticast.yfilter)
	|| ydk::is_set(ipsec.yfilter)
	|| ydk::is_set(ipsla.yfilter)
	|| ydk::is_set(isakmp.yfilter)
	|| ydk::is_set(isg_mib.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(l2tun_pseudowire_status.yfilter)
	|| ydk::is_set(l2tun_session.yfilter)
	|| ydk::is_set(license.yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(mpls_fast_reroute.yfilter)
	|| ydk::is_set(mpls_ldp.yfilter)
	|| ydk::is_set(mpls_traffic_eng.yfilter)
	|| ydk::is_set(mpls_vpn.yfilter)
	|| ydk::is_set(msdp.yfilter)
	|| ydk::is_set(mvpn.yfilter)
	|| ydk::is_set(nhrp.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(ospfv3.yfilter)
	|| ydk::is_set(pfr.yfilter)
	|| ydk::is_set(pim.yfilter)
	|| ydk::is_set(pw_vc.yfilter)
	|| ydk::is_set(resource_policy.yfilter)
	|| ydk::is_set(rf.yfilter)
	|| ydk::is_set(rsrb.yfilter)
	|| ydk::is_set(rsvp.yfilter)
	|| ydk::is_set(sdlc.yfilter)
	|| ydk::is_set(sdllc.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(sonet.yfilter)
	|| ydk::is_set(srp.yfilter)
	|| ydk::is_set(stun.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(trustsec_sxp.yfilter)
	|| ydk::is_set(tty.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(voice.yfilter)
	|| ydk::is_set(vrfmib.yfilter)
	|| ydk::is_set(vrrp.yfilter)
	|| ydk::is_set(x25.yfilter);
}

std::string Native::SnmpServer::Host::TrapEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-enable";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Host::TrapEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_server.is_set || is_set(aaa_server.yfilter)) leaf_name_data.push_back(aaa_server.get_name_leafdata());
    if (alarms.is_set || is_set(alarms.yfilter)) leaf_name_data.push_back(alarms.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (bstun.is_set || is_set(bstun.yfilter)) leaf_name_data.push_back(bstun.get_name_leafdata());
    if (bulkstat.is_set || is_set(bulkstat.yfilter)) leaf_name_data.push_back(bulkstat.get_name_leafdata());
    if (call_home.is_set || is_set(call_home.yfilter)) leaf_name_data.push_back(call_home.get_name_leafdata());
    if (casa.is_set || is_set(casa.yfilter)) leaf_name_data.push_back(casa.get_name_leafdata());
    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (cnpd.is_set || is_set(cnpd.yfilter)) leaf_name_data.push_back(cnpd.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (config_copy.is_set || is_set(config_copy.yfilter)) leaf_name_data.push_back(config_copy.get_name_leafdata());
    if (config_ctid.is_set || is_set(config_ctid.yfilter)) leaf_name_data.push_back(config_ctid.get_name_leafdata());
    if (cpu.is_set || is_set(cpu.yfilter)) leaf_name_data.push_back(cpu.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.yfilter)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (ds1.is_set || is_set(ds1.yfilter)) leaf_name_data.push_back(ds1.get_name_leafdata());
    if (dsp.is_set || is_set(dsp.yfilter)) leaf_name_data.push_back(dsp.get_name_leafdata());
    if (dspu.is_set || is_set(dspu.yfilter)) leaf_name_data.push_back(dspu.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (entity_.is_set || is_set(entity_.yfilter)) leaf_name_data.push_back(entity_.get_name_leafdata());
    if (entity_diag.is_set || is_set(entity_diag.yfilter)) leaf_name_data.push_back(entity_diag.get_name_leafdata());
    if (entity_qfp.is_set || is_set(entity_qfp.yfilter)) leaf_name_data.push_back(entity_qfp.get_name_leafdata());
    if (entity_state.is_set || is_set(entity_state.yfilter)) leaf_name_data.push_back(entity_state.get_name_leafdata());
    if (ethernet_cfm.is_set || is_set(ethernet_cfm.yfilter)) leaf_name_data.push_back(ethernet_cfm.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.yfilter)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (firewall.is_set || is_set(firewall.yfilter)) leaf_name_data.push_back(firewall.get_name_leafdata());
    if (flash.is_set || is_set(flash.yfilter)) leaf_name_data.push_back(flash.get_name_leafdata());
    if (flowmon.is_set || is_set(flowmon.yfilter)) leaf_name_data.push_back(flowmon.get_name_leafdata());
    if (frame_relay.is_set || is_set(frame_relay.yfilter)) leaf_name_data.push_back(frame_relay.get_name_leafdata());
    if (fru_ctrl.is_set || is_set(fru_ctrl.yfilter)) leaf_name_data.push_back(fru_ctrl.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (hsrp.is_set || is_set(hsrp.yfilter)) leaf_name_data.push_back(hsrp.get_name_leafdata());
    if (iplocalpool.is_set || is_set(iplocalpool.yfilter)) leaf_name_data.push_back(iplocalpool.get_name_leafdata());
    if (ipmulticast.is_set || is_set(ipmulticast.yfilter)) leaf_name_data.push_back(ipmulticast.get_name_leafdata());
    if (ipsec.is_set || is_set(ipsec.yfilter)) leaf_name_data.push_back(ipsec.get_name_leafdata());
    if (ipsla.is_set || is_set(ipsla.yfilter)) leaf_name_data.push_back(ipsla.get_name_leafdata());
    if (isakmp.is_set || is_set(isakmp.yfilter)) leaf_name_data.push_back(isakmp.get_name_leafdata());
    if (isg_mib.is_set || is_set(isg_mib.yfilter)) leaf_name_data.push_back(isg_mib.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (l2tun_pseudowire_status.is_set || is_set(l2tun_pseudowire_status.yfilter)) leaf_name_data.push_back(l2tun_pseudowire_status.get_name_leafdata());
    if (l2tun_session.is_set || is_set(l2tun_session.yfilter)) leaf_name_data.push_back(l2tun_session.get_name_leafdata());
    if (license.is_set || is_set(license.yfilter)) leaf_name_data.push_back(license.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (mpls_fast_reroute.is_set || is_set(mpls_fast_reroute.yfilter)) leaf_name_data.push_back(mpls_fast_reroute.get_name_leafdata());
    if (mpls_ldp.is_set || is_set(mpls_ldp.yfilter)) leaf_name_data.push_back(mpls_ldp.get_name_leafdata());
    if (mpls_traffic_eng.is_set || is_set(mpls_traffic_eng.yfilter)) leaf_name_data.push_back(mpls_traffic_eng.get_name_leafdata());
    if (mpls_vpn.is_set || is_set(mpls_vpn.yfilter)) leaf_name_data.push_back(mpls_vpn.get_name_leafdata());
    if (msdp.is_set || is_set(msdp.yfilter)) leaf_name_data.push_back(msdp.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.yfilter)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (nhrp.is_set || is_set(nhrp.yfilter)) leaf_name_data.push_back(nhrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (ospfv3.is_set || is_set(ospfv3.yfilter)) leaf_name_data.push_back(ospfv3.get_name_leafdata());
    if (pfr.is_set || is_set(pfr.yfilter)) leaf_name_data.push_back(pfr.get_name_leafdata());
    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());
    if (pw_vc.is_set || is_set(pw_vc.yfilter)) leaf_name_data.push_back(pw_vc.get_name_leafdata());
    if (resource_policy.is_set || is_set(resource_policy.yfilter)) leaf_name_data.push_back(resource_policy.get_name_leafdata());
    if (rf.is_set || is_set(rf.yfilter)) leaf_name_data.push_back(rf.get_name_leafdata());
    if (rsrb.is_set || is_set(rsrb.yfilter)) leaf_name_data.push_back(rsrb.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.yfilter)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (sdlc.is_set || is_set(sdlc.yfilter)) leaf_name_data.push_back(sdlc.get_name_leafdata());
    if (sdllc.is_set || is_set(sdllc.yfilter)) leaf_name_data.push_back(sdllc.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());
    if (srp.is_set || is_set(srp.yfilter)) leaf_name_data.push_back(srp.get_name_leafdata());
    if (stun.is_set || is_set(stun.yfilter)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (trustsec_sxp.is_set || is_set(trustsec_sxp.yfilter)) leaf_name_data.push_back(trustsec_sxp.get_name_leafdata());
    if (tty.is_set || is_set(tty.yfilter)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());
    if (vrfmib.is_set || is_set(vrfmib.yfilter)) leaf_name_data.push_back(vrfmib.get_name_leafdata());
    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());
    if (x25.is_set || is_set(x25.yfilter)) leaf_name_data.push_back(x25.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Host::TrapEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Host::TrapEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Host::TrapEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa_server")
    {
        aaa_server = value;
        aaa_server.value_namespace = name_space;
        aaa_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarms")
    {
        alarms = value;
        alarms.value_namespace = name_space;
        alarms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstun")
    {
        bstun = value;
        bstun.value_namespace = name_space;
        bstun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bulkstat")
    {
        bulkstat = value;
        bulkstat.value_namespace = name_space;
        bulkstat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-home")
    {
        call_home = value;
        call_home.value_namespace = name_space;
        call_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casa")
    {
        casa = value;
        casa.value_namespace = name_space;
        casa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpd")
    {
        cnpd = value;
        cnpd.value_namespace = name_space;
        cnpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-copy")
    {
        config_copy = value;
        config_copy.value_namespace = name_space;
        config_copy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-ctid")
    {
        config_ctid = value;
        config_ctid.value_namespace = name_space;
        config_ctid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu")
    {
        cpu = value;
        cpu.value_namespace = name_space;
        cpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
        dlsw.value_namespace = name_space;
        dlsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1")
    {
        ds1 = value;
        ds1.value_namespace = name_space;
        ds1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsp")
    {
        dsp = value;
        dsp.value_namespace = name_space;
        dsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dspu")
    {
        dspu = value;
        dspu.value_namespace = name_space;
        dspu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity")
    {
        entity_ = value;
        entity_.value_namespace = name_space;
        entity_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-diag")
    {
        entity_diag = value;
        entity_diag.value_namespace = name_space;
        entity_diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-qfp")
    {
        entity_qfp = value;
        entity_qfp.value_namespace = name_space;
        entity_qfp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-state")
    {
        entity_state = value;
        entity_state.value_namespace = name_space;
        entity_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-cfm")
    {
        ethernet_cfm = value;
        ethernet_cfm.value_namespace = name_space;
        ethernet_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
        event_manager.value_namespace = name_space;
        event_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firewall")
    {
        firewall = value;
        firewall.value_namespace = name_space;
        firewall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash")
    {
        flash = value;
        flash.value_namespace = name_space;
        flash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowmon")
    {
        flowmon = value;
        flowmon.value_namespace = name_space;
        flowmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-relay")
    {
        frame_relay = value;
        frame_relay.value_namespace = name_space;
        frame_relay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl = value;
        fru_ctrl.value_namespace = name_space;
        fru_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp")
    {
        hsrp = value;
        hsrp.value_namespace = name_space;
        hsrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iplocalpool")
    {
        iplocalpool = value;
        iplocalpool.value_namespace = name_space;
        iplocalpool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast = value;
        ipmulticast.value_namespace = name_space;
        ipmulticast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsec")
    {
        ipsec = value;
        ipsec.value_namespace = name_space;
        ipsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsla")
    {
        ipsla = value;
        ipsla.value_namespace = name_space;
        ipsla.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp")
    {
        isakmp = value;
        isakmp.value_namespace = name_space;
        isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isg-mib")
    {
        isg_mib = value;
        isg_mib.value_namespace = name_space;
        isg_mib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tun-pseudowire-status")
    {
        l2tun_pseudowire_status = value;
        l2tun_pseudowire_status.value_namespace = name_space;
        l2tun_pseudowire_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tun-session")
    {
        l2tun_session = value;
        l2tun_session.value_namespace = name_space;
        l2tun_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "license")
    {
        license = value;
        license.value_namespace = name_space;
        license.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-fast-reroute")
    {
        mpls_fast_reroute = value;
        mpls_fast_reroute.value_namespace = name_space;
        mpls_fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-ldp")
    {
        mpls_ldp = value;
        mpls_ldp.value_namespace = name_space;
        mpls_ldp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng = value;
        mpls_traffic_eng.value_namespace = name_space;
        mpls_traffic_eng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-vpn")
    {
        mpls_vpn = value;
        mpls_vpn.value_namespace = name_space;
        mpls_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdp")
    {
        msdp = value;
        msdp.value_namespace = name_space;
        msdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
        mvpn.value_namespace = name_space;
        mvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrp")
    {
        nhrp = value;
        nhrp.value_namespace = name_space;
        nhrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3")
    {
        ospfv3 = value;
        ospfv3.value_namespace = name_space;
        ospfv3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfr")
    {
        pfr = value;
        pfr.value_namespace = name_space;
        pfr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-vc")
    {
        pw_vc = value;
        pw_vc.value_namespace = name_space;
        pw_vc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-policy")
    {
        resource_policy = value;
        resource_policy.value_namespace = name_space;
        resource_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rf")
    {
        rf = value;
        rf.value_namespace = name_space;
        rf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsrb")
    {
        rsrb = value;
        rsrb.value_namespace = name_space;
        rsrb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
        rsvp.value_namespace = name_space;
        rsvp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdlc")
    {
        sdlc = value;
        sdlc.value_namespace = name_space;
        sdlc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdllc")
    {
        sdllc = value;
        sdllc.value_namespace = name_space;
        sdllc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp")
    {
        srp = value;
        srp.value_namespace = name_space;
        srp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stun")
    {
        stun = value;
        stun.value_namespace = name_space;
        stun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustsec-sxp")
    {
        trustsec_sxp = value;
        trustsec_sxp.value_namespace = name_space;
        trustsec_sxp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tty")
    {
        tty = value;
        tty.value_namespace = name_space;
        tty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfmib")
    {
        vrfmib = value;
        vrfmib.value_namespace = name_space;
        vrfmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "x25")
    {
        x25 = value;
        x25.value_namespace = name_space;
        x25.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Host::TrapEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa_server")
    {
        aaa_server.yfilter = yfilter;
    }
    if(value_path == "alarms")
    {
        alarms.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "bstun")
    {
        bstun.yfilter = yfilter;
    }
    if(value_path == "bulkstat")
    {
        bulkstat.yfilter = yfilter;
    }
    if(value_path == "call-home")
    {
        call_home.yfilter = yfilter;
    }
    if(value_path == "casa")
    {
        casa.yfilter = yfilter;
    }
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "cnpd")
    {
        cnpd.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "config-copy")
    {
        config_copy.yfilter = yfilter;
    }
    if(value_path == "config-ctid")
    {
        config_ctid.yfilter = yfilter;
    }
    if(value_path == "cpu")
    {
        cpu.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "dlsw")
    {
        dlsw.yfilter = yfilter;
    }
    if(value_path == "ds1")
    {
        ds1.yfilter = yfilter;
    }
    if(value_path == "dsp")
    {
        dsp.yfilter = yfilter;
    }
    if(value_path == "dspu")
    {
        dspu.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "entity")
    {
        entity_.yfilter = yfilter;
    }
    if(value_path == "entity-diag")
    {
        entity_diag.yfilter = yfilter;
    }
    if(value_path == "entity-qfp")
    {
        entity_qfp.yfilter = yfilter;
    }
    if(value_path == "entity-state")
    {
        entity_state.yfilter = yfilter;
    }
    if(value_path == "ethernet-cfm")
    {
        ethernet_cfm.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "event-manager")
    {
        event_manager.yfilter = yfilter;
    }
    if(value_path == "firewall")
    {
        firewall.yfilter = yfilter;
    }
    if(value_path == "flash")
    {
        flash.yfilter = yfilter;
    }
    if(value_path == "flowmon")
    {
        flowmon.yfilter = yfilter;
    }
    if(value_path == "frame-relay")
    {
        frame_relay.yfilter = yfilter;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "hsrp")
    {
        hsrp.yfilter = yfilter;
    }
    if(value_path == "iplocalpool")
    {
        iplocalpool.yfilter = yfilter;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast.yfilter = yfilter;
    }
    if(value_path == "ipsec")
    {
        ipsec.yfilter = yfilter;
    }
    if(value_path == "ipsla")
    {
        ipsla.yfilter = yfilter;
    }
    if(value_path == "isakmp")
    {
        isakmp.yfilter = yfilter;
    }
    if(value_path == "isg-mib")
    {
        isg_mib.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "l2tun-pseudowire-status")
    {
        l2tun_pseudowire_status.yfilter = yfilter;
    }
    if(value_path == "l2tun-session")
    {
        l2tun_session.yfilter = yfilter;
    }
    if(value_path == "license")
    {
        license.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "mpls-fast-reroute")
    {
        mpls_fast_reroute.yfilter = yfilter;
    }
    if(value_path == "mpls-ldp")
    {
        mpls_ldp.yfilter = yfilter;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng.yfilter = yfilter;
    }
    if(value_path == "mpls-vpn")
    {
        mpls_vpn.yfilter = yfilter;
    }
    if(value_path == "msdp")
    {
        msdp.yfilter = yfilter;
    }
    if(value_path == "mvpn")
    {
        mvpn.yfilter = yfilter;
    }
    if(value_path == "nhrp")
    {
        nhrp.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "ospfv3")
    {
        ospfv3.yfilter = yfilter;
    }
    if(value_path == "pfr")
    {
        pfr.yfilter = yfilter;
    }
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
    if(value_path == "pw-vc")
    {
        pw_vc.yfilter = yfilter;
    }
    if(value_path == "resource-policy")
    {
        resource_policy.yfilter = yfilter;
    }
    if(value_path == "rf")
    {
        rf.yfilter = yfilter;
    }
    if(value_path == "rsrb")
    {
        rsrb.yfilter = yfilter;
    }
    if(value_path == "rsvp")
    {
        rsvp.yfilter = yfilter;
    }
    if(value_path == "sdlc")
    {
        sdlc.yfilter = yfilter;
    }
    if(value_path == "sdllc")
    {
        sdllc.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "sonet")
    {
        sonet.yfilter = yfilter;
    }
    if(value_path == "srp")
    {
        srp.yfilter = yfilter;
    }
    if(value_path == "stun")
    {
        stun.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "trustsec-sxp")
    {
        trustsec_sxp.yfilter = yfilter;
    }
    if(value_path == "tty")
    {
        tty.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
    if(value_path == "vrfmib")
    {
        vrfmib.yfilter = yfilter;
    }
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
    if(value_path == "x25")
    {
        x25.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Host::TrapEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa_server" || name == "alarms" || name == "atm" || name == "bfd" || name == "bgp" || name == "bstun" || name == "bulkstat" || name == "call-home" || name == "casa" || name == "cef" || name == "cnpd" || name == "config" || name == "config-copy" || name == "config-ctid" || name == "cpu" || name == "dhcp" || name == "dlsw" || name == "ds1" || name == "dsp" || name == "dspu" || name == "eigrp" || name == "entity" || name == "entity-diag" || name == "entity-qfp" || name == "entity-state" || name == "ethernet-cfm" || name == "evc" || name == "event-manager" || name == "firewall" || name == "flash" || name == "flowmon" || name == "frame-relay" || name == "fru-ctrl" || name == "gdoi" || name == "hsrp" || name == "iplocalpool" || name == "ipmulticast" || name == "ipsec" || name == "ipsla" || name == "isakmp" || name == "isg-mib" || name == "isis" || name == "l2tun-pseudowire-status" || name == "l2tun-session" || name == "license" || name == "memory" || name == "mpls-fast-reroute" || name == "mpls-ldp" || name == "mpls-traffic-eng" || name == "mpls-vpn" || name == "msdp" || name == "mvpn" || name == "nhrp" || name == "ospf" || name == "ospfv3" || name == "pfr" || name == "pim" || name == "pw-vc" || name == "resource-policy" || name == "rf" || name == "rsrb" || name == "rsvp" || name == "sdlc" || name == "sdllc" || name == "snmp" || name == "sonet" || name == "srp" || name == "stun" || name == "syslog" || name == "trustsec-sxp" || name == "tty" || name == "udp-port" || name == "voice" || name == "vrfmib" || name == "vrrp" || name == "x25")
        return true;
    return false;
}

Native::SnmpServer::Ip::Ip()
    :
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"}
{
    yang_name = "ip"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Ip::~Ip()
{
}

bool Native::SnmpServer::Ip::has_data() const
{
    return dscp.is_set
	|| precedence.is_set;
}

bool Native::SnmpServer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::SnmpServer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ip";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::SnmpServer::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Ifindex::~Ifindex()
{
}

bool Native::SnmpServer::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::SnmpServer::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::SnmpServer::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ifindex";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::SnmpServer::Manager::Manager()
    :
    session_timeout{YType::uint32, "session-timeout"}
{
    yang_name = "manager"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Manager::~Manager()
{
}

bool Native::SnmpServer::Manager::has_data() const
{
    return session_timeout.is_set;
}

bool Native::SnmpServer::Manager::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_timeout.yfilter);
}

std::string Native::SnmpServer::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:manager";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Manager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout.is_set || is_set(session_timeout.yfilter)) leaf_name_data.push_back(session_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-timeout")
    {
        session_timeout = value;
        session_timeout.value_namespace = name_space;
        session_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-timeout")
    {
        session_timeout.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-timeout")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::SourceInterface()
    :
    informs(std::make_shared<Native::SnmpServer::SourceInterface::Informs>())
	,traps(std::make_shared<Native::SnmpServer::SourceInterface::Traps>())
{
    informs->parent = this;

    traps->parent = this;

    yang_name = "source-interface"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::SourceInterface::~SourceInterface()
{
}

bool Native::SnmpServer::SourceInterface::has_data() const
{
    return (informs !=  nullptr && informs->has_data())
	|| (traps !=  nullptr && traps->has_data());
}

bool Native::SnmpServer::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| (informs !=  nullptr && informs->has_operation())
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Native::SnmpServer::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:source-interface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "informs")
    {
        if(informs == nullptr)
        {
            informs = std::make_shared<Native::SnmpServer::SourceInterface::Informs>();
        }
        return informs;
    }

    if(child_yang_name == "traps")
    {
        if(traps == nullptr)
        {
            traps = std::make_shared<Native::SnmpServer::SourceInterface::Traps>();
        }
        return traps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(informs != nullptr)
    {
        children["informs"] = informs;
    }

    if(traps != nullptr)
    {
        children["traps"] = traps;
    }

    return children;
}

void Native::SnmpServer::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "informs" || name == "traps")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::Informs()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "informs"; yang_parent_name = "source-interface";
}

Native::SnmpServer::SourceInterface::Informs::~Informs()
{
}

bool Native::SnmpServer::SourceInterface::Informs::has_data() const
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

bool Native::SnmpServer::SourceInterface::Informs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::SourceInterface::Informs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informs";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::get_children() const
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

void Native::SnmpServer::SourceInterface::Informs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::LispSubinterface::~LispSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::Traps()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "traps"; yang_parent_name = "source-interface";
}

Native::SnmpServer::SourceInterface::Traps::~Traps()
{
}

bool Native::SnmpServer::SourceInterface::Traps::has_data() const
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

bool Native::SnmpServer::SourceInterface::Traps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::SourceInterface::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::get_children() const
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

void Native::SnmpServer::SourceInterface::Traps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::LispSubinterface::~LispSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::SnmpServer::Trap::Trap()
    :
    timeout{YType::uint16, "timeout"}
    	,
    link(std::make_shared<Native::SnmpServer::Trap::Link>())
{
    link->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Trap::~Trap()
{
}

bool Native::SnmpServer::Trap::has_data() const
{
    return timeout.is_set
	|| (link !=  nullptr && link->has_data());
}

bool Native::SnmpServer::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::SnmpServer::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::SnmpServer::Trap::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Native::SnmpServer::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "timeout")
        return true;
    return false;
}

Native::SnmpServer::Trap::Link::Link()
    :
    ietf{YType::empty, "ietf"},
    switchover{YType::empty, "switchover"}
{
    yang_name = "link"; yang_parent_name = "trap";
}

Native::SnmpServer::Trap::Link::~Link()
{
}

bool Native::SnmpServer::Trap::Link::has_data() const
{
    return ietf.is_set
	|| switchover.is_set;
}

bool Native::SnmpServer::Trap::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(switchover.yfilter);
}

std::string Native::SnmpServer::Trap::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Trap::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Trap::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Trap::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Trap::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Trap::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Trap::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf" || name == "switchover")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::TrapSource()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::TrapSource::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::TrapSource::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::TrapSource::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "trap-source"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::TrapSource::~TrapSource()
{
}

bool Native::SnmpServer::TrapSource::has_data() const
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

bool Native::SnmpServer::TrapSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::TrapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap-source";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::TrapSource::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::TrapSource::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::TrapSource::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::get_children() const
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

void Native::SnmpServer::TrapSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::SnmpServer::TrapSource::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::TrapSource::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::TrapSource::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::SnmpServer::TrapSource::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::TrapSource::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::LispSubinterface::~LispSubinterface()
{
}

bool Native::SnmpServer::TrapSource::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::TrapSource::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::TrapSource::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::TrapSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::SnmpServer::User::User()
{
    yang_name = "user"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::User::~User()
{
}

bool Native::SnmpServer::User::has_data() const
{
    for (std::size_t index=0; index<names.size(); index++)
    {
        if(names[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SnmpServer::User::has_operation() const
{
    for (std::size_t index=0; index<names.size(); index++)
    {
        if(names[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SnmpServer::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:user";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        for(auto const & c : names)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::User::Names>();
        c->parent = this;
        names.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : names)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SnmpServer::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "names")
        return true;
    return false;
}

Native::SnmpServer::User::Names::Names()
    :
    username{YType::str, "username"},
    grpname{YType::str, "grpname"}
    	,
    v3(nullptr) // presence node
{
    yang_name = "names"; yang_parent_name = "user";
}

Native::SnmpServer::User::Names::~Names()
{
}

bool Native::SnmpServer::User::Names::has_data() const
{
    return username.is_set
	|| grpname.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Native::SnmpServer::User::Names::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(grpname.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Native::SnmpServer::User::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names" <<"[username='" <<username <<"']" <<"[grpname='" <<grpname <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:user/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (grpname.is_set || is_set(grpname.yfilter)) leaf_name_data.push_back(grpname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Native::SnmpServer::User::Names::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(v3 != nullptr)
    {
        children["v3"] = v3;
    }

    return children;
}

void Native::SnmpServer::User::Names::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpname")
    {
        grpname = value;
        grpname.value_namespace = name_space;
        grpname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "grpname")
    {
        grpname.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "username" || name == "grpname")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::V3()
    :
    auth(std::make_shared<Native::SnmpServer::User::Names::V3::Auth>())
{
    auth->parent = this;

    yang_name = "v3"; yang_parent_name = "names";
}

Native::SnmpServer::User::Names::V3::~V3()
{
}

bool Native::SnmpServer::User::Names::V3::has_data() const
{
    return (auth !=  nullptr && auth->has_data());
}

bool Native::SnmpServer::User::Names::V3::has_operation() const
{
    return is_set(yfilter)
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::SnmpServer::User::Names::V3::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Auth()
    :
    sha(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha>())
{
    sha->parent = this;

    yang_name = "auth"; yang_parent_name = "v3";
}

Native::SnmpServer::User::Names::V3::Auth::~Auth()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::has_data() const
{
    return (sha !=  nullptr && sha->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::has_operation() const
{
    return is_set(yfilter)
	|| (sha !=  nullptr && sha->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sha")
    {
        if(sha == nullptr)
        {
            sha = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha>();
        }
        return sha;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sha != nullptr)
    {
        children["sha"] = sha;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Sha()
    :
    auth(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_>())
{
    auth->parent = this;

    yang_name = "sha"; yang_parent_name = "auth";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::~Sha()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_data() const
{
    return (auth !=  nullptr && auth->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_operation() const
{
    return is_set(yfilter)
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sha' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Auth_()
    :
    authpass{YType::str, "authpass"}
    	,
    priv(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv>())
{
    priv->parent = this;

    yang_name = "auth"; yang_parent_name = "sha";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::~Auth_()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_data() const
{
    return authpass.is_set
	|| (priv !=  nullptr && priv->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authpass.yfilter)
	|| (priv !=  nullptr && priv->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authpass.is_set || is_set(authpass.yfilter)) leaf_name_data.push_back(authpass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priv")
    {
        if(priv == nullptr)
        {
            priv = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv>();
        }
        return priv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priv != nullptr)
    {
        children["priv"] = priv;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authpass")
    {
        authpass = value;
        authpass.value_namespace = name_space;
        authpass.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authpass")
    {
        authpass.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priv" || name == "authpass")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Priv()
    :
    aes(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes>())
{
    aes->parent = this;

    yang_name = "priv"; yang_parent_name = "auth";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::~Priv()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_data() const
{
    return (aes !=  nullptr && aes->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_operation() const
{
    return is_set(yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priv";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priv' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes != nullptr)
    {
        children["aes"] = aes;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Aes()
    :
    algo128(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128>())
{
    algo128->parent = this;

    yang_name = "aes"; yang_parent_name = "priv";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::~Aes()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_data() const
{
    return (algo128 !=  nullptr && algo128->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_operation() const
{
    return is_set(yfilter)
	|| (algo128 !=  nullptr && algo128->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algo128")
    {
        if(algo128 == nullptr)
        {
            algo128 = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128>();
        }
        return algo128;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algo128 != nullptr)
    {
        children["algo128"] = algo128;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algo128")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Algo128()
    :
    privpass(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass>())
{
    privpass->parent = this;

    yang_name = "algo128"; yang_parent_name = "aes";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::~Algo128()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_data() const
{
    return (privpass !=  nullptr && privpass->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_operation() const
{
    return is_set(yfilter)
	|| (privpass !=  nullptr && privpass->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algo128";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Algo128' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "privpass")
    {
        if(privpass == nullptr)
        {
            privpass = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass>();
        }
        return privpass;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(privpass != nullptr)
    {
        children["privpass"] = privpass;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "privpass")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::Privpass()
    :
    access{YType::str, "access"},
    privpass{YType::str, "privpass"}
{
    yang_name = "privpass"; yang_parent_name = "algo128";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::~Privpass()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_data() const
{
    return access.is_set
	|| privpass.is_set;
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(privpass.yfilter);
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privpass";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Privpass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (privpass.is_set || is_set(privpass.yfilter)) leaf_name_data.push_back(privpass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privpass")
    {
        privpass = value;
        privpass.value_namespace = name_space;
        privpass.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "privpass")
    {
        privpass.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "privpass")
        return true;
    return false;
}

Native::SnmpServer::View::View()
    :
    name{YType::str, "name"},
    mib{YType::str, "mib"},
    inc_exl{YType::enumeration, "inc-exl"}
{
    yang_name = "view"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::View::~View()
{
}

bool Native::SnmpServer::View::has_data() const
{
    return name.is_set
	|| mib.is_set
	|| inc_exl.is_set;
}

bool Native::SnmpServer::View::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mib.yfilter)
	|| ydk::is_set(inc_exl.yfilter);
}

std::string Native::SnmpServer::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:view" <<"[name='" <<name <<"']" <<"[mib='" <<mib <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::View::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mib.is_set || is_set(mib.yfilter)) leaf_name_data.push_back(mib.get_name_leafdata());
    if (inc_exl.is_set || is_set(inc_exl.yfilter)) leaf_name_data.push_back(inc_exl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::View::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::View::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib")
    {
        mib = value;
        mib.value_namespace = name_space;
        mib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inc-exl")
    {
        inc_exl = value;
        inc_exl.value_namespace = name_space;
        inc_exl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::View::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mib")
    {
        mib.yfilter = yfilter;
    }
    if(value_path == "inc-exl")
    {
        inc_exl.yfilter = yfilter;
    }
}

bool Native::SnmpServer::View::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "mib" || name == "inc-exl")
        return true;
    return false;
}

Native::SegmentRouting::SegmentRouting()
    :
    mpls(nullptr) // presence node
{
    yang_name = "segment-routing"; yang_parent_name = "native";
}

Native::SegmentRouting::~SegmentRouting()
{
}

bool Native::SegmentRouting::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data());
}

bool Native::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SegmentRouting::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::Mpls()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    connected_prefix_sid_map(nullptr) // presence node
	,global_block(std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>())
	,mapping_server(nullptr) // presence node
	,set_attributes(nullptr) // presence node
{
    global_block->parent = this;

    yang_name = "mpls"; yang_parent_name = "segment-routing";
}

Native::SegmentRouting::Mpls::~Mpls()
{
}

bool Native::SegmentRouting::Mpls::has_data() const
{
    return shutdown.is_set
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_data())
	|| (global_block !=  nullptr && global_block->has_data())
	|| (mapping_server !=  nullptr && mapping_server->has_data())
	|| (set_attributes !=  nullptr && set_attributes->has_data());
}

bool Native::SegmentRouting::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_operation())
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (mapping_server !=  nullptr && mapping_server->has_operation())
	|| (set_attributes !=  nullptr && set_attributes->has_operation());
}

std::string Native::SegmentRouting::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-segment-routing:mpls";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-prefix-sid-map")
    {
        if(connected_prefix_sid_map == nullptr)
        {
            connected_prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap>();
        }
        return connected_prefix_sid_map;
    }

    if(child_yang_name == "global-block")
    {
        if(global_block == nullptr)
        {
            global_block = std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>();
        }
        return global_block;
    }

    if(child_yang_name == "mapping-server")
    {
        if(mapping_server == nullptr)
        {
            mapping_server = std::make_shared<Native::SegmentRouting::Mpls::MappingServer>();
        }
        return mapping_server;
    }

    if(child_yang_name == "set-attributes")
    {
        if(set_attributes == nullptr)
        {
            set_attributes = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes>();
        }
        return set_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected_prefix_sid_map != nullptr)
    {
        children["connected-prefix-sid-map"] = connected_prefix_sid_map;
    }

    if(global_block != nullptr)
    {
        children["global-block"] = global_block;
    }

    if(mapping_server != nullptr)
    {
        children["mapping-server"] = mapping_server;
    }

    if(set_attributes != nullptr)
    {
        children["set-attributes"] = set_attributes;
    }

    return children;
}

void Native::SegmentRouting::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-prefix-sid-map" || name == "global-block" || name == "mapping-server" || name == "set-attributes" || name == "shutdown")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::ConnectedPrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "connected-prefix-sid-map"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::~ConnectedPrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-prefix-sid-map";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "connected-prefix-sid-map";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
{
    yang_name = "strict-spf"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::GlobalBlock::GlobalBlock()
    :
    range_end{YType::uint32, "range-end"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "global-block"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::GlobalBlock::~GlobalBlock()
{
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_data() const
{
    return range_end.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_end.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::GlobalBlock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::GlobalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-end" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::MappingServer()
    :
    prefix_sid_map(nullptr) // presence node
{
    yang_name = "mapping-server"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::MappingServer::~MappingServer()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_data() const
{
    return (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-server";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::PrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "prefix-sid-map"; yang_parent_name = "mapping-server";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "prefix-sid-map";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
{
    yang_name = "strict-spf"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::SetAttributes()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "set-attributes"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::SetAttributes::~SetAttributes()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attributes";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::SetAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::SetAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
{
    yang_name = "address-family"; yang_parent_name = "set-attributes";
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::Ipv4()
    :
    explicit_null{YType::empty, "explicit-null"},
    sr_label_preferred{YType::empty, "sr-label-preferred"}
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_data() const
{
    return explicit_null.is_set
	|| sr_label_preferred.is_set;
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(sr_label_preferred.yfilter);
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (sr_label_preferred.is_set || is_set(sr_label_preferred.yfilter)) leaf_name_data.push_back(sr_label_preferred.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-label-preferred")
    {
        sr_label_preferred = value;
        sr_label_preferred.value_namespace = name_space;
        sr_label_preferred.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "sr-label-preferred")
    {
        sr_label_preferred.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "sr-label-preferred")
        return true;
    return false;
}

Native::License::License()
    :
    smart{YType::enumeration, "smart"}
    	,
    accept(std::make_shared<Native::License::Accept>())
	,boot(std::make_shared<Native::License::Boot>())
	,feature(std::make_shared<Native::License::Feature>())
	,udi(std::make_shared<Native::License::Udi>())
{
    accept->parent = this;

    boot->parent = this;

    feature->parent = this;

    udi->parent = this;

    yang_name = "license"; yang_parent_name = "native";
}

Native::License::~License()
{
}

bool Native::License::has_data() const
{
    return smart.is_set
	|| (accept !=  nullptr && accept->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (feature !=  nullptr && feature->has_data())
	|| (udi !=  nullptr && udi->has_data());
}

bool Native::License::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(smart.yfilter)
	|| (accept !=  nullptr && accept->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (feature !=  nullptr && feature->has_operation())
	|| (udi !=  nullptr && udi->has_operation());
}

std::string Native::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";

    return path_buffer.str();

}

const EntityPath Native::License::get_entity_path(Entity* ancestor) const
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

    if (smart.is_set || is_set(smart.yfilter)) leaf_name_data.push_back(smart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::License::Accept>();
        }
        return accept;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Native::License::Boot>();
        }
        return boot;
    }

    if(child_yang_name == "feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Native::License::Feature>();
        }
        return feature;
    }

    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<Native::License::Udi>();
        }
        return udi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    if(boot != nullptr)
    {
        children["boot"] = boot;
    }

    if(feature != nullptr)
    {
        children["feature"] = feature;
    }

    if(udi != nullptr)
    {
        children["udi"] = udi;
    }

    return children;
}

void Native::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "smart")
    {
        smart = value;
        smart.value_namespace = name_space;
        smart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart")
    {
        smart.yfilter = yfilter;
    }
}

bool Native::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept" || name == "boot" || name == "feature" || name == "udi" || name == "smart")
        return true;
    return false;
}

Native::License::Udi::Udi()
    :
    pid{YType::str, "pid"},
    sn{YType::str, "sn"}
{
    yang_name = "udi"; yang_parent_name = "license";
}

Native::License::Udi::~Udi()
{
}

bool Native::License::Udi::has_data() const
{
    return pid.is_set
	|| sn.is_set;
}

bool Native::License::Udi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(sn.yfilter);
}

std::string Native::License::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";

    return path_buffer.str();

}

const EntityPath Native::License::Udi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Udi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Udi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "sn")
    {
        sn.yfilter = yfilter;
    }
}

bool Native::License::Udi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "sn")
        return true;
    return false;
}

Native::License::Feature::Feature()
    :
    name{YType::str, "name"}
    	,
    port(std::make_shared<Native::License::Feature::Port>())
{
    port->parent = this;

    yang_name = "feature"; yang_parent_name = "license";
}

Native::License::Feature::~Feature()
{
}

bool Native::License::Feature::has_data() const
{
    return name.is_set
	|| (port !=  nullptr && port->has_data());
}

bool Native::License::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::License::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";

    return path_buffer.str();

}

const EntityPath Native::License::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::License::Feature::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::License::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::License::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "name")
        return true;
    return false;
}

Native::License::Feature::Port::Port()
    :
    b_6xonegig{YType::uint8, "b-6xonegig"},
    bulk{YType::empty, "bulk"},
    onegig{YType::uint8, "onegig"},
    tengig{YType::uint8, "tengig"}
{
    yang_name = "port"; yang_parent_name = "feature";
}

Native::License::Feature::Port::~Port()
{
}

bool Native::License::Feature::Port::has_data() const
{
    return b_6xonegig.is_set
	|| bulk.is_set
	|| onegig.is_set
	|| tengig.is_set;
}

bool Native::License::Feature::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_6xonegig.yfilter)
	|| ydk::is_set(bulk.yfilter)
	|| ydk::is_set(onegig.yfilter)
	|| ydk::is_set(tengig.yfilter);
}

std::string Native::License::Feature::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::License::Feature::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/feature/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_6xonegig.is_set || is_set(b_6xonegig.yfilter)) leaf_name_data.push_back(b_6xonegig.get_name_leafdata());
    if (bulk.is_set || is_set(bulk.yfilter)) leaf_name_data.push_back(bulk.get_name_leafdata());
    if (onegig.is_set || is_set(onegig.yfilter)) leaf_name_data.push_back(onegig.get_name_leafdata());
    if (tengig.is_set || is_set(tengig.yfilter)) leaf_name_data.push_back(tengig.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Feature::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Feature::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-6xonegig")
    {
        b_6xonegig = value;
        b_6xonegig.value_namespace = name_space;
        b_6xonegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bulk")
    {
        bulk = value;
        bulk.value_namespace = name_space;
        bulk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onegig")
    {
        onegig = value;
        onegig.value_namespace = name_space;
        onegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tengig")
    {
        tengig = value;
        tengig.value_namespace = name_space;
        tengig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-6xonegig")
    {
        b_6xonegig.yfilter = yfilter;
    }
    if(value_path == "bulk")
    {
        bulk.yfilter = yfilter;
    }
    if(value_path == "onegig")
    {
        onegig.yfilter = yfilter;
    }
    if(value_path == "tengig")
    {
        tengig.yfilter = yfilter;
    }
}

bool Native::License::Feature::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-6xonegig" || name == "bulk" || name == "onegig" || name == "tengig")
        return true;
    return false;
}

Native::License::Accept::Accept()
    :
    agreement{YType::empty, "agreement"},
    end{YType::empty, "end"},
    user{YType::empty, "user"}
{
    yang_name = "accept"; yang_parent_name = "license";
}

Native::License::Accept::~Accept()
{
}

bool Native::License::Accept::has_data() const
{
    return agreement.is_set
	|| end.is_set
	|| user.is_set;
}

bool Native::License::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agreement.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(user.yfilter);
}

std::string Native::License::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

const EntityPath Native::License::Accept::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agreement.is_set || is_set(agreement.yfilter)) leaf_name_data.push_back(agreement.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agreement")
    {
        agreement = value;
        agreement.value_namespace = name_space;
        agreement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agreement")
    {
        agreement.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
}

bool Native::License::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agreement" || name == "end" || name == "user")
        return true;
    return false;
}

Native::License::Boot::Boot()
    :
    boot_module(std::make_shared<Native::License::Boot::BootModule>())
	,level(std::make_shared<Native::License::Boot::Level>())
{
    boot_module->parent = this;

    level->parent = this;

    yang_name = "boot"; yang_parent_name = "license";
}

Native::License::Boot::~Boot()
{
}

bool Native::License::Boot::has_data() const
{
    return (boot_module !=  nullptr && boot_module->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::License::Boot::has_operation() const
{
    return is_set(yfilter)
	|| (boot_module !=  nullptr && boot_module->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::License::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-module")
    {
        if(boot_module == nullptr)
        {
            boot_module = std::make_shared<Native::License::Boot::BootModule>();
        }
        return boot_module;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::License::Boot::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(boot_module != nullptr)
    {
        children["boot-module"] = boot_module;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::License::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::License::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::License::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-module" || name == "level")
        return true;
    return false;
}

Native::License::Boot::Level::Level()
    :
    advancedmetroipaccess{YType::empty, "advancedmetroipaccess"},
    adventerprise{YType::empty, "adventerprise"},
    appx{YType::empty, "appx"},
    appxk9{YType::empty, "appxk9"},
    entservices{YType::empty, "entservices"},
    ipbasek9{YType::empty, "ipbasek9"},
    lanbasek9{YType::empty, "lanbasek9"},
    metroaccess{YType::empty, "metroaccess"},
    metroipaccess{YType::empty, "metroipaccess"},
    securityk9{YType::empty, "securityk9"}
    	,
    ipbase(nullptr) // presence node
	,ipservices(nullptr) // presence node
	,ipservicesk9(nullptr) // presence node
	,lanbase(nullptr) // presence node
	,lite(nullptr) // presence node
	,metroaggrservices(nullptr) // presence node
	,uck9(nullptr) // presence node
{
    yang_name = "level"; yang_parent_name = "boot";
}

Native::License::Boot::Level::~Level()
{
}

bool Native::License::Boot::Level::has_data() const
{
    return advancedmetroipaccess.is_set
	|| adventerprise.is_set
	|| appx.is_set
	|| appxk9.is_set
	|| entservices.is_set
	|| ipbasek9.is_set
	|| lanbasek9.is_set
	|| metroaccess.is_set
	|| metroipaccess.is_set
	|| securityk9.is_set
	|| (ipbase !=  nullptr && ipbase->has_data())
	|| (ipservices !=  nullptr && ipservices->has_data())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_data())
	|| (lanbase !=  nullptr && lanbase->has_data())
	|| (lite !=  nullptr && lite->has_data())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_data())
	|| (uck9 !=  nullptr && uck9->has_data());
}

bool Native::License::Boot::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advancedmetroipaccess.yfilter)
	|| ydk::is_set(adventerprise.yfilter)
	|| ydk::is_set(appx.yfilter)
	|| ydk::is_set(appxk9.yfilter)
	|| ydk::is_set(entservices.yfilter)
	|| ydk::is_set(ipbasek9.yfilter)
	|| ydk::is_set(lanbasek9.yfilter)
	|| ydk::is_set(metroaccess.yfilter)
	|| ydk::is_set(metroipaccess.yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| (ipbase !=  nullptr && ipbase->has_operation())
	|| (ipservices !=  nullptr && ipservices->has_operation())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_operation())
	|| (lanbase !=  nullptr && lanbase->has_operation())
	|| (lite !=  nullptr && lite->has_operation())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_operation())
	|| (uck9 !=  nullptr && uck9->has_operation());
}

std::string Native::License::Boot::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advancedmetroipaccess.is_set || is_set(advancedmetroipaccess.yfilter)) leaf_name_data.push_back(advancedmetroipaccess.get_name_leafdata());
    if (adventerprise.is_set || is_set(adventerprise.yfilter)) leaf_name_data.push_back(adventerprise.get_name_leafdata());
    if (appx.is_set || is_set(appx.yfilter)) leaf_name_data.push_back(appx.get_name_leafdata());
    if (appxk9.is_set || is_set(appxk9.yfilter)) leaf_name_data.push_back(appxk9.get_name_leafdata());
    if (entservices.is_set || is_set(entservices.yfilter)) leaf_name_data.push_back(entservices.get_name_leafdata());
    if (ipbasek9.is_set || is_set(ipbasek9.yfilter)) leaf_name_data.push_back(ipbasek9.get_name_leafdata());
    if (lanbasek9.is_set || is_set(lanbasek9.yfilter)) leaf_name_data.push_back(lanbasek9.get_name_leafdata());
    if (metroaccess.is_set || is_set(metroaccess.yfilter)) leaf_name_data.push_back(metroaccess.get_name_leafdata());
    if (metroipaccess.is_set || is_set(metroipaccess.yfilter)) leaf_name_data.push_back(metroipaccess.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipbase")
    {
        if(ipbase == nullptr)
        {
            ipbase = std::make_shared<Native::License::Boot::Level::Ipbase>();
        }
        return ipbase;
    }

    if(child_yang_name == "ipservices")
    {
        if(ipservices == nullptr)
        {
            ipservices = std::make_shared<Native::License::Boot::Level::Ipservices>();
        }
        return ipservices;
    }

    if(child_yang_name == "ipservicesk9")
    {
        if(ipservicesk9 == nullptr)
        {
            ipservicesk9 = std::make_shared<Native::License::Boot::Level::Ipservicesk9>();
        }
        return ipservicesk9;
    }

    if(child_yang_name == "lanbase")
    {
        if(lanbase == nullptr)
        {
            lanbase = std::make_shared<Native::License::Boot::Level::Lanbase>();
        }
        return lanbase;
    }

    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::License::Boot::Level::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "metroaggrservices")
    {
        if(metroaggrservices == nullptr)
        {
            metroaggrservices = std::make_shared<Native::License::Boot::Level::Metroaggrservices>();
        }
        return metroaggrservices;
    }

    if(child_yang_name == "uck9")
    {
        if(uck9 == nullptr)
        {
            uck9 = std::make_shared<Native::License::Boot::Level::Uck9>();
        }
        return uck9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipbase != nullptr)
    {
        children["ipbase"] = ipbase;
    }

    if(ipservices != nullptr)
    {
        children["ipservices"] = ipservices;
    }

    if(ipservicesk9 != nullptr)
    {
        children["ipservicesk9"] = ipservicesk9;
    }

    if(lanbase != nullptr)
    {
        children["lanbase"] = lanbase;
    }

    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(metroaggrservices != nullptr)
    {
        children["metroaggrservices"] = metroaggrservices;
    }

    if(uck9 != nullptr)
    {
        children["uck9"] = uck9;
    }

    return children;
}

void Native::License::Boot::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess = value;
        advancedmetroipaccess.value_namespace = name_space;
        advancedmetroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adventerprise")
    {
        adventerprise = value;
        adventerprise.value_namespace = name_space;
        adventerprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appx")
    {
        appx = value;
        appx.value_namespace = name_space;
        appx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appxk9")
    {
        appxk9 = value;
        appxk9.value_namespace = name_space;
        appxk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entservices")
    {
        entservices = value;
        entservices.value_namespace = name_space;
        entservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipbasek9")
    {
        ipbasek9 = value;
        ipbasek9.value_namespace = name_space;
        ipbasek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanbasek9")
    {
        lanbasek9 = value;
        lanbasek9.value_namespace = name_space;
        lanbasek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroaccess")
    {
        metroaccess = value;
        metroaccess.value_namespace = name_space;
        metroaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess = value;
        metroipaccess.value_namespace = name_space;
        metroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess.yfilter = yfilter;
    }
    if(value_path == "adventerprise")
    {
        adventerprise.yfilter = yfilter;
    }
    if(value_path == "appx")
    {
        appx.yfilter = yfilter;
    }
    if(value_path == "appxk9")
    {
        appxk9.yfilter = yfilter;
    }
    if(value_path == "entservices")
    {
        entservices.yfilter = yfilter;
    }
    if(value_path == "ipbasek9")
    {
        ipbasek9.yfilter = yfilter;
    }
    if(value_path == "lanbasek9")
    {
        lanbasek9.yfilter = yfilter;
    }
    if(value_path == "metroaccess")
    {
        metroaccess.yfilter = yfilter;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess.yfilter = yfilter;
    }
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipbase" || name == "ipservices" || name == "ipservicesk9" || name == "lanbase" || name == "lite" || name == "metroaggrservices" || name == "uck9" || name == "advancedmetroipaccess" || name == "adventerprise" || name == "appx" || name == "appxk9" || name == "entservices" || name == "ipbasek9" || name == "lanbasek9" || name == "metroaccess" || name == "metroipaccess" || name == "securityk9")
        return true;
    return false;
}

Native::License::Boot::Level::Ipbase::Ipbase()
    :
    switch_{YType::uint8, "switch"}
{
    yang_name = "ipbase"; yang_parent_name = "level";
}

Native::License::Boot::Level::Ipbase::~Ipbase()
{
}

bool Native::License::Boot::Level::Ipbase::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipbase";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Ipbase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservices::Ipservices()
    :
    switch_{YType::empty, "switch"}
{
    yang_name = "ipservices"; yang_parent_name = "level";
}

Native::License::Boot::Level::Ipservices::~Ipservices()
{
}

bool Native::License::Boot::Level::Ipservices::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservices";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Ipservices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservicesk9::Ipservicesk9()
    :
    switch_{YType::empty, "switch"}
{
    yang_name = "ipservicesk9"; yang_parent_name = "level";
}

Native::License::Boot::Level::Ipservicesk9::~Ipservicesk9()
{
}

bool Native::License::Boot::Level::Ipservicesk9::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipservicesk9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipservicesk9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservicesk9";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Ipservicesk9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservicesk9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservicesk9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservicesk9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservicesk9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservicesk9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Lanbase::Lanbase()
    :
    switch_{YType::empty, "switch"}
{
    yang_name = "lanbase"; yang_parent_name = "level";
}

Native::License::Boot::Level::Lanbase::~Lanbase()
{
}

bool Native::License::Boot::Level::Lanbase::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lanbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lanbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lanbase";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Lanbase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lanbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lanbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lanbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lanbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lanbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Lite::Lite()
    :
    switch_{YType::empty, "switch"}
{
    yang_name = "lite"; yang_parent_name = "level";
}

Native::License::Boot::Level::Lite::~Lite()
{
}

bool Native::License::Boot::Level::Lite::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Lite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Metroaggrservices::Metroaggrservices()
    :
    switch_{YType::empty, "switch"}
{
    yang_name = "metroaggrservices"; yang_parent_name = "level";
}

Native::License::Boot::Level::Metroaggrservices::~Metroaggrservices()
{
}

bool Native::License::Boot::Level::Metroaggrservices::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Metroaggrservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Metroaggrservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metroaggrservices";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Metroaggrservices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Metroaggrservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Metroaggrservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Metroaggrservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Metroaggrservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Metroaggrservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Uck9::Uck9()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "uck9"; yang_parent_name = "level";
}

Native::License::Boot::Level::Uck9::~Uck9()
{
}

bool Native::License::Boot::Level::Uck9::has_data() const
{
    return disable.is_set;
}

bool Native::License::Boot::Level::Uck9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::License::Boot::Level::Uck9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uck9";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Uck9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Uck9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Uck9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Uck9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Uck9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Uck9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::License::Boot::BootModule::BootModule()
    :
    module{YType::enumeration, "module"}
    	,
    technology_package(std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>())
{
    technology_package->parent = this;

    yang_name = "boot-module"; yang_parent_name = "boot";
}

Native::License::Boot::BootModule::~BootModule()
{
}

bool Native::License::Boot::BootModule::has_data() const
{
    return module.is_set
	|| (technology_package !=  nullptr && technology_package->has_data());
}

bool Native::License::Boot::BootModule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| (technology_package !=  nullptr && technology_package->has_operation());
}

std::string Native::License::Boot::BootModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-module";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::BootModule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "technology-package")
    {
        if(technology_package == nullptr)
        {
            technology_package = std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>();
        }
        return technology_package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(technology_package != nullptr)
    {
        children["technology-package"] = technology_package;
    }

    return children;
}

void Native::License::Boot::BootModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "technology-package" || name == "module")
        return true;
    return false;
}

Native::License::Boot::BootModule::TechnologyPackage::TechnologyPackage()
    :
    datak9{YType::empty, "datak9"},
    securityk9{YType::empty, "securityk9"},
    uck9{YType::empty, "uck9"}
{
    yang_name = "technology-package"; yang_parent_name = "boot-module";
}

Native::License::Boot::BootModule::TechnologyPackage::~TechnologyPackage()
{
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_data() const
{
    return datak9.is_set
	|| securityk9.is_set
	|| uck9.is_set;
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(datak9.yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| ydk::is_set(uck9.yfilter);
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "technology-package";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::BootModule::TechnologyPackage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/boot-module/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datak9.is_set || is_set(datak9.yfilter)) leaf_name_data.push_back(datak9.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());
    if (uck9.is_set || is_set(uck9.yfilter)) leaf_name_data.push_back(uck9.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::TechnologyPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::TechnologyPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::BootModule::TechnologyPackage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "datak9")
    {
        datak9 = value;
        datak9.value_namespace = name_space;
        datak9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uck9")
    {
        uck9 = value;
        uck9.value_namespace = name_space;
        uck9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::TechnologyPackage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "datak9")
    {
        datak9.yfilter = yfilter;
    }
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
    if(value_path == "uck9")
    {
        uck9.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datak9" || name == "securityk9" || name == "uck9")
        return true;
    return false;
}

Native::MemorySize::MemorySize()
    :
    iomem{YType::uint8, "iomem"}
{
    yang_name = "memory-size"; yang_parent_name = "native";
}

Native::MemorySize::~MemorySize()
{
}

bool Native::MemorySize::has_data() const
{
    return iomem.is_set;
}

bool Native::MemorySize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iomem.yfilter);
}

std::string Native::MemorySize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-size";

    return path_buffer.str();

}

const EntityPath Native::MemorySize::get_entity_path(Entity* ancestor) const
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

    if (iomem.is_set || is_set(iomem.yfilter)) leaf_name_data.push_back(iomem.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MemorySize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MemorySize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MemorySize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iomem")
    {
        iomem = value;
        iomem.value_namespace = name_space;
        iomem.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MemorySize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iomem")
    {
        iomem.yfilter = yfilter;
    }
}

bool Native::MemorySize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iomem")
        return true;
    return false;
}

Native::Transceiver::Transceiver()
    :
    type(std::make_shared<Native::Transceiver::Type>())
{
    type->parent = this;

    yang_name = "transceiver"; yang_parent_name = "native";
}

Native::Transceiver::~Transceiver()
{
}

bool Native::Transceiver::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Transceiver::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Transceiver::Type::Type()
    :
    all(std::make_shared<Native::Transceiver::Type::All>())
{
    all->parent = this;

    yang_name = "type"; yang_parent_name = "transceiver";
}

Native::Transceiver::Type::~Type()
{
}

bool Native::Transceiver::Type::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Transceiver::Type::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Transceiver::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/transceiver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Transceiver::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Transceiver::Type::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Transceiver::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Transceiver::Type::All::All()
    :
    monitoring(nullptr) // presence node
{
    yang_name = "all"; yang_parent_name = "type";
}

Native::Transceiver::Type::All::~All()
{
}

bool Native::Transceiver::Type::All::has_data() const
{
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Transceiver::Type::All::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Transceiver::Type::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::Type::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Transceiver::Type::All::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitoring != nullptr)
    {
        children["monitoring"] = monitoring;
    }

    return children;
}

void Native::Transceiver::Type::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Transceiver::Type::All::Monitoring::Monitoring()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "monitoring"; yang_parent_name = "all";
}

Native::Transceiver::Type::All::Monitoring::~Monitoring()
{
}

bool Native::Transceiver::Type::All::Monitoring::has_data() const
{
    return interval.is_set;
}

bool Native::Transceiver::Type::All::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Transceiver::Type::All::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::Type::All::Monitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Transceiver::Type::All::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Transceiver::Type::All::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Transceiver::Type::All::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceInsertion()
    :
    acg_reload_delay{YType::uint16, "Cisco-IOS-XE-service-insertion:acg-reload-delay"}
    	,
    service_context(std::make_shared<Native::ServiceInsertion::ServiceContext>())
	,swap(std::make_shared<Native::ServiceInsertion::Swap>())
{
    service_context->parent = this;

    swap->parent = this;

    yang_name = "service-insertion"; yang_parent_name = "native";
}

Native::ServiceInsertion::~ServiceInsertion()
{
}

bool Native::ServiceInsertion::has_data() const
{
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
    {
        if(service_node_group[index]->has_data())
            return true;
    }
    return acg_reload_delay.is_set
	|| (service_context !=  nullptr && service_context->has_data())
	|| (swap !=  nullptr && swap->has_data());
}

bool Native::ServiceInsertion::has_operation() const
{
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
    {
        if(service_node_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acg_reload_delay.yfilter)
	|| (service_context !=  nullptr && service_context->has_operation())
	|| (swap !=  nullptr && swap->has_operation());
}

std::string Native::ServiceInsertion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-insertion";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::get_entity_path(Entity* ancestor) const
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

    if (acg_reload_delay.is_set || is_set(acg_reload_delay.yfilter)) leaf_name_data.push_back(acg_reload_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appnav-controller-group")
    {
        for(auto const & c : appnav_controller_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::AppnavControllerGroup>();
        c->parent = this;
        appnav_controller_group.push_back(c);
        return c;
    }

    if(child_yang_name == "service-context")
    {
        if(service_context == nullptr)
        {
            service_context = std::make_shared<Native::ServiceInsertion::ServiceContext>();
        }
        return service_context;
    }

    if(child_yang_name == "service-node-group")
    {
        for(auto const & c : service_node_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceNodeGroup>();
        c->parent = this;
        service_node_group.push_back(c);
        return c;
    }

    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<Native::ServiceInsertion::Swap>();
        }
        return swap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appnav_controller_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(service_context != nullptr)
    {
        children["service-context"] = service_context;
    }

    for (auto const & c : service_node_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    return children;
}

void Native::ServiceInsertion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acg-reload-delay")
    {
        acg_reload_delay = value;
        acg_reload_delay.value_namespace = name_space;
        acg_reload_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acg-reload-delay")
    {
        acg_reload_delay.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appnav-controller-group" || name == "service-context" || name == "service-node-group" || name == "swap" || name == "acg-reload-delay")
        return true;
    return false;
}

Native::ServiceInsertion::AppnavControllerGroup::AppnavControllerGroup()
    :
    group_name{YType::str, "group-name"},
    appnav_controller{YType::str, "appnav-controller"},
    description{YType::str, "description"}
{
    yang_name = "appnav-controller-group"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::AppnavControllerGroup::~AppnavControllerGroup()
{
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_data() const
{
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group_name.is_set
	|| description.is_set;
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_operation() const
{
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(appnav_controller.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::ServiceInsertion::AppnavControllerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:appnav-controller-group" <<"[group-name='" <<group_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::AppnavControllerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    auto appnav_controller_name_datas = appnav_controller.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), appnav_controller_name_datas.begin(), appnav_controller_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::AppnavControllerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::AppnavControllerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::AppnavControllerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appnav-controller")
    {
        appnav_controller.append(value);
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::AppnavControllerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "appnav-controller")
    {
        appnav_controller.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "appnav-controller" || name == "description")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::ServiceContext()
{
    yang_name = "service-context"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::ServiceContext::~ServiceContext()
{
}

bool Native::ServiceInsertion::ServiceContext::has_data() const
{
    for (std::size_t index=0; index<waas.size(); index++)
    {
        if(waas[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceInsertion::ServiceContext::has_operation() const
{
    for (std::size_t index=0; index<waas.size(); index++)
    {
        if(waas[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-context";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        for(auto const & c : waas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas>();
        c->parent = this;
        waas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : waas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceInsertion::ServiceContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceInsertion::ServiceContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Waas()
    :
    name{YType::str, "name"},
    appnav_controller_group{YType::str, "appnav-controller-group"},
    enable{YType::empty, "enable"},
    service_node_group{YType::str, "service-node-group"},
    service_policy{YType::str, "service-policy"}
    	,
    authentication(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>())
	,vrf(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>())
{
    authentication->parent = this;

    vrf->parent = this;

    yang_name = "waas"; yang_parent_name = "service-context";
}

Native::ServiceInsertion::ServiceContext::Waas::~Waas()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_data() const
{
    return name.is_set
	|| appnav_controller_group.is_set
	|| enable.is_set
	|| service_node_group.is_set
	|| service_policy.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(appnav_controller_group.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::ServiceInsertion::ServiceContext::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::Waas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/Cisco-IOS-XE-service-insertion:service-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (appnav_controller_group.is_set || is_set(appnav_controller_group.yfilter)) leaf_name_data.push_back(appnav_controller_group.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appnav-controller-group")
    {
        appnav_controller_group = value;
        appnav_controller_group.value_namespace = name_space;
        appnav_controller_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "appnav-controller-group")
    {
        appnav_controller_group.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "vrf" || name == "name" || name == "appnav-controller-group" || name == "enable" || name == "service-node-group" || name == "service-policy")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::Authentication()
    :
    encrypt{YType::enumeration, "encrypt"},
    key{YType::empty, "key"},
    sha1{YType::empty, "sha1"},
    string{YType::str, "string"}
{
    yang_name = "authentication"; yang_parent_name = "waas";
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::~Authentication()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_data() const
{
    return encrypt.is_set
	|| key.is_set
	|| sha1.is_set
	|| string.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_entity_path(Entity* ancestor) const
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

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "key" || name == "sha1" || name == "string")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::Vrf()
    :
    default_{YType::empty, "default"},
    global{YType::empty, "global"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "waas";
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::~Vrf()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_data() const
{
    return default_.is_set
	|| global.is_set
	|| name.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_entity_path(Entity* ancestor) const
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

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "global" || name == "name")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceNodeGroup::ServiceNodeGroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    node_discovery{YType::enumeration, "node-discovery"},
    service_node{YType::str, "service-node"}
{
    yang_name = "service-node-group"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::ServiceNodeGroup::~ServiceNodeGroup()
{
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_data() const
{
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| description.is_set
	|| node_discovery.is_set;
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_operation() const
{
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(node_discovery.yfilter)
	|| ydk::is_set(service_node.yfilter);
}

std::string Native::ServiceInsertion::ServiceNodeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-node-group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceNodeGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (node_discovery.is_set || is_set(node_discovery.yfilter)) leaf_name_data.push_back(node_discovery.get_name_leafdata());

    auto service_node_name_datas = service_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_node_name_datas.begin(), service_node_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceNodeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceNodeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceNodeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-discovery")
    {
        node_discovery = value;
        node_discovery.value_namespace = name_space;
        node_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-node")
    {
        service_node.append(value);
    }
}

void Native::ServiceInsertion::ServiceNodeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "node-discovery")
    {
        node_discovery.yfilter = yfilter;
    }
    if(value_path == "service-node")
    {
        service_node.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "node-discovery" || name == "service-node")
        return true;
    return false;
}

Native::ServiceInsertion::Swap::Swap()
    :
    src_ip{YType::empty, "src-ip"}
{
    yang_name = "swap"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::Swap::~Swap()
{
}

bool Native::ServiceInsertion::Swap::has_data() const
{
    return src_ip.is_set;
}

bool Native::ServiceInsertion::Swap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_ip.yfilter);
}

std::string Native::ServiceInsertion::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:swap";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ip")
        return true;
    return false;
}

Native::Udld::Udld()
    :
    aggressive{YType::empty, "Cisco-IOS-XE-udld:aggressive"},
    enable{YType::empty, "Cisco-IOS-XE-udld:enable"}
    	,
    message(std::make_shared<Native::Udld::Message>())
	,recovery(nullptr) // presence node
{
    message->parent = this;

    yang_name = "udld"; yang_parent_name = "native";
}

Native::Udld::~Udld()
{
}

bool Native::Udld::has_data() const
{
    return aggressive.is_set
	|| enable.is_set
	|| (message !=  nullptr && message->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Udld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (message !=  nullptr && message->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";

    return path_buffer.str();

}

const EntityPath Native::Udld::get_entity_path(Entity* ancestor) const
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

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        if(message == nullptr)
        {
            message = std::make_shared<Native::Udld::Message>();
        }
        return message;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Udld::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message != nullptr)
    {
        children["message"] = message;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "recovery" || name == "aggressive" || name == "enable")
        return true;
    return false;
}

Native::Udld::Message::Message()
    :
    time{YType::uint8, "time"}
{
    yang_name = "message"; yang_parent_name = "udld";
}

Native::Udld::Message::~Message()
{
}

bool Native::Udld::Message::has_data() const
{
    return time.is_set;
}

bool Native::Udld::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Udld::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:message";

    return path_buffer.str();

}

const EntityPath Native::Udld::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Udld::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Udld::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Udld::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Udld::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "recovery"; yang_parent_name = "udld";
}

Native::Udld::Recovery::~Recovery()
{
}

bool Native::Udld::Recovery::has_data() const
{
    return interval.is_set;
}

bool Native::Udld::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Udld::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:recovery";

    return path_buffer.str();

}

const EntityPath Native::Udld::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Udld::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Udld::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Udld::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Udld::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Wireless::Wireless()
    :
    mdns_bridging{YType::boolean, "mdns-bridging"}
{
    yang_name = "wireless"; yang_parent_name = "native";
}

Native::Wireless::~Wireless()
{
}

bool Native::Wireless::has_data() const
{
    return mdns_bridging.is_set;
}

bool Native::Wireless::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mdns_bridging.yfilter);
}

std::string Native::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";

    return path_buffer.str();

}

const EntityPath Native::Wireless::get_entity_path(Entity* ancestor) const
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

    if (mdns_bridging.is_set || is_set(mdns_bridging.yfilter)) leaf_name_data.push_back(mdns_bridging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wireless::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mdns-bridging")
    {
        mdns_bridging = value;
        mdns_bridging.value_namespace = name_space;
        mdns_bridging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Wireless::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mdns-bridging")
    {
        mdns_bridging.yfilter = yfilter;
    }
}

bool Native::Wireless::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-bridging")
        return true;
    return false;
}

Native::Qos::Qos()
    :
    diffservmib{YType::empty, "Cisco-IOS-XE-qos:diffservmib"}
    	,
    account(std::make_shared<Native::Qos::Account>())
	,control_packets(nullptr) // presence node
	,preserve(std::make_shared<Native::Qos::Preserve>())
	,queue_softmax_multiplier(std::make_shared<Native::Qos::QueueSoftmaxMultiplier>())
	,trace(std::make_shared<Native::Qos::Trace>())
{
    account->parent = this;

    preserve->parent = this;

    queue_softmax_multiplier->parent = this;

    trace->parent = this;

    yang_name = "qos"; yang_parent_name = "native";
}

Native::Qos::~Qos()
{
}

bool Native::Qos::has_data() const
{
    return diffservmib.is_set
	|| (account !=  nullptr && account->has_data())
	|| (control_packets !=  nullptr && control_packets->has_data())
	|| (preserve !=  nullptr && preserve->has_data())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_data())
	|| (trace !=  nullptr && trace->has_data());
}

bool Native::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmib.yfilter)
	|| (account !=  nullptr && account->has_operation())
	|| (control_packets !=  nullptr && control_packets->has_operation())
	|| (preserve !=  nullptr && preserve->has_operation())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_operation())
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Native::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Qos::get_entity_path(Entity* ancestor) const
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

    if (diffservmib.is_set || is_set(diffservmib.yfilter)) leaf_name_data.push_back(diffservmib.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "control-packets")
    {
        if(control_packets == nullptr)
        {
            control_packets = std::make_shared<Native::Qos::ControlPackets>();
        }
        return control_packets;
    }

    if(child_yang_name == "preserve")
    {
        if(preserve == nullptr)
        {
            preserve = std::make_shared<Native::Qos::Preserve>();
        }
        return preserve;
    }

    if(child_yang_name == "queue-softmax-multiplier")
    {
        if(queue_softmax_multiplier == nullptr)
        {
            queue_softmax_multiplier = std::make_shared<Native::Qos::QueueSoftmaxMultiplier>();
        }
        return queue_softmax_multiplier;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Qos::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(control_packets != nullptr)
    {
        children["control-packets"] = control_packets;
    }

    if(preserve != nullptr)
    {
        children["preserve"] = preserve;
    }

    if(queue_softmax_multiplier != nullptr)
    {
        children["queue-softmax-multiplier"] = queue_softmax_multiplier;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    return children;
}

void Native::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diffservmib")
    {
        diffservmib = value;
        diffservmib.value_namespace = name_space;
        diffservmib.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffservmib")
    {
        diffservmib.yfilter = yfilter;
    }
}

bool Native::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "control-packets" || name == "preserve" || name == "queue-softmax-multiplier" || name == "trace" || name == "diffservmib")
        return true;
    return false;
}

Native::Qos::Account::Account()
    :
    layer2(std::make_shared<Native::Qos::Account::Layer2>())
	,layer_all(std::make_shared<Native::Qos::Account::LayerAll>())
{
    layer2->parent = this;

    layer_all->parent = this;

    yang_name = "account"; yang_parent_name = "qos";
}

Native::Qos::Account::~Account()
{
}

bool Native::Qos::Account::has_data() const
{
    return (layer2 !=  nullptr && layer2->has_data())
	|| (layer_all !=  nullptr && layer_all->has_data());
}

bool Native::Qos::Account::has_operation() const
{
    return is_set(yfilter)
	|| (layer2 !=  nullptr && layer2->has_operation())
	|| (layer_all !=  nullptr && layer_all->has_operation());
}

std::string Native::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:account";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "layer2")
    {
        if(layer2 == nullptr)
        {
            layer2 = std::make_shared<Native::Qos::Account::Layer2>();
        }
        return layer2;
    }

    if(child_yang_name == "layer-all")
    {
        if(layer_all == nullptr)
        {
            layer_all = std::make_shared<Native::Qos::Account::LayerAll>();
        }
        return layer_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(layer2 != nullptr)
    {
        children["layer2"] = layer2;
    }

    if(layer_all != nullptr)
    {
        children["layer-all"] = layer_all;
    }

    return children;
}

void Native::Qos::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer2" || name == "layer-all")
        return true;
    return false;
}

Native::Qos::Account::LayerAll::LayerAll()
    :
    encapsulation{YType::empty, "encapsulation"}
{
    yang_name = "layer-all"; yang_parent_name = "account";
}

Native::Qos::Account::LayerAll::~LayerAll()
{
}

bool Native::Qos::Account::LayerAll::has_data() const
{
    return encapsulation.is_set;
}

bool Native::Qos::Account::LayerAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter);
}

std::string Native::Qos::Account::LayerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer-all";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::LayerAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::LayerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::LayerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::LayerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::LayerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::Qos::Account::LayerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Layer2()
    :
    encapsulation(std::make_shared<Native::Qos::Account::Layer2::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "layer2"; yang_parent_name = "account";
}

Native::Qos::Account::Layer2::~Layer2()
{
}

bool Native::Qos::Account::Layer2::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::Qos::Account::Layer2::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::Qos::Account::Layer2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::Layer2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Qos::Account::Layer2::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::Qos::Account::Layer2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::Layer2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::Layer2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Encapsulation()
    :
    arpa{YType::empty, "arpa"},
    dot1q{YType::empty, "dot1q"},
    isl{YType::empty, "isl"}
    	,
    length(nullptr) // presence node
{
    yang_name = "encapsulation"; yang_parent_name = "layer2";
}

Native::Qos::Account::Layer2::Encapsulation::~Encapsulation()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::has_data() const
{
    return arpa.is_set
	|| dot1q.is_set
	|| isl.is_set
	|| (length !=  nullptr && length->has_data());
}

bool Native::Qos::Account::Layer2::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arpa.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(isl.yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::Layer2::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpa.is_set || is_set(arpa.yfilter)) leaf_name_data.push_back(arpa.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (isl.is_set || is_set(isl.yfilter)) leaf_name_data.push_back(isl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Qos::Account::Layer2::Encapsulation::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpa")
    {
        arpa = value;
        arpa.value_namespace = name_space;
        arpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isl")
    {
        isl = value;
        isl.value_namespace = name_space;
        isl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpa")
    {
        arpa.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "isl")
    {
        isl.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length" || name == "arpa" || name == "dot1q" || name == "isl")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Length::Length()
    :
    byte_length{YType::int8, "byte-length"}
{
    yang_name = "length"; yang_parent_name = "encapsulation";
}

Native::Qos::Account::Layer2::Encapsulation::Length::~Length()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_data() const
{
    return byte_length.is_set;
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_length.yfilter);
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::Layer2::Encapsulation::Length::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/encapsulation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_length.is_set || is_set(byte_length.yfilter)) leaf_name_data.push_back(byte_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-length")
    {
        byte_length = value;
        byte_length.value_namespace = name_space;
        byte_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-length")
    {
        byte_length.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-length")
        return true;
    return false;
}

Native::Qos::ControlPackets::ControlPackets()
    :
    bpdu_range{YType::empty, "bpdu-range"},
    cdp_vtp{YType::empty, "cdp-vtp"},
    eapol{YType::empty, "eapol"},
    lldp{YType::empty, "lldp"},
    protocol_tunnel{YType::empty, "protocol-tunnel"},
    sstp{YType::empty, "sstp"}
{
    yang_name = "control-packets"; yang_parent_name = "qos";
}

Native::Qos::ControlPackets::~ControlPackets()
{
}

bool Native::Qos::ControlPackets::has_data() const
{
    return bpdu_range.is_set
	|| cdp_vtp.is_set
	|| eapol.is_set
	|| lldp.is_set
	|| protocol_tunnel.is_set
	|| sstp.is_set;
}

bool Native::Qos::ControlPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bpdu_range.yfilter)
	|| ydk::is_set(cdp_vtp.yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| ydk::is_set(lldp.yfilter)
	|| ydk::is_set(protocol_tunnel.yfilter)
	|| ydk::is_set(sstp.yfilter);
}

std::string Native::Qos::ControlPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:control-packets";

    return path_buffer.str();

}

const EntityPath Native::Qos::ControlPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdu_range.is_set || is_set(bpdu_range.yfilter)) leaf_name_data.push_back(bpdu_range.get_name_leafdata());
    if (cdp_vtp.is_set || is_set(cdp_vtp.yfilter)) leaf_name_data.push_back(cdp_vtp.get_name_leafdata());
    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());
    if (protocol_tunnel.is_set || is_set(protocol_tunnel.yfilter)) leaf_name_data.push_back(protocol_tunnel.get_name_leafdata());
    if (sstp.is_set || is_set(sstp.yfilter)) leaf_name_data.push_back(sstp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::ControlPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::ControlPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::ControlPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range = value;
        bpdu_range.value_namespace = name_space;
        bpdu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp = value;
        cdp_vtp.value_namespace = name_space;
        cdp_vtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel = value;
        protocol_tunnel.value_namespace = name_space;
        protocol_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sstp")
    {
        sstp = value;
        sstp.value_namespace = name_space;
        sstp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::ControlPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range.yfilter = yfilter;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp.yfilter = yfilter;
    }
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel.yfilter = yfilter;
    }
    if(value_path == "sstp")
    {
        sstp.yfilter = yfilter;
    }
}

bool Native::Qos::ControlPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu-range" || name == "cdp-vtp" || name == "eapol" || name == "lldp" || name == "protocol-tunnel" || name == "sstp")
        return true;
    return false;
}

Native::Qos::Preserve::Preserve()
    :
    marking(std::make_shared<Native::Qos::Preserve::Marking>())
	,mpls(std::make_shared<Native::Qos::Preserve::Mpls>())
{
    marking->parent = this;

    mpls->parent = this;

    yang_name = "preserve"; yang_parent_name = "qos";
}

Native::Qos::Preserve::~Preserve()
{
}

bool Native::Qos::Preserve::has_data() const
{
    return (marking !=  nullptr && marking->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Qos::Preserve::has_operation() const
{
    return is_set(yfilter)
	|| (marking !=  nullptr && marking->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Qos::Preserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:preserve";

    return path_buffer.str();

}

const EntityPath Native::Qos::Preserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Preserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<Native::Qos::Preserve::Marking>();
        }
        return marking;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Qos::Preserve::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Qos::Preserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Preserve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Preserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "marking" || name == "mpls")
        return true;
    return false;
}

Native::Qos::Preserve::Marking::Marking()
    :
    hipriority{YType::empty, "hipriority"}
{
    yang_name = "marking"; yang_parent_name = "preserve";
}

Native::Qos::Preserve::Marking::~Marking()
{
}

bool Native::Qos::Preserve::Marking::has_data() const
{
    return hipriority.is_set;
}

bool Native::Qos::Preserve::Marking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hipriority.yfilter);
}

std::string Native::Qos::Preserve::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";

    return path_buffer.str();

}

const EntityPath Native::Qos::Preserve::Marking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hipriority.is_set || is_set(hipriority.yfilter)) leaf_name_data.push_back(hipriority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hipriority")
    {
        hipriority = value;
        hipriority.value_namespace = name_space;
        hipriority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hipriority")
    {
        hipriority.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hipriority")
        return true;
    return false;
}

Native::Qos::Preserve::Mpls::Mpls()
    :
    exp{YType::empty, "exp"}
{
    yang_name = "mpls"; yang_parent_name = "preserve";
}

Native::Qos::Preserve::Mpls::~Mpls()
{
}

bool Native::Qos::Preserve::Mpls::has_data() const
{
    return exp.is_set;
}

bool Native::Qos::Preserve::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter);
}

std::string Native::Qos::Preserve::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Qos::Preserve::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp")
        return true;
    return false;
}

Native::Qos::Trace::Trace()
    :
    resize(std::make_shared<Native::Qos::Trace::Resize>())
{
    resize->parent = this;

    yang_name = "trace"; yang_parent_name = "qos";
}

Native::Qos::Trace::~Trace()
{
}

bool Native::Qos::Trace::has_data() const
{
    return (resize !=  nullptr && resize->has_data());
}

bool Native::Qos::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (resize !=  nullptr && resize->has_operation());
}

std::string Native::Qos::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:trace";

    return path_buffer.str();

}

const EntityPath Native::Qos::Trace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resize")
    {
        if(resize == nullptr)
        {
            resize = std::make_shared<Native::Qos::Trace::Resize>();
        }
        return resize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resize != nullptr)
    {
        children["resize"] = resize;
    }

    return children;
}

void Native::Qos::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resize")
        return true;
    return false;
}

Native::Qos::Trace::Resize::Resize()
    :
    all{YType::int32, "all"},
    error{YType::int32, "error"},
    event{YType::int32, "event"},
    size{YType::int32, "size"},
    warning{YType::int32, "warning"}
{
    yang_name = "resize"; yang_parent_name = "trace";
}

Native::Qos::Trace::Resize::~Resize()
{
}

bool Native::Qos::Trace::Resize::has_data() const
{
    return all.is_set
	|| error.is_set
	|| event.is_set
	|| size.is_set
	|| warning.is_set;
}

bool Native::Qos::Trace::Resize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Qos::Trace::Resize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resize";

    return path_buffer.str();

}

const EntityPath Native::Qos::Trace::Resize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:trace/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Trace::Resize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::Resize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Trace::Resize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Trace::Resize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Qos::Trace::Resize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "error" || name == "event" || name == "size" || name == "warning")
        return true;
    return false;
}

Native::Qos::QueueSoftmaxMultiplier::QueueSoftmaxMultiplier()
    :
    value_{YType::int16, "value"}
{
    yang_name = "queue-softmax-multiplier"; yang_parent_name = "qos";
}

Native::Qos::QueueSoftmaxMultiplier::~QueueSoftmaxMultiplier()
{
}

bool Native::Qos::QueueSoftmaxMultiplier::has_data() const
{
    return value_.is_set;
}

bool Native::Qos::QueueSoftmaxMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:queue-softmax-multiplier";

    return path_buffer.str();

}

const EntityPath Native::Qos::QueueSoftmaxMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::QueueSoftmaxMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::QueueSoftmaxMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::QueueSoftmaxMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::QueueSoftmaxMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Qos::QueueSoftmaxMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::TimeRange::TimeRange()
    :
    word{YType::str, "word"}
    	,
    absolute(std::make_shared<Native::TimeRange::Absolute>())
{
    absolute->parent = this;

    yang_name = "time-range"; yang_parent_name = "native";
}

Native::TimeRange::~TimeRange()
{
}

bool Native::TimeRange::has_data() const
{
    return word.is_set
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::TimeRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::TimeRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-range" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::TimeRange::get_entity_path(Entity* ancestor) const
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

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TimeRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::TimeRange::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::TimeRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::TimeRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "word")
        return true;
    return false;
}

Native::TimeRange::Absolute::Absolute()
    :
    start(std::make_shared<Native::TimeRange::Absolute::Start>())
{
    start->parent = this;

    yang_name = "absolute"; yang_parent_name = "time-range";
}

Native::TimeRange::Absolute::~Absolute()
{
}

bool Native::TimeRange::Absolute::has_data() const
{
    return (start !=  nullptr && start->has_data());
}

bool Native::TimeRange::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (start !=  nullptr && start->has_operation());
}

std::string Native::TimeRange::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::TimeRange::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Native::TimeRange::Absolute::Start>();
        }
        return start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start != nullptr)
    {
        children["start"] = start;
    }

    return children;
}

void Native::TimeRange::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TimeRange::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TimeRange::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::TimeRange::Absolute::Start::Start()
    :
    day_of_month{YType::uint8, "day-of-month"},
    month{YType::str, "month"},
    start_time{YType::str, "start-time"},
    year{YType::uint16, "year"}
{
    yang_name = "start"; yang_parent_name = "absolute";
}

Native::TimeRange::Absolute::Start::~Start()
{
}

bool Native::TimeRange::Absolute::Start::has_data() const
{
    return day_of_month.is_set
	|| month.is_set
	|| start_time.is_set
	|| year.is_set;
}

bool Native::TimeRange::Absolute::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::TimeRange::Absolute::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

const EntityPath Native::TimeRange::Absolute::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Start' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TimeRange::Absolute::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::Absolute::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::TimeRange::Absolute::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "month" || name == "start-time" || name == "year")
        return true;
    return false;
}

Native::DeviceTracking::DeviceTracking()
    :
    tracking(nullptr) // presence node
{
    yang_name = "device-tracking"; yang_parent_name = "native";
}

Native::DeviceTracking::~DeviceTracking()
{
}

bool Native::DeviceTracking::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::DeviceTracking::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-tracking";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::DeviceTracking::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    return children;
}

void Native::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tracking")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Policy()
    :
    word{YType::str, "word"}
    	,
    device_role(std::make_shared<Native::DeviceTracking::Policy::DeviceRole>())
	,limit(std::make_shared<Native::DeviceTracking::Policy::Limit>())
	,protocol(std::make_shared<Native::DeviceTracking::Policy::Protocol>())
	,security_level(std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>())
	,tracking(std::make_shared<Native::DeviceTracking::Policy::Tracking>())
{
    device_role->parent = this;

    limit->parent = this;

    protocol->parent = this;

    security_level->parent = this;

    tracking->parent = this;

    yang_name = "policy"; yang_parent_name = "device-tracking";
}

Native::DeviceTracking::Policy::~Policy()
{
}

bool Native::DeviceTracking::Policy::has_data() const
{
    return word.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_level !=  nullptr && security_level->has_data())
	|| (tracking !=  nullptr && tracking->has_data());
}

bool Native::DeviceTracking::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_level !=  nullptr && security_level->has_operation())
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::DeviceTracking::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:policy" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::DeviceTracking::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::DeviceTracking::Policy::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::DeviceTracking::Policy::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-level")
    {
        if(security_level == nullptr)
        {
            security_level = std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>();
        }
        return security_level;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Policy::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_level != nullptr)
    {
        children["security-level"] = security_level;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    return children;
}

void Native::DeviceTracking::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-role" || name == "limit" || name == "protocol" || name == "security-level" || name == "tracking" || name == "word")
        return true;
    return false;
}

Native::DeviceTracking::Policy::DeviceRole::DeviceRole()
    :
    node{YType::boolean, "node"},
    switch_{YType::empty, "switch"}
{
    yang_name = "device-role"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::DeviceTracking::Policy::DeviceRole::has_data() const
{
    return node.is_set
	|| switch_.is_set;
}

bool Native::DeviceTracking::Policy::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::DeviceTracking::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::DeviceRole::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceRole' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "switch")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Protocol::Protocol()
    :
    arp{YType::boolean, "arp"},
    dhcp4{YType::boolean, "dhcp4"},
    dhcp6{YType::boolean, "dhcp6"},
    ndp{YType::boolean, "ndp"},
    udp{YType::boolean, "udp"}
{
    yang_name = "protocol"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::Protocol::~Protocol()
{
}

bool Native::DeviceTracking::Policy::Protocol::has_data() const
{
    return arp.is_set
	|| dhcp4.is_set
	|| dhcp6.is_set
	|| ndp.is_set
	|| udp.is_set;
}

bool Native::DeviceTracking::Policy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter)
	|| ydk::is_set(dhcp4.yfilter)
	|| ydk::is_set(dhcp6.yfilter)
	|| ydk::is_set(ndp.yfilter)
	|| ydk::is_set(udp.yfilter);
}

std::string Native::DeviceTracking::Policy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());
    if (dhcp4.is_set || is_set(dhcp4.yfilter)) leaf_name_data.push_back(dhcp4.get_name_leafdata());
    if (dhcp6.is_set || is_set(dhcp6.yfilter)) leaf_name_data.push_back(dhcp6.get_name_leafdata());
    if (ndp.is_set || is_set(ndp.yfilter)) leaf_name_data.push_back(ndp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp4")
    {
        dhcp4 = value;
        dhcp4.value_namespace = name_space;
        dhcp4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp6")
    {
        dhcp6 = value;
        dhcp6.value_namespace = name_space;
        dhcp6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndp")
    {
        ndp = value;
        ndp.value_namespace = name_space;
        ndp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
    if(value_path == "dhcp4")
    {
        dhcp4.yfilter = yfilter;
    }
    if(value_path == "dhcp6")
    {
        dhcp6.yfilter = yfilter;
    }
    if(value_path == "ndp")
    {
        ndp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp" || name == "dhcp4" || name == "dhcp6" || name == "ndp" || name == "udp")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Tracking::Tracking()
    :
    tracking_on_off{YType::enumeration, "tracking-on-off"}
{
    yang_name = "tracking"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Policy::Tracking::has_data() const
{
    return tracking_on_off.is_set;
}

bool Native::DeviceTracking::Policy::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking_on_off.yfilter);
}

std::string Native::DeviceTracking::Policy::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::Tracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tracking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking_on_off.is_set || is_set(tracking_on_off.yfilter)) leaf_name_data.push_back(tracking_on_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking-on-off")
    {
        tracking_on_off = value;
        tracking_on_off.value_namespace = name_space;
        tracking_on_off.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking-on-off")
    {
        tracking_on_off.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking-on-off")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Limit::Limit()
    :
    address_count{YType::uint16, "address-count"}
{
    yang_name = "limit"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::Limit::~Limit()
{
}

bool Native::DeviceTracking::Policy::Limit::has_data() const
{
    return address_count.is_set;
}

bool Native::DeviceTracking::Policy::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_count.yfilter);
}

std::string Native::DeviceTracking::Policy::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::Limit::get_entity_path(Entity* ancestor) const
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

    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-count")
        return true;
    return false;
}

Native::DeviceTracking::Policy::SecurityLevel::SecurityLevel()
    :
    glean{YType::empty, "glean"}
{
    yang_name = "security-level"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::SecurityLevel::~SecurityLevel()
{
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_data() const
{
    return glean.is_set;
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(glean.yfilter);
}

std::string Native::DeviceTracking::Policy::SecurityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-level";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::SecurityLevel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityLevel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (glean.is_set || is_set(glean.yfilter)) leaf_name_data.push_back(glean.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::SecurityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::SecurityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::SecurityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "glean")
    {
        glean = value;
        glean.value_namespace = name_space;
        glean.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::SecurityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "glean")
    {
        glean.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "glean")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::Tracking()
    :
    retry_interval{YType::uint16, "retry-interval"}
    	,
    auto_source(nullptr) // presence node
{
    yang_name = "tracking"; yang_parent_name = "device-tracking";
}

Native::DeviceTracking::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Tracking::has_data() const
{
    return retry_interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::DeviceTracking::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry_interval.yfilter)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::DeviceTracking::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Tracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry_interval.is_set || is_set(retry_interval.yfilter)) leaf_name_data.push_back(retry_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::DeviceTracking::Tracking::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_source != nullptr)
    {
        children["auto-source"] = auto_source;
    }

    return children;
}

void Native::DeviceTracking::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry-interval")
    {
        retry_interval = value;
        retry_interval.value_namespace = name_space;
        retry_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry-interval")
    {
        retry_interval.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-source" || name == "retry-interval")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
    	,
    fallback(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "tracking";
}

Native::DeviceTracking::Tracking::AutoSource::~AutoSource()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::has_data() const
{
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Tracking::AutoSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Fallback()
    :
    ipv4_subnet_type1(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>())
	,ipv4_subnet_type2(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>())
{
    ipv4_subnet_type1->parent = this;

    ipv4_subnet_type2->parent = this;

    yang_name = "fallback"; yang_parent_name = "auto-source";
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::~Fallback()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_data() const
{
    return (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_data())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_operation())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Tracking::AutoSource::Fallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subnet-type1")
    {
        if(ipv4_subnet_type1 == nullptr)
        {
            ipv4_subnet_type1 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>();
        }
        return ipv4_subnet_type1;
    }

    if(child_yang_name == "ipv4-subnet-type2")
    {
        if(ipv4_subnet_type2 == nullptr)
        {
            ipv4_subnet_type2 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>();
        }
        return ipv4_subnet_type2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_subnet_type1 != nullptr)
    {
        children["ipv4-subnet-type1"] = ipv4_subnet_type1;
    }

    if(ipv4_subnet_type2 != nullptr)
    {
        children["ipv4-subnet-type2"] = ipv4_subnet_type2;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subnet-type1" || name == "ipv4-subnet-type2")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::Ipv4SubnetType1()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"},
    override{YType::empty, "override"}
{
    yang_name = "ipv4-subnet-type1"; yang_parent_name = "fallback";
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::~Ipv4SubnetType1()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_data() const
{
    return ipv4.is_set
	|| mask.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type1";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::Ipv4SubnetType2()
    :
    ipv4_prefix_name{YType::str, "ipv4-prefix-name"},
    override{YType::empty, "override"}
{
    yang_name = "ipv4-subnet-type2"; yang_parent_name = "fallback";
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::~Ipv4SubnetType2()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_data() const
{
    return ipv4_prefix_name.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix_name.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type2";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix_name.is_set || is_set(ipv4_prefix_name.yfilter)) leaf_name_data.push_back(ipv4_prefix_name.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name = value;
        ipv4_prefix_name.value_namespace = name_space;
        ipv4_prefix_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-name" || name == "override")
        return true;
    return false;
}

Native::Fhrp::Fhrp()
    :
    version(std::make_shared<Native::Fhrp::Version>())
{
    version->parent = this;

    yang_name = "fhrp"; yang_parent_name = "native";
}

Native::Fhrp::~Fhrp()
{
}

bool Native::Fhrp::has_data() const
{
    return (version !=  nullptr && version->has_data());
}

bool Native::Fhrp::has_operation() const
{
    return is_set(yfilter)
	|| (version !=  nullptr && version->has_operation());
}

std::string Native::Fhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhrp";

    return path_buffer.str();

}

const EntityPath Native::Fhrp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Fhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<Native::Fhrp::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(version != nullptr)
    {
        children["version"] = version;
    }

    return children;
}

void Native::Fhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version")
        return true;
    return false;
}

Native::Fhrp::Version::Version()
    :
    vrrp{YType::enumeration, "vrrp"}
{
    yang_name = "version"; yang_parent_name = "fhrp";
}

Native::Fhrp::Version::~Version()
{
}

bool Native::Fhrp::Version::has_data() const
{
    return vrrp.is_set;
}

bool Native::Fhrp::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrrp.yfilter);
}

std::string Native::Fhrp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";

    return path_buffer.str();

}

const EntityPath Native::Fhrp::Version::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fhrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fhrp::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fhrp::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fhrp::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
}

bool Native::Fhrp::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp")
        return true;
    return false;
}

Native::Metadata::Metadata()
    :
    flow(nullptr) // presence node
{
    yang_name = "metadata"; yang_parent_name = "native";
}

Native::Metadata::~Metadata()
{
}

bool Native::Metadata::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";

    return path_buffer.str();

}

const EntityPath Native::Metadata::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Metadata::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevel::auth {0, "auth"};
const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevel::noauth {1, "noauth"};
const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevel::priv {2, "priv"};

const Enum::YLeaf Native::SnmpServer::Group::V3::Match::exact {0, "exact"};
const Enum::YLeaf Native::SnmpServer::Group::V3::Match::prefix {1, "prefix"};

const Enum::YLeaf Native::SnmpServer::Host::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::SnmpServer::Host::Version::Y_2c {1, "2c"};
const Enum::YLeaf Native::SnmpServer::Host::Version::Y_3 {2, "3"};

const Enum::YLeaf Native::SnmpServer::Host::SecurityLevel::auth {0, "auth"};
const Enum::YLeaf Native::SnmpServer::Host::SecurityLevel::noauth {1, "noauth"};
const Enum::YLeaf Native::SnmpServer::Host::SecurityLevel::priv {2, "priv"};

const Enum::YLeaf Native::SnmpServer::View::IncExl::excluded {0, "excluded"};
const Enum::YLeaf Native::SnmpServer::View::IncExl::included {1, "included"};

const Enum::YLeaf Native::License::Smart::enable {0, "enable"};

const Enum::YLeaf Native::License::Boot::BootModule::Module::c2900 {0, "c2900"};

const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::ServiceInsertion::ServiceNodeGroup::NodeDiscovery::enable {0, "enable"};

const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOff::enable {0, "enable"};
const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOff::disable {1, "disable"};

const Enum::YLeaf Native::Fhrp::Version::Vrrp::v2 {0, "v2"};
const Enum::YLeaf Native::Fhrp::Version::Vrrp::v3 {1, "v3"};


}
}
