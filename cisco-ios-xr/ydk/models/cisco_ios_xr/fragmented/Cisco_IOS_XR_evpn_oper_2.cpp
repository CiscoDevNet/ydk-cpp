
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_evpn_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {

Evpn::Standby::Teps::Tep::LocalInfo::LocalInfo()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation{YType::uint8, "encapsulation"},
    ip{YType::str, "ip"}
{

    yang_name = "local-info"; yang_parent_name = "tep"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Standby::Teps::Tep::LocalInfo::~LocalInfo()
{
}

bool Evpn::Standby::Teps::Tep::LocalInfo::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation.is_set
	|| ip.is_set;
}

bool Evpn::Standby::Teps::Tep::LocalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Evpn::Standby::Teps::Tep::LocalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Teps::Tep::LocalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Teps::Tep::LocalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Teps::Tep::LocalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Teps::Tep::LocalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Teps::Tep::LocalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Evpn::Standby::Teps::Tep::LocalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation" || name == "ip")
        return true;
    return false;
}

Evpn::Standby::Teps::Tep::RemoteInfo::RemoteInfo()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation{YType::uint8, "encapsulation"},
    ip{YType::str, "ip"}
{

    yang_name = "remote-info"; yang_parent_name = "tep"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Standby::Teps::Tep::RemoteInfo::~RemoteInfo()
{
}

bool Evpn::Standby::Teps::Tep::RemoteInfo::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation.is_set
	|| ip.is_set;
}

