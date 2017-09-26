
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::SessionBriefs::SessionBriefs()
{

    yang_name = "session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::~SessionBriefs()
{
}

bool Bfd::SessionBriefs::has_data() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::SessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-brief")
    {
        for(auto const & c : session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionBriefs::SessionBrief>();
        c->parent = this;
        session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-brief")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::SessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"}
    	,
    status_brief_information(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "session-brief"; yang_parent_name = "session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::~SessionBrief()
{
}

bool Bfd::SessionBriefs::SessionBrief::has_data() const
{
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::SessionBriefs::SessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::SessionBriefs::SessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::SessionBriefs::SessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionBriefs::SessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::SessionBriefs::SessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "destination-address" || name == "interface-name" || name == "location" || name == "node-id" || name == "session-flags" || name == "session-subtype" || name == "session-type" || name == "state")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetails()
{

    yang_name = "session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::~SessionDetails()
{
}

bool Bfd::SessionDetails::has_data() const
{
    for (std::size_t index=0; index<session_detail.size(); index++)
    {
        if(session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionDetails::has_operation() const
{
    for (std::size_t index=0; index<session_detail.size(); index++)
    {
        if(session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::SessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail")
    {
        for(auto const & c : session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail>();
        c->parent = this;
        session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::SessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
    	,
    lsp_ping_info(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    mp_download_state->parent = this;
    status_information->parent = this;

    yang_name = "session-detail"; yang_parent_name = "session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::~SessionDetail()
{
}

bool Bfd::SessionDetails::SessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::SessionDetails::SessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation>();
        }
        return status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-information" || name == "lsp-ping-info" || name == "mp-download-state" || name == "owner-information" || name == "status-information" || name == "destination-address" || name == "interface-name" || name == "location")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    ip_destination_address(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| local_discriminator.is_set
	|| sessiontype.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "local-discriminator" || name == "sessiontype")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
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

void Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
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

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-tx-last-time" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-last-output" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-tx-last-rc")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    async_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    last_state_change->parent = this;
    receive_packet->parent = this;
    source_address->parent = this;
    status_brief_information->parent = this;
    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-receive-statistics" || name == "async-transmit-statistics" || name == "echo-received-statistics" || name == "echo-transmit-statistics" || name == "last-state-change" || name == "receive-packet" || name == "source-address" || name == "status-brief-information" || name == "transmit-packet" || name == "desired-minimum-echo-transmit-interval" || name == "internal-label" || name == "latency-average" || name == "latency-maximum" || name == "latency-minimum" || name == "latency-number" || name == "local-discriminator" || name == "node-id" || name == "remote-discriminator" || name == "remote-negotiated-interval" || name == "session-subtype" || name == "sessiontype" || name == "state" || name == "to-up-state-count")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
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

void Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
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

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::SessionMibs::SessionMibs()
{

    yang_name = "session-mibs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionMibs::~SessionMibs()
{
}

bool Bfd::SessionMibs::has_data() const
{
    for (std::size_t index=0; index<session_mib.size(); index++)
    {
        if(session_mib[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionMibs::has_operation() const
{
    for (std::size_t index=0; index<session_mib.size(); index++)
    {
        if(session_mib[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::SessionMibs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionMibs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mibs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionMibs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionMibs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-mib")
    {
        for(auto const & c : session_mib)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionMibs::SessionMib>();
        c->parent = this;
        session_mib.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionMibs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_mib)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionMibs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionMibs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionMibs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-mib")
        return true;
    return false;
}

Bfd::SessionMibs::SessionMib::SessionMib()
    :
    discriminator{YType::int32, "discriminator"},
    desired_min_tx_interval{YType::uint32, "desired-min-tx-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    int_handle{YType::uint32, "int-handle"},
    interface_name{YType::str, "interface-name"},
    last_down_diag{YType::enumeration, "last-down-diag"},
    last_down_time_nsec{YType::uint32, "last-down-time-nsec"},
    last_down_time_sec{YType::uint64, "last-down-time-sec"},
    last_time_cached{YType::uint64, "last-time-cached"},
    last_up_time_nsec{YType::uint32, "last-up-time-nsec"},
    last_up_time_sec{YType::uint64, "last-up-time-sec"},
    local_discriminator{YType::uint32, "local-discriminator"},
    pkt_in{YType::uint64, "pkt-in"},
    pkt_out{YType::uint64, "pkt-out"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    required_min_rx_echo_interval{YType::uint32, "required-min-rx-echo-interval"},
    required_min_rx_interval{YType::uint32, "required-min-rx-interval"},
    session_state{YType::uint32, "session-state"},
    sessionversion{YType::uint32, "sessionversion"},
    trap_bitmap{YType::uint32, "trap-bitmap"},
    up_counter{YType::uint32, "up-counter"}
    	,
    dest_address(std::make_shared<Bfd::SessionMibs::SessionMib::DestAddress>())
{
    dest_address->parent = this;

    yang_name = "session-mib"; yang_parent_name = "session-mibs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionMibs::SessionMib::~SessionMib()
{
}

bool Bfd::SessionMibs::SessionMib::has_data() const
{
    return discriminator.is_set
	|| desired_min_tx_interval.is_set
	|| detection_multiplier.is_set
	|| int_handle.is_set
	|| interface_name.is_set
	|| last_down_diag.is_set
	|| last_down_time_nsec.is_set
	|| last_down_time_sec.is_set
	|| last_time_cached.is_set
	|| last_up_time_nsec.is_set
	|| last_up_time_sec.is_set
	|| local_discriminator.is_set
	|| pkt_in.is_set
	|| pkt_out.is_set
	|| remote_discriminator.is_set
	|| required_min_rx_echo_interval.is_set
	|| required_min_rx_interval.is_set
	|| session_state.is_set
	|| sessionversion.is_set
	|| trap_bitmap.is_set
	|| up_counter.is_set
	|| (dest_address !=  nullptr && dest_address->has_data());
}

bool Bfd::SessionMibs::SessionMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| ydk::is_set(desired_min_tx_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(int_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(last_down_diag.yfilter)
	|| ydk::is_set(last_down_time_nsec.yfilter)
	|| ydk::is_set(last_down_time_sec.yfilter)
	|| ydk::is_set(last_time_cached.yfilter)
	|| ydk::is_set(last_up_time_nsec.yfilter)
	|| ydk::is_set(last_up_time_sec.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(pkt_in.yfilter)
	|| ydk::is_set(pkt_out.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(required_min_rx_echo_interval.yfilter)
	|| ydk::is_set(required_min_rx_interval.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(sessionversion.yfilter)
	|| ydk::is_set(trap_bitmap.yfilter)
	|| ydk::is_set(up_counter.yfilter)
	|| (dest_address !=  nullptr && dest_address->has_operation());
}

std::string Bfd::SessionMibs::SessionMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-mibs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionMibs::SessionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mib" <<"[discriminator='" <<discriminator <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionMibs::SessionMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());
    if (desired_min_tx_interval.is_set || is_set(desired_min_tx_interval.yfilter)) leaf_name_data.push_back(desired_min_tx_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (int_handle.is_set || is_set(int_handle.yfilter)) leaf_name_data.push_back(int_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (last_down_diag.is_set || is_set(last_down_diag.yfilter)) leaf_name_data.push_back(last_down_diag.get_name_leafdata());
    if (last_down_time_nsec.is_set || is_set(last_down_time_nsec.yfilter)) leaf_name_data.push_back(last_down_time_nsec.get_name_leafdata());
    if (last_down_time_sec.is_set || is_set(last_down_time_sec.yfilter)) leaf_name_data.push_back(last_down_time_sec.get_name_leafdata());
    if (last_time_cached.is_set || is_set(last_time_cached.yfilter)) leaf_name_data.push_back(last_time_cached.get_name_leafdata());
    if (last_up_time_nsec.is_set || is_set(last_up_time_nsec.yfilter)) leaf_name_data.push_back(last_up_time_nsec.get_name_leafdata());
    if (last_up_time_sec.is_set || is_set(last_up_time_sec.yfilter)) leaf_name_data.push_back(last_up_time_sec.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (pkt_in.is_set || is_set(pkt_in.yfilter)) leaf_name_data.push_back(pkt_in.get_name_leafdata());
    if (pkt_out.is_set || is_set(pkt_out.yfilter)) leaf_name_data.push_back(pkt_out.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (required_min_rx_echo_interval.is_set || is_set(required_min_rx_echo_interval.yfilter)) leaf_name_data.push_back(required_min_rx_echo_interval.get_name_leafdata());
    if (required_min_rx_interval.is_set || is_set(required_min_rx_interval.yfilter)) leaf_name_data.push_back(required_min_rx_interval.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (sessionversion.is_set || is_set(sessionversion.yfilter)) leaf_name_data.push_back(sessionversion.get_name_leafdata());
    if (trap_bitmap.is_set || is_set(trap_bitmap.yfilter)) leaf_name_data.push_back(trap_bitmap.get_name_leafdata());
    if (up_counter.is_set || is_set(up_counter.yfilter)) leaf_name_data.push_back(up_counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionMibs::SessionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-address")
    {
        if(dest_address == nullptr)
        {
            dest_address = std::make_shared<Bfd::SessionMibs::SessionMib::DestAddress>();
        }
        return dest_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionMibs::SessionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_address != nullptr)
    {
        children["dest-address"] = dest_address;
    }

    return children;
}

void Bfd::SessionMibs::SessionMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-min-tx-interval")
    {
        desired_min_tx_interval = value;
        desired_min_tx_interval.value_namespace = name_space;
        desired_min_tx_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "int-handle")
    {
        int_handle = value;
        int_handle.value_namespace = name_space;
        int_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-down-diag")
    {
        last_down_diag = value;
        last_down_diag.value_namespace = name_space;
        last_down_diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-down-time-nsec")
    {
        last_down_time_nsec = value;
        last_down_time_nsec.value_namespace = name_space;
        last_down_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-down-time-sec")
    {
        last_down_time_sec = value;
        last_down_time_sec.value_namespace = name_space;
        last_down_time_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cached")
    {
        last_time_cached = value;
        last_time_cached.value_namespace = name_space;
        last_time_cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-up-time-nsec")
    {
        last_up_time_nsec = value;
        last_up_time_nsec.value_namespace = name_space;
        last_up_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-up-time-sec")
    {
        last_up_time_sec = value;
        last_up_time_sec.value_namespace = name_space;
        last_up_time_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-in")
    {
        pkt_in = value;
        pkt_in.value_namespace = name_space;
        pkt_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-out")
    {
        pkt_out = value;
        pkt_out.value_namespace = name_space;
        pkt_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-min-rx-echo-interval")
    {
        required_min_rx_echo_interval = value;
        required_min_rx_echo_interval.value_namespace = name_space;
        required_min_rx_echo_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-min-rx-interval")
    {
        required_min_rx_interval = value;
        required_min_rx_interval.value_namespace = name_space;
        required_min_rx_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionversion")
    {
        sessionversion = value;
        sessionversion.value_namespace = name_space;
        sessionversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-bitmap")
    {
        trap_bitmap = value;
        trap_bitmap.value_namespace = name_space;
        trap_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-counter")
    {
        up_counter = value;
        up_counter.value_namespace = name_space;
        up_counter.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionMibs::SessionMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-min-tx-interval")
    {
        desired_min_tx_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "int-handle")
    {
        int_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "last-down-diag")
    {
        last_down_diag.yfilter = yfilter;
    }
    if(value_path == "last-down-time-nsec")
    {
        last_down_time_nsec.yfilter = yfilter;
    }
    if(value_path == "last-down-time-sec")
    {
        last_down_time_sec.yfilter = yfilter;
    }
    if(value_path == "last-time-cached")
    {
        last_time_cached.yfilter = yfilter;
    }
    if(value_path == "last-up-time-nsec")
    {
        last_up_time_nsec.yfilter = yfilter;
    }
    if(value_path == "last-up-time-sec")
    {
        last_up_time_sec.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "pkt-in")
    {
        pkt_in.yfilter = yfilter;
    }
    if(value_path == "pkt-out")
    {
        pkt_out.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "required-min-rx-echo-interval")
    {
        required_min_rx_echo_interval.yfilter = yfilter;
    }
    if(value_path == "required-min-rx-interval")
    {
        required_min_rx_interval.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "sessionversion")
    {
        sessionversion.yfilter = yfilter;
    }
    if(value_path == "trap-bitmap")
    {
        trap_bitmap.yfilter = yfilter;
    }
    if(value_path == "up-counter")
    {
        up_counter.yfilter = yfilter;
    }
}

bool Bfd::SessionMibs::SessionMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-address" || name == "discriminator" || name == "desired-min-tx-interval" || name == "detection-multiplier" || name == "int-handle" || name == "interface-name" || name == "last-down-diag" || name == "last-down-time-nsec" || name == "last-down-time-sec" || name == "last-time-cached" || name == "last-up-time-nsec" || name == "last-up-time-sec" || name == "local-discriminator" || name == "pkt-in" || name == "pkt-out" || name == "remote-discriminator" || name == "required-min-rx-echo-interval" || name == "required-min-rx-interval" || name == "session-state" || name == "sessionversion" || name == "trap-bitmap" || name == "up-counter")
        return true;
    return false;
}

Bfd::SessionMibs::SessionMib::DestAddress::DestAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "dest-address"; yang_parent_name = "session-mib"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::SessionMibs::SessionMib::DestAddress::~DestAddress()
{
}

bool Bfd::SessionMibs::SessionMib::DestAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionMibs::SessionMib::DestAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::SessionMibs::SessionMib::DestAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionMibs::SessionMib::DestAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionMibs::SessionMib::DestAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionMibs::SessionMib::DestAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionMibs::SessionMib::DestAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
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

void Bfd::SessionMibs::SessionMib::DestAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
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

bool Bfd::SessionMibs::SessionMib::DestAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Summary::Summary()
    :
    session_state(std::make_shared<Bfd::Summary::SessionState>())
{
    session_state->parent = this;

    yang_name = "summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Summary::~Summary()
{
}

bool Bfd::Summary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Summary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Summary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Summary::SessionState::~SessionState()
{
}

bool Bfd::Summary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Summary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::Summary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Summary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Summary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Summary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Summary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Summary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Summary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::Summary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}


}
}

