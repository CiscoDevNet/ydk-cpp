
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_vrrp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_vrrp_oper {

VrrpOperData::VrrpOperData()
    :
    vrrp_oper_state(this, {"if_number", "group_id", "addr_type"})
{

    yang_name = "vrrp-oper-data"; yang_parent_name = "Cisco-IOS-XE-vrrp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

VrrpOperData::~VrrpOperData()
{
}

bool VrrpOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrrp_oper_state.len(); index++)
    {
        if(vrrp_oper_state[index]->has_data())
            return true;
    }
    return false;
}

bool VrrpOperData::has_operation() const
{
    for (std::size_t index=0; index<vrrp_oper_state.len(); index++)
    {
        if(vrrp_oper_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrrpOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vrrp-oper:vrrp-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrrpOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VrrpOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-oper-state")
    {
        auto ent_ = std::make_shared<VrrpOperData::VrrpOperState>();
        ent_->parent = this;
        vrrp_oper_state.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VrrpOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrrp_oper_state.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VrrpOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrrpOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> VrrpOperData::clone_ptr() const
{
    return std::make_shared<VrrpOperData>();
}

std::string VrrpOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string VrrpOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function VrrpOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VrrpOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool VrrpOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-oper-state")
        return true;
    return false;
}

VrrpOperData::VrrpOperState::VrrpOperState()
    :
    if_number{YType::uint32, "if-number"},
    group_id{YType::uint32, "group-id"},
    addr_type{YType::enumeration, "addr-type"},
    version{YType::enumeration, "version"},
    virtual_ip{YType::str, "virtual-ip"},
    if_name{YType::str, "if-name"},
    vrrp_state{YType::enumeration, "vrrp-state"},
    virtual_mac{YType::str, "virtual-mac"},
    master_ip{YType::str, "master-ip"},
    is_owner{YType::boolean, "is-owner"},
    priority{YType::uint32, "priority"},
    advertisement_timer{YType::uint32, "advertisement-timer"},
    master_down_timer{YType::uint32, "master-down-timer"},
    skew_time{YType::uint32, "skew-time"},
    preempt{YType::boolean, "preempt"},
    master_transitions{YType::uint32, "master-transitions"},
    new_master_reason{YType::enumeration, "new-master-reason"},
    last_state_change_time{YType::str, "last-state-change-time"},
    adv_interval_errors{YType::uint32, "adv-interval-errors"},
    ip_ttl_errors{YType::uint32, "ip-ttl-errors"},
    rcvd_pri_zero_pak{YType::uint32, "rcvd-pri-zero-pak"},
    sent_pri_zero_pak{YType::uint32, "sent-pri-zero-pak"},
    rcvd_invalid_type_pak{YType::uint32, "rcvd-invalid-type-pak"},
    addr_list_errors{YType::uint32, "addr-list-errors"},
    pak_len_errors{YType::uint32, "pak-len-errors"},
    discontinuity_time{YType::str, "discontinuity-time"},
    advertisement_sent{YType::uint32, "advertisement-sent"},
    advertisement_rcvd{YType::uint32, "advertisement-rcvd"},
    omp_state{YType::enumeration, "omp-state"},
    secondary_vip_addresses{YType::str, "secondary-vip-addresses"}
        ,
    track_list(this, {})
{

    yang_name = "vrrp-oper-state"; yang_parent_name = "vrrp-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

VrrpOperData::VrrpOperState::~VrrpOperState()
{
}

bool VrrpOperData::VrrpOperState::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_list.len(); index++)
    {
        if(track_list[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_vip_addresses.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return if_number.is_set
	|| group_id.is_set
	|| addr_type.is_set
	|| version.is_set
	|| virtual_ip.is_set
	|| if_name.is_set
	|| vrrp_state.is_set
	|| virtual_mac.is_set
	|| master_ip.is_set
	|| is_owner.is_set
	|| priority.is_set
	|| advertisement_timer.is_set
	|| master_down_timer.is_set
	|| skew_time.is_set
	|| preempt.is_set
	|| master_transitions.is_set
	|| new_master_reason.is_set
	|| last_state_change_time.is_set
	|| adv_interval_errors.is_set
	|| ip_ttl_errors.is_set
	|| rcvd_pri_zero_pak.is_set
	|| sent_pri_zero_pak.is_set
	|| rcvd_invalid_type_pak.is_set
	|| addr_list_errors.is_set
	|| pak_len_errors.is_set
	|| discontinuity_time.is_set
	|| advertisement_sent.is_set
	|| advertisement_rcvd.is_set
	|| omp_state.is_set;
}

bool VrrpOperData::VrrpOperState::has_operation() const
{
    for (std::size_t index=0; index<track_list.len(); index++)
    {
        if(track_list[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_vip_addresses.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(if_number.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(virtual_ip.yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| ydk::is_set(vrrp_state.yfilter)
	|| ydk::is_set(virtual_mac.yfilter)
	|| ydk::is_set(master_ip.yfilter)
	|| ydk::is_set(is_owner.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(advertisement_timer.yfilter)
	|| ydk::is_set(master_down_timer.yfilter)
	|| ydk::is_set(skew_time.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(master_transitions.yfilter)
	|| ydk::is_set(new_master_reason.yfilter)
	|| ydk::is_set(last_state_change_time.yfilter)
	|| ydk::is_set(adv_interval_errors.yfilter)
	|| ydk::is_set(ip_ttl_errors.yfilter)
	|| ydk::is_set(rcvd_pri_zero_pak.yfilter)
	|| ydk::is_set(sent_pri_zero_pak.yfilter)
	|| ydk::is_set(rcvd_invalid_type_pak.yfilter)
	|| ydk::is_set(addr_list_errors.yfilter)
	|| ydk::is_set(pak_len_errors.yfilter)
	|| ydk::is_set(discontinuity_time.yfilter)
	|| ydk::is_set(advertisement_sent.yfilter)
	|| ydk::is_set(advertisement_rcvd.yfilter)
	|| ydk::is_set(omp_state.yfilter)
	|| ydk::is_set(secondary_vip_addresses.yfilter);
}

std::string VrrpOperData::VrrpOperState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vrrp-oper:vrrp-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string VrrpOperData::VrrpOperState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-oper-state";
    ADD_KEY_TOKEN(if_number, "if-number");
    ADD_KEY_TOKEN(group_id, "group-id");
    ADD_KEY_TOKEN(addr_type, "addr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrrpOperData::VrrpOperState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_number.is_set || is_set(if_number.yfilter)) leaf_name_data.push_back(if_number.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (virtual_ip.is_set || is_set(virtual_ip.yfilter)) leaf_name_data.push_back(virtual_ip.get_name_leafdata());
    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());
    if (vrrp_state.is_set || is_set(vrrp_state.yfilter)) leaf_name_data.push_back(vrrp_state.get_name_leafdata());
    if (virtual_mac.is_set || is_set(virtual_mac.yfilter)) leaf_name_data.push_back(virtual_mac.get_name_leafdata());
    if (master_ip.is_set || is_set(master_ip.yfilter)) leaf_name_data.push_back(master_ip.get_name_leafdata());
    if (is_owner.is_set || is_set(is_owner.yfilter)) leaf_name_data.push_back(is_owner.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (advertisement_timer.is_set || is_set(advertisement_timer.yfilter)) leaf_name_data.push_back(advertisement_timer.get_name_leafdata());
    if (master_down_timer.is_set || is_set(master_down_timer.yfilter)) leaf_name_data.push_back(master_down_timer.get_name_leafdata());
    if (skew_time.is_set || is_set(skew_time.yfilter)) leaf_name_data.push_back(skew_time.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (master_transitions.is_set || is_set(master_transitions.yfilter)) leaf_name_data.push_back(master_transitions.get_name_leafdata());
    if (new_master_reason.is_set || is_set(new_master_reason.yfilter)) leaf_name_data.push_back(new_master_reason.get_name_leafdata());
    if (last_state_change_time.is_set || is_set(last_state_change_time.yfilter)) leaf_name_data.push_back(last_state_change_time.get_name_leafdata());
    if (adv_interval_errors.is_set || is_set(adv_interval_errors.yfilter)) leaf_name_data.push_back(adv_interval_errors.get_name_leafdata());
    if (ip_ttl_errors.is_set || is_set(ip_ttl_errors.yfilter)) leaf_name_data.push_back(ip_ttl_errors.get_name_leafdata());
    if (rcvd_pri_zero_pak.is_set || is_set(rcvd_pri_zero_pak.yfilter)) leaf_name_data.push_back(rcvd_pri_zero_pak.get_name_leafdata());
    if (sent_pri_zero_pak.is_set || is_set(sent_pri_zero_pak.yfilter)) leaf_name_data.push_back(sent_pri_zero_pak.get_name_leafdata());
    if (rcvd_invalid_type_pak.is_set || is_set(rcvd_invalid_type_pak.yfilter)) leaf_name_data.push_back(rcvd_invalid_type_pak.get_name_leafdata());
    if (addr_list_errors.is_set || is_set(addr_list_errors.yfilter)) leaf_name_data.push_back(addr_list_errors.get_name_leafdata());
    if (pak_len_errors.is_set || is_set(pak_len_errors.yfilter)) leaf_name_data.push_back(pak_len_errors.get_name_leafdata());
    if (discontinuity_time.is_set || is_set(discontinuity_time.yfilter)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (advertisement_sent.is_set || is_set(advertisement_sent.yfilter)) leaf_name_data.push_back(advertisement_sent.get_name_leafdata());
    if (advertisement_rcvd.is_set || is_set(advertisement_rcvd.yfilter)) leaf_name_data.push_back(advertisement_rcvd.get_name_leafdata());
    if (omp_state.is_set || is_set(omp_state.yfilter)) leaf_name_data.push_back(omp_state.get_name_leafdata());

    auto secondary_vip_addresses_name_datas = secondary_vip_addresses.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_vip_addresses_name_datas.begin(), secondary_vip_addresses_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VrrpOperData::VrrpOperState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-list")
    {
        auto ent_ = std::make_shared<VrrpOperData::VrrpOperState::TrackList>();
        ent_->parent = this;
        track_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VrrpOperData::VrrpOperState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : track_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VrrpOperData::VrrpOperState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-number")
    {
        if_number = value;
        if_number.value_namespace = name_space;
        if_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-ip")
    {
        virtual_ip = value;
        virtual_ip.value_namespace = name_space;
        virtual_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state = value;
        vrrp_state.value_namespace = name_space;
        vrrp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac")
    {
        virtual_mac = value;
        virtual_mac.value_namespace = name_space;
        virtual_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-ip")
    {
        master_ip = value;
        master_ip.value_namespace = name_space;
        master_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-owner")
    {
        is_owner = value;
        is_owner.value_namespace = name_space;
        is_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-timer")
    {
        advertisement_timer = value;
        advertisement_timer.value_namespace = name_space;
        advertisement_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-down-timer")
    {
        master_down_timer = value;
        master_down_timer.value_namespace = name_space;
        master_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skew-time")
    {
        skew_time = value;
        skew_time.value_namespace = name_space;
        skew_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-transitions")
    {
        master_transitions = value;
        master_transitions.value_namespace = name_space;
        master_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-master-reason")
    {
        new_master_reason = value;
        new_master_reason.value_namespace = name_space;
        new_master_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time = value;
        last_state_change_time.value_namespace = name_space;
        last_state_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-interval-errors")
    {
        adv_interval_errors = value;
        adv_interval_errors.value_namespace = name_space;
        adv_interval_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-ttl-errors")
    {
        ip_ttl_errors = value;
        ip_ttl_errors.value_namespace = name_space;
        ip_ttl_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvd-pri-zero-pak")
    {
        rcvd_pri_zero_pak = value;
        rcvd_pri_zero_pak.value_namespace = name_space;
        rcvd_pri_zero_pak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-pri-zero-pak")
    {
        sent_pri_zero_pak = value;
        sent_pri_zero_pak.value_namespace = name_space;
        sent_pri_zero_pak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvd-invalid-type-pak")
    {
        rcvd_invalid_type_pak = value;
        rcvd_invalid_type_pak.value_namespace = name_space;
        rcvd_invalid_type_pak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-list-errors")
    {
        addr_list_errors = value;
        addr_list_errors.value_namespace = name_space;
        addr_list_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pak-len-errors")
    {
        pak_len_errors = value;
        pak_len_errors.value_namespace = name_space;
        pak_len_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
        discontinuity_time.value_namespace = name_space;
        discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-sent")
    {
        advertisement_sent = value;
        advertisement_sent.value_namespace = name_space;
        advertisement_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-rcvd")
    {
        advertisement_rcvd = value;
        advertisement_rcvd.value_namespace = name_space;
        advertisement_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "omp-state")
    {
        omp_state = value;
        omp_state.value_namespace = name_space;
        omp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-vip-addresses")
    {
        secondary_vip_addresses.append(value);
    }
}

void VrrpOperData::VrrpOperState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-number")
    {
        if_number.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "virtual-ip")
    {
        virtual_ip.yfilter = yfilter;
    }
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
    if(value_path == "vrrp-state")
    {
        vrrp_state.yfilter = yfilter;
    }
    if(value_path == "virtual-mac")
    {
        virtual_mac.yfilter = yfilter;
    }
    if(value_path == "master-ip")
    {
        master_ip.yfilter = yfilter;
    }
    if(value_path == "is-owner")
    {
        is_owner.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "advertisement-timer")
    {
        advertisement_timer.yfilter = yfilter;
    }
    if(value_path == "master-down-timer")
    {
        master_down_timer.yfilter = yfilter;
    }
    if(value_path == "skew-time")
    {
        skew_time.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "master-transitions")
    {
        master_transitions.yfilter = yfilter;
    }
    if(value_path == "new-master-reason")
    {
        new_master_reason.yfilter = yfilter;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time.yfilter = yfilter;
    }
    if(value_path == "adv-interval-errors")
    {
        adv_interval_errors.yfilter = yfilter;
    }
    if(value_path == "ip-ttl-errors")
    {
        ip_ttl_errors.yfilter = yfilter;
    }
    if(value_path == "rcvd-pri-zero-pak")
    {
        rcvd_pri_zero_pak.yfilter = yfilter;
    }
    if(value_path == "sent-pri-zero-pak")
    {
        sent_pri_zero_pak.yfilter = yfilter;
    }
    if(value_path == "rcvd-invalid-type-pak")
    {
        rcvd_invalid_type_pak.yfilter = yfilter;
    }
    if(value_path == "addr-list-errors")
    {
        addr_list_errors.yfilter = yfilter;
    }
    if(value_path == "pak-len-errors")
    {
        pak_len_errors.yfilter = yfilter;
    }
    if(value_path == "discontinuity-time")
    {
        discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "advertisement-sent")
    {
        advertisement_sent.yfilter = yfilter;
    }
    if(value_path == "advertisement-rcvd")
    {
        advertisement_rcvd.yfilter = yfilter;
    }
    if(value_path == "omp-state")
    {
        omp_state.yfilter = yfilter;
    }
    if(value_path == "secondary-vip-addresses")
    {
        secondary_vip_addresses.yfilter = yfilter;
    }
}

bool VrrpOperData::VrrpOperState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-list" || name == "if-number" || name == "group-id" || name == "addr-type" || name == "version" || name == "virtual-ip" || name == "if-name" || name == "vrrp-state" || name == "virtual-mac" || name == "master-ip" || name == "is-owner" || name == "priority" || name == "advertisement-timer" || name == "master-down-timer" || name == "skew-time" || name == "preempt" || name == "master-transitions" || name == "new-master-reason" || name == "last-state-change-time" || name == "adv-interval-errors" || name == "ip-ttl-errors" || name == "rcvd-pri-zero-pak" || name == "sent-pri-zero-pak" || name == "rcvd-invalid-type-pak" || name == "addr-list-errors" || name == "pak-len-errors" || name == "discontinuity-time" || name == "advertisement-sent" || name == "advertisement-rcvd" || name == "omp-state" || name == "secondary-vip-addresses")
        return true;
    return false;
}

VrrpOperData::VrrpOperState::TrackList::TrackList()
    :
    track_name{YType::str, "track-name"},
    track_obj_state{YType::enumeration, "track-obj-state"}
{

    yang_name = "track-list"; yang_parent_name = "vrrp-oper-state"; is_top_level_class = false; has_list_ancestor = true; 
}

VrrpOperData::VrrpOperState::TrackList::~TrackList()
{
}

bool VrrpOperData::VrrpOperState::TrackList::has_data() const
{
    if (is_presence_container) return true;
    return track_name.is_set
	|| track_obj_state.is_set;
}

bool VrrpOperData::VrrpOperState::TrackList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(track_obj_state.yfilter);
}

std::string VrrpOperData::VrrpOperState::TrackList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrrpOperData::VrrpOperState::TrackList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (track_obj_state.is_set || is_set(track_obj_state.yfilter)) leaf_name_data.push_back(track_obj_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VrrpOperData::VrrpOperState::TrackList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VrrpOperData::VrrpOperState::TrackList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VrrpOperData::VrrpOperState::TrackList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-obj-state")
    {
        track_obj_state = value;
        track_obj_state.value_namespace = name_space;
        track_obj_state.value_namespace_prefix = name_space_prefix;
    }
}

void VrrpOperData::VrrpOperState::TrackList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
    if(value_path == "track-obj-state")
    {
        track_obj_state.yfilter = yfilter;
    }
}

bool VrrpOperData::VrrpOperState::TrackList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-name" || name == "track-obj-state")
        return true;
    return false;
}

const Enum::YLeaf MasterReason::reason_not_master {0, "reason-not-master"};
const Enum::YLeaf MasterReason::reason_priority {1, "reason-priority"};
const Enum::YLeaf MasterReason::reason_preempt {2, "reason-preempt"};
const Enum::YLeaf MasterReason::reason_master_no_response {3, "reason-master-no-response"};

const Enum::YLeaf VrrpProtoState::proto_state_init {1, "proto-state-init"};
const Enum::YLeaf VrrpProtoState::proto_state_backup {2, "proto-state-backup"};
const Enum::YLeaf VrrpProtoState::proto_state_master {3, "proto-state-master"};
const Enum::YLeaf VrrpProtoState::proto_state_recover {4, "proto-state-recover"};

const Enum::YLeaf ProtoVersion::vrrp_v3 {1, "vrrp-v3"};

const Enum::YLeaf TrackState::vrrp_track_state_resolved {0, "vrrp-track-state-resolved"};
const Enum::YLeaf TrackState::vrrp_track_state_unresolved {1, "vrrp-track-state-unresolved"};

const Enum::YLeaf OmpStateUpdown::omp_up {0, "omp-up"};
const Enum::YLeaf OmpStateUpdown::omp_down {1, "omp-down"};


}
}