bool Evpn::Standby::Teps::Tep::RemoteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Evpn::Standby::Teps::Tep::RemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Teps::Tep::RemoteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Teps::Tep::RemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Teps::Tep::RemoteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Teps::Tep::RemoteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Teps::Tep::RemoteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Evpn::Standby::Teps::Tep::RemoteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation" || name == "ip")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabels()
    :
    internal_label(this, {})
{

    yang_name = "internal-labels"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::~InternalLabels()
{
}

bool Evpn::Standby::InternalLabels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internal_label.len(); index++)
    {
        if(internal_label[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::InternalLabels::has_operation() const
{
    for (std::size_t index=0; index<internal_label.len(); index++)
    {
        if(internal_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::InternalLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-label")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel>();
        ent_->parent = this;
        internal_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : internal_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::InternalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::InternalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::InternalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-label")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::InternalLabel()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    esi{YType::str, "esi"},
    tag{YType::uint32, "tag"},
    internal_label{YType::uint32, "internal-label"},
    mac_num_paths{YType::uint32, "mac-num-paths"},
    ead_num_paths{YType::uint32, "ead-num-paths"},
    evi_num_paths{YType::uint32, "evi-num-paths"},
    sum_num_paths{YType::uint32, "sum-num-paths"},
    sum_num_active_paths{YType::uint32, "sum-num-active-paths"},
    resolved{YType::boolean, "resolved"},
    ecmp_disable{YType::boolean, "ecmp-disable"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"},
    redundancy_single_flow_active{YType::boolean, "redundancy-single-flow-active"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance>())
    , mac_path_buffer(this, {})
    , ead_path_buffer(this, {})
    , evi_path_buffer(this, {})
    , summary_path_buffer(this, {})
{
    evpn_instance->parent = this;

    yang_name = "internal-label"; yang_parent_name = "internal-labels"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::~InternalLabel()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_path_buffer.len(); index++)
    {
        if(mac_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.len(); index++)
    {
        if(ead_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.len(); index++)
    {
        if(evi_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.len(); index++)
    {
        if(summary_path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| encapsulation.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| esi.is_set
	|| tag.is_set
	|| internal_label.is_set
	|| mac_num_paths.is_set
	|| ead_num_paths.is_set
	|| evi_num_paths.is_set
	|| sum_num_paths.is_set
	|| sum_num_active_paths.is_set
	|| resolved.is_set
	|| ecmp_disable.is_set
	|| redundancy_single_active.is_set
	|| redundancy_single_flow_active.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_operation() const
{
    for (std::size_t index=0; index<mac_path_buffer.len(); index++)
    {
        if(mac_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.len(); index++)
    {
        if(ead_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.len(); index++)
    {
        if(evi_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.len(); index++)
    {
        if(summary_path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(esi.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(mac_num_paths.yfilter)
	|| ydk::is_set(ead_num_paths.yfilter)
	|| ydk::is_set(evi_num_paths.yfilter)
	|| ydk::is_set(sum_num_paths.yfilter)
	|| ydk::is_set(sum_num_active_paths.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(ecmp_disable.yfilter)
	|| ydk::is_set(redundancy_single_active.yfilter)
	|| ydk::is_set(redundancy_single_flow_active.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::InternalLabels::InternalLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (esi.is_set || is_set(esi.yfilter)) leaf_name_data.push_back(esi.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (mac_num_paths.is_set || is_set(mac_num_paths.yfilter)) leaf_name_data.push_back(mac_num_paths.get_name_leafdata());
    if (ead_num_paths.is_set || is_set(ead_num_paths.yfilter)) leaf_name_data.push_back(ead_num_paths.get_name_leafdata());
    if (evi_num_paths.is_set || is_set(evi_num_paths.yfilter)) leaf_name_data.push_back(evi_num_paths.get_name_leafdata());
    if (sum_num_paths.is_set || is_set(sum_num_paths.yfilter)) leaf_name_data.push_back(sum_num_paths.get_name_leafdata());
    if (sum_num_active_paths.is_set || is_set(sum_num_active_paths.yfilter)) leaf_name_data.push_back(sum_num_active_paths.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (ecmp_disable.is_set || is_set(ecmp_disable.yfilter)) leaf_name_data.push_back(ecmp_disable.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.yfilter)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());
    if (redundancy_single_flow_active.is_set || is_set(redundancy_single_flow_active.yfilter)) leaf_name_data.push_back(redundancy_single_flow_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "mac-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer>();
        ent_->parent = this;
        mac_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ead-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer>();
        ent_->parent = this;
        ead_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "evi-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer>();
        ent_->parent = this;
        evi_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "summary-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer>();
        ent_->parent = this;
        summary_path_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : mac_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ead_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : evi_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : summary_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi")
    {
        esi = value;
        esi.value_namespace = name_space;
        esi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths = value;
        mac_num_paths.value_namespace = name_space;
        mac_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths = value;
        ead_num_paths.value_namespace = name_space;
        ead_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths = value;
        evi_num_paths.value_namespace = name_space;
        evi_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths = value;
        sum_num_paths.value_namespace = name_space;
        sum_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths = value;
        sum_num_active_paths.value_namespace = name_space;
        sum_num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable = value;
        ecmp_disable.value_namespace = name_space;
        ecmp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
        redundancy_single_active.value_namespace = name_space;
        redundancy_single_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active = value;
        redundancy_single_flow_active.value_namespace = name_space;
        redundancy_single_flow_active.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "esi")
    {
        esi.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths.yfilter = yfilter;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths.yfilter = yfilter;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "mac-path-buffer" || name == "ead-path-buffer" || name == "evi-path-buffer" || name == "summary-path-buffer" || name == "evi" || name == "encapsulation" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "esi" || name == "tag" || name == "internal-label" || name == "mac-num-paths" || name == "ead-num-paths" || name == "evi-num-paths" || name == "sum-num-paths" || name == "sum-num-active-paths" || name == "resolved" || name == "ecmp-disable" || name == "redundancy-single-active" || name == "redundancy-single-flow-active")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::MacPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "mac-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::~MacPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::EadPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "ead-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::~EadPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ead-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::EviPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "evi-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::~EviPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::SummaryPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "summary-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::~SummaryPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-path-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegments()
    :
    ethernet_segment(this, {})
{

    yang_name = "ethernet-segments"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::~EthernetSegments()
{
}

bool Evpn::Standby::EthernetSegments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EthernetSegments::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EthernetSegments::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment>();
        ent_->parent = this;
        ethernet_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EthernetSegments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EthernetSegments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EthernetSegments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegment()
    :
    interface_name{YType::str, "interface-name"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    esi_type{YType::enumeration, "esi-type"},
    esi_system_identifier{YType::str, "esi-system-identifier"},
    esi_port_key{YType::uint32, "esi-port-key"},
    esi_system_priority{YType::uint32, "esi-system-priority"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    ethernet_segment_state{YType::uint32, "ethernet-segment-state"},
    if_handle{YType::str, "if-handle"},
    main_port_role{YType::enumeration, "main-port-role"},
    main_port_mac{YType::str, "main-port-mac"},
    num_up_p_ws{YType::uint32, "num-up-p-ws"},
    route_target{YType::str, "route-target"},
    rt_origin{YType::enumeration, "rt-origin"},
    es_bgp_gates{YType::str, "es-bgp-gates"},
    es_l2fib_gates{YType::str, "es-l2fib-gates"},
    mac_flushing_mode_config{YType::enumeration, "mac-flushing-mode-config"},
    load_balance_mode_config{YType::enumeration, "load-balance-mode-config"},
    load_balance_mode_is_default{YType::boolean, "load-balance-mode-is-default"},
    load_balance_mode_oper{YType::enumeration, "load-balance-mode-oper"},
    force_single_home{YType::boolean, "force-single-home"},
    source_mac_oper{YType::str, "source-mac-oper"},
    source_mac_origin{YType::enumeration, "source-mac-origin"},
    peering_timer{YType::uint32, "peering-timer"},
    peering_timer_left{YType::uint32, "peering-timer-left"},
    recovery_timer{YType::uint32, "recovery-timer"},
    recovery_timer_left{YType::uint32, "recovery-timer-left"},
    carving_timer{YType::uint32, "carving-timer"},
    carving_timer_left{YType::uint32, "carving-timer-left"},
    service_carving_mode{YType::enumeration, "service-carving-mode"},
    primary_services_input{YType::str, "primary-services-input"},
    secondary_services_input{YType::str, "secondary-services-input"},
    forwarder_ports{YType::uint32, "forwarder-ports"},
    permanent_forwarder_ports{YType::uint32, "permanent-forwarder-ports"},
    elected_forwarder_ports{YType::uint32, "elected-forwarder-ports"},
    not_elected_forwarder_ports{YType::uint32, "not-elected-forwarder-ports"},
    not_config_forwarder_ports{YType::uint32, "not-config-forwarder-ports"},
    mp_protected{YType::boolean, "mp-protected"},
    nve_anycast_vtep{YType::boolean, "nve-anycast-vtep"},
    nve_ingress_replication{YType::boolean, "nve-ingress-replication"},
    local_split_horizon_group_label_valid{YType::boolean, "local-split-horizon-group-label-valid"},
    local_split_horizon_group_label{YType::uint32, "local-split-horizon-group-label"}
        ,
    ethernet_segment_identifier(this, {})
    , primary_service(this, {})
    , secondary_service(this, {})
    , service_carving_i_sidelected_result(this, {})
    , service_carving_isid_not_elected_result(this, {})
    , service_carving_evi_elected_result(this, {})
    , service_carving_evi_not_elected_result(this, {})
    , service_carving_vni_elected_result(this, {})
    , service_carving_vni_not_elected_result(this, {})
    , next_hop(this, {})
    , service_carving_vpws_permanent_result(this, {})
    , remote_split_horizon_group_label(this, {})
{

    yang_name = "ethernet-segment"; yang_parent_name = "ethernet-segments"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<primary_service.len(); index++)
    {
        if(primary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.len(); index++)
    {
        if(secondary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.len(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.len(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.len(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.len(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_elected_result.len(); index++)
    {
        if(service_carving_vni_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_not_elected_result.len(); index++)
    {
        if(service_carving_vni_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.len(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| esi_type.is_set
	|| esi_system_identifier.is_set
	|| esi_port_key.is_set
	|| esi_system_priority.is_set
	|| ethernet_segment_name.is_set
	|| ethernet_segment_state.is_set
	|| if_handle.is_set
	|| main_port_role.is_set
	|| main_port_mac.is_set
	|| num_up_p_ws.is_set
	|| route_target.is_set
	|| rt_origin.is_set
	|| es_bgp_gates.is_set
	|| es_l2fib_gates.is_set
	|| mac_flushing_mode_config.is_set
	|| load_balance_mode_config.is_set
	|| load_balance_mode_is_default.is_set
	|| load_balance_mode_oper.is_set
	|| force_single_home.is_set
	|| source_mac_oper.is_set
	|| source_mac_origin.is_set
	|| peering_timer.is_set
	|| peering_timer_left.is_set
	|| recovery_timer.is_set
	|| recovery_timer_left.is_set
	|| carving_timer.is_set
	|| carving_timer_left.is_set
	|| service_carving_mode.is_set
	|| primary_services_input.is_set
	|| secondary_services_input.is_set
	|| forwarder_ports.is_set
	|| permanent_forwarder_ports.is_set
	|| elected_forwarder_ports.is_set
	|| not_elected_forwarder_ports.is_set
	|| not_config_forwarder_ports.is_set
	|| mp_protected.is_set
	|| nve_anycast_vtep.is_set
	|| nve_ingress_replication.is_set
	|| local_split_horizon_group_label_valid.is_set
	|| local_split_horizon_group_label.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<primary_service.len(); index++)
    {
        if(primary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.len(); index++)
    {
        if(secondary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.len(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.len(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.len(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.len(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_elected_result.len(); index++)
    {
        if(service_carving_vni_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_not_elected_result.len(); index++)
    {
        if(service_carving_vni_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.len(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(esi_type.yfilter)
	|| ydk::is_set(esi_system_identifier.yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(esi_system_priority.yfilter)
	|| ydk::is_set(ethernet_segment_name.yfilter)
	|| ydk::is_set(ethernet_segment_state.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(main_port_role.yfilter)
	|| ydk::is_set(main_port_mac.yfilter)
	|| ydk::is_set(num_up_p_ws.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(rt_origin.yfilter)
	|| ydk::is_set(es_bgp_gates.yfilter)
	|| ydk::is_set(es_l2fib_gates.yfilter)
	|| ydk::is_set(mac_flushing_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_is_default.yfilter)
	|| ydk::is_set(load_balance_mode_oper.yfilter)
	|| ydk::is_set(force_single_home.yfilter)
	|| ydk::is_set(source_mac_oper.yfilter)
	|| ydk::is_set(source_mac_origin.yfilter)
	|| ydk::is_set(peering_timer.yfilter)
	|| ydk::is_set(peering_timer_left.yfilter)
	|| ydk::is_set(recovery_timer.yfilter)
	|| ydk::is_set(recovery_timer_left.yfilter)
	|| ydk::is_set(carving_timer.yfilter)
	|| ydk::is_set(carving_timer_left.yfilter)
	|| ydk::is_set(service_carving_mode.yfilter)
	|| ydk::is_set(primary_services_input.yfilter)
	|| ydk::is_set(secondary_services_input.yfilter)
	|| ydk::is_set(forwarder_ports.yfilter)
	|| ydk::is_set(permanent_forwarder_ports.yfilter)
	|| ydk::is_set(elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_config_forwarder_ports.yfilter)
	|| ydk::is_set(mp_protected.yfilter)
	|| ydk::is_set(nve_anycast_vtep.yfilter)
	|| ydk::is_set(nve_ingress_replication.yfilter)
	|| ydk::is_set(local_split_horizon_group_label_valid.yfilter)
	|| ydk::is_set(local_split_horizon_group_label.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (esi_type.is_set || is_set(esi_type.yfilter)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (esi_system_identifier.is_set || is_set(esi_system_identifier.yfilter)) leaf_name_data.push_back(esi_system_identifier.get_name_leafdata());
    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (esi_system_priority.is_set || is_set(esi_system_priority.yfilter)) leaf_name_data.push_back(esi_system_priority.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.yfilter)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (ethernet_segment_state.is_set || is_set(ethernet_segment_state.yfilter)) leaf_name_data.push_back(ethernet_segment_state.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (main_port_role.is_set || is_set(main_port_role.yfilter)) leaf_name_data.push_back(main_port_role.get_name_leafdata());
    if (main_port_mac.is_set || is_set(main_port_mac.yfilter)) leaf_name_data.push_back(main_port_mac.get_name_leafdata());
    if (num_up_p_ws.is_set || is_set(num_up_p_ws.yfilter)) leaf_name_data.push_back(num_up_p_ws.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (rt_origin.is_set || is_set(rt_origin.yfilter)) leaf_name_data.push_back(rt_origin.get_name_leafdata());
    if (es_bgp_gates.is_set || is_set(es_bgp_gates.yfilter)) leaf_name_data.push_back(es_bgp_gates.get_name_leafdata());
    if (es_l2fib_gates.is_set || is_set(es_l2fib_gates.yfilter)) leaf_name_data.push_back(es_l2fib_gates.get_name_leafdata());
    if (mac_flushing_mode_config.is_set || is_set(mac_flushing_mode_config.yfilter)) leaf_name_data.push_back(mac_flushing_mode_config.get_name_leafdata());
    if (load_balance_mode_config.is_set || is_set(load_balance_mode_config.yfilter)) leaf_name_data.push_back(load_balance_mode_config.get_name_leafdata());
    if (load_balance_mode_is_default.is_set || is_set(load_balance_mode_is_default.yfilter)) leaf_name_data.push_back(load_balance_mode_is_default.get_name_leafdata());
    if (load_balance_mode_oper.is_set || is_set(load_balance_mode_oper.yfilter)) leaf_name_data.push_back(load_balance_mode_oper.get_name_leafdata());
    if (force_single_home.is_set || is_set(force_single_home.yfilter)) leaf_name_data.push_back(force_single_home.get_name_leafdata());
    if (source_mac_oper.is_set || is_set(source_mac_oper.yfilter)) leaf_name_data.push_back(source_mac_oper.get_name_leafdata());
    if (source_mac_origin.is_set || is_set(source_mac_origin.yfilter)) leaf_name_data.push_back(source_mac_origin.get_name_leafdata());
    if (peering_timer.is_set || is_set(peering_timer.yfilter)) leaf_name_data.push_back(peering_timer.get_name_leafdata());
    if (peering_timer_left.is_set || is_set(peering_timer_left.yfilter)) leaf_name_data.push_back(peering_timer_left.get_name_leafdata());
    if (recovery_timer.is_set || is_set(recovery_timer.yfilter)) leaf_name_data.push_back(recovery_timer.get_name_leafdata());
    if (recovery_timer_left.is_set || is_set(recovery_timer_left.yfilter)) leaf_name_data.push_back(recovery_timer_left.get_name_leafdata());
    if (carving_timer.is_set || is_set(carving_timer.yfilter)) leaf_name_data.push_back(carving_timer.get_name_leafdata());
    if (carving_timer_left.is_set || is_set(carving_timer_left.yfilter)) leaf_name_data.push_back(carving_timer_left.get_name_leafdata());
    if (service_carving_mode.is_set || is_set(service_carving_mode.yfilter)) leaf_name_data.push_back(service_carving_mode.get_name_leafdata());
    if (primary_services_input.is_set || is_set(primary_services_input.yfilter)) leaf_name_data.push_back(primary_services_input.get_name_leafdata());
    if (secondary_services_input.is_set || is_set(secondary_services_input.yfilter)) leaf_name_data.push_back(secondary_services_input.get_name_leafdata());
    if (forwarder_ports.is_set || is_set(forwarder_ports.yfilter)) leaf_name_data.push_back(forwarder_ports.get_name_leafdata());
    if (permanent_forwarder_ports.is_set || is_set(permanent_forwarder_ports.yfilter)) leaf_name_data.push_back(permanent_forwarder_ports.get_name_leafdata());
    if (elected_forwarder_ports.is_set || is_set(elected_forwarder_ports.yfilter)) leaf_name_data.push_back(elected_forwarder_ports.get_name_leafdata());
    if (not_elected_forwarder_ports.is_set || is_set(not_elected_forwarder_ports.yfilter)) leaf_name_data.push_back(not_elected_forwarder_ports.get_name_leafdata());
    if (not_config_forwarder_ports.is_set || is_set(not_config_forwarder_ports.yfilter)) leaf_name_data.push_back(not_config_forwarder_ports.get_name_leafdata());
    if (mp_protected.is_set || is_set(mp_protected.yfilter)) leaf_name_data.push_back(mp_protected.get_name_leafdata());
    if (nve_anycast_vtep.is_set || is_set(nve_anycast_vtep.yfilter)) leaf_name_data.push_back(nve_anycast_vtep.get_name_leafdata());
    if (nve_ingress_replication.is_set || is_set(nve_ingress_replication.yfilter)) leaf_name_data.push_back(nve_ingress_replication.get_name_leafdata());
    if (local_split_horizon_group_label_valid.is_set || is_set(local_split_horizon_group_label_valid.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label_valid.get_name_leafdata());
    if (local_split_horizon_group_label.is_set || is_set(local_split_horizon_group_label.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier>();
        ent_->parent = this;
        ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary-service")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService>();
        ent_->parent = this;
        primary_service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "secondary-service")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService>();
        ent_->parent = this;
        secondary_service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-i-sidelected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult>();
        ent_->parent = this;
        service_carving_i_sidelected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-isid-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult>();
        ent_->parent = this;
        service_carving_isid_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-evi-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult>();
        ent_->parent = this;
        service_carving_evi_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-evi-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult>();
        ent_->parent = this;
        service_carving_evi_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vni-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult>();
        ent_->parent = this;
        service_carving_vni_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vni-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult>();
        ent_->parent = this;
        service_carving_vni_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vpws-permanent-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult>();
        ent_->parent = this;
        service_carving_vpws_permanent_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel>();
        ent_->parent = this;
        remote_split_horizon_group_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : primary_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : secondary_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_i_sidelected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_isid_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_evi_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_evi_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vni_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vni_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vpws_permanent_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_split_horizon_group_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-type")
    {
        esi_type = value;
        esi_type.value_namespace = name_space;
        esi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier = value;
        esi_system_identifier.value_namespace = name_space;
        esi_system_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority = value;
        esi_system_priority.value_namespace = name_space;
        esi_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
        ethernet_segment_name.value_namespace = name_space;
        ethernet_segment_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state = value;
        ethernet_segment_state.value_namespace = name_space;
        ethernet_segment_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-role")
    {
        main_port_role = value;
        main_port_role.value_namespace = name_space;
        main_port_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac = value;
        main_port_mac.value_namespace = name_space;
        main_port_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws = value;
        num_up_p_ws.value_namespace = name_space;
        num_up_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-origin")
    {
        rt_origin = value;
        rt_origin.value_namespace = name_space;
        rt_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates = value;
        es_bgp_gates.value_namespace = name_space;
        es_bgp_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates = value;
        es_l2fib_gates.value_namespace = name_space;
        es_l2fib_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config = value;
        mac_flushing_mode_config.value_namespace = name_space;
        mac_flushing_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config = value;
        load_balance_mode_config.value_namespace = name_space;
        load_balance_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default = value;
        load_balance_mode_is_default.value_namespace = name_space;
        load_balance_mode_is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper = value;
        load_balance_mode_oper.value_namespace = name_space;
        load_balance_mode_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-single-home")
    {
        force_single_home = value;
        force_single_home.value_namespace = name_space;
        force_single_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper = value;
        source_mac_oper.value_namespace = name_space;
        source_mac_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin = value;
        source_mac_origin.value_namespace = name_space;
        source_mac_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer")
    {
        peering_timer = value;
        peering_timer.value_namespace = name_space;
        peering_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left = value;
        peering_timer_left.value_namespace = name_space;
        peering_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer = value;
        recovery_timer.value_namespace = name_space;
        recovery_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left = value;
        recovery_timer_left.value_namespace = name_space;
        recovery_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer")
    {
        carving_timer = value;
        carving_timer.value_namespace = name_space;
        carving_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left = value;
        carving_timer_left.value_namespace = name_space;
        carving_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode = value;
        service_carving_mode.value_namespace = name_space;
        service_carving_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input = value;
        primary_services_input.value_namespace = name_space;
        primary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input = value;
        secondary_services_input.value_namespace = name_space;
        secondary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports = value;
        forwarder_ports.value_namespace = name_space;
        forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports = value;
        permanent_forwarder_ports.value_namespace = name_space;
        permanent_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports = value;
        elected_forwarder_ports.value_namespace = name_space;
        elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports = value;
        not_elected_forwarder_ports.value_namespace = name_space;
        not_elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports = value;
        not_config_forwarder_ports.value_namespace = name_space;
        not_config_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp-protected")
    {
        mp_protected = value;
        mp_protected.value_namespace = name_space;
        mp_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep = value;
        nve_anycast_vtep.value_namespace = name_space;
        nve_anycast_vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication = value;
        nve_ingress_replication.value_namespace = name_space;
        nve_ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid = value;
        local_split_horizon_group_label_valid.value_namespace = name_space;
        local_split_horizon_group_label_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label = value;
        local_split_horizon_group_label.value_namespace = name_space;
        local_split_horizon_group_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "esi-type")
    {
        esi_type.yfilter = yfilter;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier.yfilter = yfilter;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "main-port-role")
    {
        main_port_role.yfilter = yfilter;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac.yfilter = yfilter;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "rt-origin")
    {
        rt_origin.yfilter = yfilter;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates.yfilter = yfilter;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates.yfilter = yfilter;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper.yfilter = yfilter;
    }
    if(value_path == "force-single-home")
    {
        force_single_home.yfilter = yfilter;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper.yfilter = yfilter;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin.yfilter = yfilter;
    }
    if(value_path == "peering-timer")
    {
        peering_timer.yfilter = yfilter;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left.yfilter = yfilter;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer.yfilter = yfilter;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left.yfilter = yfilter;
    }
    if(value_path == "carving-timer")
    {
        carving_timer.yfilter = yfilter;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left.yfilter = yfilter;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode.yfilter = yfilter;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input.yfilter = yfilter;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input.yfilter = yfilter;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "mp-protected")
    {
        mp_protected.yfilter = yfilter;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep.yfilter = yfilter;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-identifier" || name == "primary-service" || name == "secondary-service" || name == "service-carving-i-sidelected-result" || name == "service-carving-isid-not-elected-result" || name == "service-carving-evi-elected-result" || name == "service-carving-evi-not-elected-result" || name == "service-carving-vni-elected-result" || name == "service-carving-vni-not-elected-result" || name == "next-hop" || name == "service-carving-vpws-permanent-result" || name == "remote-split-horizon-group-label" || name == "interface-name" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "esi-type" || name == "esi-system-identifier" || name == "esi-port-key" || name == "esi-system-priority" || name == "ethernet-segment-name" || name == "ethernet-segment-state" || name == "if-handle" || name == "main-port-role" || name == "main-port-mac" || name == "num-up-p-ws" || name == "route-target" || name == "rt-origin" || name == "es-bgp-gates" || name == "es-l2fib-gates" || name == "mac-flushing-mode-config" || name == "load-balance-mode-config" || name == "load-balance-mode-is-default" || name == "load-balance-mode-oper" || name == "force-single-home" || name == "source-mac-oper" || name == "source-mac-origin" || name == "peering-timer" || name == "peering-timer-left" || name == "recovery-timer" || name == "recovery-timer-left" || name == "carving-timer" || name == "carving-timer-left" || name == "service-carving-mode" || name == "primary-services-input" || name == "secondary-services-input" || name == "forwarder-ports" || name == "permanent-forwarder-ports" || name == "elected-forwarder-ports" || name == "not-elected-forwarder-ports" || name == "not-config-forwarder-ports" || name == "mp-protected" || name == "nve-anycast-vtep" || name == "nve-ingress-replication" || name == "local-split-horizon-group-label-valid" || name == "local-split-horizon-group-label")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::PrimaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "primary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::~PrimaryService()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::SecondaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "secondary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::~SecondaryService()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::ServiceCarvingISidelectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-i-sidelected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::~ServiceCarvingISidelectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-i-sidelected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::ServiceCarvingIsidNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-isid-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::~ServiceCarvingIsidNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-isid-not-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::ServiceCarvingEviElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::~ServiceCarvingEviElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::ServiceCarvingEviNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::~ServiceCarvingEviNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-not-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::ServiceCarvingVniElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-vni-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::~ServiceCarvingVniElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vni-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::ServiceCarvingVniNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-vni-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::~ServiceCarvingVniNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vni-not-elected-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::NextHop()
    :
    next_hop{YType::str, "next-hop"},
    df_dont_prempt{YType::boolean, "df-dont-prempt"},
    df_type{YType::uint8, "df-type"},
    df_pref{YType::uint16, "df-pref"}
{

    yang_name = "next-hop"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::~NextHop()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| df_dont_prempt.is_set
	|| df_type.is_set
	|| df_pref.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(df_dont_prempt.yfilter)
	|| ydk::is_set(df_type.yfilter)
	|| ydk::is_set(df_pref.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (df_dont_prempt.is_set || is_set(df_dont_prempt.yfilter)) leaf_name_data.push_back(df_dont_prempt.get_name_leafdata());
    if (df_type.is_set || is_set(df_type.yfilter)) leaf_name_data.push_back(df_type.get_name_leafdata());
    if (df_pref.is_set || is_set(df_pref.yfilter)) leaf_name_data.push_back(df_pref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-dont-prempt")
    {
        df_dont_prempt = value;
        df_dont_prempt.value_namespace = name_space;
        df_dont_prempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-type")
    {
        df_type = value;
        df_type.value_namespace = name_space;
        df_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-pref")
    {
        df_pref = value;
        df_pref.value_namespace = name_space;
        df_pref.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "df-dont-prempt")
    {
        df_dont_prempt.yfilter = yfilter;
    }
    if(value_path == "df-type")
    {
        df_type.yfilter = yfilter;
    }
    if(value_path == "df-pref")
    {
        df_pref.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "df-dont-prempt" || name == "df-type" || name == "df-pref")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::ServiceCarvingVpwsPermanentResult()
    :
    vpn_id{YType::uint32, "vpn-id"},
    type{YType::enumeration, "type"},
    ethernet_tag{YType::uint32, "ethernet-tag"}
{

    yang_name = "service-carving-vpws-permanent-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::~ServiceCarvingVpwsPermanentResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id.is_set
	|| type.is_set
	|| ethernet_tag.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vpws-permanent-result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id" || name == "type" || name == "ethernet-tag")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    next_hop{YType::str, "next-hop"},
    label{YType::uint32, "label"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| label.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "label")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcIds()
    :
    ac_id(this, {})
{

    yang_name = "ac-ids"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::AcIds::~AcIds()
{
}

bool Evpn::Standby::AcIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ac_id.len(); index++)
    {
        if(ac_id[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::AcIds::has_operation() const
{
    for (std::size_t index=0; index<ac_id.len(); index++)
    {
        if(ac_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::AcIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::AcIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac-id")
    {
        auto ent_ = std::make_shared<Evpn::Standby::AcIds::AcId>();
        ent_->parent = this;
        ac_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::AcIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ac_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::AcIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::AcIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::AcIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-id")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcId::AcId()
    :
    evi{YType::uint32, "evi"},
    ac_id{YType::uint32, "ac-id"},
    neighbor{YType::str, "neighbor"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::AcIds::AcId::EvpnInstance>())
{
    evpn_instance->parent = this;

    yang_name = "ac-id"; yang_parent_name = "ac-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::AcIds::AcId::~AcId()
{
}

bool Evpn::Standby::AcIds::AcId::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| ac_id.is_set
	|| neighbor.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::AcIds::AcId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::AcIds::AcId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ac-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::AcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::AcId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::AcIds::AcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::AcIds::AcId::EvpnInstance>();
        }
        return evpn_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::AcIds::AcId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    return _children;
}

void Evpn::Standby::AcIds::AcId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::AcIds::AcId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Evpn::Standby::AcIds::AcId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "evi" || name == "ac-id" || name == "neighbor")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcId::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "ac-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::AcIds::AcId::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::AcIds::AcId::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::AcIds::AcId::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::AcIds::AcId::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ac-ids/ac-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::AcId::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::AcId::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::AcIds::AcId::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::AcIds::AcId::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::AcIds::AcId::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::AcIds::AcId::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::AcIds::AcId::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}


}
}

