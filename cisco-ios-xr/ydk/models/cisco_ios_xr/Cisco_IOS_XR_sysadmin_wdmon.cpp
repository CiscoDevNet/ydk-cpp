
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_wdmon.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_wdmon {

Wdmon::Wdmon()
    :
    trace(this, {"buffer"})
{

    yang_name = "wdmon"; yang_parent_name = "Cisco-IOS-XR-sysadmin-wdmon"; is_top_level_class = true; has_list_ancestor = false; 
}

Wdmon::~Wdmon()
{
}

bool Wdmon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Wdmon::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Wdmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-wdmon:wdmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wdmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wdmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Wdmon::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wdmon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Wdmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Wdmon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Wdmon::clone_ptr() const
{
    return std::make_shared<Wdmon>();
}

std::string Wdmon::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Wdmon::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Wdmon::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Wdmon::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Wdmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Wdmon::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "wdmon"; is_top_level_class = false; has_list_ancestor = false; 
}

Wdmon::Trace::~Trace()
{
}

bool Wdmon::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Wdmon::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Wdmon::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-wdmon:wdmon/" << get_segment_path();
    return path_buffer.str();
}

std::string Wdmon::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wdmon::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wdmon::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Wdmon::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wdmon::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Wdmon::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Wdmon::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Wdmon::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Wdmon::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Wdmon::Trace::Location::~Location()
{
}

bool Wdmon::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Wdmon::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Wdmon::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wdmon::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wdmon::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Wdmon::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wdmon::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Wdmon::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Wdmon::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Wdmon::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Wdmon::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Wdmon::Trace::Location::AllOptions::~AllOptions()
{
}

bool Wdmon::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Wdmon::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Wdmon::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wdmon::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wdmon::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Wdmon::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wdmon::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Wdmon::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Wdmon::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Wdmon::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Wdmon::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Wdmon::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Wdmon::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Wdmon::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Wdmon::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wdmon::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wdmon::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wdmon::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Wdmon::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Wdmon::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Wdmon::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

WdmonInfo::WdmonInfo()
    :
    all_locations(this, {"location"})
{

    yang_name = "wdmon-info"; yang_parent_name = "Cisco-IOS-XR-sysadmin-wdmon"; is_top_level_class = true; has_list_ancestor = false; 
}

WdmonInfo::~WdmonInfo()
{
}

bool WdmonInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_data())
            return true;
    }
    return false;
}

bool WdmonInfo::has_operation() const
{
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string WdmonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-wdmon:wdmon-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > WdmonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> WdmonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-locations")
    {
        auto ent_ = std::make_shared<WdmonInfo::AllLocations>();
        ent_->parent = this;
        all_locations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> WdmonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_locations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void WdmonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void WdmonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> WdmonInfo::clone_ptr() const
{
    return std::make_shared<WdmonInfo>();
}

std::string WdmonInfo::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string WdmonInfo::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function WdmonInfo::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> WdmonInfo::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool WdmonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-locations")
        return true;
    return false;
}

WdmonInfo::AllLocations::AllLocations()
    :
    location{YType::str, "location"},
    start_timestamp{YType::str, "start-timestamp"},
    hushd_timeout{YType::str, "hushd-timeout"},
    calv_restart_timeout{YType::uint32, "calv-restart-timeout"},
    hushd_wd_action_disable{YType::boolean, "hushd-wd-action-disable"},
    hushd_wd_action_timestamp{YType::str, "hushd-wd-action-timestamp"},
    hushd_capi_up{YType::boolean, "hushd-capi-up"},
    hushd_pending_resp{YType::boolean, "hushd-pending-resp"},
    hushd_stop_punching{YType::boolean, "hushd-stop-punching"},
    hushd_capi_up_timestamp{YType::str, "hushd-capi-up-timestamp"},
    hushd_last_hb_resp{YType::str, "hushd-last-hb-resp"},
    hushd_num_capi_connects{YType::uint32, "hushd-num-capi-connects"},
    wds_action_disable{YType::boolean, "wds-action-disable"},
    wds_action_timestamp{YType::str, "wds-action-timestamp"},
    wds_restart_timeout{YType::uint32, "wds-restart-timeout"},
    wds_liveness_timeout{YType::uint32, "wds-liveness-timeout"},
    wds_client_up{YType::boolean, "wds-client-up"},
    wds_client_pid{YType::uint32, "wds-client-pid"},
    wds_client_up_timestamp{YType::str, "wds-client-up-timestamp"},
    wds_client_last_hb{YType::str, "wds-client-last-hb"},
    wds_client_num_connects{YType::uint32, "wds-client-num-connects"},
    wds_num_liveness_timeout{YType::uint32, "wds-num-liveness-timeout"},
    wds_num_restart_timeout{YType::uint32, "wds-num-restart-timeout"},
    wds_client_reported_status{YType::str, "wds-client-reported-status"}
{

    yang_name = "all-locations"; yang_parent_name = "wdmon-info"; is_top_level_class = false; has_list_ancestor = false; 
}

WdmonInfo::AllLocations::~AllLocations()
{
}

bool WdmonInfo::AllLocations::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| start_timestamp.is_set
	|| hushd_timeout.is_set
	|| calv_restart_timeout.is_set
	|| hushd_wd_action_disable.is_set
	|| hushd_wd_action_timestamp.is_set
	|| hushd_capi_up.is_set
	|| hushd_pending_resp.is_set
	|| hushd_stop_punching.is_set
	|| hushd_capi_up_timestamp.is_set
	|| hushd_last_hb_resp.is_set
	|| hushd_num_capi_connects.is_set
	|| wds_action_disable.is_set
	|| wds_action_timestamp.is_set
	|| wds_restart_timeout.is_set
	|| wds_liveness_timeout.is_set
	|| wds_client_up.is_set
	|| wds_client_pid.is_set
	|| wds_client_up_timestamp.is_set
	|| wds_client_last_hb.is_set
	|| wds_client_num_connects.is_set
	|| wds_num_liveness_timeout.is_set
	|| wds_num_restart_timeout.is_set
	|| wds_client_reported_status.is_set;
}

