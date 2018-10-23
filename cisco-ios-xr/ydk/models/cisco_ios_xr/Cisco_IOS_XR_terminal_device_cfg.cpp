
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_terminal_device_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_terminal_device_cfg {

LogicalChannels::LogicalChannels()
    :
    channel(this, {"channel_index"})
{

    yang_name = "logical-channels"; yang_parent_name = "Cisco-IOS-XR-terminal-device-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

LogicalChannels::~LogicalChannels()
{
}

bool LogicalChannels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<channel.len(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return false;
}

bool LogicalChannels::has_operation() const
{
    for (std::size_t index=0; index<channel.len(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LogicalChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-cfg:logical-channels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LogicalChannels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LogicalChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel")
    {
        auto ent_ = std::make_shared<LogicalChannels::Channel>();
        ent_->parent = this;
        channel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LogicalChannels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : channel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LogicalChannels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LogicalChannels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> LogicalChannels::clone_ptr() const
{
    return std::make_shared<LogicalChannels>();
}

std::string LogicalChannels::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LogicalChannels::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LogicalChannels::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LogicalChannels::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LogicalChannels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel")
        return true;
    return false;
}

LogicalChannels::Channel::Channel()
    :
    channel_index{YType::uint32, "channel-index"},
    trib_protocol{YType::enumeration, "trib-protocol"},
    description{YType::str, "description"},
    ingress_client_port{YType::str, "ingress-client-port"},
    ingress_physical_channel{YType::uint32, "ingress-physical-channel"},
    admin_state{YType::enumeration, "admin-state"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    logical_channel_type{YType::enumeration, "logical-channel-type"},
    rate_class{YType::enumeration, "rate-class"}
        ,
    logical_channel_assignments(std::make_shared<LogicalChannels::Channel::LogicalChannelAssignments>())
    , otn(std::make_shared<LogicalChannels::Channel::Otn>())
{
    logical_channel_assignments->parent = this;
    otn->parent = this;

    yang_name = "channel"; yang_parent_name = "logical-channels"; is_top_level_class = false; has_list_ancestor = false; 
}

LogicalChannels::Channel::~Channel()
{
}

bool LogicalChannels::Channel::has_data() const
{
    if (is_presence_container) return true;
    return channel_index.is_set
	|| trib_protocol.is_set
	|| description.is_set
	|| ingress_client_port.is_set
	|| ingress_physical_channel.is_set
	|| admin_state.is_set
	|| loopback_mode.is_set
	|| logical_channel_type.is_set
	|| rate_class.is_set
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool LogicalChannels::Channel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_index.yfilter)
	|| ydk::is_set(trib_protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ingress_client_port.yfilter)
	|| ydk::is_set(ingress_physical_channel.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(logical_channel_type.yfilter)
	|| ydk::is_set(rate_class.yfilter)
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string LogicalChannels::Channel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-cfg:logical-channels/" << get_segment_path();
    return path_buffer.str();
}

std::string LogicalChannels::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel";
    ADD_KEY_TOKEN(channel_index, "channel-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LogicalChannels::Channel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_index.is_set || is_set(channel_index.yfilter)) leaf_name_data.push_back(channel_index.get_name_leafdata());
    if (trib_protocol.is_set || is_set(trib_protocol.yfilter)) leaf_name_data.push_back(trib_protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ingress_client_port.is_set || is_set(ingress_client_port.yfilter)) leaf_name_data.push_back(ingress_client_port.get_name_leafdata());
    if (ingress_physical_channel.is_set || is_set(ingress_physical_channel.yfilter)) leaf_name_data.push_back(ingress_physical_channel.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (logical_channel_type.is_set || is_set(logical_channel_type.yfilter)) leaf_name_data.push_back(logical_channel_type.get_name_leafdata());
    if (rate_class.is_set || is_set(rate_class.yfilter)) leaf_name_data.push_back(rate_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LogicalChannels::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logical-channel-assignments")
    {
        if(logical_channel_assignments == nullptr)
        {
            logical_channel_assignments = std::make_shared<LogicalChannels::Channel::LogicalChannelAssignments>();
        }
        return logical_channel_assignments;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<LogicalChannels::Channel::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LogicalChannels::Channel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logical_channel_assignments != nullptr)
    {
        _children["logical-channel-assignments"] = logical_channel_assignments;
    }

    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    return _children;
}

void LogicalChannels::Channel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-index")
    {
        channel_index = value;
        channel_index.value_namespace = name_space;
        channel_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol = value;
        trib_protocol.value_namespace = name_space;
        trib_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-client-port")
    {
        ingress_client_port = value;
        ingress_client_port.value_namespace = name_space;
        ingress_client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-physical-channel")
    {
        ingress_physical_channel = value;
        ingress_physical_channel.value_namespace = name_space;
        ingress_physical_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type = value;
        logical_channel_type.value_namespace = name_space;
        logical_channel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-class")
    {
        rate_class = value;
        rate_class.value_namespace = name_space;
        rate_class.value_namespace_prefix = name_space_prefix;
    }
}

void LogicalChannels::Channel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-index")
    {
        channel_index.yfilter = yfilter;
    }
    if(value_path == "trib-protocol")
    {
        trib_protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ingress-client-port")
    {
        ingress_client_port.yfilter = yfilter;
    }
    if(value_path == "ingress-physical-channel")
    {
        ingress_physical_channel.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
    if(value_path == "logical-channel-type")
    {
        logical_channel_type.yfilter = yfilter;
    }
    if(value_path == "rate-class")
    {
        rate_class.yfilter = yfilter;
    }
}

bool LogicalChannels::Channel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logical-channel-assignments" || name == "otn" || name == "channel-index" || name == "trib-protocol" || name == "description" || name == "ingress-client-port" || name == "ingress-physical-channel" || name == "admin-state" || name == "loopback-mode" || name == "logical-channel-type" || name == "rate-class")
        return true;
    return false;
}

LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignments()
    :
    logical_channel_assignment(this, {"assignment_index"})
{

    yang_name = "logical-channel-assignments"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

LogicalChannels::Channel::LogicalChannelAssignments::~LogicalChannelAssignments()
{
}

bool LogicalChannels::Channel::LogicalChannelAssignments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logical_channel_assignment.len(); index++)
    {
        if(logical_channel_assignment[index]->has_data())
            return true;
    }
    return false;
}

bool LogicalChannels::Channel::LogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<logical_channel_assignment.len(); index++)
    {
        if(logical_channel_assignment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LogicalChannels::Channel::LogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LogicalChannels::Channel::LogicalChannelAssignments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LogicalChannels::Channel::LogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logical-channel-assignment")
    {
        auto ent_ = std::make_shared<LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment>();
        ent_->parent = this;
        logical_channel_assignment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LogicalChannels::Channel::LogicalChannelAssignments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : logical_channel_assignment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LogicalChannels::Channel::LogicalChannelAssignments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LogicalChannels::Channel::LogicalChannelAssignments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LogicalChannels::Channel::LogicalChannelAssignments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logical-channel-assignment")
        return true;
    return false;
}

LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::LogicalChannelAssignment()
    :
    assignment_index{YType::uint32, "assignment-index"},
    description{YType::str, "description"},
    logical_channel_id{YType::uint32, "logical-channel-id"},
    assignment_type{YType::enumeration, "assignment-type"},
    allocation{YType::uint32, "allocation"},
    optical_channel_id{YType::str, "optical-channel-id"}
{

    yang_name = "logical-channel-assignment"; yang_parent_name = "logical-channel-assignments"; is_top_level_class = false; has_list_ancestor = true; 
}

LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::~LogicalChannelAssignment()
{
}

bool LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::has_data() const
{
    if (is_presence_container) return true;
    return assignment_index.is_set
	|| description.is_set
	|| logical_channel_id.is_set
	|| assignment_type.is_set
	|| allocation.is_set
	|| optical_channel_id.is_set;
}

bool LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(assignment_index.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(logical_channel_id.yfilter)
	|| ydk::is_set(assignment_type.yfilter)
	|| ydk::is_set(allocation.yfilter)
	|| ydk::is_set(optical_channel_id.yfilter);
}

std::string LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignment";
    ADD_KEY_TOKEN(assignment_index, "assignment-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assignment_index.is_set || is_set(assignment_index.yfilter)) leaf_name_data.push_back(assignment_index.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (logical_channel_id.is_set || is_set(logical_channel_id.yfilter)) leaf_name_data.push_back(logical_channel_id.get_name_leafdata());
    if (assignment_type.is_set || is_set(assignment_type.yfilter)) leaf_name_data.push_back(assignment_type.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.yfilter)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (optical_channel_id.is_set || is_set(optical_channel_id.yfilter)) leaf_name_data.push_back(optical_channel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "assignment-index")
    {
        assignment_index = value;
        assignment_index.value_namespace = name_space;
        assignment_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logical-channel-id")
    {
        logical_channel_id = value;
        logical_channel_id.value_namespace = name_space;
        logical_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assignment-type")
    {
        assignment_type = value;
        assignment_type.value_namespace = name_space;
        assignment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation")
    {
        allocation = value;
        allocation.value_namespace = name_space;
        allocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-channel-id")
    {
        optical_channel_id = value;
        optical_channel_id.value_namespace = name_space;
        optical_channel_id.value_namespace_prefix = name_space_prefix;
    }
}

void LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "assignment-index")
    {
        assignment_index.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "logical-channel-id")
    {
        logical_channel_id.yfilter = yfilter;
    }
    if(value_path == "assignment-type")
    {
        assignment_type.yfilter = yfilter;
    }
    if(value_path == "allocation")
    {
        allocation.yfilter = yfilter;
    }
    if(value_path == "optical-channel-id")
    {
        optical_channel_id.yfilter = yfilter;
    }
}

bool LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assignment-index" || name == "description" || name == "logical-channel-id" || name == "assignment-type" || name == "allocation" || name == "optical-channel-id")
        return true;
    return false;
}

LogicalChannels::Channel::Otn::Otn()
    :
    tti_msg_auto{YType::enumeration, "tti-msg-auto"},
    tti_msg_expected{YType::str, "tti-msg-expected"},
    tti_msg_transmit{YType::str, "tti-msg-transmit"}
{

    yang_name = "otn"; yang_parent_name = "channel"; is_top_level_class = false; has_list_ancestor = true; 
}

LogicalChannels::Channel::Otn::~Otn()
{
}

bool LogicalChannels::Channel::Otn::has_data() const
{
    if (is_presence_container) return true;
    return tti_msg_auto.is_set
	|| tti_msg_expected.is_set
	|| tti_msg_transmit.is_set;
}

bool LogicalChannels::Channel::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tti_msg_auto.yfilter)
	|| ydk::is_set(tti_msg_expected.yfilter)
	|| ydk::is_set(tti_msg_transmit.yfilter);
}

std::string LogicalChannels::Channel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LogicalChannels::Channel::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tti_msg_auto.is_set || is_set(tti_msg_auto.yfilter)) leaf_name_data.push_back(tti_msg_auto.get_name_leafdata());
    if (tti_msg_expected.is_set || is_set(tti_msg_expected.yfilter)) leaf_name_data.push_back(tti_msg_expected.get_name_leafdata());
    if (tti_msg_transmit.is_set || is_set(tti_msg_transmit.yfilter)) leaf_name_data.push_back(tti_msg_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LogicalChannels::Channel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LogicalChannels::Channel::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LogicalChannels::Channel::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto = value;
        tti_msg_auto.value_namespace = name_space;
        tti_msg_auto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected = value;
        tti_msg_expected.value_namespace = name_space;
        tti_msg_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit = value;
        tti_msg_transmit.value_namespace = name_space;
        tti_msg_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void LogicalChannels::Channel::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tti-msg-auto")
    {
        tti_msg_auto.yfilter = yfilter;
    }
    if(value_path == "tti-msg-expected")
    {
        tti_msg_expected.yfilter = yfilter;
    }
    if(value_path == "tti-msg-transmit")
    {
        tti_msg_transmit.yfilter = yfilter;
    }
}

bool LogicalChannels::Channel::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-msg-auto" || name == "tti-msg-expected" || name == "tti-msg-transmit")
        return true;
    return false;
}

OpticalChannels::OpticalChannels()
    :
    optical_channel(this, {"ifname"})
{

    yang_name = "optical-channels"; yang_parent_name = "Cisco-IOS-XR-terminal-device-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

OpticalChannels::~OpticalChannels()
{
}

bool OpticalChannels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optical_channel.len(); index++)
    {
        if(optical_channel[index]->has_data())
            return true;
    }
    return false;
}

bool OpticalChannels::has_operation() const
{
    for (std::size_t index=0; index<optical_channel.len(); index++)
    {
        if(optical_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OpticalChannels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-cfg:optical-channels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalChannels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OpticalChannels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-channel")
    {
        auto ent_ = std::make_shared<OpticalChannels::OpticalChannel>();
        ent_->parent = this;
        optical_channel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OpticalChannels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : optical_channel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OpticalChannels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OpticalChannels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> OpticalChannels::clone_ptr() const
{
    return std::make_shared<OpticalChannels>();
}

std::string OpticalChannels::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OpticalChannels::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OpticalChannels::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OpticalChannels::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OpticalChannels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-channel")
        return true;
    return false;
}

OpticalChannels::OpticalChannel::OpticalChannel()
    :
    ifname{YType::str, "ifname"},
    operational_mode{YType::uint32, "operational-mode"},
    line_port{YType::str, "line-port"}
{

    yang_name = "optical-channel"; yang_parent_name = "optical-channels"; is_top_level_class = false; has_list_ancestor = false; 
}

OpticalChannels::OpticalChannel::~OpticalChannel()
{
}

bool OpticalChannels::OpticalChannel::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set
	|| operational_mode.is_set
	|| line_port.is_set;
}

bool OpticalChannels::OpticalChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(operational_mode.yfilter)
	|| ydk::is_set(line_port.yfilter);
}

std::string OpticalChannels::OpticalChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-terminal-device-cfg:optical-channels/" << get_segment_path();
    return path_buffer.str();
}

std::string OpticalChannels::OpticalChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-channel";
    ADD_KEY_TOKEN(ifname, "ifname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OpticalChannels::OpticalChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (operational_mode.is_set || is_set(operational_mode.yfilter)) leaf_name_data.push_back(operational_mode.get_name_leafdata());
    if (line_port.is_set || is_set(line_port.yfilter)) leaf_name_data.push_back(line_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OpticalChannels::OpticalChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OpticalChannels::OpticalChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OpticalChannels::OpticalChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-mode")
    {
        operational_mode = value;
        operational_mode.value_namespace = name_space;
        operational_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port")
    {
        line_port = value;
        line_port.value_namespace = name_space;
        line_port.value_namespace_prefix = name_space_prefix;
    }
}

void OpticalChannels::OpticalChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "operational-mode")
    {
        operational_mode.yfilter = yfilter;
    }
    if(value_path == "line-port")
    {
        line_port.yfilter = yfilter;
    }
}

bool OpticalChannels::OpticalChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifname" || name == "operational-mode" || name == "line-port")
        return true;
    return false;
}

const Enum::YLeaf LogicalTribRate::trib_rate1g {1, "trib-rate1g"};
const Enum::YLeaf LogicalTribRate::trib_rate2_5g {2, "trib-rate2-5g"};
const Enum::YLeaf LogicalTribRate::trib_rate10g {3, "trib-rate10g"};
const Enum::YLeaf LogicalTribRate::trib_rate40g {4, "trib-rate40g"};
const Enum::YLeaf LogicalTribRate::trib_rate100g {5, "trib-rate100g"};

const Enum::YLeaf LogicalLoopbackMode::none {0, "none"};
const Enum::YLeaf LogicalLoopbackMode::facility {1, "facility"};
const Enum::YLeaf LogicalLoopbackMode::terminal {2, "terminal"};

const Enum::YLeaf LogicalChannelOtnTtiAuto::false_ {0, "false"};
const Enum::YLeaf LogicalChannelOtnTtiAuto::true_ {1, "true"};

const Enum::YLeaf LogicalAdminState::enable {1, "enable"};
const Enum::YLeaf LogicalAdminState::disable {2, "disable"};
const Enum::YLeaf LogicalAdminState::maintenance {3, "maintenance"};

const Enum::YLeaf LogicalChannelAssignment::type_logical_channel {1, "type-logical-channel"};
const Enum::YLeaf LogicalChannelAssignment::type_optical_channel {2, "type-optical-channel"};

const Enum::YLeaf LogicalTribProtocol::trib_proto_type1ge {1, "trib-proto-type1ge"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_oc48 {2, "trib-proto-type-oc48"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_stm16 {3, "trib-proto-type-stm16"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type10gelan {4, "trib-proto-type10gelan"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type10gewan {5, "trib-proto-type10gewan"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_oc192 {6, "trib-proto-type-oc192"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_stm64 {7, "trib-proto-type-stm64"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_otu2 {8, "trib-proto-type-otu2"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_otu2e {9, "trib-proto-type-otu2e"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_otu1e {10, "trib-proto-type-otu1e"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_odu2 {11, "trib-proto-type-odu2"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_odu2e {12, "trib-proto-type-odu2e"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type40ge {13, "trib-proto-type40ge"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_oc768 {14, "trib-proto-type-oc768"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_stm256 {15, "trib-proto-type-stm256"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_otu3 {16, "trib-proto-type-otu3"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_odu3 {17, "trib-proto-type-odu3"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type100ge {18, "trib-proto-type100ge"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type100g_mlg {19, "trib-proto-type100g-mlg"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_otu4 {20, "trib-proto-type-otu4"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_otu_cn {21, "trib-proto-type-otu-cn"};
const Enum::YLeaf LogicalTribProtocol::trib_proto_type_odu4 {22, "trib-proto-type-odu4"};

const Enum::YLeaf LogicalProtocol::type_ethernet {1, "type-ethernet"};
const Enum::YLeaf LogicalProtocol::type_otn {2, "type-otn"};


}
}

