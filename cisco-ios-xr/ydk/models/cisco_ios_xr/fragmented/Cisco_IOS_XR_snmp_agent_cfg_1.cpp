
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {

Snmp::Notification::Rsvp::Rsvp()
    :
    enable{YType::empty, "enable"},
    lost_flow{YType::empty, "lost-flow"},
    new_flow{YType::empty, "new-flow"}
{

    yang_name = "rsvp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Rsvp::~Rsvp()
{
}

bool Snmp::Notification::Rsvp::has_data() const
{
    return enable.is_set
	|| lost_flow.is_set
	|| new_flow.is_set;
}

bool Snmp::Notification::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(lost_flow.yfilter)
	|| ydk::is_set(new_flow.yfilter);
}

std::string Snmp::Notification::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (lost_flow.is_set || is_set(lost_flow.yfilter)) leaf_name_data.push_back(lost_flow.get_name_leafdata());
    if (new_flow.is_set || is_set(new_flow.yfilter)) leaf_name_data.push_back(new_flow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-flow")
    {
        lost_flow = value;
        lost_flow.value_namespace = name_space;
        lost_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-flow")
    {
        new_flow = value;
        new_flow.value_namespace = name_space;
        new_flow.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "lost-flow")
    {
        lost_flow.yfilter = yfilter;
    }
    if(value_path == "new-flow")
    {
        new_flow.yfilter = yfilter;
    }
}

bool Snmp::Notification::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "lost-flow" || name == "new-flow")
        return true;
    return false;
}

Snmp::Notification::SelectiveVrfDownload::SelectiveVrfDownload()
    :
    role_change{YType::empty, "role-change"}
{

    yang_name = "selective-vrf-download"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool Snmp::Notification::SelectiveVrfDownload::has_data() const
{
    return role_change.is_set;
}

bool Snmp::Notification::SelectiveVrfDownload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role_change.yfilter);
}

std::string Snmp::Notification::SelectiveVrfDownload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::SelectiveVrfDownload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role_change.is_set || is_set(role_change.yfilter)) leaf_name_data.push_back(role_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::SelectiveVrfDownload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::SelectiveVrfDownload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role-change")
    {
        role_change = value;
        role_change.value_namespace = name_space;
        role_change.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::SelectiveVrfDownload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role-change")
    {
        role_change.yfilter = yfilter;
    }
}

bool Snmp::Notification::SelectiveVrfDownload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role-change")
        return true;
    return false;
}

Snmp::Notification::Sensor::Sensor()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "sensor"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Sensor::~Sensor()
{
}