bool WdmonInfo::AllLocations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(start_timestamp.yfilter)
	|| ydk::is_set(hushd_timeout.yfilter)
	|| ydk::is_set(calv_restart_timeout.yfilter)
	|| ydk::is_set(hushd_wd_action_disable.yfilter)
	|| ydk::is_set(hushd_wd_action_timestamp.yfilter)
	|| ydk::is_set(hushd_capi_up.yfilter)
	|| ydk::is_set(hushd_pending_resp.yfilter)
	|| ydk::is_set(hushd_stop_punching.yfilter)
	|| ydk::is_set(hushd_capi_up_timestamp.yfilter)
	|| ydk::is_set(hushd_last_hb_resp.yfilter)
	|| ydk::is_set(hushd_num_capi_connects.yfilter)
	|| ydk::is_set(wds_action_disable.yfilter)
	|| ydk::is_set(wds_action_timestamp.yfilter)
	|| ydk::is_set(wds_restart_timeout.yfilter)
	|| ydk::is_set(wds_liveness_timeout.yfilter)
	|| ydk::is_set(wds_client_up.yfilter)
	|| ydk::is_set(wds_client_pid.yfilter)
	|| ydk::is_set(wds_client_up_timestamp.yfilter)
	|| ydk::is_set(wds_client_last_hb.yfilter)
	|| ydk::is_set(wds_client_num_connects.yfilter)
	|| ydk::is_set(wds_num_liveness_timeout.yfilter)
	|| ydk::is_set(wds_num_restart_timeout.yfilter)
	|| ydk::is_set(wds_client_reported_status.yfilter);
}

std::string WdmonInfo::AllLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-wdmon:wdmon-info/" << get_segment_path();
    return path_buffer.str();
}

