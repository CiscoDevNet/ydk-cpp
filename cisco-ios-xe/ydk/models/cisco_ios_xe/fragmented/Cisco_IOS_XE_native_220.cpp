
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_220.hpp"
#include "Cisco_IOS_XE_native_221.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::SnmpServer::Enable::EnableChoice::Traps::Cef::Cef()
    :
    resource_failure{YType::empty, "resource-failure"},
    peer_state_change{YType::empty, "peer-state-change"},
    peer_fib_state_change{YType::empty, "peer-fib-state-change"},
    inconsistency{YType::empty, "inconsistency"}
{

    yang_name = "cef"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cef::~Cef()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_data() const
{
    if (is_presence_container) return true;
    return resource_failure.is_set
	|| peer_state_change.is_set
	|| peer_fib_state_change.is_set
	|| inconsistency.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resource_failure.yfilter)
	|| ydk::is_set(peer_state_change.yfilter)
	|| ydk::is_set(peer_fib_state_change.yfilter)
	|| ydk::is_set(inconsistency.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource_failure.is_set || is_set(resource_failure.yfilter)) leaf_name_data.push_back(resource_failure.get_name_leafdata());
    if (peer_state_change.is_set || is_set(peer_state_change.yfilter)) leaf_name_data.push_back(peer_state_change.get_name_leafdata());
    if (peer_fib_state_change.is_set || is_set(peer_fib_state_change.yfilter)) leaf_name_data.push_back(peer_fib_state_change.get_name_leafdata());
    if (inconsistency.is_set || is_set(inconsistency.yfilter)) leaf_name_data.push_back(inconsistency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resource-failure")
    {
        resource_failure = value;
        resource_failure.value_namespace = name_space;
        resource_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-state-change")
    {
        peer_state_change = value;
        peer_state_change.value_namespace = name_space;
        peer_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-fib-state-change")
    {
        peer_fib_state_change = value;
        peer_fib_state_change.value_namespace = name_space;
        peer_fib_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inconsistency")
    {
        inconsistency = value;
        inconsistency.value_namespace = name_space;
        inconsistency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resource-failure")
    {
        resource_failure.yfilter = yfilter;
    }
    if(value_path == "peer-state-change")
    {
        peer_state_change.yfilter = yfilter;
    }
    if(value_path == "peer-fib-state-change")
    {
        peer_fib_state_change.yfilter = yfilter;
    }
    if(value_path == "inconsistency")
    {
        inconsistency.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource-failure" || name == "peer-state-change" || name == "peer-fib-state-change" || name == "inconsistency")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::Cpu()
    :
    threshold{YType::empty, "threshold"}
{

    yang_name = "cpu"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::~Cpu()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Csg::Csg()
    :
    agent{YType::empty, "agent"},
    database{YType::empty, "database"},
    quota_server{YType::empty, "quota-server"}
{

    yang_name = "csg"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Csg::~Csg()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_data() const
{
    if (is_presence_container) return true;
    return agent.is_set
	|| database.is_set
	|| quota_server.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent.yfilter)
	|| ydk::is_set(database.yfilter)
	|| ydk::is_set(quota_server.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent.is_set || is_set(agent.yfilter)) leaf_name_data.push_back(agent.get_name_leafdata());
    if (database.is_set || is_set(database.yfilter)) leaf_name_data.push_back(database.get_name_leafdata());
    if (quota_server.is_set || is_set(quota_server.yfilter)) leaf_name_data.push_back(quota_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Csg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent")
    {
        agent = value;
        agent.value_namespace = name_space;
        agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database")
    {
        database = value;
        database.value_namespace = name_space;
        database.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quota-server")
    {
        quota_server = value;
        quota_server.value_namespace = name_space;
        quota_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Csg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent")
    {
        agent.yfilter = yfilter;
    }
    if(value_path == "database")
    {
        database.yfilter = yfilter;
    }
    if(value_path == "quota-server")
    {
        quota_server.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent" || name == "database" || name == "quota-server")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::Dot1x()
    :
    auth_fail_vlan{YType::empty, "auth-fail-vlan"},
    guest_vlan{YType::empty, "guest-vlan"},
    no_auth_fail_vlan{YType::empty, "no-auth-fail-vlan"},
    no_guest_vlan{YType::empty, "no-guest-vlan"}
{

    yang_name = "dot1x"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::~Dot1x()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    return auth_fail_vlan.is_set
	|| guest_vlan.is_set
	|| no_auth_fail_vlan.is_set
	|| no_guest_vlan.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_fail_vlan.yfilter)
	|| ydk::is_set(guest_vlan.yfilter)
	|| ydk::is_set(no_auth_fail_vlan.yfilter)
	|| ydk::is_set(no_guest_vlan.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_fail_vlan.is_set || is_set(auth_fail_vlan.yfilter)) leaf_name_data.push_back(auth_fail_vlan.get_name_leafdata());
    if (guest_vlan.is_set || is_set(guest_vlan.yfilter)) leaf_name_data.push_back(guest_vlan.get_name_leafdata());
    if (no_auth_fail_vlan.is_set || is_set(no_auth_fail_vlan.yfilter)) leaf_name_data.push_back(no_auth_fail_vlan.get_name_leafdata());
    if (no_guest_vlan.is_set || is_set(no_guest_vlan.yfilter)) leaf_name_data.push_back(no_guest_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-fail-vlan")
    {
        auth_fail_vlan = value;
        auth_fail_vlan.value_namespace = name_space;
        auth_fail_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guest-vlan")
    {
        guest_vlan = value;
        guest_vlan.value_namespace = name_space;
        guest_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-auth-fail-vlan")
    {
        no_auth_fail_vlan = value;
        no_auth_fail_vlan.value_namespace = name_space;
        no_auth_fail_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-guest-vlan")
    {
        no_guest_vlan = value;
        no_guest_vlan.value_namespace = name_space;
        no_guest_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-fail-vlan")
    {
        auth_fail_vlan.yfilter = yfilter;
    }
    if(value_path == "guest-vlan")
    {
        guest_vlan.yfilter = yfilter;
    }
    if(value_path == "no-auth-fail-vlan")
    {
        no_auth_fail_vlan.yfilter = yfilter;
    }
    if(value_path == "no-guest-vlan")
    {
        no_guest_vlan.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-fail-vlan" || name == "guest-vlan" || name == "no-auth-fail-vlan" || name == "no-guest-vlan")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::Dsp()
    :
    card_status{YType::empty, "card-status"},
    oper_state{YType::empty, "oper-state"}
{

    yang_name = "dsp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::~Dsp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_data() const
{
    if (is_presence_container) return true;
    return card_status.is_set
	|| oper_state.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_status.yfilter)
	|| ydk::is_set(oper_state.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_status.is_set || is_set(card_status.yfilter)) leaf_name_data.push_back(card_status.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-status")
    {
        card_status = value;
        card_status.value_namespace = name_space;
        card_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-status")
    {
        card_status.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-status" || name == "oper-state")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::Energywise()
    :
    event_occured{YType::empty, "event-occured"},
    level_change{YType::empty, "level-change"},
    neighbor_added{YType::empty, "neighbor-added"},
    neighbor_deleted{YType::empty, "neighbor-deleted"}
{

    yang_name = "energywise"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::~Energywise()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_data() const
{
    if (is_presence_container) return true;
    return event_occured.is_set
	|| level_change.is_set
	|| neighbor_added.is_set
	|| neighbor_deleted.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_occured.yfilter)
	|| ydk::is_set(level_change.yfilter)
	|| ydk::is_set(neighbor_added.yfilter)
	|| ydk::is_set(neighbor_deleted.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "energywise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_occured.is_set || is_set(event_occured.yfilter)) leaf_name_data.push_back(event_occured.get_name_leafdata());
    if (level_change.is_set || is_set(level_change.yfilter)) leaf_name_data.push_back(level_change.get_name_leafdata());
    if (neighbor_added.is_set || is_set(neighbor_added.yfilter)) leaf_name_data.push_back(neighbor_added.get_name_leafdata());
    if (neighbor_deleted.is_set || is_set(neighbor_deleted.yfilter)) leaf_name_data.push_back(neighbor_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-occured")
    {
        event_occured = value;
        event_occured.value_namespace = name_space;
        event_occured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-change")
    {
        level_change = value;
        level_change.value_namespace = name_space;
        level_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-added")
    {
        neighbor_added = value;
        neighbor_added.value_namespace = name_space;
        neighbor_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-deleted")
    {
        neighbor_deleted = value;
        neighbor_deleted.value_namespace = name_space;
        neighbor_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-occured")
    {
        event_occured.yfilter = yfilter;
    }
    if(value_path == "level-change")
    {
        level_change.yfilter = yfilter;
    }
    if(value_path == "neighbor-added")
    {
        neighbor_added.yfilter = yfilter;
    }
    if(value_path == "neighbor-deleted")
    {
        neighbor_deleted.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-occured" || name == "level-change" || name == "neighbor-added" || name == "neighbor-deleted")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::EntityDiag()
    :
    boot_up_fail{YType::empty, "boot-up-fail"},
    hm_test_recover{YType::empty, "hm-test-recover"},
    hm_thresh_reached{YType::empty, "hm-thresh-reached"},
    scheduled_test_fail{YType::empty, "scheduled-test-fail"}
{

    yang_name = "entity-diag"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::~EntityDiag()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_data() const
{
    if (is_presence_container) return true;
    return boot_up_fail.is_set
	|| hm_test_recover.is_set
	|| hm_thresh_reached.is_set
	|| scheduled_test_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_up_fail.yfilter)
	|| ydk::is_set(hm_test_recover.yfilter)
	|| ydk::is_set(hm_thresh_reached.yfilter)
	|| ydk::is_set(scheduled_test_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-diag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_up_fail.is_set || is_set(boot_up_fail.yfilter)) leaf_name_data.push_back(boot_up_fail.get_name_leafdata());
    if (hm_test_recover.is_set || is_set(hm_test_recover.yfilter)) leaf_name_data.push_back(hm_test_recover.get_name_leafdata());
    if (hm_thresh_reached.is_set || is_set(hm_thresh_reached.yfilter)) leaf_name_data.push_back(hm_thresh_reached.get_name_leafdata());
    if (scheduled_test_fail.is_set || is_set(scheduled_test_fail.yfilter)) leaf_name_data.push_back(scheduled_test_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-up-fail")
    {
        boot_up_fail = value;
        boot_up_fail.value_namespace = name_space;
        boot_up_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hm-test-recover")
    {
        hm_test_recover = value;
        hm_test_recover.value_namespace = name_space;
        hm_test_recover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hm-thresh-reached")
    {
        hm_thresh_reached = value;
        hm_thresh_reached.value_namespace = name_space;
        hm_thresh_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scheduled-test-fail")
    {
        scheduled_test_fail = value;
        scheduled_test_fail.value_namespace = name_space;
        scheduled_test_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-up-fail")
    {
        boot_up_fail.yfilter = yfilter;
    }
    if(value_path == "hm-test-recover")
    {
        hm_test_recover.yfilter = yfilter;
    }
    if(value_path == "hm-thresh-reached")
    {
        hm_thresh_reached.yfilter = yfilter;
    }
    if(value_path == "scheduled-test-fail")
    {
        scheduled_test_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-up-fail" || name == "hm-test-recover" || name == "hm-thresh-reached" || name == "scheduled-test-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::Envmon()
    :
    fan{YType::empty, "fan"},
    shutdown{YType::empty, "shutdown"},
    supply{YType::empty, "supply"},
    temperature{YType::empty, "temperature"},
    status{YType::empty, "status"}
{

    yang_name = "envmon"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::~Envmon()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_data() const
{
    if (is_presence_container) return true;
    return fan.is_set
	|| shutdown.is_set
	|| supply.is_set
	|| temperature.is_set
	|| status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fan.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(supply.yfilter)
	|| ydk::is_set(temperature.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "envmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fan.is_set || is_set(fan.yfilter)) leaf_name_data.push_back(fan.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (supply.is_set || is_set(supply.yfilter)) leaf_name_data.push_back(supply.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.yfilter)) leaf_name_data.push_back(temperature.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fan")
    {
        fan = value;
        fan.value_namespace = name_space;
        fan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supply")
    {
        supply = value;
        supply.value_namespace = name_space;
        supply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature")
    {
        temperature = value;
        temperature.value_namespace = name_space;
        temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fan")
    {
        fan.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "supply")
    {
        supply.yfilter = yfilter;
    }
    if(value_path == "temperature")
    {
        temperature.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan" || name == "shutdown" || name == "supply" || name == "temperature" || name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::Errdisable()
    :
    notification_rate{YType::uint16, "notification-rate"}
{

    yang_name = "errdisable"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::~Errdisable()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_data() const
{
    if (is_presence_container) return true;
    return notification_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notification_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_rate.is_set || is_set(notification_rate.yfilter)) leaf_name_data.push_back(notification_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-rate")
    {
        notification_rate = value;
        notification_rate.value_namespace = name_space;
        notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-rate")
    {
        notification_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Ethernet()
    :
    cfm(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm>())
    , evc(nullptr) // presence node
{
    cfm->parent = this;

    yang_name = "ethernet"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::~Ethernet()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (cfm !=  nullptr && cfm->has_data())
	|| (evc !=  nullptr && evc->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (evc !=  nullptr && evc->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "evc")
    {
        if(evc == nullptr)
        {
            evc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc>();
        }
        return evc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfm != nullptr)
    {
        _children["cfm"] = cfm;
    }

    if(evc != nullptr)
    {
        _children["evc"] = evc;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "evc")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cfm()
    :
    alarm{YType::empty, "alarm"}
        ,
    cc(nullptr) // presence node
    , crosscheck(nullptr) // presence node
{

    yang_name = "cfm"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::~Cfm()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return alarm.is_set
	|| (cc !=  nullptr && cc->has_data())
	|| (crosscheck !=  nullptr && crosscheck->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| (cc !=  nullptr && cc->has_operation())
	|| (crosscheck !=  nullptr && crosscheck->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc")
    {
        if(cc == nullptr)
        {
            cc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc>();
        }
        return cc;
    }

    if(child_yang_name == "crosscheck")
    {
        if(crosscheck == nullptr)
        {
            crosscheck = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck>();
        }
        return crosscheck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cc != nullptr)
    {
        _children["cc"] = cc;
    }

    if(crosscheck != nullptr)
    {
        _children["crosscheck"] = crosscheck;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cc" || name == "crosscheck" || name == "alarm")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::Cc()
    :
    config{YType::empty, "config"},
    cross_connect{YType::empty, "cross-connect"},
    loop{YType::empty, "loop"},
    mep_down{YType::empty, "mep-down"},
    mep_up{YType::empty, "mep-up"}
{

    yang_name = "cc"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::~Cc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_data() const
{
    if (is_presence_container) return true;
    return config.is_set
	|| cross_connect.is_set
	|| loop.is_set
	|| mep_down.is_set
	|| mep_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(cross_connect.yfilter)
	|| ydk::is_set(loop.yfilter)
	|| ydk::is_set(mep_down.yfilter)
	|| ydk::is_set(mep_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (cross_connect.is_set || is_set(cross_connect.yfilter)) leaf_name_data.push_back(cross_connect.get_name_leafdata());
    if (loop.is_set || is_set(loop.yfilter)) leaf_name_data.push_back(loop.get_name_leafdata());
    if (mep_down.is_set || is_set(mep_down.yfilter)) leaf_name_data.push_back(mep_down.get_name_leafdata());
    if (mep_up.is_set || is_set(mep_up.yfilter)) leaf_name_data.push_back(mep_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect")
    {
        cross_connect = value;
        cross_connect.value_namespace = name_space;
        cross_connect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop")
    {
        loop = value;
        loop.value_namespace = name_space;
        loop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-down")
    {
        mep_down = value;
        mep_down.value_namespace = name_space;
        mep_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-up")
    {
        mep_up = value;
        mep_up.value_namespace = name_space;
        mep_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "cross-connect")
    {
        cross_connect.yfilter = yfilter;
    }
    if(value_path == "loop")
    {
        loop.yfilter = yfilter;
    }
    if(value_path == "mep-down")
    {
        mep_down.yfilter = yfilter;
    }
    if(value_path == "mep-up")
    {
        mep_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "cross-connect" || name == "loop" || name == "mep-down" || name == "mep-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::Crosscheck()
    :
    mep_missing{YType::empty, "mep-missing"},
    mep_unknown{YType::empty, "mep-unknown"},
    service_up{YType::empty, "service-up"}
{

    yang_name = "crosscheck"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::~Crosscheck()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_data() const
{
    if (is_presence_container) return true;
    return mep_missing.is_set
	|| mep_unknown.is_set
	|| service_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mep_missing.yfilter)
	|| ydk::is_set(mep_unknown.yfilter)
	|| ydk::is_set(service_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crosscheck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_missing.is_set || is_set(mep_missing.yfilter)) leaf_name_data.push_back(mep_missing.get_name_leafdata());
    if (mep_unknown.is_set || is_set(mep_unknown.yfilter)) leaf_name_data.push_back(mep_unknown.get_name_leafdata());
    if (service_up.is_set || is_set(service_up.yfilter)) leaf_name_data.push_back(service_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mep-missing")
    {
        mep_missing = value;
        mep_missing.value_namespace = name_space;
        mep_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-unknown")
    {
        mep_unknown = value;
        mep_unknown.value_namespace = name_space;
        mep_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-up")
    {
        service_up = value;
        service_up.value_namespace = name_space;
        service_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mep-missing")
    {
        mep_missing.yfilter = yfilter;
    }
    if(value_path == "mep-unknown")
    {
        mep_unknown.yfilter = yfilter;
    }
    if(value_path == "service-up")
    {
        service_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mep-missing" || name == "mep-unknown" || name == "service-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::Evc()
    :
    create{YType::empty, "create"},
    delete_{YType::empty, "delete"},
    status{YType::empty, "status"}
{

    yang_name = "evc"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::~Evc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_data() const
{
    if (is_presence_container) return true;
    return create.is_set
	|| delete_.is_set
	|| status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create" || name == "delete" || name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::Firewall()
    :
    serverstatus{YType::empty, "serverstatus"}
{

    yang_name = "firewall"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::~Firewall()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_data() const
{
    if (is_presence_container) return true;
    return serverstatus.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serverstatus.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serverstatus.is_set || is_set(serverstatus.yfilter)) leaf_name_data.push_back(serverstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serverstatus")
    {
        serverstatus = value;
        serverstatus.value_namespace = name_space;
        serverstatus.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serverstatus")
    {
        serverstatus.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serverstatus")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Flash::Flash()
    :
    insertion{YType::empty, "insertion"},
    removal{YType::empty, "removal"}
{

    yang_name = "flash"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Flash::~Flash()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_data() const
{
    if (is_presence_container) return true;
    return insertion.is_set
	|| removal.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insertion.yfilter)
	|| ydk::is_set(removal.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insertion.is_set || is_set(insertion.yfilter)) leaf_name_data.push_back(insertion.get_name_leafdata());
    if (removal.is_set || is_set(removal.yfilter)) leaf_name_data.push_back(removal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insertion")
    {
        insertion = value;
        insertion.value_namespace = name_space;
        insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removal")
    {
        removal = value;
        removal.value_namespace = name_space;
        removal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insertion")
    {
        insertion.yfilter = yfilter;
    }
    if(value_path == "removal")
    {
        removal.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insertion" || name == "removal")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::FlexLinks()
    :
    status{YType::empty, "status"}
{

    yang_name = "flex-links"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::~FlexLinks()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::FrameRelay()
    :
    multilink(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink>())
    , subif(nullptr) // presence node
{
    multilink->parent = this;

    yang_name = "frame-relay"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::~FrameRelay()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_data() const
{
    if (is_presence_container) return true;
    return (multilink !=  nullptr && multilink->has_data())
	|| (subif !=  nullptr && subif->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (subif !=  nullptr && subif->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink>();
        }
        return multilink;
    }

    if(child_yang_name == "subif")
    {
        if(subif == nullptr)
        {
            subif = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif>();
        }
        return subif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multilink != nullptr)
    {
        _children["multilink"] = multilink;
    }

    if(subif != nullptr)
    {
        _children["subif"] = subif;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multilink" || name == "subif")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::Multilink()
    :
    bundle_mismatch{YType::empty, "bundle-mismatch"}
{

    yang_name = "multilink"; yang_parent_name = "frame-relay"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::~Multilink()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_data() const
{
    if (is_presence_container) return true;
    return bundle_mismatch.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_mismatch.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/frame-relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_mismatch.is_set || is_set(bundle_mismatch.yfilter)) leaf_name_data.push_back(bundle_mismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-mismatch")
    {
        bundle_mismatch = value;
        bundle_mismatch.value_namespace = name_space;
        bundle_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-mismatch")
    {
        bundle_mismatch.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-mismatch")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::Subif()
{

    yang_name = "subif"; yang_parent_name = "frame-relay"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::~Subif()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/frame-relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Ipsec()
    :
    too_many_sas{YType::empty, "too-many-sas"}
        ,
    cryptomap(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap>())
    , tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel>())
{
    cryptomap->parent = this;
    tunnel->parent = this;

    yang_name = "ipsec"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::~Ipsec()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return too_many_sas.is_set
	|| (cryptomap !=  nullptr && cryptomap->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(too_many_sas.yfilter)
	|| (cryptomap !=  nullptr && cryptomap->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (too_many_sas.is_set || is_set(too_many_sas.yfilter)) leaf_name_data.push_back(too_many_sas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cryptomap")
    {
        if(cryptomap == nullptr)
        {
            cryptomap = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap>();
        }
        return cryptomap;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cryptomap != nullptr)
    {
        _children["cryptomap"] = cryptomap;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "too-many-sas")
    {
        too_many_sas = value;
        too_many_sas.value_namespace = name_space;
        too_many_sas.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "too-many-sas")
    {
        too_many_sas.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cryptomap" || name == "tunnel" || name == "too-many-sas")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::Cryptomap()
    :
    add{YType::empty, "add"},
    attach{YType::empty, "attach"},
    delete_{YType::empty, "delete"},
    detach{YType::empty, "detach"}
{

    yang_name = "cryptomap"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::~Cryptomap()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_data() const
{
    if (is_presence_container) return true;
    return add.is_set
	|| attach.is_set
	|| delete_.is_set
	|| detach.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(detach.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cryptomap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (detach.is_set || is_set(detach.yfilter)) leaf_name_data.push_back(detach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detach")
    {
        detach = value;
        detach.value_namespace = name_space;
        detach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
    if(value_path == "detach")
    {
        detach.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "attach" || name == "delete" || name == "detach")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{

    yang_name = "tunnel"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Isakmp()
    :
    policy(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy>())
    , tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel>())
{
    policy->parent = this;
    tunnel->parent = this;

    yang_name = "isakmp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::~Isakmp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tunnel")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::Policy()
    :
    add{YType::empty, "add"},
    delete_{YType::empty, "delete"}
{

    yang_name = "policy"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::~Policy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_data() const
{
    if (is_presence_container) return true;
    return add.is_set
	|| delete_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "delete")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{

    yang_name = "tunnel"; yang_parent_name = "isakmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/isakmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::Isdn()
    :
    call_information{YType::empty, "call-information"},
    chan_not_avail{YType::empty, "chan-not-avail"},
    ietf{YType::empty, "ietf"},
    layer2{YType::empty, "layer2"}
{

    yang_name = "isdn"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::~Isdn()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_data() const
{
    if (is_presence_container) return true;
    return call_information.is_set
	|| chan_not_avail.is_set
	|| ietf.is_set
	|| layer2.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(call_information.yfilter)
	|| ydk::is_set(chan_not_avail.yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(layer2.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_information.is_set || is_set(call_information.yfilter)) leaf_name_data.push_back(call_information.get_name_leafdata());
    if (chan_not_avail.is_set || is_set(chan_not_avail.yfilter)) leaf_name_data.push_back(chan_not_avail.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (layer2.is_set || is_set(layer2.yfilter)) leaf_name_data.push_back(layer2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "call-information")
    {
        call_information = value;
        call_information.value_namespace = name_space;
        call_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chan-not-avail")
    {
        chan_not_avail = value;
        chan_not_avail.value_namespace = name_space;
        chan_not_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer2")
    {
        layer2 = value;
        layer2.value_namespace = name_space;
        layer2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "call-information")
    {
        call_information.yfilter = yfilter;
    }
    if(value_path == "chan-not-avail")
    {
        chan_not_avail.yfilter = yfilter;
    }
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "layer2")
    {
        layer2.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call-information" || name == "chan-not-avail" || name == "ietf" || name == "layer2")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::L2tc()
    :
    sys_threshold{YType::empty, "sys-threshold"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "l2tc"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::~L2tc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::has_data() const
{
    if (is_presence_container) return true;
    return sys_threshold.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sys_threshold.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sys_threshold.is_set || is_set(sys_threshold.yfilter)) leaf_name_data.push_back(sys_threshold.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sys-threshold")
    {
        sys_threshold = value;
        sys_threshold.value_namespace = name_space;
        sys_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sys-threshold")
    {
        sys_threshold.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-threshold" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::L2tun()
    :
    session{YType::empty, "session"}
        ,
    pseudowire(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "l2tun"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::~L2tun()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pseudowire != nullptr)
    {
        _children["pseudowire"] = pseudowire;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "session")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{

    yang_name = "pseudowire"; yang_parent_name = "l2tun"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::~Pseudowire()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/l2tun/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::License::License()
    :
    deploy{YType::empty, "deploy"},
    error{YType::empty, "error"},
    usage{YType::empty, "usage"}
{

    yang_name = "license"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::License::~License()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_data() const
{
    if (is_presence_container) return true;
    return deploy.is_set
	|| error.is_set
	|| usage.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deploy.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(usage.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deploy.is_set || is_set(deploy.yfilter)) leaf_name_data.push_back(deploy.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::License::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deploy")
    {
        deploy = value;
        deploy.value_namespace = name_space;
        deploy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::License::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deploy")
    {
        deploy.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deploy" || name == "error" || name == "usage")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::MacNotification()
    :
    change{YType::empty, "change"},
    move{YType::empty, "move"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "mac-notification"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::~MacNotification()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_data() const
{
    if (is_presence_container) return true;
    return change.is_set
	|| move.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| ydk::is_set(move.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());
    if (move.is_set || is_set(move.yfilter)) leaf_name_data.push_back(move.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "move")
    {
        move = value;
        move.value_namespace = name_space;
        move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
    if(value_path == "move")
    {
        move.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "move" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::MacNotification2()
    :
    change{YType::empty, "change"},
    move{YType::empty, "move"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "mac-notification2"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::~MacNotification2()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_data() const
{
    if (is_presence_container) return true;
    return change.is_set
	|| move.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| ydk::is_set(move.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-notification2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());
    if (move.is_set || is_set(move.yfilter)) leaf_name_data.push_back(move.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "move")
    {
        move = value;
        move.value_namespace = name_space;
        move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
    if(value_path == "move")
    {
        move.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "move" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Memory::Memory()
    :
    bufferpeak{YType::empty, "bufferpeak"}
{

    yang_name = "memory"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Memory::~Memory()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_data() const
{
    if (is_presence_container) return true;
    return bufferpeak.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bufferpeak.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bufferpeak.is_set || is_set(bufferpeak.yfilter)) leaf_name_data.push_back(bufferpeak.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferpeak")
    {
        bufferpeak = value;
        bufferpeak.value_namespace = name_space;
        bufferpeak.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferpeak")
    {
        bufferpeak.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferpeak")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Mpls()
    :
    vpn{YType::empty, "vpn"}
        ,
    traffic_eng(nullptr) // presence node
    , fast_reroute(nullptr) // presence node
    , rfc(nullptr) // presence node
    , ldp(nullptr) // presence node
{

    yang_name = "mpls"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::~Mpls()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return vpn.is_set
	|| (traffic_eng !=  nullptr && traffic_eng->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (rfc !=  nullptr && rfc->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (rfc !=  nullptr && rfc->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "rfc")
    {
        if(rfc == nullptr)
        {
            rfc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc>();
        }
        return rfc;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_eng != nullptr)
    {
        _children["traffic-eng"] = traffic_eng;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(rfc != nullptr)
    {
        _children["rfc"] = rfc;
    }

    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng" || name == "fast-reroute" || name == "rfc" || name == "ldp" || name == "vpn")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::TrafficEng()
    :
    up{YType::empty, "up"},
    down{YType::empty, "down"},
    reroute{YType::empty, "reroute"}
{

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| down.is_set
	|| reroute.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(reroute.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (reroute.is_set || is_set(reroute.yfilter)) leaf_name_data.push_back(reroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute")
    {
        reroute = value;
        reroute.value_namespace = name_space;
        reroute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "reroute")
    {
        reroute.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "reroute")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::FastReroute()
    :
    protected_{YType::empty, "protected"}
{

    yang_name = "fast-reroute"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::~FastReroute()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return protected_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::Rfc()
    :
    ldp{YType::empty, "ldp"}
{

    yang_name = "rfc"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::~Rfc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_data() const
{
    if (is_presence_container) return true;
    return ldp.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp.is_set || is_set(ldp.yfilter)) leaf_name_data.push_back(ldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp")
    {
        ldp = value;
        ldp.value_namespace = name_space;
        ldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp")
    {
        ldp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::Ldp()
    :
    pv_limit{YType::empty, "pv-limit"},
    session_down{YType::empty, "session-down"},
    session_up{YType::empty, "session-up"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::~Ldp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return pv_limit.is_set
	|| session_down.is_set
	|| session_up.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pv_limit.yfilter)
	|| ydk::is_set(session_down.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pv_limit.is_set || is_set(pv_limit.yfilter)) leaf_name_data.push_back(pv_limit.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pv-limit")
    {
        pv_limit = value;
        pv_limit.value_namespace = name_space;
        pv_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pv-limit")
    {
        pv_limit.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pv-limit" || name == "session-down" || name == "session-up" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhrp()
    :
    nhs(nullptr) // presence node
    , nhc(nullptr) // presence node
    , nhp(nullptr) // presence node
    , quota_exceeded(nullptr) // presence node
{

    yang_name = "nhrp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::~Nhrp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_data() const
{
    if (is_presence_container) return true;
    return (nhs !=  nullptr && nhs->has_data())
	|| (nhc !=  nullptr && nhc->has_data())
	|| (nhp !=  nullptr && nhp->has_data())
	|| (quota_exceeded !=  nullptr && quota_exceeded->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_operation() const
{
    return is_set(yfilter)
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (nhc !=  nullptr && nhc->has_operation())
	|| (nhp !=  nullptr && nhp->has_operation())
	|| (quota_exceeded !=  nullptr && quota_exceeded->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "nhc")
    {
        if(nhc == nullptr)
        {
            nhc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc>();
        }
        return nhc;
    }

    if(child_yang_name == "nhp")
    {
        if(nhp == nullptr)
        {
            nhp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp>();
        }
        return nhp;
    }

    if(child_yang_name == "quota-exceeded")
    {
        if(quota_exceeded == nullptr)
        {
            quota_exceeded = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded>();
        }
        return quota_exceeded;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nhs != nullptr)
    {
        _children["nhs"] = nhs;
    }

    if(nhc != nullptr)
    {
        _children["nhc"] = nhc;
    }

    if(nhp != nullptr)
    {
        _children["nhp"] = nhp;
    }

    if(quota_exceeded != nullptr)
    {
        _children["quota-exceeded"] = quota_exceeded;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhs" || name == "nhc" || name == "nhp" || name == "quota-exceeded")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::Nhs()
{

    yang_name = "nhs"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::~Nhs()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::Nhc()
{

    yang_name = "nhc"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::~Nhc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::Nhp()
{

    yang_name = "nhp"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::~Nhp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::QuotaExceeded()
{

    yang_name = "quota-exceeded"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::~QuotaExceeded()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quota-exceeded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Ospf()
    :
    state_change(nullptr) // presence node
    , errors(nullptr) // presence node
    , retransmit(nullptr) // presence node
    , lsa(nullptr) // presence node
    , cisco_specific(nullptr) // presence node
{

    yang_name = "ospf"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::~Ospf()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return (state_change !=  nullptr && state_change->has_data())
	|| (errors !=  nullptr && errors->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (lsa !=  nullptr && lsa->has_data())
	|| (cisco_specific !=  nullptr && cisco_specific->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (state_change !=  nullptr && state_change->has_operation())
	|| (errors !=  nullptr && errors->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (cisco_specific !=  nullptr && cisco_specific->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange>();
        }
        return state_change;
    }

    if(child_yang_name == "errors")
    {
        if(errors == nullptr)
        {
            errors = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors>();
        }
        return errors;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "cisco-specific")
    {
        if(cisco_specific == nullptr)
        {
            cisco_specific = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific>();
        }
        return cisco_specific;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_change != nullptr)
    {
        _children["state-change"] = state_change;
    }

    if(errors != nullptr)
    {
        _children["errors"] = errors;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(lsa != nullptr)
    {
        _children["lsa"] = lsa;
    }

    if(cisco_specific != nullptr)
    {
        _children["cisco-specific"] = cisco_specific;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-change" || name == "errors" || name == "retransmit" || name == "lsa" || name == "cisco-specific")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::StateChange()
    :
    if_state_change{YType::empty, "if-state-change"},
    neighbor_state_change{YType::empty, "neighbor-state-change"},
    virtif_state_change{YType::empty, "virtif-state-change"},
    virtneighbor_state_change{YType::empty, "virtneighbor-state-change"}
{

    yang_name = "state-change"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::~StateChange()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_data() const
{
    if (is_presence_container) return true;
    return if_state_change.is_set
	|| neighbor_state_change.is_set
	|| virtif_state_change.is_set
	|| virtneighbor_state_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_state_change.yfilter)
	|| ydk::is_set(neighbor_state_change.yfilter)
	|| ydk::is_set(virtif_state_change.yfilter)
	|| ydk::is_set(virtneighbor_state_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_state_change.is_set || is_set(if_state_change.yfilter)) leaf_name_data.push_back(if_state_change.get_name_leafdata());
    if (neighbor_state_change.is_set || is_set(neighbor_state_change.yfilter)) leaf_name_data.push_back(neighbor_state_change.get_name_leafdata());
    if (virtif_state_change.is_set || is_set(virtif_state_change.yfilter)) leaf_name_data.push_back(virtif_state_change.get_name_leafdata());
    if (virtneighbor_state_change.is_set || is_set(virtneighbor_state_change.yfilter)) leaf_name_data.push_back(virtneighbor_state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-state-change")
    {
        if_state_change = value;
        if_state_change.value_namespace = name_space;
        if_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state-change")
    {
        neighbor_state_change = value;
        neighbor_state_change.value_namespace = name_space;
        neighbor_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtif-state-change")
    {
        virtif_state_change = value;
        virtif_state_change.value_namespace = name_space;
        virtif_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtneighbor-state-change")
    {
        virtneighbor_state_change = value;
        virtneighbor_state_change.value_namespace = name_space;
        virtneighbor_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-state-change")
    {
        if_state_change.yfilter = yfilter;
    }
    if(value_path == "neighbor-state-change")
    {
        neighbor_state_change.yfilter = yfilter;
    }
    if(value_path == "virtif-state-change")
    {
        virtif_state_change.yfilter = yfilter;
    }
    if(value_path == "virtneighbor-state-change")
    {
        virtneighbor_state_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-state-change" || name == "neighbor-state-change" || name == "virtif-state-change" || name == "virtneighbor-state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::Errors()
{

    yang_name = "errors"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::~Errors()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::Retransmit()
    :
    packets{YType::empty, "packets"},
    virt_packets{YType::empty, "virt-packets"}
{

    yang_name = "retransmit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::~Retransmit()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| virt_packets.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(virt_packets.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (virt_packets.is_set || is_set(virt_packets.yfilter)) leaf_name_data.push_back(virt_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virt-packets")
    {
        virt_packets = value;
        virt_packets.value_namespace = name_space;
        virt_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "virt-packets")
    {
        virt_packets.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "virt-packets")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::Lsa()
    :
    lsa_maxage{YType::empty, "lsa-maxage"},
    lsa_originate{YType::empty, "lsa-originate"}
{

    yang_name = "lsa"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::~Lsa()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_maxage.is_set
	|| lsa_originate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_maxage.yfilter)
	|| ydk::is_set(lsa_originate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_maxage.is_set || is_set(lsa_maxage.yfilter)) leaf_name_data.push_back(lsa_maxage.get_name_leafdata());
    if (lsa_originate.is_set || is_set(lsa_originate.yfilter)) leaf_name_data.push_back(lsa_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage = value;
        lsa_maxage.value_namespace = name_space;
        lsa_maxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate = value;
        lsa_originate.value_namespace = name_space;
        lsa_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage.yfilter = yfilter;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-maxage" || name == "lsa-originate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::CiscoSpecific()
    :
    state_change(nullptr) // presence node
    , errors(nullptr) // presence node
    , errdisable(nullptr) // presence node
    , retransmit(nullptr) // presence node
    , lsa(nullptr) // presence node
{

    yang_name = "cisco-specific"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::~CiscoSpecific()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_data() const
{
    if (is_presence_container) return true;
    return (state_change !=  nullptr && state_change->has_data())
	|| (errors !=  nullptr && errors->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (lsa !=  nullptr && lsa->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_operation() const
{
    return is_set(yfilter)
	|| (state_change !=  nullptr && state_change->has_operation())
	|| (errors !=  nullptr && errors->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-specific";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange>();
        }
        return state_change;
    }

    if(child_yang_name == "errors")
    {
        if(errors == nullptr)
        {
            errors = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors>();
        }
        return errors;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa>();
        }
        return lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_change != nullptr)
    {
        _children["state-change"] = state_change;
    }

    if(errors != nullptr)
    {
        _children["errors"] = errors;
    }

    if(errdisable != nullptr)
    {
        _children["errdisable"] = errdisable;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(lsa != nullptr)
    {
        _children["lsa"] = lsa;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-change" || name == "errors" || name == "errdisable" || name == "retransmit" || name == "lsa")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::StateChange()
    :
    nssa_trans_change{YType::empty, "nssa-trans-change"}
        ,
    shamlink(nullptr) // presence node
{

    yang_name = "state-change"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::~StateChange()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_data() const
{
    if (is_presence_container) return true;
    return nssa_trans_change.is_set
	|| (shamlink !=  nullptr && shamlink->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_trans_change.yfilter)
	|| (shamlink !=  nullptr && shamlink->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_trans_change.is_set || is_set(nssa_trans_change.yfilter)) leaf_name_data.push_back(nssa_trans_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shamlink")
    {
        if(shamlink == nullptr)
        {
            shamlink = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink>();
        }
        return shamlink;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shamlink != nullptr)
    {
        _children["shamlink"] = shamlink;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-trans-change")
    {
        nssa_trans_change = value;
        nssa_trans_change.value_namespace = name_space;
        nssa_trans_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-trans-change")
    {
        nssa_trans_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shamlink" || name == "nssa-trans-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::Shamlink()
    :
    interface{YType::empty, "interface"},
    interface_old{YType::empty, "interface-old"},
    neighbor{YType::empty, "neighbor"}
{

    yang_name = "shamlink"; yang_parent_name = "state-change"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::~Shamlink()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_old.is_set
	|| neighbor.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_old.yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/state-change/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shamlink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_old.is_set || is_set(interface_old.yfilter)) leaf_name_data.push_back(interface_old.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-old")
    {
        interface_old = value;
        interface_old.value_namespace = name_space;
        interface_old.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-old")
    {
        interface_old.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-old" || name == "neighbor")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::Errors()
{

    yang_name = "errors"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::~Errors()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::Errdisable()
    :
    notification_rate{YType::uint16, "notification-rate"}
{

    yang_name = "errdisable"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::~Errdisable()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_data() const
{
    if (is_presence_container) return true;
    return notification_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notification_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_rate.is_set || is_set(notification_rate.yfilter)) leaf_name_data.push_back(notification_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-rate")
    {
        notification_rate = value;
        notification_rate.value_namespace = name_space;
        notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-rate")
    {
        notification_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::Retransmit()
{

    yang_name = "retransmit"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::~Retransmit()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::Lsa()
    :
    lsa_maxage{YType::empty, "lsa-maxage"},
    lsa_originate{YType::empty, "lsa-originate"}
{

    yang_name = "lsa"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::~Lsa()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_maxage.is_set
	|| lsa_originate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_maxage.yfilter)
	|| ydk::is_set(lsa_originate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_maxage.is_set || is_set(lsa_maxage.yfilter)) leaf_name_data.push_back(lsa_maxage.get_name_leafdata());
    if (lsa_originate.is_set || is_set(lsa_originate.yfilter)) leaf_name_data.push_back(lsa_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage = value;
        lsa_maxage.value_namespace = name_space;
        lsa_maxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate = value;
        lsa_originate.value_namespace = name_space;
        lsa_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage.yfilter = yfilter;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-maxage" || name == "lsa-originate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pim::Pim()
    :
    invalid_pim_message{YType::empty, "invalid-pim-message"},
    neighbor_change{YType::empty, "neighbor-change"},
    rp_mapping_change{YType::empty, "rp-mapping-change"}
{

    yang_name = "pim"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pim::~Pim()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_data() const
{
    if (is_presence_container) return true;
    return invalid_pim_message.is_set
	|| neighbor_change.is_set
	|| rp_mapping_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalid_pim_message.yfilter)
	|| ydk::is_set(neighbor_change.yfilter)
	|| ydk::is_set(rp_mapping_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid_pim_message.is_set || is_set(invalid_pim_message.yfilter)) leaf_name_data.push_back(invalid_pim_message.get_name_leafdata());
    if (neighbor_change.is_set || is_set(neighbor_change.yfilter)) leaf_name_data.push_back(neighbor_change.get_name_leafdata());
    if (rp_mapping_change.is_set || is_set(rp_mapping_change.yfilter)) leaf_name_data.push_back(rp_mapping_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalid-pim-message")
    {
        invalid_pim_message = value;
        invalid_pim_message.value_namespace = name_space;
        invalid_pim_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-change")
    {
        neighbor_change = value;
        neighbor_change.value_namespace = name_space;
        neighbor_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-mapping-change")
    {
        rp_mapping_change = value;
        rp_mapping_change.value_namespace = name_space;
        rp_mapping_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalid-pim-message")
    {
        invalid_pim_message.yfilter = yfilter;
    }
    if(value_path == "neighbor-change")
    {
        neighbor_change.yfilter = yfilter;
    }
    if(value_path == "rp-mapping-change")
    {
        rp_mapping_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid-pim-message" || name == "neighbor-change" || name == "rp-mapping-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::Plogd()
{

    yang_name = "plogd"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::~Plogd()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plogd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "port-security"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::~PortSecurity()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return trap_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_rate.is_set || is_set(trap_rate.yfilter)) leaf_name_data.push_back(trap_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "power-ethernet"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::~PowerEthernet()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| police.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(police.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (police.is_set || is_set(police.yfilter)) leaf_name_data.push_back(police.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "pw"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pw::~Pw()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_data() const
{
    if (is_presence_container) return true;
    return vc.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vc.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc.is_set || is_set(vc.yfilter)) leaf_name_data.push_back(vc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "slb"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Slb::~Slb()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Slb::has_data() const
{
    if (is_presence_container) return true;
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

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csrp.is_set || is_set(csrp.yfilter)) leaf_name_data.push_back(csrp.get_name_leafdata());
    if (real.is_set || is_set(real.yfilter)) leaf_name_data.push_back(real.get_name_leafdata());
    if (virtual_.is_set || is_set(virtual_.yfilter)) leaf_name_data.push_back(virtual_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "snmp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::~Snmp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::has_data() const
{
    if (is_presence_container) return true;
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

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (coldstart.is_set || is_set(coldstart.yfilter)) leaf_name_data.push_back(coldstart.get_name_leafdata());
    if (linkdown.is_set || is_set(linkdown.yfilter)) leaf_name_data.push_back(linkdown.get_name_leafdata());
    if (linkup.is_set || is_set(linkup.yfilter)) leaf_name_data.push_back(linkup.get_name_leafdata());
    if (warmstart.is_set || is_set(warmstart.yfilter)) leaf_name_data.push_back(warmstart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    srls{YType::empty, "SRLS"},
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
    stack_mismatch{YType::empty, "stack-mismatch"},
    unbalanced_power_supplies{YType::empty, "unbalanced-power-supplies"},
    under_budget{YType::empty, "under-budget"},
    under_voltage{YType::empty, "under-voltage"}
{

    yang_name = "stackwise"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::~Stackwise()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::has_data() const
{
    if (is_presence_container) return true;
    return gls.is_set
	|| ils.is_set
	|| srls.is_set
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
	|| ydk::is_set(srls.yfilter)
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
	|| ydk::is_set(stack_mismatch.yfilter)
	|| ydk::is_set(unbalanced_power_supplies.yfilter)
	|| ydk::is_set(under_budget.yfilter)
	|| ydk::is_set(under_voltage.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gls.is_set || is_set(gls.yfilter)) leaf_name_data.push_back(gls.get_name_leafdata());
    if (ils.is_set || is_set(ils.yfilter)) leaf_name_data.push_back(ils.get_name_leafdata());
    if (srls.is_set || is_set(srls.yfilter)) leaf_name_data.push_back(srls.get_name_leafdata());
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
    if (stack_mismatch.is_set || is_set(stack_mismatch.yfilter)) leaf_name_data.push_back(stack_mismatch.get_name_leafdata());
    if (unbalanced_power_supplies.is_set || is_set(unbalanced_power_supplies.yfilter)) leaf_name_data.push_back(unbalanced_power_supplies.get_name_leafdata());
    if (under_budget.is_set || is_set(under_budget.yfilter)) leaf_name_data.push_back(under_budget.get_name_leafdata());
    if (under_voltage.is_set || is_set(under_voltage.yfilter)) leaf_name_data.push_back(under_voltage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "SRLS")
    {
        srls = value;
        srls.value_namespace = name_space;
        srls.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SRLS")
    {
        srls.yfilter = yfilter;
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
    if(name == "GLS" || name == "ILS" || name == "SRLS" || name == "insufficient-power" || name == "invalid-input-current" || name == "invalid-output-current" || name == "member-removed" || name == "member-upgrade-notification" || name == "new-master" || name == "new-member" || name == "port-change" || name == "power-budget-warning" || name == "power-invalid-topology" || name == "power-link-status-changed" || name == "power-oper-status-changed" || name == "power-priority-conflict" || name == "power-version-mismatch" || name == "ring-redundant" || name == "stack-mismatch" || name == "unbalanced-power-supplies" || name == "under-budget" || name == "under-voltage")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::Stpx()
    :
    inconsistency{YType::empty, "inconsistency"},
    root_inconsistency{YType::empty, "root-inconsistency"},
    loop_inconsistency{YType::empty, "loop-inconsistency"}
{

    yang_name = "stpx"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::~Stpx()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_data() const
{
    if (is_presence_container) return true;
    return inconsistency.is_set
	|| root_inconsistency.is_set
	|| loop_inconsistency.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inconsistency.yfilter)
	|| ydk::is_set(root_inconsistency.yfilter)
	|| ydk::is_set(loop_inconsistency.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inconsistency.is_set || is_set(inconsistency.yfilter)) leaf_name_data.push_back(inconsistency.get_name_leafdata());
    if (root_inconsistency.is_set || is_set(root_inconsistency.yfilter)) leaf_name_data.push_back(root_inconsistency.get_name_leafdata());
    if (loop_inconsistency.is_set || is_set(loop_inconsistency.yfilter)) leaf_name_data.push_back(loop_inconsistency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inconsistency")
    {
        inconsistency = value;
        inconsistency.value_namespace = name_space;
        inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-inconsistency")
    {
        root_inconsistency = value;
        root_inconsistency.value_namespace = name_space;
        root_inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-inconsistency")
    {
        loop_inconsistency = value;
        loop_inconsistency.value_namespace = name_space;
        loop_inconsistency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inconsistency")
    {
        inconsistency.yfilter = yfilter;
    }
    if(value_path == "root-inconsistency")
    {
        root_inconsistency.yfilter = yfilter;
    }
    if(value_path == "loop-inconsistency")
    {
        loop_inconsistency.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inconsistency" || name == "root-inconsistency" || name == "loop-inconsistency")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::Transceiver()
    :
    all{YType::empty, "all"}
{

    yang_name = "transceiver"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::~Transceiver()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "udld"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Udld::~Udld()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_data() const
{
    if (is_presence_container) return true;
    return link_fail_rpt.is_set
	|| status_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_fail_rpt.yfilter)
	|| ydk::is_set(status_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_fail_rpt.is_set || is_set(link_fail_rpt.yfilter)) leaf_name_data.push_back(link_fail_rpt.get_name_leafdata());
    if (status_change.is_set || is_set(status_change.yfilter)) leaf_name_data.push_back(status_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    vrf_up{YType::empty, "vrf-up"},
    vrf_down{YType::empty, "vrf-down"},
    vnet_trunk_up{YType::empty, "vnet-trunk-up"},
    vnet_trunk_down{YType::empty, "vnet-trunk-down"}
{

    yang_name = "vrfmib"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::~Vrfmib()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_data() const
{
    if (is_presence_container) return true;
    return vrf_up.is_set
	|| vrf_down.is_set
	|| vnet_trunk_up.is_set
	|| vnet_trunk_down.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_up.yfilter)
	|| ydk::is_set(vrf_down.yfilter)
	|| ydk::is_set(vnet_trunk_up.yfilter)
	|| ydk::is_set(vnet_trunk_down.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_up.is_set || is_set(vrf_up.yfilter)) leaf_name_data.push_back(vrf_up.get_name_leafdata());
    if (vrf_down.is_set || is_set(vrf_down.yfilter)) leaf_name_data.push_back(vrf_down.get_name_leafdata());
    if (vnet_trunk_up.is_set || is_set(vnet_trunk_up.yfilter)) leaf_name_data.push_back(vnet_trunk_up.get_name_leafdata());
    if (vnet_trunk_down.is_set || is_set(vnet_trunk_down.yfilter)) leaf_name_data.push_back(vnet_trunk_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-up")
    {
        vrf_up = value;
        vrf_up.value_namespace = name_space;
        vrf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-down")
    {
        vrf_down = value;
        vrf_down.value_namespace = name_space;
        vrf_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnet-trunk-up")
    {
        vnet_trunk_up = value;
        vnet_trunk_up.value_namespace = name_space;
        vnet_trunk_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnet-trunk-down")
    {
        vnet_trunk_down = value;
        vnet_trunk_down.value_namespace = name_space;
        vnet_trunk_down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-up")
    {
        vrf_up.yfilter = yfilter;
    }
    if(value_path == "vrf-down")
    {
        vrf_down.yfilter = yfilter;
    }
    if(value_path == "vnet-trunk-up")
    {
        vnet_trunk_up.yfilter = yfilter;
    }
    if(value_path == "vnet-trunk-down")
    {
        vnet_trunk_down.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-up" || name == "vrf-down" || name == "vnet-trunk-up" || name == "vnet-trunk-down")
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

    yang_name = "vstack"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::~Vstack()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_data() const
{
    if (is_presence_container) return true;
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

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vstack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addition.is_set || is_set(addition.yfilter)) leaf_name_data.push_back(addition.get_name_leafdata());
    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (lost.is_set || is_set(lost.yfilter)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "wireless"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::~Wireless()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_data() const
{
    if (is_presence_container) return true;
    return (bsnmobilestation !=  nullptr && bsnmobilestation->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_operation() const
{
    return is_set(yfilter)
	|| (bsnmobilestation !=  nullptr && bsnmobilestation->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnMobileStation")
    {
        if(bsnmobilestation == nullptr)
        {
            bsnmobilestation = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation>();
        }
        return bsnmobilestation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bsnmobilestation != nullptr)
    {
        _children["bsnMobileStation"] = bsnmobilestation;
    }

    return _children;
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

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnMobileStation()
    :
    bsnaccesspoint(nullptr) // presence node
{

    yang_name = "bsnMobileStation"; yang_parent_name = "wireless"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::~BsnMobileStation()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::has_data() const
{
    if (is_presence_container) return true;
    return (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::has_operation() const
{
    return is_set(yfilter)
	|| (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnMobileStation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnAccessPoint")
    {
        if(bsnaccesspoint == nullptr)
        {
            bsnaccesspoint = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint>();
        }
        return bsnaccesspoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bsnaccesspoint != nullptr)
    {
        _children["bsnAccessPoint"] = bsnaccesspoint;
    }

    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnAccessPoint")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::BsnAccessPoint()
    :
    bsnrogue{YType::empty, "bsnRogue"}
{

    yang_name = "bsnAccessPoint"; yang_parent_name = "bsnMobileStation"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::~BsnAccessPoint()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::has_data() const
{
    if (is_presence_container) return true;
    return bsnrogue.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsnrogue.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/bsnMobileStation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnAccessPoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsnrogue.is_set || is_set(bsnrogue.yfilter)) leaf_name_data.push_back(bsnrogue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsnRogue")
    {
        bsnrogue = value;
        bsnrogue.value_namespace = name_space;
        bsnrogue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsnRogue")
    {
        bsnrogue.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnRogue")
        return true;
    return false;
}

Native::SnmpServer::EngineID::EngineID()
    :
    local{YType::str, "local"}
        ,
    remote(std::make_shared<Native::SnmpServer::EngineID::Remote>())
{
    remote->parent = this;

    yang_name = "engineID"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::EngineID::~EngineID()
{
}

bool Native::SnmpServer::EngineID::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::SnmpServer::EngineID::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::SnmpServer::EngineID::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::EngineID::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:engineID";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::EngineID::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::EngineID::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::SnmpServer::EngineID::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::EngineID::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void Native::SnmpServer::EngineID::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::EngineID::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::SnmpServer::EngineID::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote" || name == "local")
        return true;
    return false;
}

Native::SnmpServer::EngineID::Remote::Remote()
{

    yang_name = "remote"; yang_parent_name = "engineID"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::EngineID::Remote::~Remote()
{
}

bool Native::SnmpServer::EngineID::Remote::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::EngineID::Remote::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::EngineID::Remote::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:engineID/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::EngineID::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::EngineID::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::EngineID::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::EngineID::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::EngineID::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::EngineID::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::EngineID::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::Group()
    :
    id{YType::str, "id"}
        ,
    v1(std::make_shared<Native::SnmpServer::Group::V1>())
    , v2c(std::make_shared<Native::SnmpServer::Group::V2c>())
    , v3(std::make_shared<Native::SnmpServer::Group::V3>())
{
    v1->parent = this;
    v2c->parent = this;
    v3->parent = this;

    yang_name = "group"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Group::~Group()
{
}

bool Native::SnmpServer::Group::has_data() const
{
    if (is_presence_container) return true;
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

std::string Native::SnmpServer::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:group";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            v2c = std::make_shared<Native::SnmpServer::Group::V2c>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v1 != nullptr)
    {
        _children["v1"] = v1;
    }

    if(v2c != nullptr)
    {
        _children["v2c"] = v2c;
    }

    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
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

    yang_name = "v1"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::Group::V1::~V1()
{
}

bool Native::SnmpServer::Group::V1::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::V1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Group::V1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Group::V1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Native::SnmpServer::Group::V2c::V2c()
{

    yang_name = "v2c"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::Group::V2c::~V2c()
{
}

bool Native::SnmpServer::Group::V2c::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::SnmpServer::Group::V2c::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Group::V2c::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v2c";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::V2c::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Group::V2c::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Group::V2c::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Group::V2c::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Group::V2c::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Group::V2c::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::V3::V3()
    :
    security_level{YType::enumeration, "security-level"},
    context{YType::str, "context"},
    match{YType::enumeration, "match"},
    read{YType::str, "read"},
    write{YType::str, "write"},
    notify{YType::str, "notify"},
    access{YType::str, "access"}
{

    yang_name = "v3"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::Group::V3::~V3()
{
}

bool Native::SnmpServer::Group::V3::has_data() const
{
    if (is_presence_container) return true;
    return security_level.is_set
	|| context.is_set
	|| match.is_set
	|| read.is_set
	|| write.is_set
	|| notify.is_set
	|| access.is_set;
}

bool Native::SnmpServer::Group::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(read.yfilter)
	|| ydk::is_set(write.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::SnmpServer::Group::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (read.is_set || is_set(read.yfilter)) leaf_name_data.push_back(read.get_name_leafdata());
    if (write.is_set || is_set(write.yfilter)) leaf_name_data.push_back(write.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Group::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Group::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::Group::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "read")
    {
        read = value;
        read.value_namespace = name_space;
        read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write")
    {
        write = value;
        write.value_namespace = name_space;
        write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Group::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "read")
    {
        read.yfilter = yfilter;
    }
    if(value_path == "write")
    {
        write.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Group::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-level" || name == "context" || name == "match" || name == "read" || name == "write" || name == "notify" || name == "access")
        return true;
    return false;
}

Native::SnmpServer::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    community_or_user{YType::str, "community-or-user"},
    vrf{YType::str, "vrf"},
    informs{YType::empty, "informs"},
    traps{YType::empty, "traps"},
    version{YType::enumeration, "version"},
    security_level{YType::enumeration, "security-level"},
    udp_port{YType::uint16, "udp-port"}
        ,
    trap_enable(std::make_shared<Native::SnmpServer::Host::TrapEnable>())
{
    trap_enable->parent = this;

    yang_name = "host"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Host::~Host()
{
}

bool Native::SnmpServer::Host::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| community_or_user.is_set
	|| vrf.is_set
	|| informs.is_set
	|| traps.is_set
	|| version.is_set
	|| security_level.is_set
	|| udp_port.is_set
	|| (trap_enable !=  nullptr && trap_enable->has_data());
}

bool Native::SnmpServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(community_or_user.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(informs.yfilter)
	|| ydk::is_set(traps.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| (trap_enable !=  nullptr && trap_enable->has_operation());
}

std::string Native::SnmpServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:host";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    ADD_KEY_TOKEN(community_or_user, "community-or-user");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (community_or_user.is_set || is_set(community_or_user.yfilter)) leaf_name_data.push_back(community_or_user.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (informs.is_set || is_set(informs.yfilter)) leaf_name_data.push_back(informs.get_name_leafdata());
    if (traps.is_set || is_set(traps.yfilter)) leaf_name_data.push_back(traps.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap_enable != nullptr)
    {
        _children["trap-enable"] = trap_enable;
    }

    return _children;
}

void Native::SnmpServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-or-user")
    {
        community_or_user = value;
        community_or_user.value_namespace = name_space;
        community_or_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "informs")
    {
        informs = value;
        informs.value_namespace = name_space;
        informs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "community-or-user")
    {
        community_or_user.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "informs")
    {
        informs.yfilter = yfilter;
    }
    if(value_path == "traps")
    {
        traps.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-enable" || name == "ip-address" || name == "community-or-user" || name == "vrf" || name == "informs" || name == "traps" || name == "version" || name == "security-level" || name == "udp-port")
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
    voice{YType::empty, "voice"},
    vrfmib{YType::empty, "vrfmib"},
    vrrp{YType::empty, "vrrp"},
    x25{YType::empty, "x25"}
{

    yang_name = "trap-enable"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::Host::TrapEnable::~TrapEnable()
{
}

bool Native::SnmpServer::Host::TrapEnable::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Host::TrapEnable::get_name_leaf_data() const
{
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
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());
    if (vrfmib.is_set || is_set(vrfmib.yfilter)) leaf_name_data.push_back(vrfmib.get_name_leafdata());
    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());
    if (x25.is_set || is_set(x25.yfilter)) leaf_name_data.push_back(x25.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Host::TrapEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Host::TrapEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(name == "aaa_server" || name == "alarms" || name == "atm" || name == "bfd" || name == "bgp" || name == "bstun" || name == "bulkstat" || name == "call-home" || name == "casa" || name == "cef" || name == "cnpd" || name == "config" || name == "config-copy" || name == "config-ctid" || name == "cpu" || name == "dhcp" || name == "dlsw" || name == "ds1" || name == "dsp" || name == "dspu" || name == "eigrp" || name == "entity" || name == "entity-diag" || name == "entity-qfp" || name == "entity-state" || name == "ethernet-cfm" || name == "evc" || name == "event-manager" || name == "firewall" || name == "flash" || name == "flowmon" || name == "frame-relay" || name == "fru-ctrl" || name == "gdoi" || name == "hsrp" || name == "iplocalpool" || name == "ipmulticast" || name == "ipsec" || name == "ipsla" || name == "isakmp" || name == "isg-mib" || name == "isis" || name == "l2tun-pseudowire-status" || name == "l2tun-session" || name == "license" || name == "memory" || name == "mpls-fast-reroute" || name == "mpls-ldp" || name == "mpls-traffic-eng" || name == "mpls-vpn" || name == "msdp" || name == "mvpn" || name == "nhrp" || name == "ospf" || name == "ospfv3" || name == "pfr" || name == "pim" || name == "pw-vc" || name == "resource-policy" || name == "rf" || name == "rsrb" || name == "rsvp" || name == "sdlc" || name == "sdllc" || name == "snmp" || name == "sonet" || name == "srp" || name == "stun" || name == "syslog" || name == "trustsec-sxp" || name == "tty" || name == "voice" || name == "vrfmib" || name == "vrrp" || name == "x25")
        return true;
    return false;
}

Native::SnmpServer::Ip::Ip()
    :
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"}
{

    yang_name = "ip"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Ip::~Ip()
{
}

bool Native::SnmpServer::Ip::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| precedence.is_set;
}

bool Native::SnmpServer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::SnmpServer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "ifindex"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Ifindex::~Ifindex()
{
}

bool Native::SnmpServer::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set;
}

bool Native::SnmpServer::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::SnmpServer::Ifindex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "manager"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SnmpServer::Manager::~Manager()
{
}

bool Native::SnmpServer::Manager::has_data() const
{
    if (is_presence_container) return true;
    return session_timeout.is_set;
}

bool Native::SnmpServer::Manager::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_timeout.yfilter);
}

std::string Native::SnmpServer::Manager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Manager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout.is_set || is_set(session_timeout.yfilter)) leaf_name_data.push_back(session_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , traps(std::make_shared<Native::SnmpServer::SourceInterface::Traps>())
{
    informs->parent = this;
    traps->parent = this;

    yang_name = "source-interface"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::~SourceInterface()
{
}

bool Native::SnmpServer::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return (informs !=  nullptr && informs->has_data())
	|| (traps !=  nullptr && traps->has_data());
}

bool Native::SnmpServer::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| (informs !=  nullptr && informs->has_operation())
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Native::SnmpServer::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(informs != nullptr)
    {
        _children["informs"] = informs;
    }

    if(traps != nullptr)
    {
        _children["traps"] = traps;
    }

    return _children;
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
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "informs"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Informs::~Informs()
{
}

bool Native::SnmpServer::SourceInterface::Informs::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
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
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::SourceInterface::Informs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Informs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::LISPSubinterface>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Informs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "traps"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Traps::~Traps()
{
}

bool Native::SnmpServer::SourceInterface::Traps::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
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
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::SourceInterface::Traps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::LISPSubinterface>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Traps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "trap"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Trap::~Trap()
{
}

bool Native::SnmpServer::Trap::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| (link !=  nullptr && link->has_data());
}

bool Native::SnmpServer::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::SnmpServer::Trap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link != nullptr)
    {
        _children["link"] = link;
    }

    return _children;
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

    yang_name = "link"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::Trap::Link::~Link()
{
}

bool Native::SnmpServer::Trap::Link::has_data() const
{
    if (is_presence_container) return true;
    return ietf.is_set
	|| switchover.is_set;
}

bool Native::SnmpServer::Trap::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(switchover.yfilter);
}

std::string Native::SnmpServer::Trap::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Trap::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Trap::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::Trap::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::Trap::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::SnmpServer::TrapSource::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::SnmpServer::TrapSource::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::SnmpServer::TrapSource::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "trap-source"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::TrapSource::~TrapSource()
{
}

bool Native::SnmpServer::TrapSource::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
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
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::TrapSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::TrapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::TrapSource::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::TrapSource::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::TrapSource::LISPSubinterface>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::TrapSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::TrapSource::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::SnmpServer::TrapSource::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::SnmpServer::TrapSource::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::TrapSource::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::TrapSource::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::TrapSource::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::TrapSource::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::TrapSource::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::SnmpServer::TrapSource::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::SnmpServer::TrapSource::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::TrapSource::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::TrapSource::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::TrapSource::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::TrapSource::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::TrapSource::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::SnmpServer::TrapSource::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::SnmpServer::TrapSource::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::TrapSource::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::TrapSource::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::TrapSource::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::TrapSource::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::TrapSource::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    names(this, {"username", "grpname"})
{

    yang_name = "user"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::User::~User()
{
}

bool Native::SnmpServer::User::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<names.len(); index++)
    {
        if(names[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SnmpServer::User::has_operation() const
{
    for (std::size_t index=0; index<names.len(); index++)
    {
        if(names[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SnmpServer::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        auto ent_ = std::make_shared<Native::SnmpServer::User::Names>();
        ent_->parent = this;
        names.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : names.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "names"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::User::Names::~Names()
{
}

bool Native::SnmpServer::User::Names::has_data() const
{
    if (is_presence_container) return true;
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

std::string Native::SnmpServer::User::Names::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:user/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::User::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";
    ADD_KEY_TOKEN(username, "username");
    ADD_KEY_TOKEN(grpname, "grpname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (grpname.is_set || is_set(grpname.yfilter)) leaf_name_data.push_back(grpname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
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

    yang_name = "v3"; yang_parent_name = "names"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::SnmpServer::User::Names::V3::~V3()
{
}

bool Native::SnmpServer::User::Names::V3::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
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

    yang_name = "auth"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::User::Names::V3::Auth::~Auth()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sha != nullptr)
    {
        _children["sha"] = sha;
    }

    return _children;
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

    yang_name = "sha"; yang_parent_name = "auth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::User::Names::V3::Auth::Sha::~Sha()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth != nullptr)
    {
        _children["auth"] = auth;
    }

    return _children;
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

    yang_name = "auth"; yang_parent_name = "sha"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::~Auth_()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authpass.is_set || is_set(authpass.yfilter)) leaf_name_data.push_back(authpass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priv != nullptr)
    {
        _children["priv"] = priv;
    }

    return _children;
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

    yang_name = "priv"; yang_parent_name = "auth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::~Priv()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aes != nullptr)
    {
        _children["aes"] = aes;
    }

    return _children;
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

    yang_name = "aes"; yang_parent_name = "priv"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::~Aes()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(algo128 != nullptr)
    {
        _children["algo128"] = algo128;
    }

    return _children;
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

    yang_name = "algo128"; yang_parent_name = "aes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::~Algo128()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(privpass != nullptr)
    {
        _children["privpass"] = privpass;
    }

    return _children;
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
    privpass{YType::str, "privpass"},
    access{YType::str, "access"}
{

    yang_name = "privpass"; yang_parent_name = "algo128"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::~Privpass()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_data() const
{
    if (is_presence_container) return true;
    return privpass.is_set
	|| access.is_set;
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(privpass.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privpass";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privpass.is_set || is_set(privpass.yfilter)) leaf_name_data.push_back(privpass.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privpass")
    {
        privpass = value;
        privpass.value_namespace = name_space;
        privpass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privpass")
    {
        privpass.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "privpass" || name == "access")
        return true;
    return false;
}

Native::SnmpServer::View::View()
    :
    name{YType::str, "name"},
    mib{YType::str, "mib"},
    inc_exl{YType::enumeration, "inc-exl"}
{

    yang_name = "view"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SnmpServer::View::~View()
{
}

bool Native::SnmpServer::View::has_data() const
{
    if (is_presence_container) return true;
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

std::string Native::SnmpServer::View::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:view";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(mib, "mib");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::View::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mib.is_set || is_set(mib.yfilter)) leaf_name_data.push_back(mib.get_name_leafdata());
    if (inc_exl.is_set || is_set(inc_exl.yfilter)) leaf_name_data.push_back(inc_exl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SnmpServer::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SnmpServer::View::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "segment-routing"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::~SegmentRouting()
{
}

bool Native::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (mpls !=  nullptr && mpls->has_data());
}

bool Native::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-segment-routing:mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SegmentRouting::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["Cisco-IOS-XE-segment-routing:mpls"] = mpls;
    }

    return _children;
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
    , global_block(std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>())
    , mapping_server(nullptr) // presence node
    , set_attributes(nullptr) // presence node
{
    global_block->parent = this;

    yang_name = "mpls"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::~Mpls()
{
}

bool Native::SegmentRouting::Mpls::has_data() const
{
    if (is_presence_container) return true;
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

std::string Native::SegmentRouting::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-segment-routing:mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connected_prefix_sid_map != nullptr)
    {
        _children["connected-prefix-sid-map"] = connected_prefix_sid_map;
    }

    if(global_block != nullptr)
    {
        _children["global-block"] = global_block;
    }

    if(mapping_server != nullptr)
    {
        _children["mapping-server"] = mapping_server;
    }

    if(set_attributes != nullptr)
    {
        _children["set-attributes"] = set_attributes;
    }

    return _children;
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

    yang_name = "connected-prefix-sid-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::~ConnectedPrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_data() const
{
    if (is_presence_container) return true;
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
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
    , ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "connected-prefix-sid-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        _children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return _children;
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
    :
    prefixes(this, {"ipprefix"})
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index>())
    , absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(ipprefix, "ipprefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(index_ != nullptr)
    {
        _children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        _children["absolute"] = absolute;
    }

    return _children;
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
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::Index()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::~Index()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
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

    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(strict_spf != nullptr)
    {
        _children["strict-spf"] = strict_spf;
    }

    return _children;
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
    :
    prefixes(this, {"ipprefix"})
{

    yang_name = "strict-spf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index>())
    , absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(ipprefix, "ipprefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(index_ != nullptr)
    {
        _children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        _children["absolute"] = absolute;
    }

    return _children;
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
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::Index()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::~Index()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::GlobalBlock::GlobalBlock()
    :
    range_start{YType::uint32, "range-start"},
    range_end{YType::uint32, "range-end"}
{

    yang_name = "global-block"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::GlobalBlock::~GlobalBlock()
{
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::GlobalBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::GlobalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::MappingServer()
    :
    prefix_sid_map(nullptr) // presence node
{

    yang_name = "mapping-server"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::MappingServer::~MappingServer()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_map != nullptr)
    {
        _children["prefix-sid-map"] = prefix_sid_map;
    }

    return _children;
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

    yang_name = "prefix-sid-map"; yang_parent_name = "mapping-server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_data() const
{
    if (is_presence_container) return true;
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
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
    , ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "prefix-sid-map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        _children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return _children;
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
    :
    prefixes(this, {"ipprefix"})
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index>())
    , absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(ipprefix, "ipprefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(index_ != nullptr)
    {
        _children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        _children["absolute"] = absolute;
    }

    return _children;
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
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::Index()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::~Index()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
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

    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(strict_spf != nullptr)
    {
        _children["strict-spf"] = strict_spf;
    }

    return _children;
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
    :
    prefixes(this, {"ipprefix"})
{

    yang_name = "strict-spf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index>())
    , absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(ipprefix, "ipprefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(index_ != nullptr)
    {
        _children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        _children["absolute"] = absolute;
    }

    return _children;
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
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::Index()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::~Index()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::SetAttributes()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "set-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::SetAttributes::~SetAttributes()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::SetAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::SetAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
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

    yang_name = "address-family"; yang_parent_name = "set-attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
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

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return explicit_null.is_set
	|| sr_label_preferred.is_set;
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(sr_label_preferred.yfilter);
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (sr_label_preferred.is_set || is_set(sr_label_preferred.yfilter)) leaf_name_data.push_back(sr_label_preferred.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    udi(std::make_shared<Native::License::Udi>())
    , feature(std::make_shared<Native::License::Feature>())
    , accept(std::make_shared<Native::License::Accept>())
    , boot(std::make_shared<Native::License::Boot>())
    , smart(std::make_shared<Native::License::Smart>())
{
    udi->parent = this;
    feature->parent = this;
    accept->parent = this;
    boot->parent = this;
    smart->parent = this;

    yang_name = "license"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::~License()
{
}

bool Native::License::has_data() const
{
    if (is_presence_container) return true;
    return (udi !=  nullptr && udi->has_data())
	|| (feature !=  nullptr && feature->has_data())
	|| (accept !=  nullptr && accept->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (smart !=  nullptr && smart->has_data());
}

bool Native::License::has_operation() const
{
    return is_set(yfilter)
	|| (udi !=  nullptr && udi->has_operation())
	|| (feature !=  nullptr && feature->has_operation())
	|| (accept !=  nullptr && accept->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (smart !=  nullptr && smart->has_operation());
}

std::string Native::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<Native::License::Udi>();
        }
        return udi;
    }

    if(child_yang_name == "feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Native::License::Feature>();
        }
        return feature;
    }

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

    if(child_yang_name == "smart")
    {
        if(smart == nullptr)
        {
            smart = std::make_shared<Native::License::Smart>();
        }
        return smart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::License::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udi != nullptr)
    {
        _children["udi"] = udi;
    }

    if(feature != nullptr)
    {
        _children["feature"] = feature;
    }

    if(accept != nullptr)
    {
        _children["accept"] = accept;
    }

    if(boot != nullptr)
    {
        _children["boot"] = boot;
    }

    if(smart != nullptr)
    {
        _children["smart"] = smart;
    }

    return _children;
}

void Native::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udi" || name == "feature" || name == "accept" || name == "boot" || name == "smart")
        return true;
    return false;
}

Native::License::Udi::Udi()
    :
    pid{YType::str, "pid"},
    sn{YType::str, "sn"}
{

    yang_name = "udi"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Udi::~Udi()
{
}

bool Native::License::Udi::has_data() const
{
    if (is_presence_container) return true;
    return pid.is_set
	|| sn.is_set;
}

bool Native::License::Udi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(sn.yfilter);
}

std::string Native::License::Udi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Udi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::License::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::License::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "feature"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Feature::~Feature()
{
}

bool Native::License::Feature::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (port !=  nullptr && port->has_data());
}

bool Native::License::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::License::Feature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::License::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::License::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
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
    bulk{YType::empty, "bulk"},
    onegig{YType::uint8, "onegig"},
    b_6xonegig{YType::uint8, "b-6xonegig"},
    tengig{YType::uint8, "tengig"}
{

    yang_name = "port"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Feature::Port::~Port()
{
}

bool Native::License::Feature::Port::has_data() const
{
    if (is_presence_container) return true;
    return bulk.is_set
	|| onegig.is_set
	|| b_6xonegig.is_set
	|| tengig.is_set;
}

bool Native::License::Feature::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bulk.yfilter)
	|| ydk::is_set(onegig.yfilter)
	|| ydk::is_set(b_6xonegig.yfilter)
	|| ydk::is_set(tengig.yfilter);
}

std::string Native::License::Feature::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/feature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bulk.is_set || is_set(bulk.yfilter)) leaf_name_data.push_back(bulk.get_name_leafdata());
    if (onegig.is_set || is_set(onegig.yfilter)) leaf_name_data.push_back(onegig.get_name_leafdata());
    if (b_6xonegig.is_set || is_set(b_6xonegig.yfilter)) leaf_name_data.push_back(b_6xonegig.get_name_leafdata());
    if (tengig.is_set || is_set(tengig.yfilter)) leaf_name_data.push_back(tengig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::License::Feature::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::License::Feature::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::License::Feature::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "b-6xonegig")
    {
        b_6xonegig = value;
        b_6xonegig.value_namespace = name_space;
        b_6xonegig.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "bulk")
    {
        bulk.yfilter = yfilter;
    }
    if(value_path == "onegig")
    {
        onegig.yfilter = yfilter;
    }
    if(value_path == "b-6xonegig")
    {
        b_6xonegig.yfilter = yfilter;
    }
    if(value_path == "tengig")
    {
        tengig.yfilter = yfilter;
    }
}

bool Native::License::Feature::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "onegig" || name == "b-6xonegig" || name == "tengig")
        return true;
    return false;
}

Native::License::Accept::Accept()
    :
    end{YType::empty, "end"},
    user{YType::empty, "user"},
    agreement{YType::empty, "agreement"}
{

    yang_name = "accept"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Accept::~Accept()
{
}

bool Native::License::Accept::has_data() const
{
    if (is_presence_container) return true;
    return end.is_set
	|| user.is_set
	|| agreement.is_set;
}

bool Native::License::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(agreement.yfilter);
}

std::string Native::License::Accept::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (agreement.is_set || is_set(agreement.yfilter)) leaf_name_data.push_back(agreement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::License::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::License::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::License::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "agreement")
    {
        agreement = value;
        agreement.value_namespace = name_space;
        agreement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "agreement")
    {
        agreement.yfilter = yfilter;
    }
}

bool Native::License::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end" || name == "user" || name == "agreement")
        return true;
    return false;
}

Native::License::Boot::Boot()
    :
    level(std::make_shared<Native::License::Boot::Level>())
    , boot_module(std::make_shared<Native::License::Boot::BootModule>())
{
    level->parent = this;
    boot_module->parent = this;

    yang_name = "boot"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Boot::~Boot()
{
}

bool Native::License::Boot::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data())
	|| (boot_module !=  nullptr && boot_module->has_data());
}

bool Native::License::Boot::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation())
	|| (boot_module !=  nullptr && boot_module->has_operation());
}

std::string Native::License::Boot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::License::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::License::Boot::Level>();
        }
        return level;
    }

    if(child_yang_name == "boot-module")
    {
        if(boot_module == nullptr)
        {
            boot_module = std::make_shared<Native::License::Boot::BootModule>();
        }
        return boot_module;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::License::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    if(boot_module != nullptr)
    {
        _children["boot-module"] = boot_module;
    }

    return _children;
}

void Native::License::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::License::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::License::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "boot-module")
        return true;
    return false;
}

Native::License::Boot::Level::Level()
    :
    metroipservices{YType::empty, "metroipservices"},
    metroservices{YType::empty, "metroservices"},
    advancedmetroipaccess{YType::empty, "advancedmetroipaccess"},
    metroaccess{YType::empty, "metroaccess"},
    metroipaccess{YType::empty, "metroipaccess"},
    entservices{YType::empty, "entservices"},
    adventerprise{YType::empty, "adventerprise"},
    appx{YType::empty, "appx"},
    appxk9{YType::empty, "appxk9"},
    ax{YType::empty, "ax"},
    security{YType::empty, "security"},
    securityk9{YType::empty, "securityk9"},
    advucsuitek9{YType::empty, "AdvUCSuiteK9"},
    foundationsuitek9{YType::empty, "FoundationSuiteK9"}
        ,
    ipbase(nullptr) // presence node
    , ipbasek9(nullptr) // presence node
    , ipservices(nullptr) // presence node
    , ipservicesk9(nullptr) // presence node
    , lanbase(nullptr) // presence node
    , lanbasek9(nullptr) // presence node
    , lite(nullptr) // presence node
    , metroaggrservices(nullptr) // presence node
    , uck9(nullptr) // presence node
    , network_advantage(nullptr) // presence node
    , network_essentials(nullptr) // presence node
{

    yang_name = "level"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::License::Boot::Level::~Level()
{
}

bool Native::License::Boot::Level::has_data() const
{
    if (is_presence_container) return true;
    return metroipservices.is_set
	|| metroservices.is_set
	|| advancedmetroipaccess.is_set
	|| metroaccess.is_set
	|| metroipaccess.is_set
	|| entservices.is_set
	|| adventerprise.is_set
	|| appx.is_set
	|| appxk9.is_set
	|| ax.is_set
	|| security.is_set
	|| securityk9.is_set
	|| advucsuitek9.is_set
	|| foundationsuitek9.is_set
	|| (ipbase !=  nullptr && ipbase->has_data())
	|| (ipbasek9 !=  nullptr && ipbasek9->has_data())
	|| (ipservices !=  nullptr && ipservices->has_data())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_data())
	|| (lanbase !=  nullptr && lanbase->has_data())
	|| (lanbasek9 !=  nullptr && lanbasek9->has_data())
	|| (lite !=  nullptr && lite->has_data())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_data())
	|| (uck9 !=  nullptr && uck9->has_data())
	|| (network_advantage !=  nullptr && network_advantage->has_data())
	|| (network_essentials !=  nullptr && network_essentials->has_data());
}

bool Native::License::Boot::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metroipservices.yfilter)
	|| ydk::is_set(metroservices.yfilter)
	|| ydk::is_set(advancedmetroipaccess.yfilter)
	|| ydk::is_set(metroaccess.yfilter)
	|| ydk::is_set(metroipaccess.yfilter)
	|| ydk::is_set(entservices.yfilter)
	|| ydk::is_set(adventerprise.yfilter)
	|| ydk::is_set(appx.yfilter)
	|| ydk::is_set(appxk9.yfilter)
	|| ydk::is_set(ax.yfilter)
	|| ydk::is_set(security.yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| ydk::is_set(advucsuitek9.yfilter)
	|| ydk::is_set(foundationsuitek9.yfilter)
	|| (ipbase !=  nullptr && ipbase->has_operation())
	|| (ipbasek9 !=  nullptr && ipbasek9->has_operation())
	|| (ipservices !=  nullptr && ipservices->has_operation())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_operation())
	|| (lanbase !=  nullptr && lanbase->has_operation())
	|| (lanbasek9 !=  nullptr && lanbasek9->has_operation())
	|| (lite !=  nullptr && lite->has_operation())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_operation())
	|| (uck9 !=  nullptr && uck9->has_operation())
	|| (network_advantage !=  nullptr && network_advantage->has_operation())
	|| (network_essentials !=  nullptr && network_essentials->has_operation());
}

std::string Native::License::Boot::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metroipservices.is_set || is_set(metroipservices.yfilter)) leaf_name_data.push_back(metroipservices.get_name_leafdata());
    if (metroservices.is_set || is_set(metroservices.yfilter)) leaf_name_data.push_back(metroservices.get_name_leafdata());
    if (advancedmetroipaccess.is_set || is_set(advancedmetroipaccess.yfilter)) leaf_name_data.push_back(advancedmetroipaccess.get_name_leafdata());
    if (metroaccess.is_set || is_set(metroaccess.yfilter)) leaf_name_data.push_back(metroaccess.get_name_leafdata());
    if (metroipaccess.is_set || is_set(metroipaccess.yfilter)) leaf_name_data.push_back(metroipaccess.get_name_leafdata());
    if (entservices.is_set || is_set(entservices.yfilter)) leaf_name_data.push_back(entservices.get_name_leafdata());
    if (adventerprise.is_set || is_set(adventerprise.yfilter)) leaf_name_data.push_back(adventerprise.get_name_leafdata());
    if (appx.is_set || is_set(appx.yfilter)) leaf_name_data.push_back(appx.get_name_leafdata());
    if (appxk9.is_set || is_set(appxk9.yfilter)) leaf_name_data.push_back(appxk9.get_name_leafdata());
    if (ax.is_set || is_set(ax.yfilter)) leaf_name_data.push_back(ax.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());
    if (advucsuitek9.is_set || is_set(advucsuitek9.yfilter)) leaf_name_data.push_back(advucsuitek9.get_name_leafdata());
    if (foundationsuitek9.is_set || is_set(foundationsuitek9.yfilter)) leaf_name_data.push_back(foundationsuitek9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::License::Boot::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipbase")
    {
        if(ipbase == nullptr)
        {
            ipbase = std::make_shared<Native::License::Boot::Level::Ipbase>();
        }
        return ipbase;
    }

    if(child_yang_name == "ipbasek9")
    {
        if(ipbasek9 == nullptr)
        {
            ipbasek9 = std::make_shared<Native::License::Boot::Level::Ipbasek9>();
        }
        return ipbasek9;
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

    if(child_yang_name == "lanbasek9")
    {
        if(lanbasek9 == nullptr)
        {
            lanbasek9 = std::make_shared<Native::License::Boot::Level::Lanbasek9>();
        }
        return lanbasek9;
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

    if(child_yang_name == "network-advantage")
    {
        if(network_advantage == nullptr)
        {
            network_advantage = std::make_shared<Native::License::Boot::Level::NetworkAdvantage>();
        }
        return network_advantage;
    }

    if(child_yang_name == "network-essentials")
    {
        if(network_essentials == nullptr)
        {
            network_essentials = std::make_shared<Native::License::Boot::Level::NetworkEssentials>();
        }
        return network_essentials;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::License::Boot::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipbase != nullptr)
    {
        _children["ipbase"] = ipbase;
    }

    if(ipbasek9 != nullptr)
    {
        _children["ipbasek9"] = ipbasek9;
    }

    if(ipservices != nullptr)
    {
        _children["ipservices"] = ipservices;
    }

    if(ipservicesk9 != nullptr)
    {
        _children["ipservicesk9"] = ipservicesk9;
    }

    if(lanbase != nullptr)
    {
        _children["lanbase"] = lanbase;
    }

    if(lanbasek9 != nullptr)
    {
        _children["lanbasek9"] = lanbasek9;
    }

    if(lite != nullptr)
    {
        _children["lite"] = lite;
    }

    if(metroaggrservices != nullptr)
    {
        _children["metroaggrservices"] = metroaggrservices;
    }

    if(uck9 != nullptr)
    {
        _children["uck9"] = uck9;
    }

    if(network_advantage != nullptr)
    {
        _children["network-advantage"] = network_advantage;
    }

    if(network_essentials != nullptr)
    {
        _children["network-essentials"] = network_essentials;
    }

    return _children;
}

void Native::License::Boot::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metroipservices")
    {
        metroipservices = value;
        metroipservices.value_namespace = name_space;
        metroipservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroservices")
    {
        metroservices = value;
        metroservices.value_namespace = name_space;
        metroservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess = value;
        advancedmetroipaccess.value_namespace = name_space;
        advancedmetroipaccess.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "entservices")
    {
        entservices = value;
        entservices.value_namespace = name_space;
        entservices.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ax")
    {
        ax = value;
        ax.value_namespace = name_space;
        ax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AdvUCSuiteK9")
    {
        advucsuitek9 = value;
        advucsuitek9.value_namespace = name_space;
        advucsuitek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FoundationSuiteK9")
    {
        foundationsuitek9 = value;
        foundationsuitek9.value_namespace = name_space;
        foundationsuitek9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metroipservices")
    {
        metroipservices.yfilter = yfilter;
    }
    if(value_path == "metroservices")
    {
        metroservices.yfilter = yfilter;
    }
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess.yfilter = yfilter;
    }
    if(value_path == "metroaccess")
    {
        metroaccess.yfilter = yfilter;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess.yfilter = yfilter;
    }
    if(value_path == "entservices")
    {
        entservices.yfilter = yfilter;
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
    if(value_path == "ax")
    {
        ax.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
    if(value_path == "AdvUCSuiteK9")
    {
        advucsuitek9.yfilter = yfilter;
    }
    if(value_path == "FoundationSuiteK9")
    {
        foundationsuitek9.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipbase" || name == "ipbasek9" || name == "ipservices" || name == "ipservicesk9" || name == "lanbase" || name == "lanbasek9" || name == "lite" || name == "metroaggrservices" || name == "uck9" || name == "network-advantage" || name == "network-essentials" || name == "metroipservices" || name == "metroservices" || name == "advancedmetroipaccess" || name == "metroaccess" || name == "metroipaccess" || name == "entservices" || name == "adventerprise" || name == "appx" || name == "appxk9" || name == "ax" || name == "security" || name == "securityk9" || name == "AdvUCSuiteK9" || name == "FoundationSuiteK9")
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


}
}