bool Snmp::Notification::Sensor::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Sensor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Sensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Snmp_::Snmp_()
    :
    authentication{YType::empty, "authentication"},
    cold_start{YType::empty, "cold-start"},
    enable{YType::empty, "enable"},
    link_down{YType::empty, "Cisco-IOS-XR-snmp-ifmib-cfg:link-down"},
    link_up{YType::empty, "Cisco-IOS-XR-snmp-ifmib-cfg:link-up"},
    warm_start{YType::empty, "warm-start"}
{

    yang_name = "snmp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Snmp_::~Snmp_()
{
}

bool Snmp::Notification::Snmp_::has_data() const
{
    return authentication.is_set
	|| cold_start.is_set
	|| enable.is_set
	|| link_down.is_set
	|| link_up.is_set
	|| warm_start.is_set;
}

bool Snmp::Notification::Snmp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(cold_start.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(link_down.yfilter)
	|| ydk::is_set(link_up.yfilter)
	|| ydk::is_set(warm_start.yfilter);
}

std::string Snmp::Notification::Snmp_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Snmp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Snmp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (cold_start.is_set || is_set(cold_start.yfilter)) leaf_name_data.push_back(cold_start.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (link_down.is_set || is_set(link_down.yfilter)) leaf_name_data.push_back(link_down.get_name_leafdata());
    if (link_up.is_set || is_set(link_up.yfilter)) leaf_name_data.push_back(link_up.get_name_leafdata());
    if (warm_start.is_set || is_set(warm_start.yfilter)) leaf_name_data.push_back(warm_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Snmp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Snmp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Snmp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cold-start")
    {
        cold_start = value;
        cold_start.value_namespace = name_space;
        cold_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-down")
    {
        link_down = value;
        link_down.value_namespace = name_space;
        link_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-up")
    {
        link_up = value;
        link_up.value_namespace = name_space;
        link_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warm-start")
    {
        warm_start = value;
        warm_start.value_namespace = name_space;
        warm_start.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Snmp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "cold-start")
    {
        cold_start.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "link-down")
    {
        link_down.yfilter = yfilter;
    }
    if(value_path == "link-up")
    {
        link_up.yfilter = yfilter;
    }
    if(value_path == "warm-start")
    {
        warm_start.yfilter = yfilter;
    }
}

bool Snmp::Notification::Snmp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "cold-start" || name == "enable" || name == "link-down" || name == "link-up" || name == "warm-start")
        return true;
    return false;
}

Snmp::Notification::SubscriberMib::SubscriberMib()
    :
    session_aggregate(std::make_shared<Snmp::Notification::SubscriberMib::SessionAggregate>())
{
    session_aggregate->parent = this;

    yang_name = "subscriber-mib"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::SubscriberMib::~SubscriberMib()
{
}

bool Snmp::Notification::SubscriberMib::has_data() const
{
    return (session_aggregate !=  nullptr && session_aggregate->has_data());
}

bool Snmp::Notification::SubscriberMib::has_operation() const
{
    return is_set(yfilter)
	|| (session_aggregate !=  nullptr && session_aggregate->has_operation());
}

std::string Snmp::Notification::SubscriberMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::SubscriberMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::SubscriberMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::SubscriberMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-aggregate")
    {
        if(session_aggregate == nullptr)
        {
            session_aggregate = std::make_shared<Snmp::Notification::SubscriberMib::SessionAggregate>();
        }
        return session_aggregate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::SubscriberMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_aggregate != nullptr)
    {
        children["session-aggregate"] = session_aggregate;
    }

    return children;
}

void Snmp::Notification::SubscriberMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::SubscriberMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::SubscriberMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-aggregate")
        return true;
    return false;
}

Snmp::Notification::SubscriberMib::SessionAggregate::SessionAggregate()
    :
    access_interface{YType::empty, "access-interface"},
    node{YType::empty, "node"}
{

    yang_name = "session-aggregate"; yang_parent_name = "subscriber-mib"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::SubscriberMib::SessionAggregate::~SessionAggregate()
{
}

bool Snmp::Notification::SubscriberMib::SessionAggregate::has_data() const
{
    return access_interface.is_set
	|| node.is_set;
}

bool Snmp::Notification::SubscriberMib::SessionAggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_interface.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Snmp::Notification::SubscriberMib::SessionAggregate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::SubscriberMib::SessionAggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::SubscriberMib::SessionAggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_interface.is_set || is_set(access_interface.yfilter)) leaf_name_data.push_back(access_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::SubscriberMib::SessionAggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::SubscriberMib::SessionAggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::SubscriberMib::SessionAggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-interface")
    {
        access_interface = value;
        access_interface.value_namespace = name_space;
        access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::SubscriberMib::SessionAggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-interface")
    {
        access_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Snmp::Notification::SubscriberMib::SessionAggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface" || name == "node")
        return true;
    return false;
}

Snmp::Notification::Syslog::Syslog()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "syslog"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Syslog::~Syslog()
{
}

bool Snmp::Notification::Syslog::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-syslogmib-cfg:syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::System::System()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "system"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::System::~System()
{
}

bool Snmp::Notification::System::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-systemmib-cfg:system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Vpls::Vpls()
    :
    enable{YType::empty, "enable"},
    full_clear{YType::empty, "full-clear"},
    full_raise{YType::empty, "full-raise"},
    status{YType::empty, "status"}
{

    yang_name = "vpls"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Vpls::~Vpls()
{
}

bool Snmp::Notification::Vpls::has_data() const
{
    return enable.is_set
	|| full_clear.is_set
	|| full_raise.is_set
	|| status.is_set;
}

bool Snmp::Notification::Vpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(full_clear.yfilter)
	|| ydk::is_set(full_raise.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Snmp::Notification::Vpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Vpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Vpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (full_clear.is_set || is_set(full_clear.yfilter)) leaf_name_data.push_back(full_clear.get_name_leafdata());
    if (full_raise.is_set || is_set(full_raise.yfilter)) leaf_name_data.push_back(full_raise.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Vpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Vpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Vpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-clear")
    {
        full_clear = value;
        full_clear.value_namespace = name_space;
        full_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-raise")
    {
        full_raise = value;
        full_raise.value_namespace = name_space;
        full_raise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Vpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "full-clear")
    {
        full_clear.yfilter = yfilter;
    }
    if(value_path == "full-raise")
    {
        full_raise.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Snmp::Notification::Vpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "full-clear" || name == "full-raise" || name == "status")
        return true;
    return false;
}

Snmp::Notification::Vrrp::Vrrp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "vrrp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Vrrp::~Vrrp()
{
}

bool Snmp::Notification::Vrrp::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Vrrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Vrrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::OverloadControl::OverloadControl()
    :
    drop_time{YType::uint32, "drop-time"},
    throttle_rate{YType::uint32, "throttle-rate"}
{

    yang_name = "overload-control"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::OverloadControl::~OverloadControl()
{
}

bool Snmp::OverloadControl::has_data() const
{
    return drop_time.is_set
	|| throttle_rate.is_set;
}

bool Snmp::OverloadControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_time.yfilter)
	|| ydk::is_set(throttle_rate.yfilter);
}

std::string Snmp::OverloadControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::OverloadControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::OverloadControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_time.is_set || is_set(drop_time.yfilter)) leaf_name_data.push_back(drop_time.get_name_leafdata());
    if (throttle_rate.is_set || is_set(throttle_rate.yfilter)) leaf_name_data.push_back(throttle_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::OverloadControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::OverloadControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::OverloadControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-time")
    {
        drop_time = value;
        drop_time.value_namespace = name_space;
        drop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttle-rate")
    {
        throttle_rate = value;
        throttle_rate.value_namespace = name_space;
        throttle_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::OverloadControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-time")
    {
        drop_time.yfilter = yfilter;
    }
    if(value_path == "throttle-rate")
    {
        throttle_rate.yfilter = yfilter;
    }
}

bool Snmp::OverloadControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-time" || name == "throttle-rate")
        return true;
    return false;
}

Snmp::System::System()
    :
    chassis_id{YType::str, "chassis-id"},
    contact{YType::str, "contact"},
    location{YType::str, "location"}
{

    yang_name = "system"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::System::~System()
{
}

bool Snmp::System::has_data() const
{
    return chassis_id.is_set
	|| contact.is_set
	|| location.is_set;
}

bool Snmp::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(contact.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Snmp::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (contact.is_set || is_set(contact.yfilter)) leaf_name_data.push_back(contact.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contact")
    {
        contact = value;
        contact.value_namespace = name_space;
        contact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "contact")
    {
        contact.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Snmp::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis-id" || name == "contact" || name == "location")
        return true;
    return false;
}

Snmp::Target::Target()
    :
    targets(std::make_shared<Snmp::Target::Targets>())
{
    targets->parent = this;

    yang_name = "target"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Target::~Target()
{
}

bool Snmp::Target::has_data() const
{
    return (targets !=  nullptr && targets->has_data());
}

bool Snmp::Target::has_operation() const
{
    return is_set(yfilter)
	|| (targets !=  nullptr && targets->has_operation());
}

std::string Snmp::Target::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targets")
    {
        if(targets == nullptr)
        {
            targets = std::make_shared<Snmp::Target::Targets>();
        }
        return targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(targets != nullptr)
    {
        children["targets"] = targets;
    }

    return children;
}

void Snmp::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targets")
        return true;
    return false;
}

Snmp::Target::Targets::Targets()
{

    yang_name = "targets"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Target::Targets::~Targets()
{
}

bool Snmp::Target::Targets::has_data() const
{
    for (std::size_t index=0; index<target.size(); index++)
    {
        if(target[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::has_operation() const
{
    for (std::size_t index=0; index<target.size(); index++)
    {
        if(target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Target::Targets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/target/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Target::Targets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Target::Targets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        for(auto const & c : target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Target::Targets::Target_>();
        c->parent = this;
        target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Target::Targets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::Targets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::Targets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::Target_()
    :
    target_list_name{YType::str, "target-list-name"}
    	,
    target_addresses(std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses>())
	,vrf_names(std::make_shared<Snmp::Target::Targets::Target_::VrfNames>())
{
    target_addresses->parent = this;
    vrf_names->parent = this;

    yang_name = "target"; yang_parent_name = "targets"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Target::Targets::Target_::~Target_()
{
}

bool Snmp::Target::Targets::Target_::has_data() const
{
    return target_list_name.is_set
	|| (target_addresses !=  nullptr && target_addresses->has_data())
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Snmp::Target::Targets::Target_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_list_name.yfilter)
	|| (target_addresses !=  nullptr && target_addresses->has_operation())
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Snmp::Target::Targets::Target_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/target/targets/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Target::Targets::Target_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target" <<"[target-list-name='" <<target_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_list_name.is_set || is_set(target_list_name.yfilter)) leaf_name_data.push_back(target_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-addresses")
    {
        if(target_addresses == nullptr)
        {
            target_addresses = std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses>();
        }
        return target_addresses;
    }

    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Snmp::Target::Targets::Target_::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target_addresses != nullptr)
    {
        children["target-addresses"] = target_addresses;
    }

    if(vrf_names != nullptr)
    {
        children["vrf-names"] = vrf_names;
    }

    return children;
}

void Snmp::Target::Targets::Target_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-list-name")
    {
        target_list_name = value;
        target_list_name.value_namespace = name_space;
        target_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Target::Targets::Target_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-list-name")
    {
        target_list_name.yfilter = yfilter;
    }
}

bool Snmp::Target::Targets::Target_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-addresses" || name == "vrf-names" || name == "target-list-name")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddresses()
{

    yang_name = "target-addresses"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Target::Targets::Target_::TargetAddresses::~TargetAddresses()
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_data() const
{
    for (std::size_t index=0; index<target_address.size(); index++)
    {
        if(target_address[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_operation() const
{
    for (std::size_t index=0; index<target_address.size(); index++)
    {
        if(target_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Target::Targets::Target_::TargetAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::TargetAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::TargetAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        for(auto const & c : target_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress>();
        c->parent = this;
        target_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::TargetAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : target_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Target::Targets::Target_::TargetAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::Targets::Target_::TargetAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::TargetAddress()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "target-address"; yang_parent_name = "target-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::~TargetAddress()
{
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_data() const
{
    return ip_address.is_set;
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::VrfNames::VrfNames()
{

    yang_name = "vrf-names"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Target::Targets::Target_::VrfNames::~VrfNames()
{
}

bool Snmp::Target::Targets::Target_::VrfNames::has_data() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Target::Targets::Target_::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Target::Targets::Target_::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        for(auto const & c : vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Target::Targets::Target_::VrfNames::VrfName>();
        c->parent = this;
        vrf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Target::Targets::Target_::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Target::Targets::Target_::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Target::Targets::Target_::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Snmp::Target::Targets::Target_::VrfNames::VrfName::VrfName()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Target::Targets::Target_::VrfNames::VrfName::~VrfName()
{
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_data() const
{
    return name.is_set;
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Snmp::Target::Targets::Target_::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Target::Targets::Target_::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Target::Targets::Target_::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Target::Targets::Target_::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Target::Targets::Target_::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Target::Targets::Target_::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Target::Targets::Target_::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Snmp::Timeouts::Timeouts()
    :
    duplicates{YType::uint32, "duplicates"},
    in_qdrop{YType::uint32, "in-qdrop"},
    pdu_stats{YType::uint32, "pdu-stats"},
    subagent{YType::uint32, "subagent"}
{

    yang_name = "timeouts"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Timeouts::~Timeouts()
{
}

bool Snmp::Timeouts::has_data() const
{
    return duplicates.is_set
	|| in_qdrop.is_set
	|| pdu_stats.is_set
	|| subagent.is_set;
}

bool Snmp::Timeouts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter)
	|| ydk::is_set(in_qdrop.yfilter)
	|| ydk::is_set(pdu_stats.yfilter)
	|| ydk::is_set(subagent.yfilter);
}

std::string Snmp::Timeouts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Timeouts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeouts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Timeouts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());
    if (in_qdrop.is_set || is_set(in_qdrop.yfilter)) leaf_name_data.push_back(in_qdrop.get_name_leafdata());
    if (pdu_stats.is_set || is_set(pdu_stats.yfilter)) leaf_name_data.push_back(pdu_stats.get_name_leafdata());
    if (subagent.is_set || is_set(subagent.yfilter)) leaf_name_data.push_back(subagent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Timeouts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Timeouts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Timeouts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-qdrop")
    {
        in_qdrop = value;
        in_qdrop.value_namespace = name_space;
        in_qdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-stats")
    {
        pdu_stats = value;
        pdu_stats.value_namespace = name_space;
        pdu_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subagent")
    {
        subagent = value;
        subagent.value_namespace = name_space;
        subagent.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Timeouts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
    if(value_path == "in-qdrop")
    {
        in_qdrop.yfilter = yfilter;
    }
    if(value_path == "pdu-stats")
    {
        pdu_stats.yfilter = yfilter;
    }
    if(value_path == "subagent")
    {
        subagent.yfilter = yfilter;
    }
}

bool Snmp::Timeouts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates" || name == "in-qdrop" || name == "pdu-stats" || name == "subagent")
        return true;
    return false;
}

Snmp::Trap::Trap()
    :
    queue_length{YType::uint32, "queue-length"},
    throttle_time{YType::uint32, "throttle-time"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Trap::~Trap()
{
}

bool Snmp::Trap::has_data() const
{
    return queue_length.is_set
	|| throttle_time.is_set
	|| timeout.is_set;
}

bool Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_length.yfilter)
	|| ydk::is_set(throttle_time.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Snmp::Trap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());
    if (throttle_time.is_set || is_set(throttle_time.yfilter)) leaf_name_data.push_back(throttle_time.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttle-time")
    {
        throttle_time = value;
        throttle_time.value_namespace = name_space;
        throttle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
    if(value_path == "throttle-time")
    {
        throttle_time.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-length" || name == "throttle-time" || name == "timeout")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHosts()
{

    yang_name = "trap-hosts"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::TrapHosts::~TrapHosts()
{
}

bool Snmp::TrapHosts::has_data() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::has_operation() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::TrapHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-host")
    {
        for(auto const & c : trap_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost>();
        c->parent = this;
        trap_host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-host")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::TrapHost()
    :
    ip_address{YType::str, "ip-address"}
    	,
    default_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities>())
	,encrypted_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities>())
	,inform_host(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost>())
{
    default_user_communities->parent = this;
    encrypted_user_communities->parent = this;
    inform_host->parent = this;

    yang_name = "trap-host"; yang_parent_name = "trap-hosts"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::TrapHosts::TrapHost::~TrapHost()
{
}

bool Snmp::TrapHosts::TrapHost::has_data() const
{
    return ip_address.is_set
	|| (default_user_communities !=  nullptr && default_user_communities->has_data())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_data())
	|| (inform_host !=  nullptr && inform_host->has_data());
}

bool Snmp::TrapHosts::TrapHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (default_user_communities !=  nullptr && default_user_communities->has_operation())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_operation())
	|| (inform_host !=  nullptr && inform_host->has_operation());
}

std::string Snmp::TrapHosts::TrapHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/trap-hosts/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::TrapHosts::TrapHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-host" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-communities")
    {
        if(default_user_communities == nullptr)
        {
            default_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities>();
        }
        return default_user_communities;
    }

    if(child_yang_name == "encrypted-user-communities")
    {
        if(encrypted_user_communities == nullptr)
        {
            encrypted_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities>();
        }
        return encrypted_user_communities;
    }

    if(child_yang_name == "inform-host")
    {
        if(inform_host == nullptr)
        {
            inform_host = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost>();
        }
        return inform_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_user_communities != nullptr)
    {
        children["default-user-communities"] = default_user_communities;
    }

    if(encrypted_user_communities != nullptr)
    {
        children["encrypted-user-communities"] = encrypted_user_communities;
    }

    if(inform_host != nullptr)
    {
        children["inform-host"] = inform_host;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-user-communities" || name == "encrypted-user-communities" || name == "inform-host" || name == "ip-address")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunities()
{

    yang_name = "default-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::~DefaultUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_data() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-community")
    {
        for(auto const & c : default_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity>();
        c->parent = this;
        default_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-user-community")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::DefaultUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "default-user-community"; yang_parent_name = "default-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::~DefaultUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunities()
{

    yang_name = "encrypted-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::~EncryptedUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-community")
    {
        for(auto const & c : encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity>();
        c->parent = this;
        encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-user-community")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::EncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "encrypted-user-community"; yang_parent_name = "encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::~EncryptedUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::InformHost::InformHost()
    :
    inform_encrypted_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>())
	,inform_user_communities(std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities>())
{
    inform_encrypted_user_communities->parent = this;
    inform_user_communities->parent = this;

    yang_name = "inform-host"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::InformHost::~InformHost()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_data() const
{
    return (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_data())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_data());
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_operation() const
{
    return is_set(yfilter)
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_operation())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_operation());
}

std::string Snmp::TrapHosts::TrapHost::InformHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-communities")
    {
        if(inform_encrypted_user_communities == nullptr)
        {
            inform_encrypted_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>();
        }
        return inform_encrypted_user_communities;
    }

    if(child_yang_name == "inform-user-communities")
    {
        if(inform_user_communities == nullptr)
        {
            inform_user_communities = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities>();
        }
        return inform_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inform_encrypted_user_communities != nullptr)
    {
        children["inform-encrypted-user-communities"] = inform_encrypted_user_communities;
    }

    if(inform_user_communities != nullptr)
    {
        children["inform-user-communities"] = inform_user_communities;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::InformHost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-encrypted-user-communities" || name == "inform-user-communities")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunities()
{

    yang_name = "inform-encrypted-user-communities"; yang_parent_name = "inform-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::~InformEncryptedUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-community")
    {
        for(auto const & c : inform_encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity>();
        c->parent = this;
        inform_encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-encrypted-user-community")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::InformEncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "inform-encrypted-user-community"; yang_parent_name = "inform-encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::~InformEncryptedUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunities()
{

    yang_name = "inform-user-communities"; yang_parent_name = "inform-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::~InformUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-user-community")
    {
        for(auto const & c : inform_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity>();
        c->parent = this;
        inform_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-user-community")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::InformUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "inform-user-community"; yang_parent_name = "inform-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::~InformUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}

Snmp::Users::Users()
{

    yang_name = "users"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Users::~Users()
{
}

bool Snmp::Users::has_data() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Users::has_operation() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Users::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Users::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Users::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Users::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        for(auto const & c : user)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Users::User>();
        c->parent = this;
        user.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Users::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : user)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Users::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Users::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Users::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

Snmp::Users::User::User()
    :
    user_name{YType::str, "user-name"},
    algorithm{YType::enumeration, "algorithm"},
    authentication_password{YType::str, "authentication-password"},
    authentication_password_configured{YType::empty, "authentication-password-configured"},
    group_name{YType::str, "group-name"},
    owner{YType::enumeration, "owner"},
    port{YType::uint16, "port"},
    priv_algorithm{YType::enumeration, "priv-algorithm"},
    privacy_password{YType::str, "privacy-password"},
    privacy_password_configured{YType::empty, "privacy-password-configured"},
    remote_address{YType::str, "remote-address"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    version{YType::enumeration, "version"}
{

    yang_name = "user"; yang_parent_name = "users"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Users::User::~User()
{
}

bool Snmp::Users::User::has_data() const
{
    return user_name.is_set
	|| algorithm.is_set
	|| authentication_password.is_set
	|| authentication_password_configured.is_set
	|| group_name.is_set
	|| owner.is_set
	|| port.is_set
	|| priv_algorithm.is_set
	|| privacy_password.is_set
	|| privacy_password_configured.is_set
	|| remote_address.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| version.is_set;
}

bool Snmp::Users::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_name.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(authentication_password_configured.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(priv_algorithm.yfilter)
	|| ydk::is_set(privacy_password.yfilter)
	|| ydk::is_set(privacy_password_configured.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::Users::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/users/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Users::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user" <<"[user-name='" <<user_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Users::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (authentication_password_configured.is_set || is_set(authentication_password_configured.yfilter)) leaf_name_data.push_back(authentication_password_configured.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (priv_algorithm.is_set || is_set(priv_algorithm.yfilter)) leaf_name_data.push_back(priv_algorithm.get_name_leafdata());
    if (privacy_password.is_set || is_set(privacy_password.yfilter)) leaf_name_data.push_back(privacy_password.get_name_leafdata());
    if (privacy_password_configured.is_set || is_set(privacy_password_configured.yfilter)) leaf_name_data.push_back(privacy_password_configured.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Users::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Users::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Users::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password-configured")
    {
        authentication_password_configured = value;
        authentication_password_configured.value_namespace = name_space;
        authentication_password_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priv-algorithm")
    {
        priv_algorithm = value;
        priv_algorithm.value_namespace = name_space;
        priv_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privacy-password")
    {
        privacy_password = value;
        privacy_password.value_namespace = name_space;
        privacy_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privacy-password-configured")
    {
        privacy_password_configured = value;
        privacy_password_configured.value_namespace = name_space;
        privacy_password_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Users::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "authentication-password-configured")
    {
        authentication_password_configured.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "priv-algorithm")
    {
        priv_algorithm.yfilter = yfilter;
    }
    if(value_path == "privacy-password")
    {
        privacy_password.yfilter = yfilter;
    }
    if(value_path == "privacy-password-configured")
    {
        privacy_password_configured.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::Users::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name" || name == "algorithm" || name == "authentication-password" || name == "authentication-password-configured" || name == "group-name" || name == "owner" || name == "port" || name == "priv-algorithm" || name == "privacy-password" || name == "privacy-password-configured" || name == "remote-address" || name == "v4-access-list" || name == "v4acl-type" || name == "v6-access-list" || name == "v6acl-type" || name == "version")
        return true;
    return false;
}

Snmp::Views::Views()
{

    yang_name = "views"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Views::~Views()
{
}

bool Snmp::Views::has_data() const
{
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Views::has_operation() const
{
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Views::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Views::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "views";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Views::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Views::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view")
    {
        for(auto const & c : view)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Views::View>();
        c->parent = this;
        view.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Views::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : view)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Views::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Views::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Views::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view")
        return true;
    return false;
}

Snmp::Views::View::View()
    :
    view_name{YType::str, "view-name"},
    family{YType::str, "family"},
    view_inclusion{YType::enumeration, "view-inclusion"}
{

    yang_name = "view"; yang_parent_name = "views"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Views::View::~View()
{
}

bool Snmp::Views::View::has_data() const
{
    return view_name.is_set
	|| family.is_set
	|| view_inclusion.is_set;
}

bool Snmp::Views::View::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(view_name.yfilter)
	|| ydk::is_set(family.yfilter)
	|| ydk::is_set(view_inclusion.yfilter);
}

std::string Snmp::Views::View::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/views/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Views::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view" <<"[view-name='" <<view_name <<"']" <<"[family='" <<family <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Views::View::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (view_name.is_set || is_set(view_name.yfilter)) leaf_name_data.push_back(view_name.get_name_leafdata());
    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());
    if (view_inclusion.is_set || is_set(view_inclusion.yfilter)) leaf_name_data.push_back(view_inclusion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Views::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Views::View::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Views::View::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "view-name")
    {
        view_name = value;
        view_name.value_namespace = name_space;
        view_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view-inclusion")
    {
        view_inclusion = value;
        view_inclusion.value_namespace = name_space;
        view_inclusion.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Views::View::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "view-name")
    {
        view_name.yfilter = yfilter;
    }
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
    if(value_path == "view-inclusion")
    {
        view_inclusion.yfilter = yfilter;
    }
}

bool Snmp::Views::View::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view-name" || name == "family" || name == "view-inclusion")
        return true;
    return false;
}

Snmp::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Vrfs::~Vrfs()
{
}

bool Snmp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    context_mappings(std::make_shared<Snmp::Vrfs::Vrf::ContextMappings>())
	,contexts(std::make_shared<Snmp::Vrfs::Vrf::Contexts>())
	,trap_hosts(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts>())
{
    context_mappings->parent = this;
    contexts->parent = this;
    trap_hosts->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Vrfs::Vrf::~Vrf()
{
}

bool Snmp::Vrfs::Vrf::has_data() const
{
    return name.is_set
	|| (context_mappings !=  nullptr && context_mappings->has_data())
	|| (contexts !=  nullptr && contexts->has_data())
	|| (trap_hosts !=  nullptr && trap_hosts->has_data());
}

bool Snmp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (context_mappings !=  nullptr && context_mappings->has_operation())
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (trap_hosts !=  nullptr && trap_hosts->has_operation());
}

std::string Snmp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mappings")
    {
        if(context_mappings == nullptr)
        {
            context_mappings = std::make_shared<Snmp::Vrfs::Vrf::ContextMappings>();
        }
        return context_mappings;
    }

    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Snmp::Vrfs::Vrf::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "trap-hosts")
    {
        if(trap_hosts == nullptr)
        {
            trap_hosts = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts>();
        }
        return trap_hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(context_mappings != nullptr)
    {
        children["context-mappings"] = context_mappings;
    }

    if(contexts != nullptr)
    {
        children["contexts"] = contexts;
    }

    if(trap_hosts != nullptr)
    {
        children["trap-hosts"] = trap_hosts;
    }

    return children;
}

void Snmp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mappings" || name == "contexts" || name == "trap-hosts" || name == "name")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMappings()
{

    yang_name = "context-mappings"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::ContextMappings::~ContextMappings()
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_data() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_operation() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::ContextMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::ContextMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::ContextMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mapping")
    {
        for(auto const & c : context_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::ContextMappings::ContextMapping>();
        c->parent = this;
        context_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::ContextMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::ContextMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::ContextMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::ContextMapping()
    :
    context_mapping_name{YType::str, "context-mapping-name"},
    context{YType::enumeration, "context"},
    instance_name{YType::str, "instance-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "context-mapping"; yang_parent_name = "context-mappings"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::~ContextMapping()
{
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_data() const
{
    return context_mapping_name.is_set
	|| context.is_set
	|| instance_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_mapping_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping" <<"[context-mapping-name='" <<context_mapping_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_mapping_name.is_set || is_set(context_mapping_name.yfilter)) leaf_name_data.push_back(context_mapping_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name = value;
        context_mapping_name.value_namespace = name_space;
        context_mapping_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::ContextMappings::ContextMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping-name" || name == "context" || name == "instance-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::Contexts::Contexts()
{

    yang_name = "contexts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::Contexts::~Contexts()
{
}

bool Snmp::Vrfs::Vrf::Contexts::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::Contexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::Contexts::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::Contexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::Contexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::Contexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::Contexts::Context::Context()
    :
    context_name{YType::str, "context-name"}
{

    yang_name = "context"; yang_parent_name = "contexts"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::Contexts::Context::~Context()
{
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_data() const
{
    return context_name.is_set;
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_name.yfilter);
}

std::string Snmp::Vrfs::Vrf::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[context-name='" <<context_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::Contexts::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::Contexts::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::Contexts::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::Contexts::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-name")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHosts()
{

    yang_name = "trap-hosts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::~TrapHosts()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_data() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_operation() const
{
    for (std::size_t index=0; index<trap_host.size(); index++)
    {
        if(trap_host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-host")
    {
        for(auto const & c : trap_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost>();
        c->parent = this;
        trap_host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-host")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::TrapHost()
    :
    ip_address{YType::str, "ip-address"}
    	,
    default_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities>())
	,encrypted_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities>())
	,inform_host(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost>())
{
    default_user_communities->parent = this;
    encrypted_user_communities->parent = this;
    inform_host->parent = this;

    yang_name = "trap-host"; yang_parent_name = "trap-hosts"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::~TrapHost()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_data() const
{
    return ip_address.is_set
	|| (default_user_communities !=  nullptr && default_user_communities->has_data())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_data())
	|| (inform_host !=  nullptr && inform_host->has_data());
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (default_user_communities !=  nullptr && default_user_communities->has_operation())
	|| (encrypted_user_communities !=  nullptr && encrypted_user_communities->has_operation())
	|| (inform_host !=  nullptr && inform_host->has_operation());
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-host" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-communities")
    {
        if(default_user_communities == nullptr)
        {
            default_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities>();
        }
        return default_user_communities;
    }

    if(child_yang_name == "encrypted-user-communities")
    {
        if(encrypted_user_communities == nullptr)
        {
            encrypted_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities>();
        }
        return encrypted_user_communities;
    }

    if(child_yang_name == "inform-host")
    {
        if(inform_host == nullptr)
        {
            inform_host = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost>();
        }
        return inform_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_user_communities != nullptr)
    {
        children["default-user-communities"] = default_user_communities;
    }

    if(encrypted_user_communities != nullptr)
    {
        children["encrypted-user-communities"] = encrypted_user_communities;
    }

    if(inform_host != nullptr)
    {
        children["inform-host"] = inform_host;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-user-communities" || name == "encrypted-user-communities" || name == "inform-host" || name == "ip-address")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunities()
{

    yang_name = "default-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::~DefaultUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_data() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-community")
    {
        for(auto const & c : default_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity>();
        c->parent = this;
        default_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::DefaultUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "default-user-community"; yang_parent_name = "default-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::~DefaultUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunities()
{

    yang_name = "encrypted-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::~EncryptedUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_user_community.size(); index++)
    {
        if(encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-user-community")
    {
        for(auto const & c : encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity>();
        c->parent = this;
        encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::EncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "encrypted-user-community"; yang_parent_name = "encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::~EncryptedUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformHost()
    :
    inform_encrypted_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>())
	,inform_user_communities(std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities>())
{
    inform_encrypted_user_communities->parent = this;
    inform_user_communities->parent = this;

    yang_name = "inform-host"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::~InformHost()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_data() const
{
    return (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_data())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_data());
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_operation() const
{
    return is_set(yfilter)
	|| (inform_encrypted_user_communities !=  nullptr && inform_encrypted_user_communities->has_operation())
	|| (inform_user_communities !=  nullptr && inform_user_communities->has_operation());
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-communities")
    {
        if(inform_encrypted_user_communities == nullptr)
        {
            inform_encrypted_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities>();
        }
        return inform_encrypted_user_communities;
    }

    if(child_yang_name == "inform-user-communities")
    {
        if(inform_user_communities == nullptr)
        {
            inform_user_communities = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities>();
        }
        return inform_user_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inform_encrypted_user_communities != nullptr)
    {
        children["inform-encrypted-user-communities"] = inform_encrypted_user_communities;
    }

    if(inform_user_communities != nullptr)
    {
        children["inform-user-communities"] = inform_user_communities;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-encrypted-user-communities" || name == "inform-user-communities")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunities()
{

    yang_name = "inform-encrypted-user-communities"; yang_parent_name = "inform-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::~InformEncryptedUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-community")
    {
        for(auto const & c : inform_encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity>();
        c->parent = this;
        inform_encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-encrypted-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::InformEncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "inform-encrypted-user-community"; yang_parent_name = "inform-encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::~InformEncryptedUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunities()
{

    yang_name = "inform-user-communities"; yang_parent_name = "inform-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::~InformUserCommunities()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_user_community.size(); index++)
    {
        if(inform_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-user-community")
    {
        for(auto const & c : inform_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity>();
        c->parent = this;
        inform_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-user-community")
        return true;
    return false;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::InformUserCommunity()
    :
    community_name{YType::str, "community-name"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    port{YType::uint16, "port"},
    security_level{YType::enumeration, "security-level"},
    version{YType::str, "version"}
{

    yang_name = "inform-user-community"; yang_parent_name = "inform-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::~InformUserCommunity()
{
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_data() const
{
    return community_name.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set
	|| basic_trap_types.is_set
	|| port.is_set
	|| security_level.is_set
	|| version.is_set;
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "advanced-trap-types1" || name == "advanced-trap-types2" || name == "basic-trap-types" || name == "port" || name == "security-level" || name == "version")
        return true;
    return false;
}


}
}