std::string WdmonInfo::AllLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-locations";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > WdmonInfo::AllLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (start_timestamp.is_set || is_set(start_timestamp.yfilter)) leaf_name_data.push_back(start_timestamp.get_name_leafdata());
    if (hushd_timeout.is_set || is_set(hushd_timeout.yfilter)) leaf_name_data.push_back(hushd_timeout.get_name_leafdata());
    if (calv_restart_timeout.is_set || is_set(calv_restart_timeout.yfilter)) leaf_name_data.push_back(calv_restart_timeout.get_name_leafdata());
    if (hushd_wd_action_disable.is_set || is_set(hushd_wd_action_disable.yfilter)) leaf_name_data.push_back(hushd_wd_action_disable.get_name_leafdata());
    if (hushd_wd_action_timestamp.is_set || is_set(hushd_wd_action_timestamp.yfilter)) leaf_name_data.push_back(hushd_wd_action_timestamp.get_name_leafdata());
    if (hushd_capi_up.is_set || is_set(hushd_capi_up.yfilter)) leaf_name_data.push_back(hushd_capi_up.get_name_leafdata());
    if (hushd_pending_resp.is_set || is_set(hushd_pending_resp.yfilter)) leaf_name_data.push_back(hushd_pending_resp.get_name_leafdata());
    if (hushd_stop_punching.is_set || is_set(hushd_stop_punching.yfilter)) leaf_name_data.push_back(hushd_stop_punching.get_name_leafdata());
    if (hushd_capi_up_timestamp.is_set || is_set(hushd_capi_up_timestamp.yfilter)) leaf_name_data.push_back(hushd_capi_up_timestamp.get_name_leafdata());
    if (hushd_last_hb_resp.is_set || is_set(hushd_last_hb_resp.yfilter)) leaf_name_data.push_back(hushd_last_hb_resp.get_name_leafdata());
    if (hushd_num_capi_connects.is_set || is_set(hushd_num_capi_connects.yfilter)) leaf_name_data.push_back(hushd_num_capi_connects.get_name_leafdata());
    if (wds_action_disable.is_set || is_set(wds_action_disable.yfilter)) leaf_name_data.push_back(wds_action_disable.get_name_leafdata());
    if (wds_action_timestamp.is_set || is_set(wds_action_timestamp.yfilter)) leaf_name_data.push_back(wds_action_timestamp.get_name_leafdata());
    if (wds_restart_timeout.is_set || is_set(wds_restart_timeout.yfilter)) leaf_name_data.push_back(wds_restart_timeout.get_name_leafdata());
    if (wds_liveness_timeout.is_set || is_set(wds_liveness_timeout.yfilter)) leaf_name_data.push_back(wds_liveness_timeout.get_name_leafdata());
    if (wds_client_up.is_set || is_set(wds_client_up.yfilter)) leaf_name_data.push_back(wds_client_up.get_name_leafdata());
    if (wds_client_pid.is_set || is_set(wds_client_pid.yfilter)) leaf_name_data.push_back(wds_client_pid.get_name_leafdata());
    if (wds_client_up_timestamp.is_set || is_set(wds_client_up_timestamp.yfilter)) leaf_name_data.push_back(wds_client_up_timestamp.get_name_leafdata());
    if (wds_client_last_hb.is_set || is_set(wds_client_last_hb.yfilter)) leaf_name_data.push_back(wds_client_last_hb.get_name_leafdata());
    if (wds_client_num_connects.is_set || is_set(wds_client_num_connects.yfilter)) leaf_name_data.push_back(wds_client_num_connects.get_name_leafdata());
    if (wds_num_liveness_timeout.is_set || is_set(wds_num_liveness_timeout.yfilter)) leaf_name_data.push_back(wds_num_liveness_timeout.get_name_leafdata());
    if (wds_num_restart_timeout.is_set || is_set(wds_num_restart_timeout.yfilter)) leaf_name_data.push_back(wds_num_restart_timeout.get_name_leafdata());
    if (wds_client_reported_status.is_set || is_set(wds_client_reported_status.yfilter)) leaf_name_data.push_back(wds_client_reported_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> WdmonInfo::AllLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> WdmonInfo::AllLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void WdmonInfo::AllLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timestamp")
    {
        start_timestamp = value;
        start_timestamp.value_namespace = name_space;
        start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-timeout")
    {
        hushd_timeout = value;
        hushd_timeout.value_namespace = name_space;
        hushd_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calv-restart-timeout")
    {
        calv_restart_timeout = value;
        calv_restart_timeout.value_namespace = name_space;
        calv_restart_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-wd-action-disable")
    {
        hushd_wd_action_disable = value;
        hushd_wd_action_disable.value_namespace = name_space;
        hushd_wd_action_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-wd-action-timestamp")
    {
        hushd_wd_action_timestamp = value;
        hushd_wd_action_timestamp.value_namespace = name_space;
        hushd_wd_action_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-capi-up")
    {
        hushd_capi_up = value;
        hushd_capi_up.value_namespace = name_space;
        hushd_capi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-pending-resp")
    {
        hushd_pending_resp = value;
        hushd_pending_resp.value_namespace = name_space;
        hushd_pending_resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-stop-punching")
    {
        hushd_stop_punching = value;
        hushd_stop_punching.value_namespace = name_space;
        hushd_stop_punching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-capi-up-timestamp")
    {
        hushd_capi_up_timestamp = value;
        hushd_capi_up_timestamp.value_namespace = name_space;
        hushd_capi_up_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-last-hb-resp")
    {
        hushd_last_hb_resp = value;
        hushd_last_hb_resp.value_namespace = name_space;
        hushd_last_hb_resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hushd-num-capi-connects")
    {
        hushd_num_capi_connects = value;
        hushd_num_capi_connects.value_namespace = name_space;
        hushd_num_capi_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-action-disable")
    {
        wds_action_disable = value;
        wds_action_disable.value_namespace = name_space;
        wds_action_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-action-timestamp")
    {
        wds_action_timestamp = value;
        wds_action_timestamp.value_namespace = name_space;
        wds_action_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-restart-timeout")
    {
        wds_restart_timeout = value;
        wds_restart_timeout.value_namespace = name_space;
        wds_restart_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-liveness-timeout")
    {
        wds_liveness_timeout = value;
        wds_liveness_timeout.value_namespace = name_space;
        wds_liveness_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-client-up")
    {
        wds_client_up = value;
        wds_client_up.value_namespace = name_space;
        wds_client_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-client-pid")
    {
        wds_client_pid = value;
        wds_client_pid.value_namespace = name_space;
        wds_client_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-client-up-timestamp")
    {
        wds_client_up_timestamp = value;
        wds_client_up_timestamp.value_namespace = name_space;
        wds_client_up_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-client-last-hb")
    {
        wds_client_last_hb = value;
        wds_client_last_hb.value_namespace = name_space;
        wds_client_last_hb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-client-num-connects")
    {
        wds_client_num_connects = value;
        wds_client_num_connects.value_namespace = name_space;
        wds_client_num_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-num-liveness-timeout")
    {
        wds_num_liveness_timeout = value;
        wds_num_liveness_timeout.value_namespace = name_space;
        wds_num_liveness_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-num-restart-timeout")
    {
        wds_num_restart_timeout = value;
        wds_num_restart_timeout.value_namespace = name_space;
        wds_num_restart_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wds-client-reported-status")
    {
        wds_client_reported_status = value;
        wds_client_reported_status.value_namespace = name_space;
        wds_client_reported_status.value_namespace_prefix = name_space_prefix;
    }
}

void WdmonInfo::AllLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "start-timestamp")
    {
        start_timestamp.yfilter = yfilter;
    }
    if(value_path == "hushd-timeout")
    {
        hushd_timeout.yfilter = yfilter;
    }
    if(value_path == "calv-restart-timeout")
    {
        calv_restart_timeout.yfilter = yfilter;
    }
    if(value_path == "hushd-wd-action-disable")
    {
        hushd_wd_action_disable.yfilter = yfilter;
    }
    if(value_path == "hushd-wd-action-timestamp")
    {
        hushd_wd_action_timestamp.yfilter = yfilter;
    }
    if(value_path == "hushd-capi-up")
    {
        hushd_capi_up.yfilter = yfilter;
    }
    if(value_path == "hushd-pending-resp")
    {
        hushd_pending_resp.yfilter = yfilter;
    }
    if(value_path == "hushd-stop-punching")
    {
        hushd_stop_punching.yfilter = yfilter;
    }
    if(value_path == "hushd-capi-up-timestamp")
    {
        hushd_capi_up_timestamp.yfilter = yfilter;
    }
    if(value_path == "hushd-last-hb-resp")
    {
        hushd_last_hb_resp.yfilter = yfilter;
    }
    if(value_path == "hushd-num-capi-connects")
    {
        hushd_num_capi_connects.yfilter = yfilter;
    }
    if(value_path == "wds-action-disable")
    {
        wds_action_disable.yfilter = yfilter;
    }
    if(value_path == "wds-action-timestamp")
    {
        wds_action_timestamp.yfilter = yfilter;
    }
    if(value_path == "wds-restart-timeout")
    {
        wds_restart_timeout.yfilter = yfilter;
    }
    if(value_path == "wds-liveness-timeout")
    {
        wds_liveness_timeout.yfilter = yfilter;
    }
    if(value_path == "wds-client-up")
    {
        wds_client_up.yfilter = yfilter;
    }
    if(value_path == "wds-client-pid")
    {
        wds_client_pid.yfilter = yfilter;
    }
    if(value_path == "wds-client-up-timestamp")
    {
        wds_client_up_timestamp.yfilter = yfilter;
    }
    if(value_path == "wds-client-last-hb")
    {
        wds_client_last_hb.yfilter = yfilter;
    }
    if(value_path == "wds-client-num-connects")
    {
        wds_client_num_connects.yfilter = yfilter;
    }
    if(value_path == "wds-num-liveness-timeout")
    {
        wds_num_liveness_timeout.yfilter = yfilter;
    }
    if(value_path == "wds-num-restart-timeout")
    {
        wds_num_restart_timeout.yfilter = yfilter;
    }
    if(value_path == "wds-client-reported-status")
    {
        wds_client_reported_status.yfilter = yfilter;
    }
}

bool WdmonInfo::AllLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "start-timestamp" || name == "hushd-timeout" || name == "calv-restart-timeout" || name == "hushd-wd-action-disable" || name == "hushd-wd-action-timestamp" || name == "hushd-capi-up" || name == "hushd-pending-resp" || name == "hushd-stop-punching" || name == "hushd-capi-up-timestamp" || name == "hushd-last-hb-resp" || name == "hushd-num-capi-connects" || name == "wds-action-disable" || name == "wds-action-timestamp" || name == "wds-restart-timeout" || name == "wds-liveness-timeout" || name == "wds-client-up" || name == "wds-client-pid" || name == "wds-client-up-timestamp" || name == "wds-client-last-hb" || name == "wds-client-num-connects" || name == "wds-num-liveness-timeout" || name == "wds-num-restart-timeout" || name == "wds-client-reported-status")
        return true;
    return false;
}


}
}

